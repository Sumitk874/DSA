#include<iostream>
using namespace std;

// struct Dob
// {   //creating a user defined data type Dob 
//     string day;
//     int date;
//     string month;
// };

// NOTE : we can interchange class with struct as well it would work the same in C++ language BUT in structures the data is by default public whereas data is private by default in classes
// copying above code and replacing struct by class and adding public keyword
class Dob
{   //creating a user defined data type Dob 
    public:
        string day;
        int date;
        string month;
    // we can also create functions in classes which isn't the case with structures

    void setDate(int d){
        date = d;

    }

    void getDate(){
        cout << date;
    }
};


int main(){
    Dob student; // creating object
    student.date = 12;
    student.day = "Monday";
    student.month = "February";
    // assigning the values to created objects

    // creating array of students 
    Dob students[50];
    students[0].day = "Tuesday";
    students[1].date = 189;
    // similarly values can be assigned

    students[2].setDate(15);
    // cout << students[2].date;

    students[1].getDate();



    return 0;
}