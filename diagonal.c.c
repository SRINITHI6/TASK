#include<stdio.h>
#include<math.h>

int main(){
int k=1;int i,j,m,sum=0;
scanf("%d",&m);
int a[m][m];

for(i=0;i<m;i++){
	for(j=0;j<m;j++){
		a[i][j]=k;
	}
}
for(i=0,;i<m;i++){
	for(j=0;j<m;j++){
	sum=sum+a[i][j];
}

}
printf("\n The Sum of Diagonal Elements of a Matrix = %d",sum );

 	return 0;
}

