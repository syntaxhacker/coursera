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
    long int gcdResult = gcd(divisor ,dividend);
		long int lcmResult = ( dividend * divisor ) / gcdResult;
		cout << lcmResult ;
    return 0;
		}
