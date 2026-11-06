#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double summa;
	double stavka;
	int srok;

	cout << "Это средневековывй банк" << endl;
	cout << "Введите сумму займа: ";
	cin >> summa;
	
	cout << "Введите свой процент: " << endl;
	cin >> stavka;

	cout << "Введите срок займа в годах: " << endl;
	cin >> srok;

	double pereplata = summa * stavka * srok / 100;

	double obsaksumma = summa + pereplata;

	double platezVgod = summa / srok;

	cout << endl;
	cout << "РЕЗУЛЬТАТ" << endl;
	cout << "сумма займа: " << summa << " золотых" << endl;
	cout << "переплата: " << pereplata << " золотых" << endl;
	cout << "Общая сумма: " << obsaksumma << " золотых" << endl;
	cout << "Ежегодный платеж: " << platezVgod << " золотых" << endl;

	return 0;

}