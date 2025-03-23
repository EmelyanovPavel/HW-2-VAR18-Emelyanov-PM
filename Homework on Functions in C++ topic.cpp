////Topic 2 - Functions in C++
////Exercise 18. 
////Develop the function f(x1, y1, x2, y2), which calculates the length of the segment from the coordinates
////of the vertices(x1, y1) and (x2, y2), and the function min(a, b), which calculates the minimum of
////the numbers a, b.Using these functions, find two of the three given points on the plane,
////the distance between which is minimal.
// 
//#include <iostream>
//#include <vector>
//#include <cmath>
//
//double len(const double x1, const double y1, const double x2, const double y2)
//{
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
//double min(const double a, const double b)
//{
//    return (a <= b) ? a : b;
//}
//
//int main()
//{
//    std::vector<std::pair<double, double>> coords;
//
//    double x, y;
//    for (int i = 0; i < 3; i++) {
//        std::cout << "Enter the coorditan of the point " << i << std::endl;
//        std::cin >> x >> y;
//        coords.push_back(std::pair<double, double>(x, y));
//    }
//
//    double line1 = len(coords.at(0).first, coords.at(0).second,
//        coords.at(1).first, coords.at(1).second);
//    double line2 = len(coords.at(1).first, coords.at(1).second,
//        coords.at(2).first, coords.at(2).second);
//    double line3 = len(coords.at(2).first, coords.at(2).second,
//        coords.at(0).first, coords.at(0).second);
//
//    double minLine = min(min(line1, line2), line3);
//
//    int m, n;
//    if (minLine == line1) {
//        m = 0;
//        n = 1;
//    }
//    else if (minLine == line2) {
//        m = 1;
//        n = 2;
//    }
//    else {
//        m = 2;
//        n = 0;
//    }
//
//    std::cout << "Minimum distination between points: ("
//        << coords.at(m).first << ", " << coords.at(m).second << ") and ("
//        << coords.at(n).first << ", " << coords.at(n).second << ")" << std::endl;
//
//    return 0;
//}

