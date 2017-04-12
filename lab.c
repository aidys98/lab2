#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
  int a;
  int b;
  float x,s;
  printf("Vvedite summu vklada u cpok: ");
  scanf("%d",&a);
  scanf("%d",&b);
  if (a>=10000 && a<=100000) {
    if (b>=0 && b<=30)
      {
	x=(a*10)/100;
	s=a-x;
	printf("\n %0.3f",s);
      }
    if (b>=31 && b<=120)
      {
	x=(a*2)/100;
	s=a+x;
	printf("\n %0.3f",s);
      }
    if (b>=121 && b<=240)
      {
	x=(a*8)/100;
	s=a+x;
	printf("\n %0.3f",s);
      }
    if (b>=241 && b<=365)
      {
	x=(a*15)/100;
	s=a+x;
	printf("\n %0.3f",s);
      }
  }
  system("pause");
  return 0;
}
