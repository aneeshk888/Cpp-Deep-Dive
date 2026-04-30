#include <iostream>

using namespace std;

int main(){
    int carrots; //declare an integer variable named carrots
    carrots = 25; //assign the value 25 to the variable carrots
    cout << "I have ";
    cout << carrots; //output the value of carrots to the console
    cout << " carrots." << endl; //output the string " carrots." followed by a newline character
    carrots = carrots - 1; //subtract 1 from the value of carrots and assign the result back to carrots
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl; //output a message that includes the updated value of carrots
    return 0; //return statement that indicates the end of the main function and returns a value of 0 to the operating system, indicating that the program executed successfully.
}