#include<stdio.h>
#include"main.h"
/**
*main - prints the name of the file
*@argc:is an argument counter
*@argv:is an argument value
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
