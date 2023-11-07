#include<stdio.h>
void Arryfunc(int arr[], int size);
int multi(arr,size);



int main (){
    int size;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&size);

    int arr[size];
    Arryfunc(arr,size);

    int product = multi(arr,size);

    printf("The profuct of the array is :  %d",product);

}


void Arryfunc(int arr[], int size){
    printf("Enter the elements of the array: ");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }


}

int multi(int arr[], int size){
    int product=1;
    for(int i=0; i<size; i++){
        product *=arr[i];
    }

    return product;
}
