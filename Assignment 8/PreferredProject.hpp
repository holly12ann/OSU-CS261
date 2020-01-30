//
//  PreferredProject.hpp
//  customerProject
//
//  Created by Holly Switzer on 5/23/17.
//  Copyright © 2017 Holly Switzer. All rights reserved.
//
#include "CustomerProject.hpp"

#ifndef PreferredProject_HPP
#define PreferredProject_HPP

class PreferredProject: public CustomerProject
{
    
    
public:
    PreferredProject(double a, double b, double c):CustomerProject(a,b,c){};
    virtual double billAmount() const;
    
};


#endif 
