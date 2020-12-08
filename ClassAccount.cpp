#include "Account.h"
#include <iostream>
BankAcount::BankAcount() {
	surname = "";
	name = "";
	balansUSD = 0;
	balansRu = 0;
	PrivatNumber = "";

}
BankAcount::BankAcount(std::string fname, std::string fsurname, unsigned int fbalansUSD, unsigned int fbalansRu, std::string fPrivatNumber) {
	name = fname;
	surname = fsurname;
	balansUSD = fbalansUSD;
	balansRu = fbalansRu;
	PrivatNumber = fPrivatNumber;

}
void BankAcount::setName(std::string fname) { name = fname; }
void BankAcount::setSurname(std::string fsurname) { surname = fsurname; }
void BankAcount::setbalansUSD(unsigned int fbalansUSD) { balansUSD = fbalansUSD; }
void BankAcount::setbalansRu(unsigned int fbalansRu) { balansRu = fbalansRu; }
void BankAcount::setPrivatNumber(std::string fPrivateNumber) { PrivatNumber = fPrivateNumber; }
void BankAcount::getbalansUSD(unsigned int) { ; }
void BankAcount::getbalansRu(unsigned int)
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
void BankAcount::addbalansRu(unsigned int fbalansUSD) {
	std::cout << "Proshy " << balansRu << std::endl;
	balansUSD -= fbalansUSD;
	balansRu = fbalansUSD * 73;
	std::cout << std::endl;
}
void BankAcount::addbalansUSD(unsigned int fbalansUSD) {
	std::cout << "Add " << fbalansUSD << std::endl;
	balansUSD += fbalansUSD;
	std::cout << std::endl;
}
void BankAcount::robbalansUSD(unsigned int fbalansUSD) {
	if (fbalansUSD < balansUSD) {
		std::cout << "Filmed  " << fbalansUSD << std::endl;
		balansUSD -= fbalansUSD;

	}
	else
		std::cout << "Error: insufficient funds" << std::endl;
}
