#include<stdio.h>
#include<conio.h>

int i,len,pos,num;//Here we declare 4 variable i for loop,len for array length,pos for postion,num for new data value
int main(){

int arr[100];//declare an array of size 100
void insert (int a[],int ,int ,int); //funtion declaration

printf("Enter integer to be read ");
scanf("%d",&len);//input the array length

printf("Enter integers ");
for (i=0;i<=len;i++){
    scanf("%d",&arr[i]);
    }//array values input
printf("Enter number to be inserted ");
scanf("%d",&num);//new value to be inserted

printf("Enter positon in the array for insertion ");
scanf("%d",&pos);//positon for new value in array
//note :-array start indexing with 0
--pos;//for a proper length to be calculate we have to subtract 1 form postion because the array indexing

insert(arr,len,pos,num); //function calling 

   getch();//holds console while user input a character
    return 0;
}
void insert(int a[],int len,int pos,int num){ //funtion definition
    for(i=len;i>=pos;i--){
        //loop that shift the values of the array to make an space for new value
        a[i+1]=a[i];  
    }
    a[pos]=num;//insert a new value in given array index position 
    if(pos>len){
        printf("Insertion outside the array");  
    }
    len++;
    printf("New array");//Display new array with new value
    for(i=0;i<len;i++){
        printf("%d=>|%d| ",i,a[i]);
    }  
    
    
}










