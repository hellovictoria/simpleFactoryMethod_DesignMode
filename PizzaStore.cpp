#include "PizzaStore.h"
#include "Pizza.h"
#include <utility>
#include <iostream>

enum e_pizzaType
{
        e_cheese,e_pepperoni,e_clam,e_veggie
};

std::vector<std::string> vstr_pizzaType = {"cheese","pepperoni","clam","veggie"};
std::map<std::string,enum e_pizzaType> map_pizzaType;


PizzaStore::PizzaStore()
{
}

PizzaStore::~PizzaStore()
{
}

Pizza* PizzaStore::orderPizza(std::string type)
{
    Pizza *piz;
    piz = createPizza(type);

    piz->prepare();
    piz->bake();
    piz->cut();
    piz->box();

    return piz;
}

void setMap_pizzaType()
{
    enum e_pizzaType j=e_cheese;
    for(auto iter=vstr_pizzaType.begin();iter!=vstr_pizzaType.end();iter++)
    {
        map_pizzaType.insert(std::pair<std::string,e_pizzaType>(*iter,j));
        j=(enum e_pizzaType)(j+1);
    }

    for(auto itr=map_pizzaType.begin(); itr!= map_pizzaType.end();itr++)
    {
        std::cout << (*itr).first << " " << (*itr).second  << std::endl;
    }
}

Pizza* NYStylePizzaStore::createPizza(std::string type)
{
    Pizza *piz=NULL;
    switch(map_pizzaType[type])
    {
        case e_cheese:
            piz = new NYStyleCheesePizza();break;
        case e_pepperoni:
            //piz = new NYStylePepperoniPizza();break;
        case e_clam:
            //piz = new NYStyleClamPizza();break;
        case e_veggie:
            //piz = new NYStyleVeggiePizza();break;
        default:
            break;
    }
    return piz;
}

Pizza* ChicagoStylePizzaStore::createPizza(std::string type)
{
    Pizza *piz=NULL;
    switch(map_pizzaType[type])
    {
        case e_cheese:
            piz = new ChicagoStyleCheesePizza();break;
        case e_pepperoni:
            //piz = new ChicagoStylePepperoniPizza();break;
        case e_clam:
            //piz = new ChicagoStyleClamPizza();break;
        case e_veggie:
            //piz = new ChicagoStyleVeggiePizza();break;
        default:
            break;
    }
    return piz;
}
