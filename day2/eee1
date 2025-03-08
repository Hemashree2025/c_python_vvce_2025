#include<stdio.h>

float calculateBill(char wardType, int days);

int main(){
    char name[100],wardType;
    int days;
    float bill=0.0f;
    printf("Patient Name: ");
    scanf("%s",name);
    printf("Ward type P/S/G: ");
    //fflush(stdin);
    scanf(" %c",&wardType);
    printf("Number of days: ");
    scanf("%d",&days);
    printf("\nPatient Name: %s",name);
    switch(wardType)
    {
        case 'P':bill=calculateBill(wardType,days);
                 if(days>7){
                    printf("\nTotal Bill Before Discount:  %f",bill);
                    printf("\nDiscount Applied:  %f",bill*.05);
                    printf("\nFinal Bill Amount:  %f",bill-(bill*.05));  
                 }
                 else{
                    printf("\nFinal Bill Amount:  %f",bill);
                 }
                 break;

        case 'S':bill=calculateBill(wardType,days);
                 if(days>7){
                    printf("\nTotal Bill Before Discount:  %f",bill);
                    printf("\nDiscount Applied:  %f",bill*.05);
                    printf("\nFinal Bill Amount:  %f",bill-(bill*.05));  
                }
                else{
                    printf("\nFinal Bill Amount:  %f",bill);
                }
                break;

        case 'G':bill=calculateBill(wardType,days);
                 if(days>7){
                    printf("\nTotal Bill Before Discount:  %f",bill);
                    printf("\nDiscount Applied:  %f",bill*.05);
                    printf("\nFinal Bill Amount:  %f",bill-(bill*.05));  
                }
                else{
                    printf("\nFinal Bill Amount:  %f",bill);
                }
    }
    return 0;   
}
float calculateBill(char wardType, int days){
    if(wardType=='P')
        return (float)days*5000;
    else if(wardType=='S')
        return (float)days*2000;
    else if(wardType=='G')
        return (float)days*1000;
}