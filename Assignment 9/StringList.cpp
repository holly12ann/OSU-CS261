/*******************************************************************************************
 Author: HOLLY SWITZER
 Date: 6/2/17
 Description: Simple linked class implementation.
 *******************************************************************************************/

#include "StringList.hpp"
#include <iostream>
#include <vector>
#include <string>


void StringList::add(string addStr)
{
    //list is empty
    if (head==NULL)
        head= new ListNode(addStr);
    
    //list is not empty
    else
    {
        ListNode *ptr=head;
        while (ptr->next !=NULL)
            ptr=ptr->next;
        
        ptr->next= new ListNode(addStr);
    }
};

int StringList::positionOf (string posStr)
{
    ListNode *ptr=head;
    int pos=0;
    
    //list is not empty
    while (ptr != NULL)
    {
        if (ptr->str==posStr)
            return pos;
        
        ptr=ptr->next;
        pos++;
    }
    
    return pos;
};

bool StringList::setNodeVal (int nodeVal, string nodeStr)
{
    ListNode *ptr=  head;
    int index=0;
    
    //list is not empty
    while (ptr != NULL)
    {
        if (index== nodeVal)
        {
            ptr->str=nodeStr;
            return true;
        }
        
        if (index>nodeVal)
            return false;
        
        ptr= ptr->next;
        index++;
    }
    
    return false;
};

vector <string> StringList::getAsVector()
{
    ListNode *ptr=head;
    vector<string> vectListStr;
    
    //list is not empty
    while (ptr != NULL)
    {
        vectListStr.push_back(ptr->str);
        ptr=ptr->next;
    }
    
    return vectListStr;
};

StringList::StringList()
{
    head=NULL;
};

StringList::StringList(const StringList &listStr)
{
    ListNode *ptr=listStr.head;
    
    //list is not empty
    while (ptr != NULL)
    {
        add(ptr->str);
        ptr=ptr->next;
    }
    
};

StringList::~StringList()
{
    //beginning
    ListNode *ptr=head;
    
    while (ptr !=NULL)
    {
        //track nodes to delete
        ListNode *track = ptr;
        
        //move ptr to next node
        ptr=ptr->next;
        
        //delete the node/track
        delete track;
    }
};
