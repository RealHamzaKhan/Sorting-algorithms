#include <iostream>

using namespace std;
class sorting
{
    int sizes;
    int *arr=new int[sizes];
public:

    sorting()
    {
        cout<<"Enter size of array : ";
        cin>>sizes;

        int *ele=arr;
        cout<<"For Radix sort enter numbers between 100 and 999"<<endl;
        for(int i=0;i<sizes;i++)
        {
            cout<<"Enter element : ";
            cin>>*ele;
            ele++;
        }
        cout<<"Before sorting "<<endl;
        ele=arr;
        for(int i=0;i<sizes;i++)
        {
            cout<<*ele<<"  ";
            ele++;
        }
        cout<<endl;
    }
    void selectionsort()
    {
        int *first=arr;
        int *second=arr;
        int swaps;
        while(first<=arr+(sizes-1))
        {
            while(second<=arr+(sizes-1))
            {
                if(*second<*first)
                {
                    swaps=*first;
                    *first=*second;
                    *second=swaps;
                }
                second++;
            }
            first++;
            second=first;
        }
    }
    void print()
    {
        cout<<"After sorting"<<endl;
        int *ele=arr;
        for(int i=0;i<sizes;i++)
        {
            cout<<*ele<<"  ";
            ele++;
        }
    }
    void radixsort()
    {

        int *first=arr;
        int *second=arr;
        int check1f;
        int check1s;
        int check2f;
        int check2s;
        int check3f;
        int check3s;
        int swaps;
        while(first<=arr+(sizes-1))
        {
            while(second<=arr+(sizes-1))
            {
                check2f=*first/10%10;
                check2s=*second/10%10;
                check3f=*first%10;
                check3s=*second%10;
                check1f=*first/100%10;
                check1s=*second/100%10;

                if(check1s<=check1f)
                {
                    swaps=*first;
                    *first=*second;
                    *second=swaps;
                }
                else if(check1s<=check1f && check2s<=check2f)
                {
                    swaps=*first;
                    *first=*second;
                    *second=swaps;
                }
                else if(check1s<=check1f && check2s<=check2f && check3s<=check3f)
                {
                    swaps=*first;
                    *first=*second;
                    *second=swaps;
                }
                second++;
            }
            first++;
            second=first;
        }
    }
};

int main()
{
    sorting s;
    //s.selectionsort();
    s.radixsort();
    s.print();

}
