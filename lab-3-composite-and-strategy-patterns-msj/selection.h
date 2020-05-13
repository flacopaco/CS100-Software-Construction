#ifndef __SELECTION_H__
#define __SELECTION_H__

#include "strategy.h"
#include "listcontainer.h"
#include "container.h"

void selection::public Sort(Container* container){
  vector<Base*> temp;
  int count = 0;
  while (count < container->size()) {
    Base b = container->at(count);
    temp.push_back(b);
    count++;
  }
  int size = temp.size();
  for (int i = size - 1; i > 0; i--) {
    k = 0;
    for (j = 1; j <= i; j++) {
      if (temp.at(j)->evaluate() > temp.at(first)->evaluate()) {
        k = j;
      }
    }
    container->swap(k,i);
  }
}
