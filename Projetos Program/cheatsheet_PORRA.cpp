#include <iostream>		// '#include' para incluir bibliotecas
#include <string>
#include <vector>		//vector = Vetor (array dinâmico que pode crescer e diminuir de tamanho)



		///Desenvolver:
							// Vetores (x)
							//map
							// Ponteiros
							// switch-case
							//do-while 
							//getline(cin, string) para ler strings com espaços
							//ignore() para ignorar caracteres no buffer do teclado [ex: enter]
							//manipuladores numéricos (setprecision, fixed, scientific, hex, dec, oct)

												////	////



					// VETORES (arrays dinâmicos) - Requer a biblioteca <vector>

int vectorExample() {
	std::vector<int> myVector;								// Declaração de um vetor de inteiros (array dinâmico)
	std::vector<std::string> myStringVector;				// Declaração de um vetor de strings (array dinâmico)
	std::vector<float> myFloatVector;						// Declaração de um vetor de floats (array dinâmico)
	myVector.push_back(10);									// Adiciona o valor 10 ao final do vetor
	myStringVector.push_back("Vetor");						// Adiciona a string "Vetor" ao final do vetor
	myFloatVector.push_back(5.5f);							// Adiciona o valor 5.5 ao final do vetor
	myVector.size();										// Retorna o tamanho do vetor
	//std::_Countl_zero_lzcnt myVector.clear();	    --->	// Remove todos os elementos do vetor
	std::cout << "Primeiro elemento do vetor: " << myVector[0] << std::endl;					// Acessa o primeiro elemento do vetor
	std::cout << "Primeiro elemento do vetor de strings: " << myStringVector[0] << std::endl;	// Acessa o primeiro elemento do vetor de strings
	std::cout << "Primeiro elemento do vetor de floats: " << myFloatVector[0] << std::endl;		// Acessa o primeiro elemento do vetor de floats
	return 0;
}

struct Human {					 // struct = Estrutura de dados (objeto)

								 //struct =/= class (struct é público por padrão, class é privado por padrão) -> só da pra mudar dentro da classe

	Human () {					 // Construtor da struct (inicializa os valores)
		this->name = "NoName";	
		this->age = 0;			 //this-> = Referência ao próprio objeto
		this->height = 0.0f;
	}

		std::string name;		 // std::string = Cadeia de caracteres (string)
		int age;
		float height;
	
};

					
											// FUNÇÃO 
						// <Tipo de Retorno> <Nome da Função> (<Parâmetros>) {
						// <Corpo da Função>
						//  }


void Printar(int y) {			// void = Função que não retorna valor  ---- & Parâmetro de entrada muda o valor da variável original
	y += 10;					// Parâmetro de entrada
	std::cout << y << " Testa Funcao " << std::endl;
}

int Somar(int a, int b) {		// int = Função que retorna um valor inteiro
	return a + b;				// return = Retorna um valor da função
}




												// MAIN
						// A função 'main' é o ponto de partida de todo programa C++,
						// Programa Lê tudo que está dentro do main e executa.


