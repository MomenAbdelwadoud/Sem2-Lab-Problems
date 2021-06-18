#include<iostream>
using namespace std;

class CountedObj{
public:
    static int numBorn;
    static int numLiving;
    CountedObj() {
        ++numBorn;
        ++numLiving;
    }
    ~CountedObj() {
        --numLiving;
    }

};
int CountedObj::numBorn = 0;
int CountedObj::numLiving = 0;
void show(){
    cout<<"Number of objects created: "<<CountedObj::numBorn<<endl;
    cout<<"Number of objects living: "<<CountedObj::numLiving<<endl;
}
int main(){
    CountedObj *o1 = new CountedObj();
    CountedObj *o2 = new CountedObj();
    show();
    delete o2;
    show();
}