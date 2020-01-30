/*************************************************************************
 Author:Holly Switzer
 Date:5/23/17
 Description: Creation of class for CustomerProject.
 ***********************************************************************/

#ifndef CustomerProject_HPP
#define CustomerProject_HPP

class CustomerProject
{
protected:
    double hours, materials, transportation;
    
public:
    CustomerProject (double x, double y, double z);
    void setHours(double x);
    double getHours();
    void setMaterials(double x);
    double getMaterials();
    void setTransportation(double x);
    double getTransportation();
    virtual double billAmount() const=0;
};


#endif
