#include <iostream>
using std::cout;
using std::cin;

long int gcd(long int divisor , long int dividend){
    while(divisor != 0){
			long int remainder = dividend % divisor;
			dividend = divisor;
			divisor = remainder;
		}
    return dividend;
}

int main() {
    long int a,b;
    cin >> a >> b;
		long int dividend = a >= b ? a : b;
		long int divisor = a <= b ? a : b;
    long int result = gcd(divisor ,dividend);
		cout << result ;
    return 0;
		}
