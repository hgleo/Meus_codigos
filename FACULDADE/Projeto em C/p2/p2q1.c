#include<stdio.h>

//1)
int main (){
	int m, v, c, t;
	
	scanf("%d\n", &m);
	scanf("%d\n", &v);
	scanf("%d\n", &c);
	scanf("%d", &t);
	
	if (m - c - v - t >=0){
		printf("\n 3");
		//return 0;
		
	} else if (c + v < m || c + t < m || v + t < m){
		printf("\n 2");
		//return 0;
		
	} else if (c < m || v < m || t < m){
		printf("\n 1");
		//return 0;
	}
	
	return 0;
}

