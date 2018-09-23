#include<stdio.h>

int a, b;
int sqware_sum, sqwaew_length;

int main() {
	sqware_sum = sum(a, b);
	sqwaew_length = length(a, b);
	printf("%d %d", &sqware_sum, &sqwaew_length);

	return 0;
}

int sum(int a, int b) {
	sqware_sum = a * b;
}

int length(int a, int b) {
	sqwaew_length = 2 * (a + b);
}