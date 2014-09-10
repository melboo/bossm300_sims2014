//
//  myMoon.h
//  A_Orbit
//
//  Created by melbo on 03.09.14.
//
//

#pragma once

#include "ofMain.h"

class MyMoon {
public:
    
    void set(float _dst, float _intAngle);
    void update(float _step);
    
    void draw();
    
    float radius;
    float angle;
    
    ofPoint pos;
    
};