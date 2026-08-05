 #include<stdio.h>
 #include<math.h>
 int main(){
 	printf("Quadratic eqn is of form ax² + bx + c = 0 \n");
 	float a,b,c;
 	float D,ans1,ans2;
 	printf("Enter value of constants a,b,c :\n");
 	scanf("%f",&a);
 	scanf("%f",&b);
 	scanf("%f",&c);
 	if(a==0){
 		printf("Invalid value of a . a cant be 0\n");
 		return 1;
 		}
 	D=(b*b)-(4.0*a*c);
 	if(D<0){
 		printf("No real roots exist \n");
 		}
 	else{
 		ans1=((-b)+sqrt(D))/( 2.0*a);
 		ans2=((-b)-sqrt(D))/(2.0*a);
 		printf("Roots are %.2f and %.2f",ans1,ans2);
 		}
 		return 0;
 	}