#include <stdio.h>

int main(int argc, char const *argv[])
{
	float loan_amount, rate, payment, balance1, balance2, balance3;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	balance1 = loan_amount + (rate / 1200) * loan_amount - payment;
	balance2 = balance1 + (rate / 1200) * balance1 - payment;
	balance3 = balance2 + (rate / 1200) * balance2 - payment;

	printf("Balance remaining after first payment: %.2f\n", balance1);
	printf("Balance remaining after second payment: %.2f\n", balance2);
	printf("Balance remaining after third payment: %.2f\n", balance3);

	return 0;
}