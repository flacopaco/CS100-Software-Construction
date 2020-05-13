#include <iostream>
#include "component.h"
#include "vectorcontainer.h"
#include "listcontainer.h"
#include "strategy.h"
#include "container.h"

using namespace std;

void vectorcontainer :: sort() {
    try {
        sort_function->sort(this);
    }
    catch(std::exception& e) {
        throw e.what();
    }
}

void vectorcontainer :: swap(int i, int j) {
    Base* temp = contain.at(i);
    contain.at(i) = contain.at(j);
    contain.at(j) = temp;
}

void vectorcontainer :: print() {
    for(unsigned i = 0; i < contain.size(); i++) {
        cout << contain.at(i)->evaluate() << ", ";
    }
    cout << endl;
}

void vectorcontainer :: size() {
    return contain.size();
}

void vectorcontainer :: add_element(Base* i) {
    contain.push_back(i);
}

Base* vectorcontainer :: at(int i) {
    return contain.at(i);
}
