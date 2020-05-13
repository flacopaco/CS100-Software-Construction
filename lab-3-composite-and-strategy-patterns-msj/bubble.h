#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include <iostream>
#include "strategy.h"
#include "container.h"

using namespace std;

class bubble::public Sort {
    public:
        bubble();

        void sort(Container* container) {
            int i;
            int j;
            for(i = 0; i < container->size(); i++) {
                for(j = 0; j < container->size() - i; j++) {
                    if(container + j > container + j + 1) {
                        swap(&container + j, &container + j + 1);
                    }
                }
            }
        }
};

bubble::bubble() {

}

void bubble :: sort(Container* container) {

}
