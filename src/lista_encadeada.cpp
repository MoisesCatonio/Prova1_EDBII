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

void showList(node * sentinel){
    while(sentinel != NULL){
        cout<<sentinel->value;
        sentinel = sentinel->next;
        cout<<endl;
    }
}

int countElements(node * sentinel){
    int total = 0;

    while(sentinel != NULL){
        total = total + 1;
        sentinel = sentinel->next;
    }

    if(total == 0){
        return 0;
    } else {
        return total;
    }
    
}

void swapValue(int value_passed, node * sentinel, int new_value){
    int swapped = 0;
    while(sentinel != NULL && swapped == 0){
        if(sentinel->value == value_passed){
            sentinel->value = new_value;
            swapped = 1;
        }
        sentinel = sentinel->next;
    }
    if(swapped == 0){
         if(sentinel->value == value_passed){
            sentinel->value = new_value;
        }
    }
}

void mergeLists(node * sentinel_1, node * sentinel_2){
    while(sentinel_2 != NULL){
        insertElement(sentinel_2->value, sentinel_1);
        sentinel_2 = sentinel_2->next;
    }
}