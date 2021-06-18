#include <iostream>
using namespace std;

class Quad{
    public:
        float s1,s2,s3,s4;
        virtual void Area() = 0;
        void set_values(float top,float bottom,float right,float left){
            s1 = top;
            s2 = bottom;
            s3 = right;
            s4 = left;
        }
};
class Rectangle: public Quad{
    public:
        void Area(){
            cout<<(float)s1 * s3;
        }
};

int main(){
    Rectangle our_rec;
    our_rec.set_values(2,2,4,4);
    our_rec.Area();
}