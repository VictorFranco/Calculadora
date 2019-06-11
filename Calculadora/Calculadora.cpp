#include <iostream>
#define sumar(a,b) a+b 
#define restar(a,b) a-b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b
using namespace std;
double num1, num2;
int op;
double resultado;
bool op_seguir, stop, diferente;
double numeroD() {
	double num;
	cin >> num;
	while (cin.fail() && cin.rdstate()){
		cin.clear();
		cin.ignore();
		cout << "este no es un numero\nescribe un numero" << endl;
		cin >> num;
	}
	return num;
}
int numeroI() {
	int num;
	cin >> num;
	while (cin.fail() && cin.rdstate()) {
		cin.clear();
		cin.ignore();
		cout << "este no es un numero\nescribe un numero" << endl;
		cin >> num;
	}
	return num;
}
int main() {
	cout << "hola soy una calculadora" << endl;
	do{
		cin.clear();
		cout << "escribe el primer numero" << endl;
		num1=numeroD();
		cout << "escribe el segundo numero" << endl;
		num2 = numeroD();
		cout << "selecciona una opcion" << endl;
		cout << "1.sumar\n2.restar\n3.multiplicar\n4.dividir" << endl;
		op=numeroI();
		switch (op){
			case 1:
				resultado=sumar(num1,num2);
				break;
			case 2:
				resultado=restar(num1, num2);
				break;
			case 3:
				resultado=multiplicar(num1, num2);
				break;
			case 4:
				resultado=dividir(num1, num2);
				break;
			default:
				cout << "esa no es una opcion" << endl;
				diferente = true;
				break;
		}
		if (!diferente) {
			cout << "opcion seleccionada: " << op << endl;
			cout << "resultado: "<<resultado << endl;
		}
		else {
			diferente = false;
		}
		do{
			cout << "elige una opcion\n1.continuar\n2.parar" << endl;
			op=numeroI();
			if (op == 1) {
				op_seguir = true;
			}
			if (op == 2) {
				stop = true;
				op_seguir = true;
			}
			if (op != 1 && op != 2) {
				op_seguir = false;
			}
		} while (!op_seguir);
		cout << "opcion seleccionada: " << op << endl;
	} while (!stop);
	system("pause");
	return 0;
}