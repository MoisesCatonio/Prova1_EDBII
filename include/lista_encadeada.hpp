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
void showList(node * sentinel);
int countElements(node * sentinel);
void swapValue(int value_passed, node * sentinel, int new_value);
void mergeLists(node * sentinel_1, node * sentinel_2);

#endif