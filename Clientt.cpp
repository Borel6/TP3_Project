#include "Clientt.h"
#include "Produitt.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;


Client::Client()
{
	m_firstname = "";
	m_secondname = "";
	m_ID = "";
}

Client::Client(string firstname, string secondname): m_firstname(firstname), m_secondname(secondname)
{
}

string Client::getfirstname() const
{  return m_firstname;  }

string Client::getsecondname() const
{  return m_secondname; }

string Client::getID() const
{  return m_firstname + "." + m_secondname; }

string Client::getbasket()
{
	if (m_basket.empty()) {
		return(" desole, panier vide.");}
	else
	{
      for (int i = 0; i < m_basket.size(); i++) {

			cout << m_basket[i] << endl; }
	}
}

void Client::addbasket(Produit add)
{ m_basket.push_back(add); }

void Client::deletebasket()
{  m_basket.clear(); }

void Client::modifyQuantityProduct(Produit pr)
{
	int nouvellequantite = 0;
	cout << "veuillez entrer la nouvelle qantite svp: " << endl;
	cin >> nouvellequantite;
	m_stock = nouvellequantite;
}

void Client::deleteProduct(Produit supp)
{
	string title = supp.getTitle();
	string desc = supp.getDescription();
	int stock = supp.getStock();
	double price = supp.getPrice();
}

Client::~Client()
{
}


ostream& operator<<(ostream& os, Client& client)
{
	string secondname = "Prenom: " + client.getsecondname();
	string firstname = "Nom: " + client.getfirstname();
	string ID = "ID : " + client.getID();
	string basket = "Son panier est compose de: " ;

	os << secondname << endl << firstname << endl << ID << endl << basket << endl;
	return os;
	client.getbasket();
}

