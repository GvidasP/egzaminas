#ifndef STATYBINIS_PRODUKTAS_H
#define STATYBINIS_PRODUKTAS_H

#include <iostream>

#include "Statybines_medziagos.h"


class Statybinis_produktas : public Statybines_medziagos
{
    public:
        Statybinis_produktas(int s = 0, int d = 0, int v = 0) : Statybines_medziagos{s, d}, vanduo{v} { };
        ~Statybinis_produktas();

        Statybinis_produktas(const Statybinis_produktas& other);
        Statybinis_produktas& operator=(const Statybinis_produktas& other);

        int Getsmelis() { return smelis; }
        int Getdruska() { return druska; }
        int GetVanduo() { return vanduo; }
        void SetVanduo(int val) { vanduo = val; }

        friend std::ostream& operator<<(std::ostream& out, const Statybinis_produktas &p) {
            out << p.smelis << " | " << p.druska << " | " << p.vanduo << std::endl;
            return out;
        }

        friend std::istream& operator>>(std::istream& in, Statybinis_produktas &p) {
            in >> p.smelis >> p.druska >> p.vanduo;
            return in;
        }

    private:
        int vanduo;
};

#endif // STATYBINIS_PRODUKTAS_H
