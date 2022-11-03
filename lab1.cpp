// count the words //

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,word;
    cout<<"enter the sentences\n";
    getline(cin,str);
    cout<<"enter the word \n";
    getline(cin,word);

    stringstream ss(str);
    int cnt=0;
    while(ss>>str)
    {
        if(str==word)
          cnt++;
    }
    cout<<cnt<<"\n";
return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

//  int main()
//  {
//     string sentence;
//     cout<<"enter the sentences \n";
//     cin>>sentence ;
     
//      for( int i{0};i<sentence.length();i++)
//      {
//         if(sentence[i]==' ')
//      }
    
   
// }























//count the letters //



// #include<bits/stdc++.h>
// using namespace std;

// int subcount(string a, string b,int m,int n){
//     if ((m == 0 && n == 0) || n == 0)
//         return 1;
//    if(m==0){
//         return 0;
//     }
    
//     if (a[m - 1] == b[n - 1]){
//         return subcount(a, b, m - 1, n - 1) +
//                subcount(a, b, m - 1, n);}
               
//     else{
//         return subcount(a, b, m - 1, n);
//     }
// }

// int substrcount(string pat, string txt,int N,int M)
// {
   
//     int res = 0;
   
    
//     for (int i = 0; i <= N - M; i++)
//     {
        
//         int j;
//         for (j = 0; j < M; j++)
//             if (txt[i+j] != pat[j])
//                 break;
  
        
//         if (j == M) 
//         {
//            res++;
//         }
//     }
//     return res;
// }

// int wordcount(char* test,string word){
//     char* p;
//     p=strtok(test," ");
//     vector<string> a;
//     while(p!=NULL){
//         a.push_back(p);
//         p=strtok(NULL," ");
//     }
//     int c=0;
//     for(int i=0;i<a.size();i++){
//         if(word==a[i]){
//             c++;
//         }
//     }
//     return c;
// }

// int main()
// {
//     string test,sequence;
//     // cout<<"enter the string: "<<endl;
//     // cin>>test;
//     // cout<<"enter the sequence: "<<endl;
//     // cin>>sequence;
//     // int m,n;
//     // m=test.size();
//     // n=sequence.size();
//     // cout<<m<<endl;
//     // cout<<n<<endl;
    
//     // cout<<"Subsequence: "<<subcount(test,sequence,m,n)<<endl;
//     // cout<<"enter the sequence: "<<endl;
//     // cin>>sequence;
//     // n=sequence.size();
//     // cout<<"Substring: "<<substrcount(sequence,test,m,n)<<endl;
//     char* test1;
//     cout<<"enter the string: "<<endl;
//     cin>>test1;
   
//     cout<<"enter the sequence: "<<endl;
//     cin>>sequence;
    
//     cout<<"Word: "<<wordcount(test1,sequence)<<endl;
//     // cout<<test;
    

//     return 0;
// }



































































































































