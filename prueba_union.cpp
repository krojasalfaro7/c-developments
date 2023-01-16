#include <iostream>

using namespace std;


int main(int argc, char *argv[]){


union {int a; char b; float c;} p, *ptr;

p.a = 0;
p.b = 'x';
p.c = 2.4;

//int *ptr;
int i=5;

ptr = &p;
cout << ptr->a << ptr->b << ptr->c;
}

