#include <iostream>
using namespace std;

int main() {
    int n, key;
    
    cout << "Enter number of customer IDs: ";
    cin >> n;

    int arr[n];
    cout << "Enter customer account IDs:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the ID to search: ";
    cin >> key;

    // Linear Search
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Customer ID exists in the system.";
    else
        cout << "Customer ID does NOT exist.";

    return 0;
}
