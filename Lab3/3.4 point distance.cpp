#include<iostream>
#include<math.h>
using namespace std;


struct Point{
    float x,y;
};

float pDistance(Point p1,Point p2){
    float dist = sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
    return dist;
}
float pathLength(Point arr[],int size){
    float result = 0;
    for(int i = 0; i < size-1; i++){
        result += pDistance(arr[i],arr[i+1]);
    }
    return result;
}
int main(){
    Point p1;p1.x = 0;p1.y = 0;
    Point p2;p2.x = 0;p2.y = 2;
    Point p3;p3.x = 1;p3.y = 1;
    Point p4;p4.x = 2;p4.y = 5;
    cout<<"Distance between p1 and p2 = "<<pDistance(p1,p2);
    Point arr[] = {p1,p2,p3,p4};
    cout<<"\nPath Length = "<<pathLength(arr,4);
    
}