#include<iostream>
#include<cstdlib> 
#include<ctime> 
using namespace std; 
static const char PASSWORD[]="0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"; 
int strLen=sizeof(PASSWORD)-1; 

char generate()
{ 
 return PASSWORD[rand()%strLen]; 
} 

int main(){ 
    int n,c=0,s=0;
    srand(time(0)); //for setting random numbers to generate each time
    cout<<"Enter the length of the password: ";
    cin>>n;
    cout<<n<<endl;
    cout<<"Your Password is:    ";
    P:
    char C;
    string D; //for storing password
    for(int z=0; z < n; z++) { 
        C = generate();
        D = D+C;
    if(isdigit(C)){
        c++; //contains digit
    }
    if(C=='!' || C=='@' || C=='$' || C=='%' ||  C=='^' || C=='&'|| C=='*'|| C=='#'){
        s++; //contains special character
    }
    }
    if(n>2 && (s==0 || c==0)){ 
      goto P; // if password lenght is more than 2, and atleast one digit & special characters else repeat
    }
    cout<<D; 
    cout<<endl;
    return 0; 
}