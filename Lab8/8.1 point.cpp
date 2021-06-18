#include <iostream>
using namespace std;

class Vector3d;
class Point3d{
    private:
    double m_x, m_y, m_z;
    public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
    {
    }
    void print()
    {std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";}
    void moveByVector(Vector3d v);
};
class Vector3d{
    private:
    double m_x, m_y, m_z;
    public:
    friend void Point3d::moveByVector(Vector3d v);
    Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
    {
    }
    void print(){
    std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

};
void Point3d::moveByVector(Vector3d v){
        this->m_x += v.m_x;
        this->m_y += v.m_y;
        this->m_z += v.m_z;
    }

int main(){
    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);
    p.print();
    p.moveByVector(v);
    p.print();
return 0;}