//Jonathan Hartsell
//CS 372 Assignment 5 Problem 1 and 2
//Filename: Asg5P1.cpp


#include <iostream>
#include <chrono>

using namespace std;
int n, int A[][];  

int anyEqual (int n, int A[][])
 

​int main(){ 

  
   cout<<"Please enter the size of the array."<<endl;
    cin>>n;
    int A[n][n];
  cout<<"Randomly filling the array"<<end;
    for (int i =0; i<n, i++){    
        for (int j=0; j< n, j++){
            A[i][j] = rand()%100; 
          }
    }
    auto start = std::chrono::steady_clock::now();
   if(anyEqual(n,A)){
       cout<<"This array has two elements that are the same"<<endl;
   }
  else{
      cout<<"No two elements are the same in this array"<<endl; 
    }
    auto end= std::chrono::steady_clock::now();
    std::chrono::duration<double>elapsed_seconds= end - start; 
    std:: cout<<"elapsed time: "<<elapsed_seconds.count()<<"s\n";

    return 0; 
}
int anyEqual (int n,  int A[][]){

   int i,j,k,m;

    for (i = 0; i<=n; i++){
    
         for (j=0; j<= n; j++){

              for (k=0; k<= n; k++){

                   for (m=0;m<=n;m++){

                       if (A[i][j]==A[k][m] && !(i== k && j==n){

                              return 1;
                          }
                   }
              }
       }
   }
return 0;
}