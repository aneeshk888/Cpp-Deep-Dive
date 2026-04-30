#include <iostream>
using namespace std;

int main(){
    int carrots; //declare an integer variable named carrots
    cout<< "How many carrots do you have?" << endl; //output a message asking the user how many carrots they have
    cin >> carrots; //read an integer value from the user and store it in the variable carrots
    cout << "Here are some carrots." << endl; //output a message indicating that the program will give the user some carrots
    carrots = carrots + 2; //add 2 to the value of carrots and assign the result back to carrots
    cout << "Now you have " << carrots << " carrots." << endl; //output a message that includes the updated value of carrots
    return 0; //return statement that indicates the end of the main function and returns a value of 0 to the operating system, indicating that the program executed successfully.
}