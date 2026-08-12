#include <iostream>
using namespace std;

class node {
public:
    node *next;
    node *prev;

    int seat;
    string id;
    int status;   // 0 = available, 1 = booked
};

class cinemax {
public:
    node *head, *tail, *temp;

    cinemax() {
        head = NULL;
        tail = NULL;
        temp = NULL;
    }

    void create_list();
    void display();
    void book();
    void cancel();
    void avail();
};

void cinemax::create_list() {
    head = NULL;
    tail = NULL;

    for (int i = 1; i <= 70; i++) {
        node *p = new node;

        p->seat = i;
        p->status = 0;
        p->id = "NULL";
        p->next = NULL;
        p->prev = NULL;

        if (head == NULL) {
            head = tail = p;
        } 
        else {
            tail->next = p;
            p->prev = tail;
            tail = p;
        }
    }

    // Make it circular
    tail->next = head;
    head->prev = tail;

    cout << "Seat list created successfully.\n";
}

void cinemax::display() {
    if (head == NULL) {
        cout << "Please create the seat list first.\n";
        return;
    }

    node *temp = head;
    int count = 0;

    cout << "\n----------- SCREEN -----------\n\n";

    do {
        if (temp->seat < 10)
            cout << "S0" << temp->seat;
        else
            cout << "S" << temp->seat;

        if (temp->status == 0)
            cout << " : |__|   ";
        else
            cout << " : |_B_|  ";

        count++;

        if (count % 7 == 0)
            cout << endl;

        temp = temp->next;

    } while (temp != head);

    cout << "\n";
}

void cinemax::book() {
    if (head == NULL) {
        cout << "Please create the seat list first.\n";
        return;
    }

    int x;
    string y;

    cout << "Enter seat number: ";
    cin >> x;

    cout << "Enter ID: ";
    cin >> y;

    if (x < 1 || x > 70) {
        cout << "Enter a valid seat number.\n";
        return;
    }

    node *temp = head;

    do {
        if (temp->seat == x)
            break;

        temp = temp->next;

    } while (temp != head);

    if (temp->status == 1) {
        cout << "Seat is already booked.\n";
    }
    else {
        temp->status = 1;
        temp->id = y;

        cout << "Seat booked successfully.\n";
    }
}

void cinemax::cancel() {
    if (head == NULL) {
        cout << "Please create the seat list first.\n";
        return;
    }

    int x;
    string y;

    cout << "Enter seat number: ";
    cin >> x;

    cout << "Enter ID: ";
    cin >> y;

    if (x < 1 || x > 70) {
        cout << "Enter a valid seat number.\n";
        return;
    }

    node *temp = head;

    do {
        if (temp->seat == x)
            break;

        temp = temp->next;

    } while (temp != head);

    if (temp->status == 0) {
        cout << "Seat is not booked.\n";
    }
    else if (temp->id != y) {
        cout << "Invalid ID. Cancellation failed.\n";
    }
    else {
        temp->status = 0;
        temp->id = "NULL";

        cout << "Seat cancelled successfully.\n";
    }
}

void cinemax::avail() {
    if (head == NULL) {
        cout << "Please create the seat list first.\n";
        return;
    }

    node *temp = head;
    int count = 0;

    cout << "\n----------- AVAILABLE SEATS -----------\n\n";

    do {
        if (temp->status == 0) {
            cout << "S" << temp->seat << "   ";
            count++;

            if (count % 10 == 0)
                cout << endl;
        }

        temp = temp->next;

    } while (temp != head);

    cout << "\n";
}

int main() {
    cinemax c1;
    char ch;

    do {
        cout << "\n\n===== CINEMAX =====\n";
        cout << "1. Create List\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Book Seat\n";
        cout << "4. Cancel Seat\n";
        cout << "5. Display Seats\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case '1':
            c1.create_list();
            break;

        case '2':
            c1.avail();
            break;

        case '3':
            c1.book();
            break;

        case '4':
            c1.cancel();
            break;

        case '5':
            c1.display();
            break;

        case '6':
            cout << "Thank you!\n";
            break;

        default:
            cout << "Choose a correct operation.\n";
        }

    } while (ch != '6');

    return 0;
}