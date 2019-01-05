#define F (1<<14)
#include <stdio.h>
#include <stdint.h>

static int convert_n_fixed(int n) {
	return n * F;
}

static int convert_x_int_zero(int x) {
	return x / F;
}

static int convert_x_int_nearest(int x) {
	if(x >= 0)
		return (x + F / 2) / F;		
	else
		return (x - F / 2) / F;
}

static int add_x_y(int x,int y) {
	return (x + y);
}

static int sub_x_y(int x,int y) {
	return (x - y);
}

static int add_x_n(int x,int n){
	return (x + n * F);
}

static int sub_n_x(int x,int n) {
	return (x - n * F);
}

static int mul_x_y(int x,int y){
	return ((int64_t)x) * y / F;
}

static int mul_x_n(int x,int n) {
	return x * n;
}

static int div_x_y(int x,int y) {
	return ((int64_t)x) * F / y;
}

static int div_x_n(int x,int n) {
	return x / n;
}

