#include <iostream>
#include <cstring>
using namespace std;

class node
{
public:
    int prn;
    char name[30];
    node *next;

    node(int d, char s[])
    {
        prn = d;
        strcpy(name, s);
        next = NULL;
    }
};

class list
{
    node *start;

public:
    list()
    {
        start = NULL;
    }

    void display();
    void insertpresident();
    void insertmember();
    void insertsecretary();
    void deletepresident();
    void deletesecretary();
    void deletemember();
    void insertatposition(int position, int prn, char name[]);
    void count();
};

void list::display()
{
    if (start == NULL)
    {
        cout << "\nList is empty.\n";
        return;
    }

    node *ptr = start;

    cout << "\nPRN\tName\n";
    while (ptr != NULL)
    {
        cout << ptr->prn << "\t" << ptr->name << endl;
        ptr = ptr->next;
    }
}

void list::insertpresident()
{
    int prn;
    char name[30];

    cout << "Enter PRN : ";
    cin >> prn;

    cout << "Enter Name : ";
    cin >> name;

    node *temp = new node(prn, name);

    temp->next = start;
    start = temp;

    cout << "President inserted.\n";
}

void list::insertmember()
{
    int prn;
    char name[30];

    cout << "Enter PRN : ";
    cin >> prn;

    cout << "Enter Name : ";
    cin >> name;

    node *temp = new node(prn, name);

    if (start == NULL)
    {
        start = temp;
        return;
    }

    node *ptr = start;

    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = temp;

    cout << "Member inserted.\n";
}

void list::insertsecretary()
{
    insertmember();
}

void list::deletepresident()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    node *ptr = start;
    start = start->next;

    delete ptr;

    cout << "President deleted.\n";
}

void list::deletesecretary()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    if (start->next == NULL)
    {
        delete start;
        start = NULL;
        cout << "Secretary deleted.\n";
        return;
    }

    node *ptr = start;
    node *prev = NULL;

    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = NULL;
    delete ptr;

    cout << "Secretary deleted.\n";
}

void list::deletemember()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    int p;
    cout << "Enter PRN to delete : ";
    cin >> p;

    if (start->prn == p)
    {
        node *temp = start;
        start = start->next;
        delete temp;
        cout << "Member deleted.\n";
        return;
    }

    node *ptr = start->next;
    node *prev = start;

    while (ptr != NULL)
    {
        if (ptr->prn == p)
        {
            prev->next = ptr->next;
            delete ptr;
            cout << "Member deleted.\n";
            return;
        }

        prev = ptr;
        ptr = ptr->next;
    }

    cout << "Member not found.\n";
}

void list::insertatposition(int position, int prn, char name[])
{
    node *temp = new node(prn, name);

    if (position == 0)
    {
        temp->next = start;
        start = temp;
        return;
    }

    node *ptr = start;

    for (int i = 0; i < position - 1; i++)
    {
        if (ptr == NULL)
        {
            cout << "Invalid Position.\n";
            delete temp;
            return;
        }
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        cout << "Invalid Position.\n";
        delete temp;
        return;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}

void list::count()
{
    int cnt = 0;
    node *ptr = start;

    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->next;
    }

    cout << "Total Members = " << cnt << endl;
}

int main()
{
    list l1;
    int choice;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Insert President\n";
        cout << "2. Insert Member\n";
        cout << "3. Insert Secretary\n";
        cout << "4. Delete President\n";
        cout << "5. Delete Secretary\n";
        cout << "6. Delete Member\n";
        cout << "7. Display\n";
        cout << "8. Count Members\n";
        cout << "9. Insert at Position\n";
        cout << "0. Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            l1.insertpresident();
            break;

        case 2:
            l1.insertmember();
            break;

        case 3:
            l1.insertsecretary();
            break;

        case 4:
            l1.deletepresident();
            break;

        case 5:
            l1.deletesecretary();
            break;

        case 6:
            l1.deletemember();
            break;

        case 7:
            l1.display();
            break;

        case 8:
            l1.count();
            break;

        case 9:
        {
            int pos, prn;
            char name[30];

            cout << "Enter Position : ";
            cin >> pos;

            cout << "Enter PRN : ";
            cin >> prn;

            cout << "Enter Name : ";
            cin >> name;

            l1.insertatposition(pos, prn, name);
            break;
        }

        case 0:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);

    return 0;
}
