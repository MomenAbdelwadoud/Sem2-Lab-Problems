#include<iostream>
using namespace std;

class Work{
    public:
    int salary,mins;
    Work(int salary,int mins = 0){
        this->mins = mins;
        this->salary = salary;
    }
    void add(int val){
        this->mins += val;
    }
    void printSalary(){
        cout<<"Salary = "<<salary*mins<<endl;
    }
    void reset(Work *work){
        work->mins = 0;
    }
    int compare(Work v){
        if(this->salary == v.salary){
            return 0;
        } else if (this->salary > v.salary)
        {
            return 1;
        } else
        {
            return -1;
        }
        
        
    }
};

int main(){
    Work* w = new Work(25, 60);
    w->add(65);
    w->printSalary();
    Work v(25);
    int r = w->compare(v);
    cout<<r;
    Work u(v);
}