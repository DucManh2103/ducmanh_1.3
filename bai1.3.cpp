#include <stdio.h>

struct Oxy
{
	int x;
	int y;
};
typedef struct Oxy OXY;

int nhap(OXY &oxy)
{
	printf ( "nhap hoanh do :");
	scanf  ("%d",&oxy.x);
	printf  ("nhap tung do :");
	scanf ( "%d",&oxy.y);
}
void xuat(OXY &oxy) 
{

	printf("hoanh do la: %d ",oxy.x);
	printf("tung do la: %d ",oxy.y);
}
int main()

{
	OXY oxy;
	nhap(oxy);
	xuat(oxy);
	return 0;
}

