#include <stdio.h>

int main(){
	int radius;
	printf("Enter the radius: ");
	scanf("%d", &radius);
	printf("the radius is %d\n", radius);
	float area = 3.14 * (radius*radius);
	printf("area is %f\n", area);
	return 0;
}
