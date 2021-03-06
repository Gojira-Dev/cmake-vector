#include "Vector.h"

Vector Vector::operator=(const Vector& other)
{
        x = other.x;
        y = other.y;

        return *this;
}

bool  Vector::operator==(const Vector& other) const{
        return (x == other.x && y == other.y);
    }

bool Vector::operator!=(const Vector& other) const {
        return (x != other.x || y != other.y);
    }

Vector& Vector::operator+=(const Vector& other){
        x += other.x;
        y += other.y;
        return *this;
    }

Vector Vector::operator-() const{
        return Vector(-x, -y);
    }

Vector& Vector::operator-=(const Vector& other){
        x -= other.x;
        y -= other.y;
        return *this;
    }

Vector& Vector::operator/=(const double divisor){
        x /= divisor;
        y /= divisor;
        return *this;
    }

Vector& Vector::operator*=(const double scalar){
    x = x * scalar;
    y = y * scalar;
    return *this;
}

double Vector::operator*(const Vector& vec){
    return (x * vec.x) + (y * vec.y);
}



double Vector::length() const { 
    return std::sqrt((x * x) + (y * y)); }


std::istream& operator>>(std::istream& in, Vector& vec){
    Vector temp;

    in >> std::ws;
    if(in.peek() == '('){
        in.ignore(1);
        in >> std::ws >> temp.x >> std::ws;

        if(in.peek() == ','){
            in.ignore(1);
            in >> std::ws >> temp.y >> std::ws;

            if(in.peek() == ')'){
                in.ignore(1);
                vec = temp;
                return in;
            }
        }
    }

    in.setstate(std::ios::failbit);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Vector& vec){
        out << "(" << vec.x << ", " << vec.y << ")";
        return out;
    }



Vector operator*(const Vector& vec, const double scalar){
    return Vector(vec.x * scalar, vec.y * scalar);
}

Vector operator*(const double scalar, const Vector& vec){
    return Vector(vec.x * scalar, vec.y * scalar);
}

Vector operator+(const Vector& leftvec, const Vector& rightvec){
     return Vector(leftvec.x + rightvec.x, leftvec.y + rightvec.y);
 }
 Vector operator-(const Vector& leftvec, const Vector& rightvec){
          return Vector(leftvec.x - rightvec.x, leftvec.y - rightvec.y);

 }

Vector operator/(const Vector& vec, const double divisor){
     return Vector(vec.x/divisor, vec.y/divisor);
 }