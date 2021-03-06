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

    inline Vector operator=(const Vector& other);

    // equality operations

    inline bool operator==(const Vector& other);
    inline bool operator!=(const Vector& other);

    // arithmetic operations

    inline Vector operator+(const Vector& other);
    inline Vector operator-();
    inline Vector operator-(const Vector& other);

    // two sides multipliy
    inline friend Vector operator*(const Vector& vec, const double scalar);
    inline friend Vector operator*(const double scalar, const Vector& vec);

    // division
    Vector operator/(const double divisor){
        return Vector(x * (1/divisor), y * (1/divisor));
    }

    // streams
    friend std::ostream& operator<<(std::ostream& out, const Vector& vec);

    friend std::istream& operator>>(std::istream& in, Vector& vec);


    // dot product

    double dot(const Vector& vec) const {return (x * vec.x)+(y * vec.y);}

    // length

    double length() const { return std::sqrt((x * x) + (y * y)); }


    // util

    void print() {std::cout << x << " " << y << std::endl;}

private:
    //utils
    std::string stripspaces(const std::string& str);

    bool checkConditions(const std::string& str);

    void setNumberFromString(const std::string& str);


private:
    double x;
    double y;
};



extern Vector operator*(const Vector& vec, const double scalar);

extern Vector operator*(const double scalar, const Vector& vec);

extern std::ostream& operator<<(std::ostream& out, const Vector& vec);

extern std::istream& operator>>(std::istream& in,  Vector& vec);