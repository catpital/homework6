
#include "mbttech.h"


mbttech::mbttech(int weight) : _weight(weight)
{
}

void mbttech::Show()
{
    cout << "Вес: " << _weight<< " кг." << endl;
}


Grill::Grill(int weight, string color) : mbttech(weight), _color(color)
{
}

void Grill::Show()
{
    cout << "Цвет " << _color << endl;
    mbttech::Show();
}

Svch::Svch(int weight, int power, bool invertor, string name) : mbttech(weight), _power(power), _invertor(invertor), _name(name)
{
}

void Svch::Show()
{
    cout << "Бренд " << _name << endl;
    //cout << "Вес: " << _weight << " кг." << endl;
    mbttech::Show();
    cout << "Мощность: " << _power <<" Вт" << endl;
    if (_invertor == true)
        cout << "Инвертор есть " << endl;
    else cout << "Инвертора нет" << endl;
}








