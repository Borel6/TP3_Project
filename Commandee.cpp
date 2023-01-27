#include "Commandee.h"
#include "Magasinn.h"
#include "Clientt.h"
#include "Produitt.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


Commande::Commande()
{
    m_numCmd = 0;
    m_client = "";
    m_products = {};
    m_status = false;
}





 int Commande::numCmd() const {
    return m_numCmd ;

 };
     int Commande::memory() const {
        return m_memory ;
     }
     std::string Commande::client() const{
        return m_client ;
     }
     std::vector<Produit> Commande::products() const {
        return m_products ;
     }
     bool Commande::status() const {
        return m_status ;
     }

Commande::Commande(unsigned int numCommand, string client, vector<Produit> products, bool status): m_numCmd(numCommand), m_client(client), m_products(products), m_status(status)
{

}

Commande::~Commande()
{
}

ostream& operator<<(ostream& os, const Commande& cmd)
{
    string NumCmd = "Commande numero" + to_string(cmd.numCmd());
    string IdClient = "Client: " + cmd.client() ;
    string Status = "Statut de la commande: " + to_string(cmd.status()) ;
    string Products = "Produits achetes: " ;


    os <<NumCmd << endl << IdClient << endl << Products << endl << Status << endl;

    return os;
    for (int i = 0; i < cmd.m_products.size(); i++) {

        cout << cmd.m_products[i] << endl;
    }

}
