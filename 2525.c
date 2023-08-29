#include <stdio.h>
int main() 
{
	int hour, min;
	scanf("%d %d", &hour, &min);
	int a;
	scanf("%d",&a);
	
	if(min+a<60)
	   printf("%d %d",hour,min+a);
	
	else{
		int t1 = (min+a)/60;
		int t2 = (min+a)%60;
		if(hour+t1<24)
		   printf("%d %d",hour+t1, t2);
		else
		   printf("%d %d",hour+t1-24, t2);
	}
	
	return 0;
}