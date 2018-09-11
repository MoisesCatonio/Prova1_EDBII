#include "merge.hpp"

int main(){

    node start;
    node * sentinel;

    sentinel = createList(1, &start);

    insertElement(2, sentinel);
    insertElement(4, sentinel);
    insertElement(3, sentinel);
    insertElement(5, sentinel);


    while(sentinel != NULL){
        cout<<sentinel->value;
        sentinel = sentinel->next;
        cout<<endl;
    }

    return 0;
}