#include<iostream>
using namespace std;

#define MAX 10

int main() {
    int hashtable[MAX];

    for(int i = 0; i < MAX; i++)
        hashtable[i] = -1;

    int n, key, index;

    // Insertion
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int j = 0; j < n; j++) {
        cin >> key;

        for(int i = 0; i < MAX; i++) {
            index = (key % MAX + i * i) % MAX;

            if(hashtable[index] == -1) {
                hashtable[index] = key;
                break;
            }
        }
    }

    // Display hash table
    cout << "\nHash Table:\n";

    for(int i = 0; i < MAX; i++)
        cout << i << " -> " << hashtable[i] << endl;

    // Searching
    cout << "\nEnter key to search: ";
    cin >> key;

    for(int i = 0; i < MAX; i++) {
        index = (key % MAX + i * i) % MAX;

        if(hashtable[index] == key) {
            cout << "Key found at index: " << index;
            return 0;
        }

        if(hashtable[index] == -1)
            break;
    }

    cout << "Key not found";

    return 0;
}