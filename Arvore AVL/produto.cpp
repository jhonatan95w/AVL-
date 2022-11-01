#include "produto.h"
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const produto& produto)

{
	os 
  << "Codigo: " << produto.getCodigo << ", "
	<< "Nome: " << produto.getNome << ", "
	<< "Quantidade: " << produto.getQtd << ", "
	<< "Valor R$: " << produto.getValor;
  
	return os;
}
produto::produto(int codigoProduto, const string& nome, int qtd, float valorUnitario)
	: getCodigo(codigoProduto)
  , getNome(nome)
  , getQtd(qtd)
  , getValor(valorUnitario)
{

}