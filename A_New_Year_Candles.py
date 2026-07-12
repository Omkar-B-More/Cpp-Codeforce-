a,b=map(int,input().split())
ans=a
butts=a
while butts>=b:
    newcan=butts//b
    ans+=newcan
    butts=newcan+(butts%b)

print(ans)