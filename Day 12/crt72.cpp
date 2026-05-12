//Bubble Sort
#include <iostream>
using namespace std;

void swaparray(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
};

int Bubble_Sort(int nums[], int n){
    for (int i = 0; i < n; i++){
            bool flag = false;
            for(int j=0; j<n-i-1; j++){
                if(nums[j] > nums[j+1]){
                    cout << "Array is Sorted Here" << endl;
                    swaparray(nums[j], nums[j + 1]);
                    // int temp = nums[j];
                    // nums[j] = nums[j + 1];
                    // nums[j + 1] = temp;
                    flag = true; // flag != flag;
                }
            }
        if (!flag){
        cout << "Array is already Sorted" << endl;
        break;
        }
        
        
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubble_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}