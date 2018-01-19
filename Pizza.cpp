#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{
}

Pizza::~Pizza()
{
}

void Pizza::prepare()
{
    std::cout << "Preparing " << this->name << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings:";
    for(auto iter=toppings.begin(); iter!=toppings.end(); iter++)
    {
        std::cout << " " << *iter;
    }
    std::cout << std::endl;
}

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

std::string Pizza::getName()
{
    return this->name;
}

NYStyleCheesePizza::NYStyleCheesePizza()
{
    this->name = "NY Style Sauce and Cheese Pizza";
    this->dough = "Thin Crust Dough";
    this->sauce = "Marinara Sauce";

    (this->toppings).push_back("Grated Reggiano Cheese");
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{
}

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    this->name = "Chicago Style Deep Dish Cheese Pizza";
    this->dough = "Extra Thick Crust Dough";
    this->sauce = "Plum Tomato Sauce";

    (this->toppings).push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
}

void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

