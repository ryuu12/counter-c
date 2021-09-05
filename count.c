#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    int s;
    int x=0;

    printf("N: "); scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++)
    {
        printf("Data %d: ", i); scanf("%d", &data[i]);
    }

    printf("Search: "); scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if (data[i]==s)
        {
            x=x+1;
        }
        
    }
    
    if (x==0)
    {
        printf("%d: Not found", s);
    }
    else {
        printf("Found %d data: %d\n", x,s);
    } 
}