#include<iostream>

typedef struct 
{
   unsigned int bitArr : 1;     
}data;

int main()
{   
    data *dt;
    int h = 512;
    int w = 512;
    dt = (data*)malloc(h*w*sizeof(data));   
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            dt[i*w+j].bitArr=0;
        }
    }
    std::cout<<"Return Successful"<<std::endl;
    return 0;
}