#include "Vector.h"

std::ostream& operator<<(std::ostream& out, const Vector& vec){
        out << "(" << vec.x << ", " << vec.y << ")";
        return out;
    }

bool operator>>(std::istringstream& in,  Vector& vec){
    std::string temp{""};

    std::getline(in, temp); 

    vec.stripspaces(temp);

    if(vec.checkConditions(temp)){
        vec.setNumberFromString(temp);
        return true;

    } else {
        std::cin.setstate(std::ios::failbit);
        std::cout << "Vector not setted. Bad input format. " << std::endl;

        return false;
    }
}


// Utils


std::string Vector::stripspaces(const std::string& str){
    std::string temp = str;
    std::string result{""};

    for(int i = 0; i < str.size(); ++i){
        char c = str[i];
        if(c == ' ')
            continue;
        else
            result.push_back(c);
    }

    return result;
}

bool Vector::checkConditions(const std::string& str){
    int left{0}, right{0};
    int comma{0};

    for(auto it = str.begin(); it != str.end(); ++it){
        if(*it == '(')
            ++left;
        else if (*it == ')')
            ++right;
        else if(*it == ',')
            ++comma;
    }

    if(left == 1 && right == 1 && comma == 1)
        return true;

    return false;
}



void Vector::setNumberFromString(const std::string& str){
    // Solo ASCII
    std::string first{""}, second{""};
    bool half = false;

    for(auto it = str.begin(); it != str.end(); ++it){
        
        if(*it == ',')
            half = true;

        if((*it >= 48 && *it <= 57) || (*it == '.')){
            if(half)
                second.push_back(*it);
            else
                first.push_back(*it);
        }
    }

    x = atof(first.c_str());
    y = atof(second.c_str());

}



Vector operator*(const Vector& vec, const double scalar){
    return Vector(vec.x * scalar, vec.y * scalar);
}

Vector operator*(const double scalar, const Vector& vec){
    return Vector(vec.x * scalar, vec.y * scalar);
}



