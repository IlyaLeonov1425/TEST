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
    std::cout << "�� � ������, ������� ������� � ����������� ����." << std::endl;
    std::cout << "���� ������ � ��������� ������, �� ������ ���������!" << endl;
    std::cout << "�� ������ ����������� � ����������� �� ����� ����." << endl;
    std::cout << "�� ������ ������� � �������, ���� ��������?\n" << endl;
}

void chouse_weapon() {
    std::cout << "�� ������ ������� � �������.\n" << std::endl;
    std::cout << "��� ��������?" << std::endl;
    cin >> chouse.weapon;
    std::cout << chouse.weapon << std::endl;

}

void room1() {
    cout << "\n�� ���������� � ������ ��������. �� ������ ����� ������ ����������." << endl;
    cout << "������� �� ������ ����� � ��������, ������� ����." << endl;
    cout << "���� �� ������ �����? (������/����): ";
    string choice;
    cin >> choice;

    if (choice == "������" && chouse.weapon == "�������") {
        cout << "�� ���������� ����� � �������� ������ ����������." << endl;
        cout << "��� ����� ����. ����� �� ������� �����..." << endl;
        cout << "�� ���������� � ������ ���������!" << endl;
        room1();
    }
    else if (choice == "����") {
        cout << "�� ����������� ���� � ��������� � ������." << endl;
        cout << "����� �����, � �� ��������� ����, ���������� � ����..." << endl;
        cout << "��� ����� ������� �������, ��� ������ ������." << endl;
        room2();
    }
    else {
        cout << "�������, ����� ������� �����������: ������ ��� ����." << endl;
        room1();
    }
}

void room2() {
    cout << "\n� ������� ����� ������, ��������� ������." << endl;
    cout << "�� ������ ����������� ������ ������ ��� ����� �����." << endl;
    cout << "��� �� ��������? (������/�����): ";
    string choice;
    cin >> choice;

    if (choice == "������") {
        cout << "�� ������� � ������, � ��� �������� �����������!" << endl;
        cout << "�� � ������ ��������� �������, �� ���������� ����������� � �����." << endl;
        cout << "�� ������ � ���� ������������ ��������. ���� ��������!" << endl;
    }
    else if (choice == "�����") {
        cout << "�� �������� �����, ������� �� �����!" << endl;
        cout << "�����������, �� ��������� �� ������������ ����!" << endl;
    }
    else {
        cout << "����������, ��������: ������ ��� �����." << endl;
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