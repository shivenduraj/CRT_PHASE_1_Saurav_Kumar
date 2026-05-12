//Selection Sort
#include <iostream>
using namespace std;

void swaparray(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
};

int Selection_Sort(int nums[], int n){
    for (int i = 0; i < n; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(nums[mini] > nums[j]){
                mini = j;
            }
        }
        swaparray(nums[i], nums[mini]);
    }
   
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Selection_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}