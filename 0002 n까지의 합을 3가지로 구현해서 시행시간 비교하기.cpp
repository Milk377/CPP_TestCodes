#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

int codes1(int n) {
	int result, sum;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	result = sum;
	return result;
}

int codes2(int n) {
	return n * (n + 1) / 2;
}

int codes3(int n) {
	int sum = 0;
	
	for (int i = 1; i <= n; i++) {
		
		int add = 0;
		for (int j = 0; j < i; j++) {
			add += 1;
		}

		sum += add;
	}

	return sum;
}

int main(int argc, char* argsv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	clock_t start, finish;
	double duration;
	start = clock();

	//test codes
	int n = 100000;
	//cout << codes1(n) << "\n";
	//cout << codes2(n) << "\n";
	cout << codes3(n)<<"\n";

	finish = clock();
	
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f\n", duration);

}