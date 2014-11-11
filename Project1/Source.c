#include <stdio.h>
#include <math.h>

/*
ASSIGNMENS REMAINING
#6
TODO/PROBLEMS:
NEGATIVE NUMBER IN SQRT.
*/

void printName(char* name, int age);
void rectangle(int side1, int side2);
void penceConverter(int inPence);
void pencePayConverter(int inPound, int inShilling, int inPence, int costPounds);
void root(int a, int b, int c, int d);

main()
{

	//printName("Nich", 19);
	//rectangle(2, 4);
	//penceConverter(1026);
	//pencePayConverter(3, 9, 3, 5);
	//root(4, -12, 1, -3);

	getchar();
}

void printName(char* name, int age)
{
	char* firstName = name;
	int ageN = age;

	printf("Hej, jag heter %s och jag är %d år gammal.", firstName, ageN);
}

void rectangle(int side1, int side2)
{
	int circumference = (2*side1) + (2*side2);
	int area = side1*side2;

	printf("Omkretsen är %d och arean är %d", circumference, area);
}

void penceConverter(int inPence)
{
	int pence = inPence;
	int shillings = pence / 12;
	pence = pence % 12;
	int pounds = shillings / 20;
	shillings = shillings % 20;

	printf("%d pence blir %d pund, %d shilling och %d pence", inPence, pounds, shillings, pence);
}

void pencePayConverter(int inPound, int inShilling, int inPence, int costPounds)
{
	int costInPence = (inPound * 20 * 12) + (inShilling * 12) + (inPence);
	int paymentInPence = (costPounds * 20 * 12);

	int pence = paymentInPence-costInPence;
	int shillings = pence / 12;
	pence = pence % 12;
	int pounds = shillings / 20;
	shillings = shillings % 20;

	printf("Kunden får tillbaka %d pund, %d shilling och %d pence", pounds, shillings, pence);
}

void root(int a, int b, int c, int d)
{
	float r = b / a;
	printf("r = %f\n", r);
	float p = (c / a) - ((r*r) / 3);
	printf("p = %f\n", p);
	float q = (d / a) - ((c*r) / (3 * a)) + ((2 * (r*r*r)) / 27);
	printf("q = %f\n", q);
	float t = ((4 * (p*p*p)) + (27 * (q*q))) / 27;
	printf("t = %f\n", t);
	float s = (sqrt(sqrt(sqrt(((sqrt(t) - q) / 2)))));
	printf("s = %f\n", s);
	float x = s - (p / (3 * s)) - (r / 3);

	printf("Roten är %f", x);
}