#ifndef RAY_CAST_H
#define RAY_CAST_H
#include<SDL.h>
#include"Player.h"
#include"Game.h"
#include<iostream>
class Ray_cast
{
    public:
        static Ray_cast* Instance()
        {
        if(m_pRay_cast==0)
        {
        m_pRay_cast=new Ray_cast();
        }
        return m_pRay_cast;
        }
        void update();
    private:
        static Ray_cast* m_pRay_cast;
        Ray_cast(){};
        ~Ray_cast(){};
        const double view_angle=60;
        double ox,oy,angle=0,View_Limitation=5;
};
typedef Ray_cast TheRay_cast;
#endif // RAY_CAST_H