#include <iostream>
#include <math.h>

char op;
float number_1, number_2;
int storage = 1, toint, toint2;
double result;
int main()  
{
	 std::cin >> op;
	 std::cin >> number_1 >> number_2;
		switch (op) {
	case '+': std::cout << number_1 + number_2;
		break;
	case '-': std::cout << number_1 - number_2;
		break;
	case '*': std::cout << number_1 * number_2;
		break;
	case '/': std::cout << number_1 / number_2;
		break;
	case '^':
		if (number_2 == 0) 
		{ 
			return 1; 
		}
		else
		{
			for (int i = 1; i <= number_2; i++) 
			{
				storage *= number_1;
			}
			std::cout << storage;
		}
		break;
		case 's': number_1 = 0;
			  result = number_1 + number_2;
			  std::cout << sqrt(result);
		break;
		case 'x': number_1 = 1;
		 	  result = number_1 / number_2;
			  std::cout << result;

		break;
		case '%': toint = static_cast<int>(number_1);
			  toint2 = static_cast<int>(number_2);
			  std::cout << toint % toint2;

		break;
		default:  std::cout << "fuck you";
		break;
	}
	return 0;
     /* DO NOT READ THIS ONE. 
        CTRL + SHIFT + B - Terminal Configure Details then gcc.exe */
}


