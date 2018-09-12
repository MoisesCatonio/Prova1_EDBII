#include "lista_encadeada.hpp"

int main(){

    node start_1;
    node * sentinel_1;

    node start_2;
    node * sentinel_2;

    sentinel_1 = createList(1, &start_1);

    sentinel_2 = createList(100, &start_2);

    insertElement(2, sentinel_1);
    insertElement(4, sentinel_1);
    insertElement(3, sentinel_1);
    insertElement(5, sentinel_1);

    insertElement(200, sentinel_2);
    insertElement(400, sentinel_2);
    insertElement(300, sentinel_2);
    insertElement(500, sentinel_2);

    //função da lib lista_encadeada, para exibir a lista simplesmente encadeada.
    showList(sentinel_1);
    cout<<"---------------"<<endl;
    swapValue(2, sentinel_1, 7);
    showList(sentinel_1);
    cout<<"---------------"<<endl;

    mergeLists(sentinel_1, sentinel_2);

    showList(sentinel_1);

    return 0;
}