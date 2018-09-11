#include "lista_encadeada.hpp"

node * createList(int value_passed, node * start){
    start = (node *)malloc(sizeof(node));
    start->value = value_passed;
    start->next = NULL;
    return start;
}

void insertElement(int value_passed, node * sentinel){
    while(sentinel->next != NULL){
        sentinel = sentinel->next;
    }
    sentinel->next = (node *)malloc(sizeof(node));
    sentinel->next->value = value_passed;
    sentinel->next->next = NULL;
}