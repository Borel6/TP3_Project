#include "Magasinn.h"
#include "Produitt.h"
#include "Clientt.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Magasin::Magasin()
{
}

void Magasin::addproduct(Produit& newProduct)
{
	m_products.push_back(newProduct);
}

void Magasin::showproduct()
{
	for (int i = 0; i < m_products.size(); i++) {

		cout << m_products[i] << endl; }
}

void Magasin::searchproduct(Produit X)
{
	string product;
	cout << "Saisir le nom du produit que vous cherchez: " << endl;
	cin >> product;

	if (X.getTitle() == product) {

		cout << X << endl; }
	else
		cout << " Le produit n'est pas disponible" << endl;
}

void Magasin::changequantity(Produit X)
{
	
	string product;
	cout << "Entrez le produit que vous cherchez: " << endl;
	cin >> product;

	if (X.getTitle() == product) {
		int b = 0;
		X.changeQuantity(b);
	}
	else
		cout << "le produit n'est pas disponible." << endl;
}

void Magasin::changepriceproduct(Produit X)
{
	double newPrice = 0.0;
	X.changePrice(newPrice);
	cout << "Le prix est modifie avec succes ." << endl;
	cout << "Le nouveau prix est de " << X.getPrice() << " euros" << endl;
}

void Magasin::addClient(Client X)
{

	m_clients.push_back(X);

}

void Magasin::showClient()
{
	for (int i = 0; i < m_clients.size(); i++)
	{
		cout << m_clients[i] << endl;
	}
}

void Magasin::searchClient(Client X)
{
	string client;
	cout << "Entrez le nom du client que vous cherchiez: " << endl;
    cin >> client;

	if (X.getfirstname() == client)
	{
		cout << X << endl;
	}
	else {
		cout << "Le client que vous cherchiez est introuvable." << endl;
	}
}

void Magasin::addtobasket(Client X, Produit Y)
{
	monClient.addbasket(Y);
}

void Magasin::deletebasket(Client X, Produit Y)
{
	monClient.deleteProduct(Y);
}

void Magasin::modifybasketquantity(Client X, Produit Y)
{
	monClient.modifyQuantityProduct(Y);
}

void Magasin::confirmcommand(Client X)
{

	string panier = X.getbasket();

	if (panier == "Le panier est vide.") {
		cout << "La commande ne peut pas etre validee car le panier est vide. Veuillez le remplir." << endl;
	}
	else {
		//m_commandes.push_back();
		//updateStatutCmd(bool statut = true);

		cout << "La commande est validee. Merci pour vos achats." << endl;
	}

	X.deletebasket();
}

void Magasin::updateStatusCmd(unsigned int numero)
{

}

void Magasin::showCmds()
{

	for (int i = 0; i < m_commands.size(); i++)
	{
		cout << m_commands[i] << endl;
	}

}

/*void Magasin::showCmdsClient(Client X)
 {
	std::string client = X.getID();

	while (m_clients.size()) {
		int i = 0;
		
		if (_clients[i] == client) {
			for (int i = 0; i < m_commands.size(); i++) {
			cout << m_commands[i] << endl;
			}
		}
	}
	
 }*/

