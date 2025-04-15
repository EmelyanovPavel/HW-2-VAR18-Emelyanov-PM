//Topic 2 - Functions in C++
#include <iostream>
#include <cmath>

//Exercises. 
//18)Develop the function f(x1, y1, x2, y2), which calculates the length of the segment from the coordinates
//of the vertices(x1, y1) and (x2, y2), and the function min(a, b), which calculates the minimum of
//the numbers a, b.Using these functions, find two of the three given points on the plane,
//the distance between which is minimal.

//A function for calculating the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//a function for finding the minimum of two numbers
double min(double a, double b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

void task1() 
{
    //Coordinates of three points
    double x1, y1, x2, y2, x3, y3;
    
    //Entering a points coordinates
    std::cout << "Enter the coordinates of the first point (x1, y1): ";
    std::cin >> x1 >> y1;
    
    std::cout << "Enter the coordinates of the second point (x2, y2): ";
    std::cin >> x2 >> y2;
    
    std::cout << "Enter the coordinates of the third point (x3, y3): ";
    std::cin >> x3 >> y3;
    
    //Calculating all possible distances between points
    double distance1_2 = calculateDistance(x1, y1, x2, y2);
    double distance1_3 = calculateDistance(x1, y1, x3, y3);
    double distance2_3 = calculateDistance(x2, y2, x3, y3);
    
    //Finding a minimum distance
    double minDistance = distance1_2;
    
    if (distance1_3 < minDistance) {
        minDistance = distance1_3;
    }
    
    if (distance2_3 < minDistance) {
        minDistance = distance2_3;
    }
    
    //Defining a pair of points with the minimum distance
    if (minDistance == distance1_2) {
        std::cout << "\nMinimum distance between points (x1, y1) and (x2, y2): " << minDistance << std::endl;
    } else if (minDistance == distance1_3) {
        std::cout << "\nMinimum distance between points (x1, y1) and (x3, y3): " << minDistance << std::endl;
    } else {
        std::cout << "\nMinimum distance between points (x2, y2) and (x3, y3): " << minDistance << std::endl;
    }
}

int main()
{
    task1();
    
    return 0;
}
