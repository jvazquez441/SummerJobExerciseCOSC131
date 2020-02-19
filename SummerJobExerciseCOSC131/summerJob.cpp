#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double horasTrabajadas, porHora, salarioBruto, salarioNeto, salarioRestante, impuestos, ropa, schoolSupplies, bonosComprados, bonosPadres;

	cout << "Entra las horas trabajadas en esta semana: ";
	cin >> horasTrabajadas;
	cout << endl << "Entre el salario por hora: ";
	cin >> porHora;

	//Utilizado para fijar los decimales a los resultados matematicos
	cout << fixed << setprecision(2);

	salarioBruto = horasTrabajadas * porHora;

	impuestos = salarioBruto * 0.14;

	salarioNeto = salarioBruto - impuestos;

	salarioRestante = salarioNeto;
	//cout << "Salario Total: " << salarioRestante << endl;

	ropa = salarioRestante * 0.10;

	salarioRestante = salarioRestante - ropa;
	//cout << "Salario Total: " << salarioRestante << endl;

	schoolSupplies = salarioRestante * 0.01;

	salarioRestante = salarioRestante - schoolSupplies;
	//cout << "Salario Total: " << salarioRestante << endl;

	bonosComprados = salarioRestante * 0.25;

	bonosPadres = bonosComprados * 0.50;
	cout << fixed << setprecision(2);

	cout << "Salario Bruto: $" << salarioBruto << endl;
	cout << "Impuestos acumulados: $" << impuestos << endl;
	cout << "Salario Neto: $" << salarioNeto << endl;
	cout << "Gastado en Ropa & Accesorios: $" << ropa << endl;
	cout << "Gastado en School Supplies: $" << schoolSupplies << endl;
	cout << "Bonos comprados: $" << bonosComprados << endl;
	cout << "Bonos comprados por padres: $" << bonosPadres << endl;

	cout << "Salario Total: " << salarioRestante << endl;

	return 0;	
}