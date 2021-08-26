
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int a = 10;
stringstream ss;
ss << a;
string str = ss.str();

int main ()
{
	char p[20];

	itoa(20, p, 10);
}
