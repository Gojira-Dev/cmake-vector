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

    Vector operator=(const Vector& other){
        x = other.x;
        y = other.y;
        return *this;
    }

    // equality operations

    bool operator==(const Vector& other){
        return (x == other.x && y == other.y);
    }

    bool operator!=(const Vector& other){
        return (x != other.x || y != other.y);
    }



    // arithmetic operations

    Vector operator+(const Vector& other){
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(){
        return Vector(-x, -y);
    }

    Vector operator-(const Vector& other){
        return Vector(x - other.x, y - other.y);
    }

    // two sides multipliy
    friend Vector operator*(const Vector& vec, const double scalar);

    friend Vector operator*(const double scalar, const Vector& vec);

    // division
    Vector operator/(const double divisor){
        return Vector(x * (1/divisor), y * (1/divisor));
    }

    // streams
    friend std::ostream& operator<<(std::ostream& out, const Vector& vec);

    friend bool operator>>(std::istringstream& in,  Vector& vec);


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

extern bool operator>>(std::istringstream& in,  Vector& vec);