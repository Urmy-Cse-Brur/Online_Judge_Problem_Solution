#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i, a[1000], b, j;

    while (scanf ("%d", &n)==1){
            queue <int> Q;
    if (n == 0)
        break;
        for (i = 1; i <=n; i++){
            Q.push(i);
        }
        j = 0;
        while (!Q.empty()){
                    a[j] = Q.front(),Q.pop();
                    j++;
                    Q.push(Q.front());
                    b = Q.front(),Q.pop();

        }
        printf("Discarded cards:");
        for (i = 0; i < n-1; i++){
            printf(" %d", a[i]);
            if (i != (n-2))
                printf(",");
        }
        printf("\n");
        printf("Remaining card: %d\n", a[n-1]);
    }
    return 0;
}
