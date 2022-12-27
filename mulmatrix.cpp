#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

void showmatrix1(int d[][2],int r,int c);

void showmatrix2(int d[][4],int r,int c);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Define first array
int a[3][2] = {{1,2},{3,4},{5,6}};

//Use function for show array
showmatrix1(a,3,2);

//Define Second array
int b[2][4] = {{7,8,9,10},{11,12,13,14}};

cout<<endl;

//Use function for show array
showmatrix2(b,2,4);

//Seperator
cout<<endl<<"----------------------------------"<<endl;

//Define Second array
int c[3][4] = {0};

cout<<endl;

//Use function for show array
showmatrix2(c,3,4);

//Seperator
cout<<endl<<"----------------------------------"<<endl;

getch();
}
//function variable
//--------------------------
//Fتunctions

void showmatrix1(int d[][2],int r,int c)
{

for(int i=0; i<r; ++i)
{

    for(int j=0; j<c; ++j)
    {
        cout<<d[i][j]<<"\t";
    }
    cout<<endl;
    
}
}

//function for 
void showmatrix2(int d[][4],int r,int c)
{

for(int i=0; i<r; ++i)
{
    for(int j=0; j<c; ++j)
    {
        cout<<d[i][j]<<"\t";
    }
    cout<<endl;
}
}
