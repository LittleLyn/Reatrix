//
//  Object.h
//  Reatrix
//
//  Created by Lyn on 2019/7/10.
//  Copyright © 2019 Vin-Ex. All rights reserved.
//

#ifndef _RTX_OBJECT_H_
#define _RTX_OBJECT_H_

#include "Common.h"
#include "SharedPtr.h"
#include "string/String.h"

NAMESPACE_REATRIX_ENGINE_BEGIN

class Object
{
public:
    Object();
    virtual ~Object();
    unsigned int getUUID() const;
    const String& getName() const;
    void setName(const String& name);
    
private:
    unsigned int m_uuid;
    String m_name;
};

NAMESPACE_REATRIX_ENGINE_END

#endif /* Object_hpp */
