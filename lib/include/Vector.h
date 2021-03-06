#pragma once

#include <iostream>
#include <ostream>
#include <istream>
#include <sstream>
#include <string>
#include <cmath>


class Vector{
public:
    Vector():x(0),y(0){} // default constructor
    Vector(const double xx, const double yy):x(xx), y(yy){} // by-component constructor
    Vector(const Vector& other):x(other.x), y(other.y){}  // copy constructor

    Vector operator=(const Vector& other);

    // equality operations

    bool operator==(const Vector& other);
    bool operator!=(const Vector& other);

    // arithmetic operations

    Vector operator+(const Vector& other);
    Vector operator-();
    Vector operator-(const Vector& other);

    friend Vector operator*(const Vector& vec, const double scalar);
    friend Vector operator*(const double scalar, const Vector& vec);

    Vector operator/(const double divisor);

    // streams
    friend std::ostream& operator<<(std::ostream& out, const Vector& vec);
    friend std::istream& operator>>(std::istream& in, Vector& vec);

    // vector operations
    double dot(const Vector& vec) const;
    double length() const;


private:
    double x;
    double y;
};



extern Vector operator*(const Vector& vec, const double scalar);

extern Vector operator*(const double scalar, const Vector& vec);

extern std::ostream& operator<<(std::ostream& out, const Vector& vec);

extern std::istream& operator>>(std::istream& in,  Vector& vec);