#include <iostream>
#include <string>
using namespace std;

struct Order {
    int order_id;
    int bill;
    int itemcount;
    string *menu;

    Order() {
        order_id = 0;
        bill = 0;
        itemcount = 0;
        menu = NULL;
    }
};

class PizzaParlour {
    int f, r;
    int capacity;
    Order *q;

public:

    PizzaParlour(int cap) {
        f = r = -1;
        capacity = cap;
        q = new Order[capacity];
    }

    ~PizzaParlour() {
        for (int i = 0; i < capacity; i++) {
            delete[] q[i].menu;
        }
        delete[] q;
    }

    void place_order() {

        
        if ((r + 1) % capacity == f) {
            cout << "\nSorry! Queue is full. Please wait.\n";
            return;
        }

        
        if (f == -1) {
            f = r = 0;
        }
        else {
            r = (r + 1) % capacity;
        }

    
        q[r].bill = 0;
        delete[] q[r].menu;
        q[r].menu = NULL;

        cout << "\n===== WELCOME TO DOMINO'S =====\n";
        cout << "1. Pizza        : Rs.100\n";
        cout << "2. Burger       : Rs.80\n";
        cout << "3. Cold Drink   : Rs.100\n";
        cout << "4. French Fries : Rs.150\n";
        cout << "5. Chocolate    : Rs.50\n";

        cout << "\nEnter Order ID: ";
        cin >> q[r].order_id;

        int n;
        cout << "Number of items you want: ";
        cin >> n;

        q[r].itemcount = n;
        q[r].menu = new string[n];

        int choice;

        for (int i = 0; i < n; i++) {

            cout << "Enter choice (1-5): ";
            cin >> choice;

            switch (choice) {

                case 1:
                    q[r].menu[i] = "Pizza";
                    q[r].bill += 100;
                    break;

                case 2:
                    q[r].menu[i] = "Burger";
                    q[r].bill += 80;
                    break;

                case 3:
                    q[r].menu[i] = "Cold Drink";
                    q[r].bill += 100;
                    break;

                case 4:
                    q[r].menu[i] = "French Fries";
                    q[r].bill += 150;
                    break;

                case 5:
                    q[r].menu[i] = "Chocolate";
                    q[r].bill += 50;
                    break;

                default:
                    cout << "Invalid choice! Item not added.\n";
                    i--;
            }
        }

        cout << "\nOrder placed successfully!";
        cout << "\nOrder ID: " << q[r].order_id;
        cout << "\nTotal Bill: Rs." << q[r].bill << "\n";
    }

    void deliver_order() {

        if (f == -1) {
            cout << "\nNo orders are placed currently.\n";
            return;
        }

        cout << "\n===== DELIVERING ORDER =====\n";
        cout << "Order ID: " << q[f].order_id << endl;

        cout << "Items:\n";

        for (int i = 0; i < q[f].itemcount; i++) {
            cout << "- " << q[f].menu[i] << endl;
        }

        cout << "Total Bill: Rs." << q[f].bill << endl;

        // Free memory
        delete[] q[f].menu;
        q[f].menu = NULL;
        q[f].itemcount = 0;
        q[f].bill = 0;

        
        if (f == r) {
            f = r = -1;
        }
        else {
            f = (f + 1) % capacity;
        }

        cout << "Order delivered successfully!\n";
    }

    void current_orders() {

        if (f == -1) {
            cout << "\nNo current orders.\n";
            return;
        }

        cout << "\n===== CURRENT ORDERS =====\n";

        int i = f;

        while (true) {

            cout << "\nOrder ID: " << q[i].order_id;
            cout << "\nBill: Rs." << q[i].bill;
            cout << "\nItems: ";

            for (int j = 0; j < q[i].itemcount; j++) {
                cout << q[i].menu[j];

                if (j != q[i].itemcount - 1)
                    cout << ", ";
            }

            if (i == r)
                break;

            i = (i + 1) % capacity;
        }

        cout << endl;
    }
};

int main() {

    int capacity;

    cout << "Enter maximum number of orders: ";
    cin >> capacity;

    PizzaParlour p(capacity);

    int choice;

    do {
        cout << "\n\n===== PIZZA PARLOUR =====";
        cout << "\n1. Place Order";
        cout << "\n2. Deliver Order";
        cout << "\n3. Display Current Orders";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                p.place_order();
                break;

            case 2:
                p.deliver_order();
                break;

            case 3:
                p.current_orders();
                break;

            case 4:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
