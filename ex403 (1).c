#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10000]={0},n,b,c,d,e,i,j;
	scanf("%d",&n);
	//第一层循环 
	e=0;
	for(i=0;i<n;i++){
		b=i,c=0,d=0;
	
		for(j=0;b!=0;j++){
			a[j]=b%10;//将b除10的余数赋值给a[j]，将b除10并重新赋值给b；
			b=b/10;
			d++;
		}
		//第二层循环 ②（将肢解的j按逆位数拼接复原）
		for(j=0;d!=0;j++){	
			c=c+a[j]*pow(10,d-1);//逆序使用10次方（回文） 
			d--;
		}
		if(c==i){
			printf("%d,",i);
			e++;
			if(e%10==0)//这个if要放进if去，还有“e=0”要放到大循环外面，不然打拼时会连续打出10个回车  
			printf("\n");
		}
	}
	return 0;
}


