#pragma once 

#include "itekhnica.h"

class mbt_tech : public Itekhnica
{
public:
    mbt_tech(int power);
    void Show() override;

protected:
    int _power;
};

class Holodilnik final : public mbt_tech
{
public:
    Holodilnik(int power, int hight, int width, int deth);
    void Show() override;

private:
    int _hight;
    int _width;
    int _deth;

};

class Washmashine final : public mbt_tech
{
public:
    Washmashine(int power, string color, int volum);
    void Show() override;

private:
    string _color;
    int _volum;
};