 #include<iostream>
 using namespace std;
 int main(){
 int num, term ;
 cin>>num;
 cin>>term;
 for(int i=0; i<=term ;i++){
      i = num + i;
      num= num + i;
 }
 cout<<num<<endl;
 return 0;
}