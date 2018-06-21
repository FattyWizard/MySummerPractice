#include <stdio.h>
#include <conio.h>
void Chk_bng_trn();
float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
int main()
{
	printf("Input the coordinates of points of a triangle\n");
	printf("Ax:");
	scanf_s("%f", &Ax);
	printf("Bx:");
	scanf_s("%f", &Bx);
	printf("Cx:");
	scanf_s("%f", &Cx);
	printf("Ay:");
	scanf_s("%f", &Ay);
	printf("By:");
	scanf_s("%f", &By);
	printf("Cy:");
	scanf_s("%f", &Cy);
	printf("Enter the coordinates of point D\n");
	printf("Dx:");
	scanf_s("%f", &Dx);
	printf("Dy:");
	scanf_s("%f", &Dy);
	Chk_bng_trn();
	_getch();
	return 0;
}
