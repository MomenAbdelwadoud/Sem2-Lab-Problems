#include<iostream>
using namespace std;

class Time{
    public:
    int hrs,mins,secs;
    Time(){
        this->hrs = 0;
        this->mins = 0;
        this->secs = 0;
    }
    Time(int hrs,int mins,int secs){
        this->hrs = hrs;
        this->mins = mins;
        this->secs = secs;
    }
    void display(){
        cout<<hrs<<":"<<mins<<":"<<secs;
    }
    void add(Time t1,Time t2){
        this->hrs = t1.hrs + t2.hrs;
        this->mins = t1.mins + t2.mins;
        this->secs = t1.secs + t2.secs;
    }
};
int main(){
    Time t1 = Time(1,12,10);
    Time t2 = Time(3,30,0);
    Time t3;
    t3.add(t1,t2);
    t3.display();
}