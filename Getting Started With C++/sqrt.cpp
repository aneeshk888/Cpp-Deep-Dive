#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double area;
    cout<<"Enter the floor area, in square feet, of your house: "; //output a message asking the user to enter the floor area of their house in square feet
    cin>>area;  //read a double value from the user and store it in the variable area
    double side;    //  declare a double variable named side
    side = sqrt(area); //   calculate the square root of the area and assign the result to the variable side
    cout<<"That's the equivalent of a square house "<<side<<" feet on each side."<<endl; //  output a message that includes the calculated value of side, indicating the equivalent size of a square house with the same area as the user's house
    cout<<"How fascinating!"<<endl; //      output a message expressing fascination with the calculated result
    return 0; //    return statement that indicates the end of the main function and returns a value of 0 to the operating system, indicating that the program executed successfully.
}