// //my code
// #include<iostream>
// using namespace std;
// int  main()
// {
//     int N;
//     cin>> N;
//     int A[N];
//     for(int i=0;i<N;i++)
//     {
//         cin>>A[i];
//     }
//     int min=A[0];
//     int max=A[0];
    
//     for(int i=1;i<N;i++)
//     {
//         if(A[i]<min)
//         {
//             min=A[i];
//         }
//     }
//      for(int i=1;i<N;i++)
//     {
//         if(A[i]>max)
//         {
//             max=A[i];
//         }
//     }
//     cout<<"min = "<<min<<", "<<"max = "<<max<<endl; 
//     return 0;
    
// }


//Driver code
#include<iostream>
using namespace std;
#define ll long long

pair<long long,long long> getMinMax(long long a[],int n);

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    pair<ll, ll> pp=getMinMax(a,n);
    cout<<pp.first<<""<<pp.second<<endl;
  }
  return 0;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long>pair1;
    
        long long int max=a[0];
        long long int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    pair1.first=min;
    pair1.second=max;
    return pair1;
}
