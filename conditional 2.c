#include<stdio.h>
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);

switch(num){
	case 1:
		printf("FLOWER NAME:ROSE\n");
		printf("PRICE:100\n");
break;
	case 2:
		printf("FLOWER NAME:JASMINE\n");
		printf("PRICE:200\n");
break;
	case 3:
		printf("FLOWER NAME:HIBISCUS\n");
		printf("PRICE:300\n");
break;
	case 4:
		printf("FLOWER NAME:MARIGOLD\n");
		printf("PRICE:400\n");
break;
default:
		printf("FLOWER NAME:SUNFLOWER\n");
		printf("PRICE:500\n");
}
return 0;
}


