#include <iostream>
//5
namespace MyLib
{
void arrayinten(const float* array[], int size)
{
    float k=-2;
    for (int i = 0; i < size; i++)
    {
    array[i]=&k;
    
    k+=1;
    }
    
    
}
void arraycout(const float* array[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
    
        std::cout<<array[i]<<std::endl;
    }
    
    
}
void checkiinarray(const float* array[], int size)
{
    int min=0;
    int max = 0;
    
    for ( int i=0; i<size; ++i)
    {
        if (*array[i]<0)
        {
            min++;
        }
        if (*array[i]>0)
        {
            max++;
        }
    }
    std::cout<<min<<" "<<max;
}
}
