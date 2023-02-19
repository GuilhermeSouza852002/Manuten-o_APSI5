#include <iostream>

using namespace std;

const int TAM = 5; 	//Variavel global que define o tamanho do vetor

typedef struct{		//Estrutura Data
	
    int dia;
    int mes;
    int ano;
    
}Data;

void captura_datas(Data *ptdatas)	//Função para capturar datas através de um ponteiro junto a um ponteiro auxiliar
{
	int i;
	Data *ptAux = ptdatas; 			//Ponteiro auxiliar aponta para ponteiro datas
	
	for(i=0; i<TAM; i++)			//Entra em um laço baseando no tamanho do vetor
	{
		cout << "Digite o dia " << i+1 << ": ";
			_flushall(); 			//Limpar buffers
		cin >> ptAux->dia;
		
		cout << "Digite o mes " << i+1 << ": ";
			_flushall();	
		cin >> ptAux->mes;
		
		cout << "Digite o ano " << i+1 << ": ";
			_flushall();			
		cin >> ptAux->ano;
		
		ptAux = ptAux + 1;			//Incrementa o ponteiro auxiliar para passar para proxima linha
		cout << "\n" << endl;
	}
}

void mostrardata(Data *ptdatas)		//Função para monstrar as datas
{
	Data *ptAux = ptdatas;			//Ponteiro auxiliar aponta para ponteiro datas
	
	for(int i=0; i<(TAM); i++)		//Entra em um laço baseando no tamanho do vetor
	{
		
		cout << "\tDatas->" << "\tDia: " << ptAux->dia << "\tMes: " << ptAux->mes << "\tAno: " << ptAux->ano << endl;	//Mostra o que foi armazenado dentro da estrutura através do ponteiro auxiliar
		ptAux = ptAux+1;			//Incrementa o ponteiro auxiliar para passar para proxima linha
	}
}

int main()
{
	Data ptdatas[TAM];
	captura_datas(ptdatas);		//Chamada da função
	mostrardata(ptdatas);		//Chamada da função
}


