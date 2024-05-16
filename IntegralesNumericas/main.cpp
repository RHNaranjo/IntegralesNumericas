#include <iostream>

int main ()
{
	int opc;
	do
	{
		std::cout << "SOLVER INTEGRALES NÚMERICAS\nEliga una opción\n1) Ingrese una función\nResolver mediante:";
		std::cout << "2) Trapecio\n3) Ronberg\n4) Simpson\n5) Salir" << std::endl;
		std::cin >> opc;

		switch (opc):
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				std::cout << "Saliendo...";
				break;
			}
			default
			{
				std::cout << "Ingrese un valor válido" << std::endl;
			}

		}
	} while (opc != 5);
}
