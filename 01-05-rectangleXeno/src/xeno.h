#ifndef XENO_H
#define XENO_H

#include "ofMain.h"

class xeno {
    
public:
	
    xeno();
	
    void	draw();
    void	xenoToPoint(float catchX, float catchY);
	
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed of my pos
	ofColor     color;
    
};

#endif // RECTANGLE_H
