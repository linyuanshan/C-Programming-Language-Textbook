	#include <stdio.h>
	#include <math.h>
	int main(){
	    float a,b,c,delta,x1,x2,m,n,RealPart,ImagPart;
	    printf("请输入一元二次方程系数：a,b,c\n");
	    scanf("%f,%f,%f",&a,&b,&c);
	    delta=b*b-4*a*c;
	    m=-b/(2*a);    
	    if (delta>0) {  /*两个不等的实根*/
	        n=sqrt(delta)/(2*a);	
	        x1=m+n;
	        x2=m-n;
	        printf("x1=%6.3f  x2=%6.3f\n",x1,x2);
	    }
	    else if(fabs(delta)<=1e-6)   /*两个相等的实根*/
	        printf("x1=x2=%6.3f\n",m);
	    else{  /*两个不相等的虚根*/
	       RealPart=m;
	       ImagPart=sqrt(-delta)/(2*a);
	       printf("x1=%6.3f+%6.3fi\n", RealPart,ImagPart);
	       printf("x2=%6.3f-%6.3fi\n", RealPart,ImagPart);
	    }
	    return 0;
	}

