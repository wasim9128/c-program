#include<stdio.h>
#include<conio.h>

int i,n;
int main(){
int arr[100],pos;
void del_element(int a[],int ,int);

printf("How many element in the array");
scanf("%d",&n);

printf("Enter the elements of array\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("*array indexing is start from 0\n");
printf("On which position element do you want to delete\n");
scanf("%d",&pos);
del_element(arr,pos,n);

   getch();//holds console while user input a character
    return 0;
}

void del_element(int a[],int pos,int n){
    int j,item;
    item=a[pos];
    for(j=pos;j<n;j++)
    {
        a[j]=a[j+1];
    }

    n=n-1;
    printf("New Array\n");
    for(j=0;j<n;j++){
        printf("|%d| ",a[j]);
    }
}





