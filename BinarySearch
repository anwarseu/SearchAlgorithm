#include <stdio.h>

int binary_search(int A[], int n, int key){
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right) {
        mid = left + right / 2;
        if (A[mid] == key) {
            return mid;
        }
        if(A[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    int A[] = {2, 8, 9, 10, 13, 15, 18, 19, 21, 23, 26, 27 };
    int index = binary_search(A, 12, 30);
    if (index > -1) {
        printf("%d \n", A[index]);
    }else{
        printf("Your value not found! \n");
    }
    return 0;
}
