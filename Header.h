
//  Header.h
//  

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;


class CircleClass{
public:
        //radius
    void setRadius(double x){
        radius = x;
    }
    
    
    double getRadius(){
        return radius;
    }
    
    
        //diameter
    void setDiameter(double x){
        diameter = x;
    }
    
    
    double getDiameter(){
        return diameter;
    }
    
private:
    double radius, diameter;
};




class TriangleClass{
public:
        //base
    
    void setBase(double x){
        base = x;
    }
    
    double getBase(){
        return base;
    }
    
    
        //height
    
    void setHeight(double x){
        base = x;
    }
    
    double getHeight(){
        return base;
    }
    
    
private:
    double base, height;

};




class RectangleClass{
public:
        //length
    
    void setLength(double x){
        length = x;
    }
    
    double getLength(){
        return length;
    }
    
    
        //height
    
    void setHeight(double x){
        height = x;
    }
    
    double getHeight(){
        return height;
    }
    
    
private:
    double length, height;
};



class PentagonClass{
public:
        //side
    
    void setSide(double x){
        side = x;
    }
    
    double getSide(){
        return side;
    }
    
private:
    double side;
};


class HexagonClass{
public:
        //side
    
    void setSide(double x){
        side = x;
    }
    
    double getSide(){
        return side;
    }
    
private:
    double side;
};


