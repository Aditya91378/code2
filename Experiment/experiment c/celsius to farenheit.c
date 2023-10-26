#include <stdio.h>
int main()
{
float c,f;
printf("Enter temperature in Celsius : ");
scanf("%f", &c);
f = (c*1.8) + 32;
printf("%f celsius = %f fahernite", c,f);
return 0 ;
}
