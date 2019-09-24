    #include <bits/stdc++.h>
     
     
    using namespace std;
     
    int main ()
    {
     
     
        int tc, s, c, q, p, x = 0;
        char str[100];
        scanf("%d", &tc);
        while (tc--){
            deque <int> D;
            x++;
     
            scanf("%d %d", &s, &c);
            printf("Case %d:\n", x);
            while (c--){
                scanf("%s", str);
                if (str[2] == 's'){
                    scanf("%d", &q);
                }
     
     
                if (str[2] == 's' && str[4] == 'L'){
                    if (D.size() == s){
                        printf("The queue is full\n");
                    }
                    else{
                        printf("Pushed in left: %d\n", q);
                        D.push_back(q);
                    }
     
                }
                else if (str[2] == 's' && str[4] == 'R'){
                    if (D.size() == s){
                        printf("The queue is full\n");
                    }
                    else{
                        printf("Pushed in right: %d\n", q);
                        D.push_front(q);
                    }
     
                }
                else if (str[2] == 'p' && str[3] == 'L'){
                    if (D.empty()){
                        printf("The queue is empty\n");
                    }
                    else{
                        printf("Popped from left: %d\n", D.back());
                        p =  D.back(), D.pop_back();
                    }
                }
                else if (str[2] == 'p' && str[3] == 'R') {
                     if (D.empty()){
                        printf("The queue is empty\n");
                    }
                    else{
                        printf("Popped from right: %d\n", D.front());
                        p =  D.front(), D.pop_front();
                    }
                }
            }
        }
        return 0;
     
    }
