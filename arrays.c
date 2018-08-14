#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n, m,result=0,i;
    scanf("%d",&n); 
    for( i=0;i< n;i++){     
        scanf("%d",&m);  
            result+= m;
            
    }
    printf("%d ",result);
    
    return 0;
}