#include <iostream>
#include <vector>

using namespace std;

#ifndef stringList_HPP
#define stringList_HPP

class StringList
{
protected:
    struct ListNode
    {
        string str;
        ListNode *next;
        ListNode(string string1, ListNode *next1=NULL)
        {
            str=string1;
            next=next1;
        }
    };
    ListNode *head;
public:
    void add(string addStr);
    int positionOf (string posStr);
    bool setNodeVal (int nodeVal, string nodeStr);
    vector <string> getAsVector();
    StringList();
    StringList(const StringList &listStr);
    ~StringList();
};

#endif
