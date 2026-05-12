//linear search
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
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

    int ans = linearSearch(arr, size, key);
    if (ans != -1){
        cout << "Key found at index: " << ans << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }
    return 0;
}