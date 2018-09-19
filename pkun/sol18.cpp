#include <cmath>
#include <cstdio>

using namespace std;

const int MOD = 1000000007;

int pow(int a, int b) {
	if (!b) return 1;
	if (b & 1) return (pow(a, b - 1) * 1LL * a) % MOD;
	return pow((a * 1LL * a) % MOD, b / 2);
}

int pow2(int a, int b) {
	if (!b) return 1;
	if (b & 1) return (pow2(a, b - 1) * 1LL * a) % MOD;
	return pow2((a * 1LL * a) % MOD, b / 2);
}


int main(){
	printf("%d\n", pow(3, 1000));
	printf("%d\n", pow2(3, 1000));
	return 0;
}