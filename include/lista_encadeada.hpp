#ifndef _encadeada_
#define _encadeada_

#include <iostream>

using namespace std;

struct node{

    int value;
    node * next;

};
node * createList(int value_passed, node * sentinel);
void insertElement(int value_passed, node * sentinel);

#endif