#include "CustomerProject.hpp"

#ifndef RegularProject_HPP
#define RegularProject_HPP

class RegularProject: public CustomerProject
{
public:
    RegularProject(double a, double b, double c):CustomerProject(a,b,c){};
    virtual double billAmount() const;
    
};

#endif
