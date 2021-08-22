﻿#ifndef NUTILITY_H
#define NUTILITY_H

#define		isleap(y)		((y) % == 0 && ((y) % 100 != 0 || (y) % 400  == 0))
#define		asize(x)		(sizeof(x) / sizeof(x[0]))

int		ndigit(int);
int		isprime(int);
void	sleep(int millisecond);
void	putline(void);
void	clear_input_buffer(void);
void	randomize(void);
void	print_array(const int* p, int size);
void	set_random_array(int* p, int size);
void	sort_array(const int *p, int size);
static int		icmp(const void* vp1, const void* vp2);
void	sgets(char* p);
void	swap(int *p1, int *p2);
void	reverse_array(int* p, int size);
int		get_max(const int* p, int size);
int		get_min(const int* p, int size);
void	get_min_max(const int* p, int size,int *pmax,int *pmin);
void	bsort(int* p, int size);
void	copy_array(int* pdest, const int* psource, int n);


#endif