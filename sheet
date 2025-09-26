#include <iostream>		// 'include' para incluir bibliotecas
#include <string>


// A função 'main' é o ponto de partida de todo programa C++,
// Programa Lê tudo que está dentro do main e executa.

int main()
{
	int x = 0;			 // Inicializa x para evitar uso de memória não inicializada



	int full_number = 2; 					// int = Numero inteiro [sem casas decimais e Pode ser negativo]
		unsigned int positive_number = 5;		// unsigned int = Numero inteiro positivo (sem sinal)
	float decimal_number = 5.99f;			// float = Numero decimal precisa do 'f' no final se não ele é double
	double large_decimal = 19.99;			// double = Numero decimal maior


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
	MyInt %= 4;			// MyInt = MyInt % 5 (resto da divisão) [10/3 %= 1]

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

		int Array1[10]; // Corrigido para 10 elementos
		for (int i = 0; i < 10; i++) {											// for = para (loop com contador) (i++ = i = i + 1)
			Array1[i] = i;														// Atribuição de valor ao array
		}
		for (int i = 0; i < 10; i++) {											// Loop para imprimir os valores do array
			std::cout << Array1[i] << std::endl;								// Imprime o valor do array na posição i
		}
	}

	// Removido system("pause"); pois não é padrão C++
	return 0;
}
