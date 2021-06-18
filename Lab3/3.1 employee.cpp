#include<iostream>
using namespace std;
struct employee{
    int number;
    float salary;
};
int main(){
    employee emp1,emp2,emp3;
    cout<<"Enter the employee number and salary seperated by 'enter': ";cin>>emp1.number;cin>>emp1.salary;    
    cout<<"Enter the employee number and salary seperated by 'enter': ";cin>>emp2.number;cin>>emp2.salary;
    cout<<"Enter the employee number and salary seperated by 'enter': ";cin>>emp3.number;cin>>emp3.salary;
    cout<<"Employee #"<<emp1.number<<" has salary of: "<<emp1.salary<<"$\n";
    cout<<"Employee #"<<emp2.number<<" has salary of: "<<emp2.salary<<"$\n";
    cout<<"Employee #"<<emp3.number<<" has salary of: "<<emp3.salary<<"$\n";
}
