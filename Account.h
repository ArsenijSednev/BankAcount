#pragma once

#include <string>
class BankAcount {
private:
	std::string name;
	std::string surname;
	unsigned int balansUSD;
	unsigned int balansRu;
	std::string PrivatNumber;
public:
	BankAcount();
	BankAcount(std::string fname, std::string fsurname, unsigned int fbalansUSD, unsigned int fbalansRu, std::string fPrivatNumber);

	void setName(std::string);
	void setSurname(std::string);
	void setbalansUSD(unsigned int fbalansUSD);
	void setbalansRu(unsigned int fbalansRU);
	void setPrivatNumber(std::string fPrivatNumber);
	void getbalansUSD(unsigned int);
	void getbalansRu(unsigned int);
	void getPrivatNumber(std::string);
	std::string getName();
	std::string getSurname();
	unsigned int getbalansUSD();
	unsigned int getbalansRu();
	std::string getPrivatNumber();
	void print();
	void addbalansUSD(unsigned int);
	void robbalansUSD(unsigned int);
	void addbalansRu(unsigned int);


};
