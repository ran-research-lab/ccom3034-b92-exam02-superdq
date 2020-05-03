//
// Created by rarce on 04/28/20.
//

#include "superDeque.h"
#include <iostream>


superDeque::superDeque() {
    A = new int[4];
    allocSize = 4;
    _front = -1;
    _back = -1;

}

void superDeque::resize(int newSize){
    //TODO
}

void superDeque::push_front(){
    //TODO
}

void superDeque::push_back() {
    //TODO
}

void superDeque::pop_front(int val) {
    //TODO
}

void superDeque::pop_back(int val) {
    //TODO
}

int superDeque::front() const {
    //TODO
    return 0;
}

int superDeque::back() const {
    //TODO
    return 0;
}

void superDeque::insert(int pos, int val) {
    //TODO
}
void superDeque::remove(int pos) {
    //TODO
}