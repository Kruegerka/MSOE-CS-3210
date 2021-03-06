#include "triangle.h"


Triangle::Triangle(){

}

Triangle::Triangle(unsigned int pColor,  matrix &point1, matrix &point2, matrix &point3) : Shape(pColor, point1)
{
    p2 = point2;
    p3 = point3;
    p2[0][3] = 1.0;
}

Triangle::Triangle(const Triangle &from) : Shape(from)
{
    p2 = from.p2;
    p3 = from.p3;
}

Triangle::~Triangle()
{

}

void Triangle::draw(GraphicsContext *gContext)
{
    gContext->setColor(shapeColor);
    gContext->drawLine(p1[0][0], p1[0][1], p2[0][0], p2[0][1]);
    gContext->drawLine(p2[0][0], p2[0][1], p3[0][0], p3[0][1]);
    gContext->drawLine(p3[0][0], p3[0][1], p1[0][0], p1[0][1]);
}

Triangle &Triangle::operator=(const Triangle &rhs)
{
    shapeColor = rhs.shapeColor;
    p1 = rhs.p1;
    p2 = rhs.p2;
    p3 = rhs.p3;
    return *this;
}

void Triangle::out(std::ostream &os)
{
    int x;
    int y;
    int z;
    os << "T ";
    os << shapeColor << " ";
    x = p1[0][0];
    y = p1[0][1];
    z = p1[0][2];
    os << x << " ";
    os << y << " ";
    os << z << " ";
    x = p2[0][0];
    y = p2[0][1];
    z = p2[0][2];
    os << x << " ";
    os << y << " ";
    os << z << " ";
    x = p3[0][0];
    y = p3[0][1];
    z = p3[0][2];
    os << x << " ";
    os << y << " ";
    os << z << " ";
}

void Triangle::in(std::istream &is)
{
    int x;
    int y;
    int z;
    is >> shapeColor; 
    is >> x;
    is >> y;
    is >> z;
    p1[0][0] = x;
    p1[0][1] = y;
    p1[0][2] = z;
    p1[0][3] = 1.0;
    is >> x;
    is >> y;
    is >> z;
    p2[0][0] = x;
    p2[0][1] = y;
    p2[0][2] = z;
    p2[0][3] = 1.0;
    is >> x;
    is >> y;
    is >> z;
    p3[0][0] = x;
    p3[0][1] = y;
    p3[0][2] = z;
    p3[0][3] = 1.0;
    
}

Shape* Triangle::clone(){
    return new Triangle(*this);
}