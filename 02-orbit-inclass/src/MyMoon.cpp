//
//  myMoon.cpp
//  A_Orbit
//
//  Created by melbo on 03.09.14.
//
//

#include "MyMoon.h"


void MyMoon::set(float _dst, float _intAngle){
    radius = _dst;
    angle = _intAngle;
}

void MyMoon::update(float _step){
    angle += _angle;
    
    pos.x = radius * cos(_angle);
    pos.y = radius * sin(_angle);
}

void MyMoon::draw(){
    ofSetColor(ofColor::red);
    
    ofCircle(pos, 10);

}