#include <iostream>
using namespace std;


struct Point {
    int x,y;
};

int main(int argc, char const *argv[])
{
    Point p1,p2,p3;
    cout<<"Enter the x coordinate of p1:\n";cin>>p1.x;
    cout<<"Enter the y coordinate of p1:\n";cin>>p1.y;
    cout<<"Enter the x coordinate of p2:\n";cin>>p2.x;
    cout<<"Enter the y coordinate of p2:\n";cin>>p2.y;
    p3.x = p1.x+p2.x;
    p3.y = p1.y+p2.y;
    cout<<"the new point is: "<<p3.x<<","<<p3.y;
    return 0;
}
