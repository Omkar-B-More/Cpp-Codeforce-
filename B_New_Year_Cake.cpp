#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int a, b, c, d, k = 0, l = 1;
    cin >> a >> b;
    c = max(a, b);
    d = min(a, b);

    for (int i = 1; i <= c; i++)
    {
        if (i == 1)
        {
            if (d == 2 && d <= c)
            {
                if (c < 1)
                {
                    break;
                }
                c -= l;
                k++;
            }
            else
            {
                if (d < 1)
                {
                    break;
                }
                d -= l;
                k++;
            }
        }
        else if (i == 2)
        {
            if ((d == 2 && d <= c) || (d == 2 && d > c))
            {
                if (d < 1)
                {
                    break;
                }
                d -= l;
                k++;
            }
            else
            {
                if (c < 1)
                {
                    break;
                }
                c -= l;
                k++;
            }
        }
        else if (i % 2 == 0)
        {
            if (c < 1 || c < l)
            {
                break;
            }
            c -= l;
            k++;
        }
        else if (i % 2 != 0)
        {
            if (a == 2 || b == 2)
            {
                if (c < 1)
                {
                    break;
                }
                c -= l;
                k++;
            }

            else
            {
                if (d < 1 || d < l)
                {
                    break;
                }
                d -= l;
                k++;
            }
        }
        l = l * 2;
    }
    cout << k << "\n";
}
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// if((d<=2)&&(d<c)){
//     if(i==1){
//     if(c<1){
//         break;
//     }
//     c-=l;
//     k++;
//     // l++;
// }
// else if(i==2){
//     if(d<1){
//         break;
//     }
//     d-=l;
//     k++;
// }
// else if(i%2==0){
//     if(d<1||d<l){
//         break;
//     }
//     d-=l*2;
//     k++;
// }
//     else if(i%2!=0){
//        if(c<1||c<l){
//            break;
//        }
//        c-=l*2;
//        k++;
//    }
//     }