//
//  Point.hpp
//  TP_17
//
//  Created by Vlad Gradskiy on 07.04.2024.
//  


#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
    
    bool operator<(const Point& other) const {
        return x < other.x || (x == other.x && y < other.y) || (x == other.x && y == other.y && z < other.z);
    }
};

#endif /* Point_hpp */
