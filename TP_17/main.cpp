//
//  main.cpp
//  TP_17
//
//  Created by Vlad Gradskiy on 07.04.2024.
//  


#include <iostream>
#include "SortedArray/SortedArray.hpp"
#include "Point/Point.hpp"


int main() {
    
    // MARK: - Points Array
    
    SortedArray<Point> pointsArray(5);
    
    Point firstPoint = {3, 4, 5};
    Point secondPoint = {1, 2, 3};
    Point thirdPoint = {5, 6, 7};
    
    try {
        pointsArray.push(firstPoint);
        pointsArray.push(secondPoint);
        pointsArray.push(thirdPoint);
        
        for (size_t i = 0; i < pointsArray.size(); ++i) {
            std::cout << pointsArray[i].x << ", " << pointsArray[i].y << ", " << pointsArray[i].z << std::endl;
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    // MARK: - Ints Array

    SortedArray<int> intsArray(2);
    
    try {
        intsArray.push(2);
        intsArray.push(3);
        intsArray.push(4);
        
        for (size_t i = 0; i < pointsArray.size(); ++i) {
            std::cout << intsArray[i] << ", " << intsArray[i] << ", " << intsArray[i] << std::endl;
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}
