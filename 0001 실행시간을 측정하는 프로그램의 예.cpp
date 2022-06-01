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
	for (int i = 1; i < n; i++) {
		sum += i;
	}
	result = sum;
	return result;
}

int main(int argc, char* argsv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	clock_t start, finish;
	double duration;
	start = clock();

	//test codes
	int sum = codes1(10000000);

	finish = clock();
	
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%d", &sum);
	printf("%f\n", duration);


	
	
	


}