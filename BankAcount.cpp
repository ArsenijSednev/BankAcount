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
	cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs): ";
	cin >> ch;
	while (true) {

		if (ch == 'y') {
			int replenishmentUSD = 0;
			cout << "Hou much ?: ";
			cin >> replenishmentUSD;
			Person.addbalansUSD(replenishmentUSD);
			Person.print();
			cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs): ";
			cin >> ch;
			if (ch == 'r') {
				int a;
				cin >> a;
				Person.addbalansRu(a);
				Person.print();
				cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs): ";
				cin >> ch;
				continue;

			}
			if (ch == 'w') {
				int a;
				cin >> a;
				Person.robbalansUSD(a);
				Person.print();
				cout << "(enter your choice, y - yes, n - no,w - conclusion,r-kyrs): ";
				cin >> ch;
				continue;

			}


		}
		else break;

	}

	return 0;


}
