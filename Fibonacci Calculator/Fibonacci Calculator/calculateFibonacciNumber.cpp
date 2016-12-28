#include<string>
#include <iostream>

void calculateFibonacciNumber(int sequence){
	if (sequence <= 0) return;
	int fib = 1;
	int lastFib = 1;
	int oth = 1;
//if (sequence == 1 || sequence == 2) {
//		std::cout << fib;
//	return;
//}
	if (sequence == 1 || sequence == 2 ) { std::cout << 1;  return; }
	while (sequence-2){
		oth = ((fib)+(lastFib));
		fib = lastFib;
		lastFib = oth;

		--sequence;
	}
	std::cout << oth;
}

int main(){
	calculateFibonacciNumber(8);
	std::cout << std::endl;
	system("pause");
}