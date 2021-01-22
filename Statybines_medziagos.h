#ifndef STATYBINES_MEDZIAGOS_H
#define STATYBINES_MEDZIAGOS_H


class Statybines_medziagos
{
    public:
        Statybines_medziagos();
        Statybines_medziagos(int s, int d) : smelis{s}, druska{d} { };

        virtual ~Statybines_medziagos();

        Statybines_medziagos(const Statybines_medziagos& other);
        Statybines_medziagos& operator=(const Statybines_medziagos& other);

    protected:
        int smelis;
        int druska;

        virtual int Getsmelis() = 0;
        void Setsmelis(int val) { smelis = val; }
        virtual int Getdruska() = 0;
        void Setdruska(int val) { druska = val; }
};

#endif // STATYBINES_MEDZIAGOS_H
