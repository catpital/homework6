#pragma once 

#include "Itekhnica.h"

class mbttech : public Itekhnica
{
public:
    mbttech(int weight); // вес
    
    void Show() override;
protected:
    int _weight;
};

class Grill final : public mbttech
{
public:
    Grill(int power, string color);
    void Show() override;
private:
    string _color;
};

class Svch final : public mbttech
{
public:
    Svch(int weight, int power, bool invertor, string name);

    void Show() override;
private:
    bool _invertor;
    int _power;
    string _name;
    
};