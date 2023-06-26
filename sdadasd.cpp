#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int z[n];
    int k=0;
    printf("- Enter size of the array: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n- The interger number of array_ No %d: ",i+1);scanf("%d",&z[i]);
    }
}

