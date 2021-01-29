#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, j = 0, k = 0, l = 0;

	printf("\tExample 1 \n");
	j = 010;
	printf("this is the value of j: %i \n\n", j);
	j = j++ * 4;
	printf("\033[31mj++ * 4  \033[37m\nthis is the problem and here we get the value for j = %i\n\n", j);
	printf("this is the value of j: %i \n\n\n\n", j);



	printf("\tExample 2\n");
	i = 5;
	j = 0;
	printf("this is the value of i: %i \n", i);
	printf("this is the value of j: %i \n\n", j);
	printf("el procedimiento es:\033[31m j = i++\033[37m\n\n");
	j = i++;
	printf("this is the value of i: %i \n", i);
	printf("this is the value of j: %i \n\n\n\n", j);



	printf("\tExample 3\n");
	i = 5;
	printf("this is the value of i: %i \n", i);
	printf("this is the value of k: %i \n\n", k);
	k = ++i;
	printf("the procedure is:\033[31m k = ++i\033[37m\n\n");
	printf("this is the value of k: %i \n", k);
	printf("this is the value of i: %i \n\n\n\n", i);




	printf("\tExample 4 \n");
	printf("this is the value of i: %i \n", i);
	printf("this is the value of k: %i \n\n", k);
	i = --k * ++i;
	printf("\033[31m--k * ++i  \033[37m\nthis is the problem and here we get the value for i = %i\n\n", i);
	printf("this is the value of i: %i \n", i);
	printf("this is the value of k: %i \n\n\n\n", k);



	printf("\tExample 5 \n");
	i = 5;
	j = 2;
	k = 10;
	printf("this is the value of i: %i \n", i);
	printf("this is the value of j: %i \n", j);
	printf("this is the value of k: %i \n", k);
	printf("this is the value of l: %i \n", l);
	l = (--i * j) + k++;
	printf("\n\033[31m(--i * j) + k++  \033[37m\nthis is the problem and here we get the value for l = %i\n\n", l);
	printf("this is the value of i: %i \n", i);
	printf("this is the value of j: %i \n", j);
	printf("this is the value of k: %i \n", k);
	printf("this is the value of l: %i \n\n\n\n", l);

	system("PAUSE");

	printf("%2d\n", 1234);  // for 34
	printf("%.2d\n", 1234);  // for 34
	printf("%-2d\n", 1234);  // for 12
	printf("%-.2d\n\0", 1234);  // for 12

	system("PAUSE");
	char nombre[] = { 'G', 'a', 'n', 'd', 'a', 'l', 'f', '\0' };

	printf("Texto: %s\n", nombre);
	printf("Tamaño de la cadena: %i bytes\n", sizeof nombre);
	printf("hello\fgoodbye");
	char c;
	c = 'A';
	c += ('Z' - 'A');
	c += ' ';
	c = ('z' - 'a');
	int i12;
	i12 = 8888E-2;
	
	/* */


	system("PAUSE");

	return 0;
}