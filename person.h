# include <iostream>
# include <string>
# ifndef PERSON_H
# define PERSON_H


using namespace std;

// define a class person 
class person{

    string myName;
    int Salary;

    public:
    
    person();
    person (string _Name, int _Salary){
        myName = _Name;
        Salary = _Salary;
    };
    
    void setName(string myName); 
    string getName();

    void setSalary(int mySalary);
    int getSalary();



};
# endif