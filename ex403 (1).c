#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10000]={0},n,b,c,d,e,i,j;
	scanf("%d",&n);
	//��һ��ѭ�� 
	e=0;
	for(i=0;i<n;i++){
		b=i,c=0,d=0;
	
		for(j=0;b!=0;j++){
			a[j]=b%10;//��b��10��������ֵ��a[j]����b��10�����¸�ֵ��b��
			b=b/10;
			d++;
		}
		//�ڶ���ѭ�� �ڣ���֫���j����λ��ƴ�Ӹ�ԭ��
		for(j=0;d!=0;j++){	
			c=c+a[j]*pow(10,d-1);//����ʹ��10�η������ģ� 
			d--;
		}
		if(c==i){
			printf("%d,",i);
			e++;
			if(e%10==0)//���ifҪ�Ž�ifȥ�����С�e=0��Ҫ�ŵ���ѭ�����棬��Ȼ��ƴʱ���������10���س�  
			printf("\n");
		}
	}
	return 0;
}


