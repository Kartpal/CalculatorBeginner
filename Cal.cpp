#include<iostream>
float subtract(float result, float second) {
	return result - second;
}
float sum(float result, float second) {

	return result + second;
}
float divide(float result, float second) {
	return result / second;
}
float multiply(float result, float second) {
	return result * second;
}

float main() {
	float result,second,method;
	std::cout << " Welcome to the Calculator Enter A Number-->";
	std::cin >> result;
	while (true) {
		std::cout << "\n Enter number-->";
		std::cin >> second;
		std::cout << "\n Welcome to the Calculator \n" << "1- Sum \n" << "2-Subtract \n" << "3-Multiply \n" << "4-divide \n";
		std::cin >> method;

		if (method == 1) {
			result = sum(result, second);
			std::cout << "Result-->" << result;
		}
		if (method == 2) {
			result = subtract(result, second);
			std::cout << "Result-->" << result;
		}
		if (method == 3) {
			result = multiply(result, second);
			std::cout << "Result-->" << result;
		}
		if (method == 3) {
			result = divide(result, second);
			std::cout << "Result-->" << result;
		}
		std::cin.get();
	}
}