int main(int argc, char** argv)												// Parâmetros de entrada do main (não usados aqui)
{	

	int x = 0;		 // Inicializa x para evitar uso de memória não inicializada

	
										// Funções
	int y = 2; 
	Printar(5);																// Chamada de função
	std::cout << y << " Funcao Teste - Valor Diferente" << std::endl;		// y não é alterado fora da função


	int z = Somar(3, 4);													// Chamada de função
	std::cout << z << " Funcao Soma" << std::endl;							// z recebe o valor retornado pela função
	std::cout << "\n";
										////	////


								
									// Struct Objeto

	Human me;							// Criação de um objeto do tipo Human (struct)

		me.name = "Sui";								// Atribuição de valor ao atributo name do objeto me
		me.age = 20;									// Atribuição de valor ao atributo age do objeto me
		me.height = 1.75f;								// Atribuição de valor ao atributo height do objeto me
		std::cout << "Nome: " << me.name << std::endl;
		std::cout << "Idade: " << me.age << " anos" << std::endl;
		std::cout << "Altura: " << me.height << " metros" << std::endl;


	std::cout << "\n";


											//VETORES

	vectorExample(); // Chamada da função de exemplo de vetor


											////	////

	std::cout << "\n";

	int full_number = 2; 						// int = Numero inteiro [sem casas decimais e Pode ser negativo]
		unsigned int positive_number = 5;		// unsigned int = Numero inteiro positivo (sem sinal)
	float decimal_number = 5.99f;				// float = Numero decimal precisa do 'f' no final se não ele é double
	double large_decimal = 19.99;				// double = Numero decimal maior


	bool boolean_value1 = true;			// bool = Verdadeiro ou Falso (true or false)
		bool boolean_value2 = false;
	if (x == 12) {                      // == comparação e retorna como true or false
	}

	char single_character = 'A';							// char = Um unico caracter (letra, numero ou simbolo) usa aspas simples ''
	char CharArray[] = "Hello";								// char array[] = Uma cadeia de caracteres (string) usa aspas duplas ""
	char CharArray2[5] = { 'H', 'e', 'l', 'l', 'o' };		//Alocação de memoria para 5 caracteres


	std::string MyString = "String";			// string = Uma cadeia de caracteres
	MyString = "Oi!"; 							// Atribuição de string
	std::cout << MyString << std::endl;
	MyString += " Tudo bem?";					//Concatenação de string
	std::cout << MyString << "\n" << std::endl;

	int MyInt = 0;
	MyInt = 15;			// Atribuição
	MyInt += 200;		// MyInt = MyInt + 200
	MyInt -= 5;			// MyInt = MyInt - 5
	MyInt++;			// MyInt = MyInt + 1
	MyInt--;			// MyInt = MyInt - 1
	MyInt *= 5;			// MyInt = MyInt * 5
	MyInt /= 2;			// MyInt = MyInt / 2
	MyInt %= 4;			// MyInt = MyInt % 5 (resto da divisão) [10/3 %= 1]v

	std::cout << "Valor de MyInt = " << MyInt << "\n" << std::endl;



					//		'cout' (console out) para enviar texto para a tela.
					//		'std::endl' é um 'fim de linha' (quebra de linha).
					//		---> "\n" quebra de linha!  --- COM ASPAS


	std::cout << "Banana" << "\n" << std::endl;

	std::cout << "Numero Inteiro = " << full_number << "\n" << std::endl;

	std::cout << "Numero Variavel = " << decimal_number << "\n" << std::endl;

	std::cout << "Tenho " << full_number << " bananas e " << decimal_number << " reais no banco." << "\n" << std::endl;

	while (x < 2) {																// while = enquanto (loop)
		std::cout << "Digite o valor de x: " << std::endl;
		std::cin >> x;															// 'cin' (console in) para ler a entrada do teclado

		if (x == 777) {
			std::cout << "Voce digitou o numero secreto!" << std::endl;
			break;																// break Sai do loop
		}
		if (x > 0) {															// if = se
			std::cout << "X eh positivo!" << std::endl;
		}
		else if (x < 0) {														// else if = senao se
			std::cout << "X eh negativo!" << std::endl;
		}
		else {																	// else = senao
			std::cout << "X eh ZERO!" << std::endl;
		}

		int Array1[10];		// Array = Vetor (coleção de variáveis do mesmo tipo) [tamanho fixo]
		for (int i = 0; i < 10; i++) {											// for = para (loop com contador) (i++ = i = i + 1)
			Array1[i] = i;														// Atribuição de valor ao array
		}
		for (int i = 0; i < 10; i++) {											// Loop para imprimir os valores do array
			std::cout << Array1[i] << std::endl;								// Imprime o valor do array na posição i
		}
	}




	// system("pause");							// PAUSA o programa 
	return 0;
}
