#include <iostream>

using namespace std;

int main ()
{
    int rows,coloums;
    cin>>rows>>coloums ;
for(int i=1 ; i<=rows ;i++)
{for(int j=1 ; j<=coloums ; j++)
{
if (i==1 || i==rows || j==1 || j==coloums)
{cout<<"*" ;

}else{cout<<"   " ;}


}cout<<endl ;
}





        return 0 ;
}
