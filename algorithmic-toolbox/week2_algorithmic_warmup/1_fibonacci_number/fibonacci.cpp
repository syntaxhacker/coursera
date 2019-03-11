#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::map;
using std::pair;

int fibonacci_result;
map<int, int> cache;

int fibonacci_fast(int n) {
	if (n <= 1){
		return n;
	}
		else if(cache.find(n) != cache.end()){
			return cache.find(n)->second;
		}
		else{
			int fibonacci_result = fibonacci_fast(n - 1) + fibonacci_fast(n - 2);
			cache.insert(pair<int, int>(n, fibonacci_result));
			return fibonacci_result;
		}
}


int main() {
	int n = 0;
	cin >> n;

	cout << fibonacci_fast(n); 
	return 0;
}
