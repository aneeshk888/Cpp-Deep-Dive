#include<iostream>
using namespace std;

int furlongtoyard(int furlongs){
    return furlongs * 220;
}

int main(){
    int furlongs;
    cout << "Enter the number of furlongs: ";
    cin >> furlongs;
    cout << "The equivalent in yards is: " << furlongtoyard(furlongs) << endl;
    return 0;
}

