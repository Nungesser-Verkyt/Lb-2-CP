#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    unsigned int Array[] = {3, 4, 5, 13, 2, 0, 1, 6, 8, 5};
    unsigned int summ1=0, summ2=0;
    cout<<"Source array:\t Transformed array:"<<endl;
    for(unsigned int i=0;i<10;i++)
    {
        summ1+=Array[i];
        cout<<Array[i];
        Array[i] |= 1<<4;
        cout<<"\t\t\t"<<Array[i]<<endl;
        summ2+=Array[i];
    }
    cout<<"\n\nSums before and after:\n"<<summ1<<"\t\t\t"<<summ2<<endl;
}
