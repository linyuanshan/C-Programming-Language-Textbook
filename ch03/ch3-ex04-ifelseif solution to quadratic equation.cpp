	#include <stdio.h>
	#include <math.h>
	int main(){
	    float a,b,c,delta,x1,x2,m,n,RealPart,ImagPart;
	    printf("������һԪ���η���ϵ����a,b,c\n");
	    scanf("%f,%f,%f",&a,&b,&c);
	    delta=b*b-4*a*c;
	    m=-b/(2*a);    
	    if (delta>0) {  /*�������ȵ�ʵ��*/
	        n=sqrt(delta)/(2*a);	
	        x1=m+n;
	        x2=m-n;
	        printf("x1=%6.3f  x2=%6.3f\n",x1,x2);
	    }
	    else if(fabs(delta)<=1e-6)   /*������ȵ�ʵ��*/
	        printf("x1=x2=%6.3f\n",m);
	    else{  /*��������ȵ����*/
	       RealPart=m;
	       ImagPart=sqrt(-delta)/(2*a);
	       printf("x1=%6.3f+%6.3fi\n", RealPart,ImagPart);
	       printf("x2=%6.3f-%6.3fi\n", RealPart,ImagPart);
	    }
	    return 0;
	}

