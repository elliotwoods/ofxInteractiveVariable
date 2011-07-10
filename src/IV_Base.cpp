//
//  IV_Base.cpp
//  MapTools
//
//  Created by Elliot Woods on 06/03/2011.
//  Copyright 2011 Kimchi and Chips. All rights reserved.
//

#include "IV_Base.h"

IV_Base::IV_Base()
{
    IV_Dictionary::IVars.insert(this);
}

IV_Base::~IV_Base()
{
    IV_Dictionary::IVars.erase(this);
}

void IV_Base::setName(string newName)
{
    //we might have to create an event thing here
    //if we consider that we need to trigger things
    //on a name change
    //e.g. update name on a client machine
    
    name = newName;
}

//template class IV<float>;

set<IV_Base*> IV_Dictionary::IVars = set<IV_Base*>();