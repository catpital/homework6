#include "kbt_tech.h"

mbt_tech::mbt_tech(int power) : _power(power)
{
}

void mbt_tech::Show() { cout << "Потребляемая мощность: " << _power << " Вт" << endl; }

Holodilnik::Holodilnik(int power, int hight, int width, int deth) : mbt_tech(power), _hight(hight), _width(width), _deth(deth)
{
}

void Holodilnik::Show()
{
    mbt_tech::Show();
    cout <<"Высота " << _hight << " см" << endl;
    cout << "Ширина " << _width << " см" << endl;
    cout << "Глубина " << _deth << " см" << endl;
}

Washmashine::Washmashine(int power, string color, int volum) : mbt_tech(power), _color(color), _volum(volum)
{
}

void Washmashine::Show()
{
    cout << "Цвет " << _color << endl;
    mbt_tech::Show();
    cout << "Вместимость: " << _volum << " кг." << endl;
}