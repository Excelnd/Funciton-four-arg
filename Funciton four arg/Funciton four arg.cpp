// Funciton four arg.cpp : Defines the entry point for the console application.
//
#define _CRT_NONSTDC_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
	int sum = a;

	if (b > sum) {
		sum = b;
	}
	if (c > sum) {
		sum = c;
	}
	if (d > sum) {
		sum = d;
	}

	return sum;
}


int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("Biggest number is:  %d\n",  ans);

	return 0;
}