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
   void Chk_bng_trn()
  {
	int res1, res2, res3;
	res1 = (Ax - Dx)*(By - Ay) - (Bx - Ax)*(Ay - Dy);
	res2 = (Bx - Dx)*(Cy - By) - (Cx - Bx)*(By - Dy);
	res3 = (Cx - Dx)*(Ay - Cy) - (Ax - Cx)*(Cy - Dy);
	if (res1&&res2&&res3 > 0 || res1 && res2&&res3 < 0) {
		printf("The point is belong to the triangle");
	}
	else printf("The point does not belong to the triangle");
  }
