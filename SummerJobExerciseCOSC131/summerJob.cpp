// Jonathan Vazquez Rivera
// jvazquez441@email.uagm.edu
// 02/19/2020

/*	Haz un programa el cual le pida al usuario cuantas horas trabajo en la semana y cuanto cobra por hora. A ese salario bruto le quitas un impuesto de 14%,
	despues de los impuestos, gastas un 10% del restante en ropa. Luego de tu nuevo restante gastas 1% en utencilios para la escuela.
	Despues de los utencilios, compraste un 25% de tu sueldo restante en bonos de ahorros. Adicional a estos bonos de ahorros, tus padres te dieron $0.50 por
	cada $1.00 gastado en bonos de ahorros.
	Al final tu programa debe desplegar la siguiente información:
		
		1. Desplegar el salario bruto y el salario neto (antes y despues de los impuestos)
		2. Desplegar el impuesto.
		3. Gasto en ropa y accesorios
		4. Gasto en utensilios para la escuela
		5. Bonos comprados
		6. Cantidad de bonos comprados por tus padres
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double horasTrabajadas, porHora, salarioBruto, salarioNeto, salarioRestante, impuestos, ropa, schoolSupplies, bonosComprados, bonosPadres;

	// Asignandole el valor cero a todas las variables declaradas
	horasTrabajadas = porHora = salarioBruto = salarioNeto = salarioRestante = impuestos = ropa = schoolSupplies = bonosComprados = bonosPadres = 0;

	cout << "Entra las horas trabajadas en esta semana: ";
	cin >> horasTrabajadas;
	cout << "\nEntre el salario por hora: ";
	cin >> porHora;

	//Utilizado para fijar los decimales a los resultados matematicos
	cout << fixed << setprecision(2);

	// Calculos para sacar el salario bruto, impuestos y salario neto.
	salarioBruto = horasTrabajadas * porHora;
	impuestos = salarioBruto * 0.14;
	salarioNeto = salarioBruto - impuestos;
	salarioRestante = salarioNeto;

	//cout << "Salario Total: " << salarioRestante << endl;		<----- Utilizado para ver como el salario restante va cambiando de acuero a las deducciones.

	ropa = salarioRestante * 0.10;
	salarioRestante = salarioRestante - ropa;
	//cout << "Salario Total: " << salarioRestante << endl;		<----- Utilizado para ver como el salario restante va cambiando de acuero a las deducciones.

	schoolSupplies = salarioRestante * 0.01;
	salarioRestante = salarioRestante - schoolSupplies;
	//cout << "Salario Total: " << salarioRestante << endl;		<----- Utilizado para ver como el salario restante va cambiando de acuero a las deducciones.

	bonosComprados = salarioRestante * 0.25;
	bonosPadres = bonosComprados * 0.50;
	salarioRestante -= bonosComprados;

	cout << fixed << setprecision(2);

	cout << left << setw(31) << "Salario Bruto: " << right << setw(3) << "$" << salarioBruto << endl;
	cout << left << setw(31) << "Impuestos acumulados: " << right << setw(3) << "$" << impuestos << endl;
	cout << left << setw(31) << "Salario Neto: " << right << setw(3) << "$" << salarioNeto << endl;
	cout << left << setw(31) << "Gastado en Ropa & Accesorios: " << right << setw(3) << "$" << ropa << endl;
	cout << left << setw(31) << "Gastado en School Supplies: " << right << setw(3) << "$" << schoolSupplies << endl;
	cout << left << setw(31) << "Bonos comprados: " << right << setw(3) << "$" << bonosComprados << endl;
	cout << left << setw(31) << "Bonos comprados por padres: " << right << setw(3) << "$" << bonosPadres << endl;
	cout << left << setw(31) << "Salario Restante: " << right << setw(3) << "$" << salarioRestante << endl;

	return 0;	
}