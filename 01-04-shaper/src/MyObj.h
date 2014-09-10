

#pragma once

#include "ofMain.h"

class MyObj {
public:
    
    void setSrc(float _x, float _y);
    void setDst(float _x, float _y);
    void setSize(float _w, float _h);
    void setColor(float _r, float _g, float _b);
    
    
    void updatePct(float _pct); // _pct = [0.0 - 1.0]
    void powUpdatePct(float _pct, float _shaper);
    void powUpdateColor(float _pct, float _shaper);
    void powUpdateSize(float _pct, float _shaper);
    
    void draw();
    
private:
    ofPoint src, dst;
    ofPoint pos;
    ofColor color;
    ofPoint size;
};