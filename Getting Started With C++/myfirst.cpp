#include<iostream>  //#include is a preprocessor directive that tells the compiler to include the contents of the iostream header file, which allows us to use input and output streams in our program.

using namespace std; //directive that tells the compiler to use the standard namespace, which contains all the standard C++ library functions and objects, such as cout and endl.

int main(){ //function header that defines the main function, which is the entry point of a C++ program. The program execution starts from this function.

    cout<<"Come up and C++ me some time."<<endl; //cout is an object of the ostream class that is used to output data to the console. The << operator is used to insert data into the output stream. endl is a manipulator that inserts a newline character and flushes the output buffer.

    cout<<"You won't regret it!"<<endl; //another output statement that prints a message to the console.
    
    return 0; //return statement that indicates the end of the main function and returns a value of 0 to the operating system, indicating that the program executed successfully.
}