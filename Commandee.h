#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <vector>
#include "Produitt.h"

class Commande
{
public:
	Commande();
	Commande(unsigned int numCmd, std::string client, std::vector<Produit> products, bool status);
	friend std::ostream& operator<<(std::ostream& os, const Commande& cmd);
	~Commande();

	 int numCmd() const ;
	 int memory() const ;
	 std::string client() const;
	 std::vector<Produit> products() const ;
	 bool status() const ;

private:
	int m_numCmd;
	int m_memory;
	std::string m_client;
	std::vector<Produit> m_products;
	bool m_status;
};

#endif //COMMANDE_H
