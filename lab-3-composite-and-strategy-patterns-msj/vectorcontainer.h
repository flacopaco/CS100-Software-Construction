#ifndef __VECTORCONTAINER_H__
#define __VECTORCONTAINER_H__
#include "strategy.h"
#include "container.h"

#include <iostream>
#include <vector>

class vectorcontainer : public Container {
    private:
    std:: vector<Base*> contain;

    public:
    vectorcontainer() : contain(0) {};
    virtual void print();
    virtual void add_element(Base* i);
    virtual void sort();
    virtual void swap(int i, int j);
    virtual Base* at(int i);
    virtual int size();

};
#endif