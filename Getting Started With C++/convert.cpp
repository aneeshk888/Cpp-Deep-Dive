#include<iostream>
using namespace std;

int stonetolb(int);    //function prototype that declares a function named stonetolb that takes an integer parameter and returns an integer value. This function will be defined later in the code.
int main(){
    int stone; //declare an integer variable named stone to store the user's weight in stone
    cout<<"Enter your weight in stone: "; //    output a message asking the user to enter their weight in stone
    cin>>stone; //  read an integer value from the user and store it in the variable stone
    int lb = stonetolb(stone);  // call the stonetolb function with the user's weight in stone as an argument and store the returned value in the variable lb, which represents the user's weight in pounds
    cout<<"Your weight in pounds is "<<lb<<"."<<endl; // output a message that includes the calculated weight in pounds, indicating the equivalent weight of the user in pounds based on their weight in stone
    return 0;
}
int stonetolb(int sts){ // define the stonetolb function that takes an integer parameter named sts, which represents the weight in stone
    return 14*sts; // return the result of multiplying the weight in stone (sts) by 14, which is the conversion factor from stone to pounds. This value will be returned to the caller of the function, which is the main function in this case.
}