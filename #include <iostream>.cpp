#include <iostream>
#include <algorithm> 
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

    // Step 1: Sort the array for Binary Search
    sort(arr, arr + n);

    cout << "Enter the ID to search: ";
    cin >> key;

    // Binary Search starts here
    int low = 0, high = n - 1, mid;
    bool found = false;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = true;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found)
        cout << "Customer ID exists in the system.";
    else
        cout << "Customer ID does NOT exist.";

    return 0;
}
