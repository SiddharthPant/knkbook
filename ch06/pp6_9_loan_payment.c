#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan_amount, rate, payment, num, balance;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter number of payments: ");
	scanf("%f", &num);

	for (int i = 1; i <= num; i++) {
		balance = loan_amount + (rate / 1200) * loan_amount - payment;
		printf("Balance remainig after payment %d: %.2f\n", i, balance);
		loan_amount = balance;
	}	

	return 0;
}