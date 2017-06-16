#include <iostream>


using namespace std;
int st[20],n,pas=1,i;
void initializare(int k)
{ st[k]=1-pas;}
int Am_succesor(int k)
{

   if(st[k]<n)
   {
       st[k]=st[k]+pas;
       return 1;
   }
   else
   return 0;
}
int solutie(int k)

{
    return k==n;}

void tipar(int k)
{
    int i;
    for(i=1;i<=k;i++)
        cout<<st[i]<<" ";
    cout<<endl;
}

int e_valid(int k)
{
    int i,j;
    for(i=1;i<=k-1;i++)
        if(st[k]==st[i])
           {

           return 0;}

    return 1;
}
void back(int k)
{int as, ev;
initializare(k);
while(k>0)
    {
    do {
        as=Am_succesor(k);
        ev=e_valid(k);
        }

    while(as==1 && ev==0);
    if(as==1)
        if(solutie(k)&& e_valid(k))
            tipar(k);
        else
            {
                k++;
                initializare(k);
                }
    else k--;
    }
}
int main()
{ cin>>n;
back(1);
}
