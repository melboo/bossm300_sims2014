//
//  MyObj.cpp
//  00_test
//
//  Created by melbo on 8/27/14.
//
//

#include "MyObj.h"

void MyObj::setSrc(float _x, float _y){
    src.set(_x,_y);
    
}

void MyObj::setDst(float _x, float _y){
    dst.set(_x, _y);
    
}

void MyObj::updatePct(float _pct){
    
    pos.x = ((1.0 - _pct) * src.x) + (_pct * dst.x);
    pos.y = ((1.0 - _pct) * src.y) + (_pct * dst.y);
    
    
    //pos = ((1.0 - _pct) * src) + (_pct * mouseX);
}

void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float powPct = pow(_pct, _shaper);
    pos = dst * powPct + src *(1.0-powPct);
}

void MyObj::draw(){
    
//    ofSetColor(255, 0, 0);
    
    ofSetColor(255,255,255,200);
    ofLine(src, dst);
    
    ofSetColor(ofColor::red);
    ofCircle(pos, 10);
    
    
}