#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Produitt.h"

class Client: public Produit
{
public:
	Client();
	Client(std::string firstname, std::string secondname);
	std::string getfirstname() const;
	std::string getsecondname() const;
	std::string getID() const;
	std::string getbasket() ;
	void addbasket(Produit add);
	void deletebasket();
	void modifyQuantityProduct(Produit pr);
	void deleteProduct(Produit supp);
	~Client();

private:
	std::string m_firstname;
	std::string m_secondname;
	std::string m_ID;
	std::vector<Produit> m_basket;
};

std::ostream& operator<<(std::ostream& os, Client& client);

#endif //CLIENT_H
