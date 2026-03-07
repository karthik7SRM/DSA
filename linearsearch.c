#include <stdio.h>
int main() {
    int n, a, i;
    printf("Enter the numbers of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &a);
    for(i = 0; i < n; i++){
        if(arr[i] == a){
            printf("position found at %d\n", i);
            break;
        }
    }
    return 0;
}
