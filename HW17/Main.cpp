#include <iostream>

int mean(int num1, int num2) {
	num1 += num2;
	num1 /= 2;
	return num1;
}

int mean_arr(int arr[], const int length) {
	int Mn = 0;
	for (int i = 0; i < length; i++) 
		Mn += arr[i];
	return Mn / length;

}

void powers(int num1, int num2) {
	int result = num1;
	std::cout << num1 << "^0 = " << "0\n";
	std::cout << num1 << "^1 = " << num1 << "\n";
	for (int i = 2; i <= num2; i++) {
		result *= num1;
		std::cout << num1 << "^" << i << " = " << result << '\n';
	}
	std::cout << std::endl;
}

void positive_arr(int arr[], const int length) {
	std::cout << "Массив без отрицательных чисел:\n";
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			arr[i] *= -1;
			std::cout << arr[i] << ' ';
		}
		else
			std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

}



int main() {
	setlocale(0, "");
	int n;

	//Задача 1.
	
	std::cout << "Задача 1.\n" << "Среднее арифметическое: " <<  mean(11, 56) << "\n\n";

	//Задача 2.
	
	std::cout << "Задача 2.\n\n";
	std::cout << "Массив:\n";
	int const size1 = 5;
	int arr1[size1]{2, 8, 5, 3, 7};
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n";
	std::cout << "Среднее арифметическое этого массива -> " << mean_arr(arr1, size1) << "\n\n";
	


	//Задача 3.
	
	std::cout << "Задача 3.\n\n";
	powers(2, 9);
	


	//Задача 4.

	std::cout << "Задача 4.\n\n";
	std::cout << "Массив:\n";
	const int size2 = 5;
	int arr2[size2]{ -3, 45, -61, 2, 0 };
	for (int i = 0; i < size2; i++) {
		std::cout << arr2[i] << ' ';
	}
	std::cout << "\n\n";
	positive_arr(arr2, size2);





	return 0;
}