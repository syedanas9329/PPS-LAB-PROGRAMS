#include<stdio.h>
#include<math.h>
int main()
{
                float a,b,c;
                float discriminant,root1,root2;
                float real,imaginary;
                printf("\n quadratic equation is of form :ax^2+bx+c=0\n");
                printf ("\n Enter the coefficient a,b and c:");
                scanf("%f%f%f",&a,&b,&c);
                discriminant=b*b-4*a*c;
                if (discriminant>0)
                {
                                root1 =(-b+sqrt(discriminant))/(2*a);
                                root2 =(-b-sqrt(discriminant))/(2*a);
                                printf("\n root1 =%.2f%\n",root1);
                                printf("\n root2=%.2%f\n",root2);

                }
                else if (discriminant==0)
                {
                                root1=-b/(2*a);
                                printf("\n both roots are equals.\n");
                                printf("root=%.2f\n",root1);
                }
                else
                {
                                real =-b/(2*a);
                                imaginary=sqrt(-discriminant)/(2*a);
                                printf("\n The roots are imaginary.\n");
                                printf("root1=%.2f+%.fi\n",real,imaginary);
                                printf("root2=%.2f-%.2fi\n",real,imaginary);


                }
                return 0;
}
