//
// Created by rarce on 04/28/20.
//

#ifndef SUPERDQ_H
#define SUPERDQ_H
#include <iostream>
using namespace std;



class superDeque {
private:
    int *A;
    int _front;
    int _back;
    int allocSize;
    void resize(int newSize);

public:
    superDeque();
    void push_front();
    void push_back();
    void pop_front(int val);
    void pop_back(int val);
    int front() const;
    int back() const;
    void insert(int pos, int val);
    void remove(int pos);
};


#endif //SUPERDQ_H
