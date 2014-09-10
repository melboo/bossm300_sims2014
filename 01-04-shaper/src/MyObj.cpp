

#include "MyObj.h"

void MyObj::setSrc(float _x, float _y){
    src.set(_x,_y);
    
}

void MyObj::setDst(float _x, float _y){
    dst.set(_x, _y);
    
}

void MyObj::setColor(float _r, float _g, float _b){
    color.set(_r, _g, _b);
}

void MyObj::setSize(float _w, float _h){
    size.set(_w, _h);
}

void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float powPct = powf(_pct, _shaper);
    pos = dst * powPct + src *(1.0-powPct);
}

void MyObj::powUpdateColor(float _pct, float _shaper){
    
    float powPct = powf(_pct, _shaper);
    float foo = powPct * 100;
    color.a = int(foo);
}

void MyObj::powUpdateSize(float _pct, float _shaper){
    
    float powPct = powf(_pct, _shaper);
    float foo = powPct * 100;
    size.x = int(foo)/2;
    size.y = int(foo);
}

void MyObj::draw(){
    
//    ofSetColor(255, 0, 0);
    
    ofSetColor(255,255,255,200);
    ofLine(src, dst);
    
    ofSetColor(color.r, color.g, color.b, color.a);
    //cout << color << endl;
    ofEllipse(pos, size.x, size.y);
    
    
}