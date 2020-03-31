#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;
const int nrow=10; // number of rows
const int ncols=4; // number of columns
void histogram(int a[][ncols], int );
int main()
{
    int array_m[nrow][ncols];//  dimension array
    srand(time(NULL));
    int range = 9- 0 + 1; // range of the number where 9 is highest number and 0 is lowest number declared

    for(int row=0; row<nrow; row++)  // rows loop
        for(int col=0; col<ncols; col++) // coloumn loop
            array_m[row][col]= (rand() % range + 0);//filled the array with random numbers between 0 to 4
    cout<<"+++++++++++++\tRandomly genrated numbers in Arrays\t+++++++++++++ \n\n\n";

    for(int i=0; i<nrow; i++)
    {
        for(int j=0; j<ncols; j++)
        {
            cout<<array_m[i][j]<<"\t";
        }
        cout<<"______________________________";
        cout<<endl;
    }
    cout<<"\n\n\n";
    histogram(array_m,nrow);
}

// function body
void histogram(int a[][ncols], int nrows)
{
    int arry_formate[]= {0,0,0,0,0,0,0,0,0,0};//khurram shafiqu
    for(int row=0; row<nrows; row++)
    {
        for(int col=0; col<ncols; col++)
        {
            arry_formate[(a[row][col])]=arry_formate[(a[row][col])]+1;// increment of the array
        }
    }
    cout<<"+++++++++++++\tHistogram  Generated for this problem\t+++++++++++++ "<<endl;
    for(int i=0; i<10; i++)//khuram shafique 
    {
        cout<<i<<"|";// y axises numbers and line
        for(int j=0; j<arry_formate[i]; j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
    for(int j=1; j<11; j++)// x axises loop
    {
        cout<<"--"; // x axises lines
        cout<<j;// for x axis numbering
    }
    cout<<"\n\n\n\n";
     cout<<"coded by Khurram Shafique.. www.thezainab.com";
}
