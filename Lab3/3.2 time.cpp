#include <iostream>
using namespace std;

struct Time{
    int hours,minutes,seconds;

};
int main()
{
    Time t1;
    cout<<"Enter hours: ";cin>>t1.hours;
    cout<<"Enter minutes: ";cin>>t1.minutes;
    cout<<"Enter seconds: ";cin>>t1.seconds;
    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    cout<<"Result: "<<totalsecs;
    return 0;
}
