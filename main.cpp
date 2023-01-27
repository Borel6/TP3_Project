#include <iostream>
#include <string>
#include <vector>
#include "Magasinn.h"
#include "Produitt.h"
#include "Clientt.h"
#include "Commandee.h"

using namespace std;

int main()
{
	Magasin S;

	Client clt1("Mohamed", "azari");
	Client clt2("styve", "borel");
	Client clt3("sara", "sari");

	Produit PS3("PS3", "Console de jeu de marque Sony", 13, 785.20);
	Produit Macbook("Mac PC", "Ordinateur portable", 2, 1699.49);
	Produit Airpods("Airpods 2", "Apple Airpods 2", 250, 190.00);

	unsigned int choix = 0;

	do {
		cout << "      ** Menu principal   " << endl;
		cout << "(1) Gestion du magasin" << endl;
		cout << "(2) Gestion des utilisateurs" << endl;
		cout << "(3) Gestion des commandes" << endl;
		cout << "(4) Quitter le menu" << endl;

		cin >> choix;

		switch (choix) {
		case 1:
		{
			unsigned int cchoice = 0;
			cout << "      **Gestion du magasin   " << endl;
			cout << "1) Ajouter produit au magasin" << endl;
			cout << "2) Afficher tous les produits" << endl;
			cout << "3) Chercher un produit " << endl;
			cout << "4) Mettre a jour la quantite d'un produit" << endl;
			cout << "5) Mettre a jour le prix d'un produit" << endl;
			cout << "6) Revenir au menu principal " << endl;
			cin >> cchoice;

			switch (cchoice) {
			case 1:
			{
				S.addproduct(PS3);
				S.addproduct(Macbook);
				S.addproduct(Airpods);
				break;
			}
			case 2:
			{
				S.showproduct();
				break;
			}
			case 3:
			{

				S.searchproduct(PS3);
				break;
			}
			case 4:
				S.changequantity(PS3);
				break;

			case 5:
				S.changepriceproduct(PS3);
				break;

			case 6:
				break;
			}
			break;
		}
		case 2:
		{
			unsigned int cchoice = 0;

			cout << "     **Gestion des clients  " << endl;
			cout << "1) Ajouter un client au magasin" << endl;
			cout << "2) Afficher tous les clients" << endl;
			cout << "3) Chercher un client " << endl;
			cout << "4) Ajouter un produit au panier d'un client " << endl;
			cout << "5) Supprimer un produit au panier d'un client " << endl;
			cout << "6) Mettre a jour la quantite d'un produit du panier d'un client" << endl;
			cout << "7) Afficher le panier du client" << endl;
			cout << "8) Revenir au menu principal " << endl;
			cin >> cchoice;

			switch (cchoice) {
			case 1:
			{
				S.addClient(clt1);
				S.addClient(clt2);
				S.addClient(clt3);
				break;
			}
			case 2:
			{
				S.showClient();
				break;
			}
			case 3:
			{
				S.searchClient(clt3);
				break;
			}
			case 4:
			{
				S.addtobasket(clt3, PS3);
				S.addtobasket(clt3, Airpods);
				break;
			}
			case 5:
			{
				S.deletebasket(clt3, PS3);
				break;
			}
			case 6:
			{
				S.modifybasketquantity(clt3, Airpods);
				break;
			}
			case 7:
			{
				clt3.getbasket();
				break;
			}
			case 8:
				break;
			}
			break;
		}
		case 3:
		{
			unsigned int cchoice = 0;

			cout << "     **Gestion des commandes   " << endl;
			cout << "1) Valider une commande" << endl;
			cout << "2) Mettre a jour le statut d'une commande" << endl;
			cout << "3) Afficher toutes les commandes passees " << endl;
			cout << "4) Afficher toutes les commandes d'un client" << endl;
			cout << "5) Revenir au menu principal " << endl;
			cin >> cchoice;

			switch (cchoice) {
			case 1:
			{
				S.confirmcommand(clt3);
				break;
			}
			case 2:
			{
				unsigned int nCmd = 0;
				cin >> nCmd;

				S.updateStatusCmd(nCmd);
				break;
			}
			case 3:
			{
				S.showCmds();
				break;
			}
			case 4:
			{
				S.showCmdsClient(clt3);
				break;
			}
			case 5:
				break;
			}
			break;
		}
		}
	}
	// Quitter le menu
	while (choix != 4);

	system("PAUSE");
	return EXIT_SUCCESS;



	return 0;
}
