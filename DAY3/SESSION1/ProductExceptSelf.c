#include <stdio.h>

int productExceptSelf(int arr[]) {
    int n=4, i;
    int result[4];

    // Calculate product of all elements
    int product = 1;
    for (i = 0; i < n; i++) {
        product = product * arr[i];
    }

    // Divide by current element
    for (i = 0; i < n; i++) {
        result[i] = product / arr[i];
    }

    printf("Product Except Self:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
int main(){
    int arr[]={1,2,3,4};
    productExceptSelf(arr);
}