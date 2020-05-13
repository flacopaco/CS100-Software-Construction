#ifndef __LISTCONTAINER_H__
#define __LISTCONTAINER_H__

#include "strategy.h"
#include "container.h"
#include <iostream>
#include <iterator>

using namespace std;

class listcontainer:public Container {
  private:
    list<Base*> contain;
  public:
    listcontainer():contain(0){};
    virtual void print();
    virtual void add_element(Base* i);
    virtual void sort();
    virtual void swap(int i, int j);
    virtual Base* at(int i);
    virtual int size();
};
#endif
