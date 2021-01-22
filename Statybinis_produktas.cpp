#include "Statybinis_produktas.h"

Statybinis_produktas::Statybinis_produktas(const Statybinis_produktas& other) {
            smelis = other.smelis;
            druska = other.druska;
            vanduo = other.vanduo;
};

Statybinis_produktas::Statybinis_produktas& operator=(const Statybinis_produktas& other) {
            smelis = other.smelis;
            druska = other.druska;
            vanduo = other.vanduo;
            return *this;
};

Statybinis_produktas::~Statybinis_produktas()
{
    //dtor
}
