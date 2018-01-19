#include "PizzaStore.h"
#include "Pizza.h"
#include <iostream>
#include <string>

int main()
{
    PizzaStore *nyStore = new NYStylePizzaStore();
    PizzaStore *chicagoStore = new ChicagoStylePizzaStore();

    Pizza *piz = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << piz->getName() << std::endl;

    piz = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << piz->getName() << std::endl;
    return 0;
}
