#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
#include <vector>

class Produit
{
public:
	Produit();
	Produit(std::string title, std::string description, int stock, double price);
	std::string getTitle() const;
	std::string getDescription() const;
	int getStock() const;
	double getPrice() const;
	void changePrice(double& price);
	void changeQuantity(int& stock);
	~Produit();

protected:
	int m_stock;
	std::string m_title;
	double m_price;

private:
	std::string m_description;
};

std::ostream& operator<<(std::ostream& os, const Produit& produit);

#endif //PRODUIT_H

