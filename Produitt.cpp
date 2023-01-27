#include "Produitt.h"
#include <iostream>

using namespace std;

Produit::Produit()
{
    m_title = "";
    
    m_stock = 0;
    m_description = "";
    m_price = 0.0;
}

Produit::Produit(string title, string description, int stock, double price):  m_stock(stock), m_title(title),  m_price(price), m_description(description)
{
}

string Produit::getTitle() const
{
    return m_title;
}

string Produit::getDescription() const
{
    return m_description;
}

int Produit::getStock() const
{ return m_stock; }

double Produit::getPrice() const
{ return m_price; }

void Produit::changePrice(double& price)
{
    cout << "veuillez saisir le nouveau prix svp: " << endl;
    cin >> price;
    m_price = price;
}

void Produit::changeQuantity(int& stock)
{
    cout << "veuillez saisir la nouvelle quatite: " << endl;
    cin >> stock;
    m_stock = stock;
}

Produit::~Produit()
{
}

ostream& operator<<(ostream& os, const Produit& produit)
{
    string title = "Produit: " + produit.getTitle();
    string descrip = "Description: " + produit.getDescription();
    string quantity = "Il  reste " + to_string(produit.getStock()) + " en stock";
    string price = "Le prix est de " + to_string(produit.getPrice()) + " euros";

    os << title << endl << descrip << endl << quantity << endl << price << endl;
    return os;
}
