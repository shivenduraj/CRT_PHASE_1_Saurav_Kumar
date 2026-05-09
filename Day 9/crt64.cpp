//Reverse array
#include <iostream>
using namespace std;

void ReverseArray(int num[],int n){
    int i = 0;
    int j = n-1;

    while(i<j){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
}

int main(){
    int arr[5] = {1, 2,3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr, size);

    return 0;
}