#include "Account.h"
#include <iostream>
#include <fstream>

BankAcount::BankAcount() {
	surname = "";
	name = "";
	balansUSD = 0;
	balansRu = 0;
	PrivatNumber = "";

}
BankAcount::BankAcount(std::string fname, std::string fsurname, float  fbalansUSD, float  fbalansRu, std::string fPrivatNumber) {
	name = fname;
	surname = fsurname;
	balansUSD = fbalansUSD;
	balansRu = fbalansRu;
	PrivatNumber = fPrivatNumber;

}
void BankAcount::setName(std::string fname) { name = fname; }
void BankAcount::setSurname(std::string fsurname) { surname = fsurname; }
void BankAcount::setbalansUSD(float  fbalansUSD) { balansUSD = fbalansUSD; }
void BankAcount::setbalansRu(float  fbalansRu) { balansRu = fbalansRu; }
void BankAcount::setPrivatNumber(std::string fPrivateNumber) { PrivatNumber = fPrivateNumber; }
void BankAcount::getbalansUSD(float ) { ; }
void BankAcount::getbalansRu(float )
{
}
std::string BankAcount::getName() { return name; }
std::string BankAcount::getSurname() { return surname; }
unsigned int BankAcount::getbalansUSD() { return balansUSD; }
unsigned int BankAcount::getbalansRu() { return balansUSD; }
std::string BankAcount::getPrivatNumber() { return PrivatNumber; }
void BankAcount::print() {
	std::cout << "Name: " << name << std::endl << "Surname: " << surname << std::endl << "balansUSD: " << balansUSD << std::endl << "balansRu: " << balansRu << std::endl << "PrivateNumber: " << PrivatNumber << std::endl;
}
void BankAcount::kursbalansRu(float  fbalansUSD) {
	std::cout << "transferred  " << balansRu << std::endl;
	balansUSD -= fbalansUSD;
	balansRu = fbalansUSD * 73.43;

	std::cout << std::endl;
}
void BankAcount::kursbalansUSD(float  fbalansRU) {
	std::cout << "transferred  " << balansRu << std::endl;
	balansRu = balansRu - fbalansRU;
	balansUSD = fbalansRU / 73.43;
	std::cout << std::endl;
}
void BankAcount::addbalansUSD(float  fbalansUSD) {
	std::cout << "Add  " << fbalansUSD << std::endl;
	balansUSD += fbalansUSD;
	std::cout << std::endl;
}
void BankAcount::addbalansRu(float  fbalansRu) {
	std::cout << "Add " << fbalansRu << std::endl;
	balansRu += fbalansRu;
	std::cout << std::endl;
}
void BankAcount::robbalansUSD(float  fbalansUSD) {
	if (fbalansUSD < balansUSD) {
		std::cout << "Filmed  " << fbalansUSD << std::endl;
		balansUSD -= fbalansUSD;

	}
	else
		std::cout << "Error: insufficient funds" << std::endl;
}
void BankAcount::kursbalansUSD(float fUSD) {
	std::ifstream inputFile;
	inputFile.open("courses.txt");
	if (inputFile.is_open()){
		std::string str;
			inputFile >> str;
			int usdToRu = stoi(str);
			int sumToTakeOffRu = fUSD * usdToRu;
			if (sumToTakeOffRu <=  balansRu) {
				this->addbalansRu(sumToTakeOffRu);
				this->addbalansUSD(fUSD);
			}
			else std::cout << "Error: insufficient funds " << std::endl;
	}
	else { std::cout << "Error,cant open file " << std::endl; }

}

