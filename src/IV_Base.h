#pragma once 
//
//  IV_Base.h
//  MapTools
//
//  Created by Elliot Woods on 06/03/2011.
//  Copyright 2011 Kimchi and Chips. All rights reserved.
//

#include <string>
#include <set>
using namespace std;

//interactive handling
class IV_Base
{
public:
    IV_Base();
    ~IV_Base();
    
    string      getName() { return name; }
    void        setName(string newName);
    
protected:
    string      name;
};



//template variable
template<typename T>
class IV : public IV_Base
{
    public:
        IV(string name) { setName(name); }
    
        T   var;
};



//dictionary class
class IV_Dictionary
{
public:
    static set<IV_Base*>   IVars;
};