//
//  AxisData.h
//  NPBOT
//
//  Created by Kris Temmerman on 15/09/14.
//
//

#ifndef __NPBOT__AxisData__
#define __NPBOT__AxisData__
#include "cinder/app/AppNative.h"
#include <iostream>

using namespace ci;
using namespace ci::app;
using namespace std;


class AxisData
{
public:
    AxisData(){};
    
    void setup(int id, string name, float _stepsToUnit, int _minSteps, int maxSteps, string _unit );
    
    int targetStep;
    int currentStep;
    
    
    float stepsToUnit;
    string unit;
    string name;
    int id;
    
    
    int minSteps;
    int maxSteps;
    


};
#endif /* defined(__NPBOT__AxisData__) */