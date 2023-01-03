#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//give circle's center point(cx, cy), redius r, square's upper-left point (sx, sy), and edge lenthg e.
//the power function is the only function allowed to be used without defining it.

bool collidetec(float cx, float cy, float r, float sx, float sy, float e){
    float testX = cx;
    float testY = cy;
    
    if(cx < sx) testX = sx;
    else if(cx > sx + e) testX = sx + e;
    if(cy > sy) testY = sy;
    else if(cy < sy - e) testY = sy - e;
    
    float distX = cx - testX;
    float distY = cy - testY;
    float distance = pow((pow(distX,2)+pow(distY,2)),0.5);
    
    if(distance <= r){
        return true;
    }else{
        return false;
    }
    
}

int main()
{
    if(collidetec(7,3,1.5,1,5,4)){
        printf("is collision");
    }else{
        printf("no collision");
    }
    

    return 0;
}
