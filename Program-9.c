#include<stdio.h>
#include<stdlib.h>
void fun1(int);
void fun2(int);
void fun3(int);
int main()
{
    int l, c=0, n,s,t,f,temp;
    printf("Enter a number:  ");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    if( n==0)
    {
        printf("Zero ");
         exit(0);
    }           
    l=n%10;
    switch(c)
    {
        case 1: fun1(l);
                break;
        case 2: if(n/10==1)
                { 
                    fun3(l);
                }
                else
                {
                    fun2(n/10);
                    fun1(l);
                }
                break;
        case 3:t=n/100;
               s=n/10%10;
               fun1(t);printf("Hundered ");
               if(s==1)
                  fun3(l);
                else
                {
                  fun2(s); 
                  fun1(l);
                }
                break;
        case 4:f=n/1000;
                t=n/100%10;
                s=n/10%10;
                fun1(f);
                printf("Thousand ");
                if(t!=0)
                {
                    fun1(t);
                    printf("Hundered ");
                }
                if(s==1)
                  fun3(l);
                else
                {
                  fun2(s); 
                  fun1(l);
                }
                break;
        default: printf("Wrong Choice.\nChoose any number from 0 to 9999");
    }
    
    return 0;
}
void fun1(int i)
{
    switch(i)
    {
        case 1: printf("One ");
                break;
        case 2: printf("Two ");
                 break;
        case 3: printf("Three ");
                break;
         case 4: printf("Four ");
                break;
        case 5: printf("Five ");
                break;
        case 6: printf("Six ");
                 break;
        case 7: printf("Seven ");
                break;
         case 8: printf("Eight ");
                 break;
        case 9: printf("Nine ");
                break;
                       
                                
    }   
                   
}   
void fun2(int i)
{
   switch(i)
    {
        case 2: printf("Twenty ");
                 break;
        case 3: printf("Thirty ");
                break;
         case 4: printf("Fourty ");
                break;
        case 5: printf("Fifty ");
                break;
        case 6: printf("Sixty ");
                 break;
        case 7: printf("Seventy ");
                break;
         case 8: printf("Eighty ");
                 break;
        case 9: printf("Ninety ");
                break;
                       
                                
    }   
     
}
void fun3(int i)
{
    switch(i)
    {
        case 0: printf("Ten ");
                break;
        case 1: printf("Eleven ");
                break;
        case 2: printf("Twelve ");
                break;
        case 3: printf("Thirteen ");
                break;
        case 4: printf("Fourteen ");
                break;
        case 5: printf("Fifteen ");
                break;
        case 6: printf("Sixteen ");
                break;
        case 7: printf("Seventeen ");
                break;
        case 8: printf("Eighteen ");
                break;
        case 9: printf("Nineteen ");
                break;
    }                 
}