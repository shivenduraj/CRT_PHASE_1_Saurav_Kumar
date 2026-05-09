//Sum of an array
#include <iostream>
using namespace std;

class Sum{
    public:
    int SumOfArray(int arr[], int n){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i];
        }
        return sum;
    }
};


int main(){
    int arr[5] = {1, 2,3 ,4 , 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Sum s1;
    int ans = s1.SumOfArray(arr, size);
    cout << "Sum of array is: " << ans << endl;

    return 0;
}