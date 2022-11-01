#include <iostream>
#include <string>
#include "AVL.h"
#include "produto.h"

using namespace std;

produto ProdutoInfo()
{
	int codigoProduto,qtd;
  string nome;
	float valorUnitario;
  
  cout << "Digite o codigo do produto: ";
  cin >> codigoProduto;
  cout << "Digite o nome do produto: ";
  cin >>  nome;
  cout << "Digite a quantidade de itens do produto: ";
	cin >> qtd;
	cout << "Digite o valor do produto: ";
	cin >> valorUnitario;
	produto produto(codigoProduto, nome, qtd, valorUnitario);
	return produto;

}

void InserirDados(AVL* avl)
{
	produto produto = ProdutoInfo();
	NodeAVL* node = avl->Insert(produto);
	if (node)
		cout << "Produto Inserido!\n";
	else
		cout << "Erro! O produto não pode ser inserido!\n";
}

void MostraEstoque(AVL* avl)
{
	cout << avl->TraverseInOrder() << '\n';
}

void CalculaProduto_Estoque(AVL* avl)
{
	int codigoProduto;
  
	cout << "Digite o codigo do produto: ";
	cin >> codigoProduto;

	NodeAVL* node = avl->Search(codigoProduto);
	if (!node)
	{
		cout << "Produto não foi encontrado! ";
		return;
	}
	produto produto = node->GetData();
	float valorTotal = produto.getQtd * produto.getValor;
	cout << "Dados do produto: " << produto << endl << "Valor Total: " << valorTotal;
}

void CalculaValor_Estoque()
{
	cout << "Valor total do inventario: R$:";
}


void MostraProdutosInferiores()
{
	
}



int main()
{

	AVL* avl = new AVL();

	int option = 0;
	do
	{
		cout << "-------------ESTOQUE-------------\n"
			  << "[1] Inserir e Ler dados\n"
			  << "[2] Mostrar estoque\n"
			  << "[3] Calcular valor do produto em estoque\n"
			  << "[4] Calcular valor do Estoque\n"
			  << "[5] Mostra produtos inferiores\n"
			  << "[0] Sair\n"
        <<"------------------------------------\n"
		  	<< "\nEscolha uma opção: ";
		std::cin >> option;
		std::cout << '\n';

		switch (option)
		{
		case 1:{
      InserirDados(avl);
      break;
    }
		case 2:{
      MostraEstoque(avl); 
      break;  
    }
		case 3: {
      CalculaProduto_Estoque(avl);
      break;
    }
		case 4: {
       CalculaValor_Estoque();
      break;
    }
		case 5: {
      MostraProdutosInferiores();
      break;
    }
		}

		std::cout << '\n';
	} while (option != 0);

	delete avl;
}