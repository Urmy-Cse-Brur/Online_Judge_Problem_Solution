    #include<bits/stdc++.h>
     
    using namespace std;
     
     
    int main()
    {
        //freopen("in.txt","r",stdin);
        //freopen("out.txt","w",stdout);
        int p, q, t, a[100010], x, y, i, j, mid, f, l,m, n, c = 0;
        scanf("%d", &t);
     
        while (t--){
     
            scanf("%d%d", &p,&q);
              printf("Case %d:\n", ++c);
            for (i=0; i <p; i++){
               scanf("%d",&a[i]);
            }
     
            for (i=0; i<q; i++){
                scanf("%d%d",&x,&y);
     
     
                f=0, l=p-1;
     
                while(f<=l)
                {
                     mid = (f+l)/2;
                      if (x==a[mid]){
                        m = mid;
                        break;
                    }
                    else if (a[mid]<x)
                        f=mid+1;
                    else
                        l = mid-1;
     
                    if(f>l)
                    {
                        if ( a[mid] < x)
                            m=mid+1;
                        else
                            m = mid;
                    }
     
                }    
                 f=0, l=p-1;
     
                while(f<=l)
                {
                     mid = (f+l)/2;
                      if (y==a[mid]){
                        n = mid;
                        break;
                    }
                    else if (a[mid]<y)
                        f=mid+1;
                    else
                        l = mid-1;
                    if(f>l)
                    {
                        if (y<a[mid])n=mid-1;
                        else n=mid;
                    }
                }
                printf("%d\n", n-m+1);
            }
        }
     
        return 0;
    }
     
