#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <vector>
#include "Produitt.h"
#include "Clientt.h"
#include "Commandee.h"

class Magasin
{
public:
	Magasin();

	//classe produit

	void addproduct(Produit& newProduct);
	void showproduct();
	void searchproduct(Produit X);
	void changequantity(Produit X);
	void changepriceproduct(Produit X);

	//classe client
	void addClient(Client X);
	void showClient();
	void searchClient(Client X);
	void addtobasket(Client c, Produit p);
	void deletebasket(Client c, Produit p);
	void modifybasketquantity(Client c, Produit p);

	//classe commande
	void confirmcommand(Client c);
	void updateStatusCmd(unsigned int numero);
	void showCmds();
	void showCmdsClient(Client c);

private:
	Client monClient;
	std::vector<Produit> m_products;
	std::vector<Client> m_clients;
	std::vector<Commande> m_commands;
};

#endif //MAGASIN_H
