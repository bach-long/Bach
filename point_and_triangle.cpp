#include<bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
    Point(){};
    Point(double a, double b){
        x=a;
        y=b;
    };
    Point(const Point& z){
        x=z.x;
        y=z.y;
    };
};

class Triangle
{
    Point p1, p2, p3;
public:
    Triangle(const Point& a, const Point& b,  const Point& c){
        p1=a;
        p2=b;
        p3=c;
    };
    double getPerimeter() const{
        double c1=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
        double c2=sqrt(pow(p1.x-p3.x,2)+pow(p1.y-p3.y,2));
        double c3=sqrt(pow(p3.x-p2.x,2)+pow(p3.y-p2.y,2));
        return c1+c2+c3;
    };
    double getArea() const{
        double c1=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
        double c2=sqrt(pow(p1.x-p3.x,2)+pow(p1.y-p3.y,2));
        double c3=sqrt(pow(p3.x-p2.x,2)+pow(p3.y-p2.y,2));
        double p=(c1+c2+c3)/2;
        return sqrt(p*(p-c1)*(p-c2)*(p-c3));
    };
};
int main(){
   Point A(1,1), B(1, 4), C(5, 1);
Triangle tri(A, B, C);
cout << tri.getArea() << endl;

}
