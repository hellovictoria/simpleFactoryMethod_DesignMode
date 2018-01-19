#ifndef _PIZZA_H
#define _PIZZA_H
#include <string>
#include <vector>

class Pizza
{
    public:
        Pizza();
        ~Pizza();
        virtual void prepare();
        virtual void bake();
        virtual void cut();
        virtual void box();
        std::string getName();
    protected:
        std::string name;
        std::string dough;
        std::string sauce;
        std::vector<std::string> toppings;
};

class NYStyleCheesePizza : public Pizza
{
    public:
        NYStyleCheesePizza();
        ~NYStyleCheesePizza();
};

class ChicagoStyleCheesePizza : public Pizza
{
    public:
        ChicagoStyleCheesePizza();
        ~ChicagoStyleCheesePizza();
        virtual void cut();
};

#endif
