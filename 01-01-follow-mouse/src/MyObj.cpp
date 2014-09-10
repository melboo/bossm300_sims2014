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
//    pos.x = dst.x * _pct + src.x * (1.0-_pct);
//    pos.y = dst.y * _pct + src.y * (1.0-_pct);

    //10 + .001
    //pos = dst * _pct + src *(1.0-_pct);
    
    //pos.x = ofLerp(src.x, dst.x, _pct);
    //pos.y = ofLerp(src.y, dst.y, _pct);
    //cout << dst.x << endl;
    
//    pos.x = ((1.0 - _pct) * src.x) + (_pct * dst.x);
//    pos.y = ((1.0 - _pct) * src.y) + (_pct * dst.y);
    
    
    //pos = ((1.0 - _pct) * src) + (_pct * mouseX);
    
    //pos.x = ofLerp(pos.x, dst.x, 0.02);
    //pos.y = ofLerp(pos.y, dst.y, 0.02);
    
    pos = ((1.0 - _pct) * pos) + (_pct * dst);
    cout << _pct << endl;
}

void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float powPct = pow(_pct, _shaper);
    pos = dst * powPct + src *(1.0-powPct);
}

void MyObj::draw(){
    
//    ofSetColor(255, 0, 0);
    
    
    ofSetColor(ofColor::red);
    ofCircle(pos, 10);
    
}