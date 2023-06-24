#include <iostream>

#include "view/view.hpp"
#include "controller/controller.hpp"

using namespace std;

int main()
{
    // View::clearScreen();
    Controller c;
    c.loadCollections();
    Controller::menuPrincipal();

    return 0;
}
