//
//  Tree.cpp
//  recursivetreeproject
//
//  Created by TtTtTtTtT on 24/02/16.
//
//

#include "Tree.hpp"

void Tree::seed1(float dotSize, float angle, float x, float y){
    //nested if statement
    if(dotSize > 1.0f){
        float r = ofRandomuf(); // gives you a random number btwn 0 & 1
        
        //first if statement will happen 98 of time
        if (r > 0.02) {
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed1(dotSize, angle - angleOffSetA, newX, newY);
        } else {
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed1(dotSize, angle - angleOffSetA, newX, newY);
            seed2(dotSize, angle + angleOffSetB, newX, newY);
            seed1(dotSize, angle - angleOffSetB, newX, newY);
        }
    }
}


void Tree:: seed2(float dotSize, float angle, float x, float y){
    if(dotSize > 1.0f){
        float r = ofRandomuf();
        if(r > 0.05){
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed2(dotSize, angle - angleOffSetA, newX, newY);
        } else {
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed2(dotSize, angle - angleOffSetA, newX, newY);
            seed1(dotSize, angle + angleOffSetB, newX, newY);
            seed2(dotSize, angle - angleOffSetB, newX, newY);
        }
        
    }
    
    
    
}