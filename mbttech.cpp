
#include "mbttech.h"


mbttech::mbttech(int weight) : _weight(weight)
{
}

void mbttech::Show()
{
    cout << "���: " << _weight<< " ��." << endl;
}


Grill::Grill(int weight, string color) : mbttech(weight), _color(color)
{
}

void Grill::Show()
{
    cout << "���� " << _color << endl;
    mbttech::Show();
}

Svch::Svch(int weight, int power, bool invertor, string name) : mbttech(weight), _power(power), _invertor(invertor), _name(name)
{
}

void Svch::Show()
{
    cout << "����� " << _name << endl;
    //cout << "���: " << _weight << " ��." << endl;
    mbttech::Show();
    cout << "��������: " << _power <<" ��" << endl;
    if (_invertor == true)
        cout << "�������� ���� " << endl;
    else cout << "��������� ���" << endl;
}








