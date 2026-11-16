//Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.

#include <iostream>
using namespace std;

class Shape                                  // class shape for contains width and height
{
protected:

    int width, height;

public:

    Shape(int w, int h)                      // for initialize width and height using constructor
    {
        width = w;
        height = h;
    }
};

class Triangle : public Shape                // for class triangle inherit class Shape
{
	
public:

    Triangle(int w, int h) : Shape(w, h)     // for call parameterized constructor of base class
    {
    }

    void area()                              // for calculate area of triangle
    {
        cout << "The Width is :- " << width << endl;
        cout << "The Height is :- " << height << endl;
        cout << endl;

        cout << "The Area of Triangle is :- " << (width * height) / 2.0 << endl;
    }
};

class Rectangle : public Shape               // for class rectangle inherit class Shape
{
public:

    Rectangle(int w, int h) : Shape(w, h)    // for call parameterized constructor of base class
    {
    }

    void area()                              // for calculate area of rectangle
    {
        cout << "The Width is :- " << width << endl;
        cout << "The Height is :- " << height << endl;
        cout << endl;

        cout << "The Area of Rectangle is :- " << width * height << endl;
    }
};

int main()
{
    Triangle t1(10, 5);                      // for create triangle object

    Rectangle r1(10, 5);                     // for create rectangle object

    cout << " :-------The Triangle Details-------: " << endl;
    cout << endl;
    t1.area();                               // for calculate and display triangle area

    cout << endl;

    cout << " :------The Rectangle Details-------: " << endl;
    cout << endl;
    r1.area();                               // for calculate and display rectangle area

    return 0;
}
