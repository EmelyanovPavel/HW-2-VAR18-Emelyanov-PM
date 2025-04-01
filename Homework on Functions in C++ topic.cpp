////Topic 2 - Functions in C++
////Exercise 18. 
////Develop the function f(x1, y1, x2, y2), which calculates the length of the segment from the coordinates
////of the vertices(x1, y1) and (x2, y2), and the function min(a, b), which calculates the minimum of
////the numbers a, b.Using these functions, find two of the three given points on the plane,
////the distance between which is minimal.
// 
//#include <iostream>
//#include <cmath>
//
////A function for calculating the distance between two points
//double f(double x1, double y1, double x2, double y2) {
//    return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
////a function for finding the minimum of two numbers
//double min(double a, double b) {
//    return (a < b) ? a : b;
//}
//
//int main() {
//    //Entering of a three points coordinates
//    double x1, y1, x2, y2, x3, y3;
//
//    std::cout << "Enter a coordinates of the first point (x1, y1): ";
//    std::cin >> x1 >> y1;
//
//    std::cout << "Enter a coordinates of the second point (x2, y2): ";
//    std::cin >> x2 >> y2;
//
//    std::cout << "Enter a coordinates of the third point (x3, y3): ";
//    std::cin >> x3 >> y3;
//
//    //Calculating all distances between points
//    double d12 = f(x1, y1, x2, y2);
//    double d23 = f(x2, y2, x3, y3);
//    double d31 = f(x3, y3, x1, y1);
//
//    //Finding a minimal distance
//    double min_distance = min(min(d12, d23), d31);
//
//    //Output a result
//    std::cout << "\nDistances between points:" << std::endl;
//    std::cout << "between 1 and 2 points: " << d12 << std::endl;
//    std::cout << "between 2 and 3 points: " << d23 << std::endl;
//    std::cout << "between 3 and 1 points: " << d31 << std::endl;
//
//    std::cout << "\nMinimal distance: ";
//
//    if (min_distance == d12) {
//        std::cout << "between points 1 and 2 (" << min_distance << ")" << std::endl;
//    }
//    if (min_distance == d23) {
//        std::cout << "between points 2 and 3 (" << min_distance << ")" << std::endl;
//    }
//    if (min_distance == d31) {
//        std::cout << "between points 3 and 1 (" << min_distance << ")" << std::endl;
//    }
//
//    return 0;
//}
