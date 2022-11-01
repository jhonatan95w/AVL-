#ifndef __produto_H__
#define __produto_H__

#include <string>
#include <ostream>

using namespace std;

struct produto
{
	produto(int codigoProduto, const string& nome, int qtd, float valorUnitario);
	int getCodigo, getQtd;
	string getNome;
	float getValor;
};

ostream& operator<<(ostream& os, const produto& produto);

#endif