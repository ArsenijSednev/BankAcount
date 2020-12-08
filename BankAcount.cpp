#include "Account.h"
#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>
#include <string>
int main()
{
	BankAcount Person("Arseniy", "Sednev", 0, 0, "411087058");
	Person.print();
	char ch = ' ';
	cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs,u-kyrsUSD): ";
	cin >> ch;
	while (true) {

		if (ch == 'y') {
			int replenishmentUSD = 0;
			cout << "Hou much USD ?: ";
			cin >> replenishmentUSD;
			Person.addbalansUSD(replenishmentUSD);
			int replenishmentRU = 0;
			cout << "Hou much RU ?: ";
			cin >> replenishmentRU;
			Person.addbalansRu(replenishmentRU);
			Person.print();
			cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrsRu,u-kyrsUSD): ";
			cin >> ch;
			if (ch == 'r') {
				int a;
				cin >> a;
				Person.kursbalansRu(a);
				Person.print();
				cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs,u-kyrsUSD): ";
				cin >> ch;
				continue;

			}
			if (ch == 'u') {
				int a;
				cin >> a;
				Person.kursbalansUSD(a);
				Person.print();
				cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs,u-kyrsUSD): ";
				cin >> ch;
				continue;

			}
			if (ch == 'w') {
				int a;
				cin >> a;
				Person.robbalansUSD(a);
				Person.print();
				cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs,u-kyrsUSD): ";
				cin >> ch;
				continue;

			}
			return 0;

		}
		else break;

	}

	return 0;


}
