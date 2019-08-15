#include <stdio.h>

int linear_search(int A[], int n, int key){
    for (int i = 0; i < n; i++) {
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    int mark[5] = {19, 10, 8, 17, 9};
    int index = linear_search(mark, 5, 9);
    if (index > -1) {
        printf("%d \n", mark[index]);
    }else{
        printf("Your value not found! \n");
    }
    return 0;
}
