#include "kbt_tech.h"
#include "mbttech.h"

int main()
{
    setlocale(LC_ALL, "");
    Itekhnica* breaket[4];

    breaket[0] = new Grill(2, string("Серебро"));
    breaket[1] = new Svch(5, 2500, 0, string("Panasonic"));
    breaket[2] = new Holodilnik(1500, 220, 60, 60);
    breaket[3] = new Washmashine(1000, string("Белый"),7);

    bool open = true;
    while (open)
    {
        cout << "Выберите технику : 1 - Гриль, 2 - СВЧ, 3 - Холодильник, 4 - Стиральная машина, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            breaket[0]->Show();
            break;

        case 2:
            breaket[1]->Show();
            break;

        case 3:
            breaket[2]->Show();
            break;

        case 4:
            breaket[3]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите технику от 1 до 4 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete breaket[0];
    delete breaket[1];
    delete breaket[2];
    delete breaket[3];

    return 0;
}