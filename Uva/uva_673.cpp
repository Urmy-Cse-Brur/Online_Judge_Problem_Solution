#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int i, t, f, A, c, d,g, m;
    char str[1000];



    scanf ("%d", &t);
    getchar();

    for (m= 0; m < t; m++){
            stack <char> S;

       fgets(str, 300, stdin);
        f = 0;



         for (i = 0; i < strlen (str); i++){
            if (str[i] == '[' || str[i] == '('){
                    S.push(str[i]);
                }
                else if (str[i] == ']' || str[i] == ')'){
                  if (!S.empty()){
                    if ((str[i] == ')' && (S.top()) == '(') || (str[i] == ']' && (S.top()) == '[')) {
                         A = S.top(), S.pop();
                    }
                    else {
                        f = 1;
                        break;
                    }
                  }
                  else{
                    f = 1;
                    break;
                  }

                }
        }

        if(!S.empty())
            printf("No\n");
        else if (f == 1)
            printf("No\n");
        else
            printf("Yes\n");
    }


    return 0;
}
