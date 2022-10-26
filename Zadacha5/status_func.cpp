#include<iostream>
#include"const.h"
#include"status_func.h"
using namespace std;

void listt(int x)
{
    cout << "0.Персонаж безумен" << endl;
    cout << "1.Персонаж грустит" << endl;
    cout << "2.Персонаж голоден" << endl;
    cout << "3.Персонаж болен" << endl;
    cout << "4.Персонаж зол" << endl;
    cout << "5.Персонаж мертв" << endl;
    cout << "6.Персонаж молод" << endl;
    cout << "7.Пероснаж скучает" << endl;
    cout << "Введите одну или несколько характеристик персонажа:" << endl;
}

void choice()   
{
    int a, pr{ 0 };
    for (;;)
    {
        listt(1);
        cout << "Если все характеристики выбраны нажмите любую цифру которой нет в списке " << endl;
        cin >> a;
        switch (a)
        {
        case 0:
            pers |= maskMad;
            cout << "Ваш персонаж ментально не здоров" << endl;
            break;
        case 1:
            pers |= maskSad;
            cout << "Ваш персонаж грустный" << endl;
            break;
        case 2:
            pers |= maskHungry;
            cout << "Ваш персонаж голодный" << endl;
            break;
        case 3:
            pers |= maskIll;
            cout << "Ваш персонаж болен" << endl;
            break;
        case 4:
            pers |= maskAngry;
            cout << "Ваш персонаж злой" << endl;
            break;
        case 5:
            pers |= maskDead;
            cout << " Ваш персонаж мертв" << endl;
            break;
        case 6:
            pers |= maskYoung;
            cout << "Ваш персонаж молодой" << endl;
            break;
        case 7:
            pers |= maskBoring;
            cout << "Ваш персонаж скучает" << endl;
            break;
        default:
            pr = 1;
            break;
        }
        if (pr == 1)
        {
            break;
        }
    }
}


void madTest()
{
    string mad{};
    cout << "Хотите сходить к психиатру?(yes/no) " << endl;
    cin >> mad;

    if (mad == "yes")
    {
        pers &= ~maskMad;
        cout << "Ваш персонаж ментально здоров" << endl;
    }
    else
    {
        pers |= maskMad;
        cout << "Ваш персонаж сошел с ума" << endl;
    }
}

void sadTest()
{
    string sad{};
    cout << "Хотите прочитать анекдот?(yes/no)" << endl;
    cin >> sad;
    if (sad == "yes")
    {
        pers &= ~maskSad;
        cout << "Вашему персонажу весело" << endl;
        cout << "Штирлиц долго смотрел в одну точку, потом в другую... Двоеточие - смекнул Штирлиц.";
    }
    else
    {
        pers |= maskSad;
        cout << "Вашему персонажу грустно" << endl;
    }
}

void hungryTest()
{
    string hungry{};
    cout << "Хотите поесть и попить?(yes/no)" << endl;
    cin >> hungry;
    if (hungry == "yes")
    {
        pers &= ~maskHungry;
        cout << "Ваш пероснаж сыт и утолил жажду" << endl;
    }
    else
    {
        pers |= maskHungry;
        cout << "Ваш персонаж голодный и хочет пить";
    }
}

void illTest()
{
    string ill{};
    cout << "Хотите принять вакцину?(yes/no)" << endl;
    cin >> ill;
    if (ill == "yes")
    {
        pers &= ~maskIll;
        cout << "Ваш персонаж здоров" << endl;
    }
    else
    {
        pers |= maskIll;
        cout << "Ваш персонаж заболел" << endl;
    }
}

void angryTest()
{
    string angry{};
    cout << "Прокричаться в уединенном месте?(yes/no)" << endl;
    cin >> angry;
    if (angry == "yes")
    {
        pers &= ~maskAngry;
        cout << "Ваш персонаж теперь спокоен" << endl;
    }
    else
    {
        pers |= maskAngry;
        cout << "Ваш персонаж зол" << endl;
    }
}

void deadTest()
{
    string dead{};
    cout << "Хотите выпить эликсир реинкарнации?(yes/no)" << endl;
    cin >> dead;
    if (dead == "yes")
    {
        pers &= ~maskDead;
        cout << "Ваш персонаж жив" << endl;
    }
    else
    {
        pers |= maskDead;
        cout << "Ваш персонаж мертв" << endl;
    }
}

void youngTest()
{
    string young{};
    cout << "Хотите нанести омоложивающий крем на лицо?(yes/no)" << endl;;
    cin >> young;
    if (young == "yes")
    {
        pers |= maskYoung;
        cout << "Ваш персонаж снова молод" << endl;
    }
    else
    {
        pers &= ~maskYoung;
        cout << "Вашему персонажу пора купить тонометр " << endl;
    }
}

void boringTest()
{
    string boring{};
    cout << "Хотите повеселиться?(yes/no)" << endl;;
    cin >> boring;
    if (boring == "yes")
    {
        pers &= ~maskBoring;
        cout << "Ваш персонаж здорово проводит время" << endl;
    }
    else
    {
        pers |= maskBoring;
        cout << "Ваш персонаж заскучал" << endl;
    }
}

void statist()
{
    cout << "\tСтатистика" << endl;
    cout << "Персонаж " << ((pers & maskMad) ? "безумен" : "не безумен") << endl;
    cout << "Персонаж " << ((pers & maskSad) ? "грустит" : "радуется") << endl;
    cout << "Персонаж " << ((pers & maskHungry) ? "голоден" : "сыт") << endl;
    cout << "Персонаж " << ((pers & maskIll) ? "болеет" : "здоров") << endl;
    cout << "Персонаж " << ((pers & maskAngry) ? "зол" : "спокоен") << endl;
    cout << "Персонаж " << ((pers & maskDead) ? "мертв" : "жив") << endl;
    cout << "Персонаж " << ((pers & maskYoung) ? "молод" : "старый") << endl;
    cout << "Персонаж " << ((pers & maskBoring) ? "скучает" : "чем-то занят") << endl;
}
