//
//  Entity.cpp
//  Reatrix
//
//  Created by Lyn on 2019/7/11.
//  Copyright © 2019 Vin-Ex. All rights reserved.
//

#include "Entity.h"

NAMESPACE_REATRIX_BEGIN

SharedPtr<Entity> Entity::create()
{
    SharedPtr<Entity> obj = SharedPtr<Entity>(new Entity());
    return obj;
}

Entity::Entity()
{
    
}

Entity::~Entity()
{
    
}

void Entity::destroy(SharedPtr<Entity>& entity)
{
    entity.reset();
}

template <class T, typename ...Params> SharedPtr<T> Entity::addComponent(Params... args)
{
    
}

template <class T> SharedPtr<T> Entity::getComponent() const
{
    
}

void Entity::removeComponent(const SharedPtr<Component>& component)
{
    
}

NAMESPACE_REATRIX_END
