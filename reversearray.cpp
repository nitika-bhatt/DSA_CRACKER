#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
         cin>>arr[i];
         
         for(int i = n-1; i >= 0; i--)
          cout<<arr[i]<<" ";
          
          cout<<endl;
    }
return 0;
}

//my code was this but it failed the testcases

// #include <iostream>
// using namespace std;

// int main() {
  
//     int T;
//     cin>>T;
//     while(T-->0)
//     {
//         int N;
//         cin>>N;
//         if(N>=1 && N<=100)
//         {
//         int A[N];
//         int temp=0;
        
//         for(int i=0;i<N;i++)
//         {
//             cin>>A[i];
//         }
//         for(int i=0;i<N/2;i++)
//         {
//             temp=A[i];
//             A[i]=A[(N-i)-1];
//             A[(N-i)-1]=temp;
//         }
//         for(int i=0;i<N;i++)
//         {
//             cout<<A[i]<<" ";
            
//         }}
       
// }
//     return 0;
// }
