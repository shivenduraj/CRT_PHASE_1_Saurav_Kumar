//write a function that takes number of coffee shots return the total coffee volume if one shot = 30 ml
#include<iostream>
using namespace std;

int coffeevol(int shots){
    return shots*30;
}

int main() {
    int shots;
    cout << "Enter no. of shots: ";
    cin >> shots;
    cout << "Total coffee volume: " << coffeevol(shots) << " ml" << endl;
    return 0;
}