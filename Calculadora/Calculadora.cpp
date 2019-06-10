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
int main() {
	cout << "hola soy una calculadora" << endl;
	while (!stop) {
		cout << "escribe el primer numero" << endl;
		cin >> num1;
		cout << "escribe el segundo numero" << endl;
		cin >> num2;
		cout << "selecciona una opcion" << endl;
		cout << "1.sumar\n2.restar\n3.multiplicar\n4.dividir" << endl;
		cin >> op;
		cout<<"opcion seleccionada: "<<op<<endl;
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
			cout << "resultado: "<<resultado << endl;
		}
		else {
			diferente = false;
		}
		while (!op_seguir) {
			cout << "elige una opcion\n1.continuar\n2.parar" << endl;
			cin >> op;
			if (op == 2) {
				stop = true;
			}
			if (op == 2 || op == 1) {
				op_seguir=true;
			}
		}
	}
	system("pause");
	return 0;
}