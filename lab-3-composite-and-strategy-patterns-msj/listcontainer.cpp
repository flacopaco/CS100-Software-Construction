#include "component.h"
#include "vectorcontainer.h"
#include "listcontainer.h"
#include "strategy.h"
#include "container.h"
#include <iostream>
#include <algorithm>

using namespace std;

void listcontainer::sort() {
  try {
    sort_function->sort(this);
  }
  catch (std::exception& e) {
    throw e.what();
  }
}

void listcontainer::swap(int i, int j) {
  list<Base*>::iterator it = container.begin();
  list<Base*>::iterator jt = container.begin();
  int m = 0;
  while (m < i) {
    it++;
    m++;
  }
  m = 0;
  while (m < j) {
    jt++;
    m++;
  }
  std::iter_swap(it, jt);
}

void listcontainer::print() {
  for (list<Base*>::iterator it = contain.begin(); it != contain.end(); it++) {
    cout << (*it)->evaluate() << ", ";
    }
    cout << endl;
}

int listcontainer::size() {
  return contain.size();
}

void listcontainer::add_element(Base* i) {
  contain.push_back(i);
}

Base* listcontainer::at(int i) {
  int count = 0;
  for (list<Base*>::iterator it = contain.begin(); it != contain.end(); it++) {
    if (i == count) {
      return *it;
    }
    count++;
  }
  return 0;
}
