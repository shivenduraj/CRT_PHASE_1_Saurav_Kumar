//Binary search
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;

    while(left<=right){
        int mid = left + (right - left) /2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int ans = binarySearch(arr, size, key);
    if (ans != -1){
        cout << "Key found at index: " << ans << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }
    return 0;
}