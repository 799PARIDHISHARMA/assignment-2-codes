#include<iostream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
   if(argc!=3){
    cout<<"usage:"<<argv[0]<<"<integer1><integer2>"<<endl;
    return 1;
   }
   int num1 = atoi(argv[1]);
   int num2 = atoi( argv[2]);
   cout<<"the sum is:"<< num1 + num2 <<endl;
   return 0;
}  