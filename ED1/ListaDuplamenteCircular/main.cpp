#include <iostream>
#include "DoubleCircList.h"
#include "Menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    DoubleCircList* dcl;

    dcl = initializer();

    dcl = addStart(dcl, 23);
    dcl = addStart(dcl, 12);
    dcl = addStart(dcl, 25);
    dcl = addStart(dcl, 3);
    dcl = addStart(dcl, 2);
    dcl = addStart(dcl, 0);

    printList(dcl);

    printListReverse(dcl);


    return 0;
}
