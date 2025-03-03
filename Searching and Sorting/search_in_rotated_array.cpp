#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If element is found
        if (arr[mid] == k) {
            return mid;
        }

        // Check which part is sorted
        if (arr[low] <= arr[mid]) { // Left half is sorted
            if (arr[low] <= k && k < arr[mid]) {
                high = mid - 1; // Search in left half
            } else {
                low = mid + 1; // Search in right half
            }
        } else { // Right half is sorted
            if (arr[mid] < k && k <= arr[high]) {
                low = mid + 1; // Search in right half
            } else {
                high = mid - 1; // Search in left half
            }
        }
    }
    
    return -1; // Element not found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    cout << search(arr, n, k);
}
