//Day 1
//write a c program that accepts a positive integer containing digits from 0 to 9 . exactly one digit is missing while the remaining  nine digits 
//appears exactly once .
//input: 854102967
//output: 3

#include <stdio.h>
int main () {
	long long n;
	int sum = 45;
	scanf("%lld", &n);
	while (n>0) {
		sum -= n % 10;
		n /= 10;
		}
	printf("%d\n",sum);
	return 0;
	
}
