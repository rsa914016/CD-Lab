#include<stdio.h>

int main() {
	int a[30] = {0};
	int min=10000, temp=0, i, j, lev, n, no_of_c, z;
	printf("Enter n :");
	scanf("%d", &n);
	printf("Enter root :");
	scanf("%d", &a[0]);
	for(i = 1; i <= n / 2; i++) {
		printf("Enter No.of Child Of Parent With Value %d : ", a[i - 1]);
		scanf("%d", &no_of_c);
		for(j = 1; j <= no_of_c; j++) {
			z = i * 2 + j - 2;
			printf("Enter Value Of Child : ");
			scanf("%d", &a[z]);
		}
	}
	for(i = n - 1; i >= n / 2; i--) {
	    temp = 0;
	    for(j= i + 1; j >= 1; j = j / 2)
		    temp = temp + a[j - 1];
	    if(temp < min)
		    min = temp;
	    printf("Temp Min is %d \n", temp);
	}
	printf("Min is %d ", min);
	
return 0;
}