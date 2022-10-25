#include <iostream>

void notas (float valor){
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;

	while (valor >= 100.0){
		valor -= 100.0;
		n100++;
	}
	while (valor >= 50.0){
		valor -= 50.0;
		n50++;
	}
	while (valor >= 20.0){
		valor -= 20.0;
		n20++;
	}
	while (valor >= 10.0){
		valor -= 10.0;
		n10++;
	}
	while (valor >= 5.0){
		valor -= 5.0;
		n5++;
	}
	while (valor >= 2.0){
		valor -= 2.0;
		n2++;
	}
	while (valor >= 1.0){
		valor -= 1.0;
		m1++;
	}
	while (valor >= 0.5){
		valor -= 0.5;
		m50++;
	}
	while (valor >= 0.25){
		valor -= 0.25;
		m25++;
	}
	while (valor >= 0.10){
		valor -= 0.10;
		m10++;
	}
	while (valor >= .05){
		valor -= 0.05;
		m5++;
	}
	while (valor >= 0.009){
		valor -= 0.01;
		m01++;
	}
	
	std::cout << "NOTAS:" << std::endl;
	std::cout << n100 << " nota(s) de R$ 100.00" << std::endl;
	std::cout << n50 << " nota(s) de R$ 50.00" << std::endl;
	std::cout << n20 << " nota(s) de R$ 20.00" << std::endl;
	std::cout << n10 << " nota(s) de R$ 10.00" << std::endl;
	std::cout << n5 << " nota(s) de R$ 5.00" << std::endl;
	std::cout << n2 << " nota(s) de R$ 2.00" << std::endl;
	std::cout << "MOEDAS:" << std::endl;
	std::cout << m1 << " moeda(s) de R$ 1.00" << std::endl;
	std::cout << m50 << " moeda(s) de R$ 0.50" << std::endl;
	std::cout << m25 << " moeda(s) de R$ 0.25" << std::endl;
	std::cout << m10 << " moeda(s) de R$ 0.10" << std::endl;
	std::cout << m5 << " moeda(s) de R$ 0.05" << std::endl;
	std::cout << m01 << " moeda(s) de R$ 0.01" << std::endl;
}

int main() {

    float valor;
    std::cin >> valor;

    notas(valor);

    return 0;
}