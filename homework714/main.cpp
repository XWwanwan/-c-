#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main()
{
    vector <int> temp_vector;
    //array <int ,20> temp_array={};
    int temp=0;
    cin>>temp;
    temp_vector.push_back(temp);
    //int t=0;
    for(size_t i=1;i<20;i++)
    {

        cin>>temp;
        for(size_t j=0;j<temp_vector.size();j++)
        {
        if(temp==temp_vector[j])
        {
            int e=0;
        }else
        {
          temp_vector.push_back(temp);
        }
        }
    }

}
