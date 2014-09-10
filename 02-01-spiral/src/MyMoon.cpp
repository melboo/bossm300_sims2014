//
//  MyMoon.cpp
//  A_Orbit
//
//  Created by Patricio Gonzalez Vivo on 9/3/14.
//
//

#include "MyMoon.h"

void MyMoon::set(float _dist, float _intAngle){
    radius =_dist;
    angle = _intAngle;
}

void MyMoon::update(ofPoint _center){
    
    angle += 0. 1;
    radius += 0.1;
    
    x = _center.x + radius * cos(angle);
    y = _center.y + radius * sin(angle);
    
    tail.push_back(*this);
    
//    if(tail.size()>200){
//        tail.erase(tail.begin());
//    }
}

void MyMoon::draw(){
    ofPushStyle();
    ofNoFill();
    ofBeginShape();
    
//    for (int i = 0; i < tail.size(); i++) {
//        ofVertex(tail[i]);
//    }

//    for (ofPoint it: tail) {
//        ofVertex(it);
//    }
    
    for (auto &it: tail) {
        ofVertex(it);
    }
    
    ofEndShape(false);
    ofPopStyle();
    
    ofRect(*this,3,3);
}