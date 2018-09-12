#include "lista_encadeada.hpp"

int main(){

    node start;
    node * sentinel;

    sentinel = createList(1, &start);

    insertElement(2, sentinel);
    insertElement(4, sentinel);
    insertElement(3, sentinel);
    insertElement(5, sentinel);

    //função da lib lista_encadeada, para exibir a lista simplesmente encadeada.
    showList(sentinel);
    cout<<"---------------"<<endl;
    swapValue(2, sentinel, 7);
    showList(sentinel);

    return 0;
}