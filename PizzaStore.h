#ifndef _PIZZASTORE_H
#define _PIZZASTORE_H
#include <vector>
#include <map>
#include <string>

class Pizza;

class PizzaStore
{
    public:
        PizzaStore();
        virtual ~PizzaStore();
        Pizza* orderPizza(std::string type);
    protected:
        virtual Pizza* createPizza(std::string type)=0;
};


class NYStylePizzaStore : public PizzaStore
{
    protected:
        virtual Pizza* createPizza(std::string type);
};

class ChicagoStylePizzaStore : public PizzaStore
{
    protected:
        virtual Pizza* createPizza(std::string type);
};
#endif


