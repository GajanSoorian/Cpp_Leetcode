// Example program
#include <iostream>
#include <string>

int n;
void printArray(int a[]){
    for(int i=0;i<n;i++)
        {
           std::cout<< a[i]<< " ";
        }
        std::cout<<std::endl;
}


void bubbleSort(int a[])
{
    int temp;
    bool swapped=false;
    for(int i=0;i<n-1;i++)
        {
        for(int j=0;j<n-1-i;j++){
    
            if(a[j]>a[j+1])
                {
                    //std::cout<<" i = "<<i<<" ";
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    swapped=true;
                }

        }
        if(swapped ==false)
            return;
        }
          std::cout<<"Bubble sort : ";
          printArray(a);

}

void selectionSort(int a[])
{
    int min,minIndex=0,temp;
        for(int i=0;i<n;i++)
        {
            min=a[i];
         for(int j=i+1; j<n;j++)
         {
             if(a[j]<min)
            {
                min= a[j];
                minIndex=j;
            }
            
        }
                    if (a[i]!=min)
                    {temp=a[i];
                    a[i]=min;
                    a[minIndex]=temp;}
        }
    
    std::cout<<"SelectionSort :";
    printArray(a);
}

void insertionSort(int a[])
{
    bool pass =false;
    int j,key;
    for(int i=1; i<n; i++)
    {
        
        key = a[i];
        j=i-1;
        

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            --j;
           // std::cout<<"j= "<<a[j] <<" key = " << key<<std::endl;
            pass=true;
        }
        if(pass==true){
                a[j+1]=key;
               pass =false;
        }
    }
    std::cout<<"Insertion Sort :";
    printArray(a);
}

int main()
{
    int a[]={1,9,2,-2,0,-26,93,865,9};
    n= (sizeof(a)/sizeof(a[0]));
    bubbleSort(a);
    int b[]={1,9,2,-2,0,-26,93,865,9};
    selectionSort(b);
    int c[]={1,9,2,-2,0,-26,93,865,9};
    insertionSort(c);
    
}
