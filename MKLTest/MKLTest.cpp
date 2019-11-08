#include "lib.h"
#include <iostream>


int main()
{
	CN_number a = CN_create_double(2, 5);
	CN_number b = CN_create_double(0, 0);
	CN_number c = CN_create_double(3, 8);
	double complex;
	double real;

	add(a, b,c);
	
	CN_get_complex(c, &complex);
	CN_get_real(c, &real);
	std::cout << real << "+" << complex << "i" << std::endl;

	subtract(a, b, c);

	CN_get_complex(c, &complex);
	CN_get_real(c, &real);
	std::cout << real << "+" << complex << "i" << std::endl;

	multiply(a, b, c);

	CN_get_complex(c, &complex);
	CN_get_real(c, &real);
	std::cout << real << "+" << complex << "i" << std::endl;

	if(divide(a, b, c)!=0)
	{
		__debugbreak();
	}

	CN_get_complex(c, &complex);
	CN_get_real(c, &real);
	std::cout << real << "+" << complex << "i" << std::endl;

	CN_delete_double(a);
	CN_delete_double(b);
	CN_delete_double(c);


	return 0;
}
