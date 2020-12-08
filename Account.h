#pragma once

#include <string>
class BankAcount {
private:
	std::string name;
	std::string surname;
	float balansUSD;
	float balansRu;
	std::string PrivatNumber;
public:
	BankAcount();
	BankAcount(std::string fname, std::string fsurname, float fbalansUSD, float fbalansRu, std::string fPrivatNumber);

	void setName(std::string);
	void setSurname(std::string);
	void setbalansUSD(float fbalansUSD);
	void setbalansRu(float fbalansRU);
	void setPrivatNumber(std::string fPrivatNumber);
	void getbalansUSD(float);
	void getbalansRu(float);
	void getPrivatNumber(std::string);
	std::string getName();
	std::string getSurname();
	unsigned int getbalansUSD();
	unsigned int getbalansRu();
	std::string getPrivatNumber();
	void print();
	void addbalansUSD(float);
	void addbalansRu(float fbalansRu);
	void robbalansUSD(float);
	void kursbalansRu(float);
	void kursbalansUSD(float);

};
