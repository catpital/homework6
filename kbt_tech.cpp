#include "kbt_tech.h"

mbt_tech::mbt_tech(int power) : _power(power)
{
}

void mbt_tech::Show() { cout << "������������ ��������: " << _power << " ��" << endl; }

Holodilnik::Holodilnik(int power, int hight, int width, int deth) : mbt_tech(power), _hight(hight), _width(width), _deth(deth)
{
}

void Holodilnik::Show()
{
    mbt_tech::Show();
    cout <<"������ " << _hight << " ��" << endl;
    cout << "������ " << _width << " ��" << endl;
    cout << "������� " << _deth << " ��" << endl;
}

Washmashine::Washmashine(int power, string color, int volum) : mbt_tech(power), _color(color), _volum(volum)
{
}

void Washmashine::Show()
{
    cout << "���� " << _color << endl;
    mbt_tech::Show();
    cout << "�����������: " << _volum << " ��." << endl;
}