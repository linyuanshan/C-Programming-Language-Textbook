	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	int main(){
	    const float EPSILON = 0.00001;
	    float new_guess;
	    float last_guess;
	    float number;
	    //�û����룬��ȡ���ݲ��������м�顣
	    printf("Enter a number: " );
	    scanf("%f", &number );
	    if( number < 0 ){
	        printf("Cannot compute the square root of a " "negative number! \n");
	        return EXIT_FAILURE;
	    }
	    // ����ƽ�����Ľ���ֵ��ֱ�����ε����Ľ���ֵ֮��С��EPSILON��
	    new_guess = 1;
	    do{
	        last_guess = new_guess;
	        new_guess = ( last_guess + number / last_guess ) / 2;
	        printf ("%.15f\n", new_guess );
	    } while( fabs(new_guess - last_guess) > EPSILON );
	    // ��ӡ���
	    printf ("Square root of %g is %g\n", number, new_guess );
	    return EXIT_SUCCESS;
	}

