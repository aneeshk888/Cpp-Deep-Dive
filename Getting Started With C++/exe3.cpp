#include<iostream>
using namespace std;

void mice(){
    cout<<"Three blind mice."<<endl;
}

void run(){
    cout<<"See how they run."<<endl;
}

int main(){
    mice(); //call the mice function to output "Three blind mice."
    mice(); //call the mice function again to output "Three blind mice." a second time
    run();  //call the run function to output "See how they run."
    run();  //call the run function again to output "See how they run." a second time
    return 0; //return statement that indicates the end of the main function and returns a value of 0 to the operating system, indicating that the program executed successfully.
}