#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;

typedef struct {
    string weapon;

}Weapon;
//drftgdf
Weapon chouse;
void introduction();
void room1();
void room2();
void chouse_weapon();

void introduction() {
    std::cout << "Вы — курьер, который застрял в заброшенном доме." << std::endl;
    std::cout << "Ваша задача — выбраться отсюда, но будьте осторожны!" << endl;
    std::cout << "Вы можете столкнуться с опасностями на своем пути." << endl;
    std::cout << "ты видишь кирпичь и бутылку, чего возьмешь?\n" << endl;
}

void chouse_weapon() {
    std::cout << "ты видишь кирпичь и бутылку.\n" << std::endl;
    std::cout << "что возьмешь?" << std::endl;
    cin >> chouse.weapon;
    std::cout << chouse.weapon << std::endl;

}

void room1() {
    cout << "\nВы находитесь в темном коридоре. На стенах видны старые фотографии." << endl;
    cout << "Впереди вы видите дверь и лестницу, ведущую вниз." << endl;
    cout << "Куда вы хотите пойти? (вперед/вниз): ";
    string choice;
    cin >> choice;

    if (choice == "вперед" && chouse.weapon == "кирпичь") {
        cout << "Вы открываете дверь и находите старую библиотеку." << endl;
        cout << "Тут очень тихо. Вдруг вы слышите шорох..." << endl;
        cout << "Вы испугались и решили вернуться!" << endl;
        room1();
    }
    else if (choice == "вниз") {
        cout << "Вы спускаетесь вниз и попадаете в подвал." << endl;
        cout << "Здесь темно, и вы замечаете тень, движущуюся в углу..." << endl;
        cout << "Вам нужно принять решение, что делать дальше." << endl;
        room2();
    }
    else {
        cout << "Пожалуй, стоит выбрать направление: вперед или вниз." << endl;
        room1();
    }
}

void room2() {
    cout << "\nВ подвале стоит старая, ржавеющая машина." << endl;
    cout << "Вы можете попробовать обойти машину или найти выход." << endl;
    cout << "Что вы выберете? (обойти/выход): ";
    string choice;
    cin >> choice;

    if (choice == "обойти") {
        cout << "Вы подошли к машине, и она внезапно запустилась!" << endl;
        cout << "Вы в панике пытаетесь убежать, но неожиданно споткнулись и упали." << endl;
        cout << "Вы попали в лапы неизвестного существа. Игра окончена!" << endl;
    }
    else if (choice == "выход") {
        cout << "Вы находите дверь, ведущую на улицу!" << endl;
        cout << "Поздравляем, вы выбрались из заброшенного дома!" << endl;
    }
    else {
        cout << "Пожалуйста, выберите: обойти или выход." << endl;
        room2();
    }
}

int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    chouse_weapon();
    introduction();
    room1();

    return 0;
}



//typedef struct {
//int a;
//int flag = 0;
//} Vedro;
//
//void primer();
//void primerdva();
//Vedro temp;
//Vedro a;
//
//
//
//void primer() {
//    cout << "10-8" << endl;
//    cin >> temp.a;
//
//    if (temp.a == 2) {
//        cout << "pravilno" << endl;
//        temp.flag = 1;
//        cout << "sledyuhii primer" << endl;
//        //primerdva();
//    }
//    else {
//        cout << "nepravilno" << endl;
//        //cout << "poprobyi esce raz";
//        //primer;
//    }
//}
//void primerdva() {
//    cout << "3+4" << endl;
//    cin >> temp.a;
//
//    if (temp.a == 7) {
//        temp.flag += 1;
//        cout << "pravilno" << endl;
//        cout << "ti reshil vse primeri";
//    }
//    else {
//        cout << "nepravilno";
//        //primerdva;
//    }
//}
//
//int main() {
//    primer();
//    primerdva();
//    cout << "resheno primerov:  " << temp.flag << endl;
//
//}