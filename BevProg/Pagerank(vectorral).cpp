#include "std_lib_facilities.h"

void
kiir (vector<double> tomb)
{
    int i;
    for (i=0; i<tomb.size(); i++)
    cout<<"Pagerank["<<i<<"]: "<<tomb[i]<<endl;
}

double tavolsag(vector<double> pagerank, vector<double> pagerank_temp)
{
    double tav = 0.0;
    int i;
    for(i=0;i<pagerank.size();i++)
        tav +=abs(pagerank[i] - pagerank_temp[i]);
    return tav;
}

int main()
{
    vector<vector<double>>L= {
        {0.0, 0.0, 1.0 / 3.0, 0.0},
        {1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
        {0.0, 1.0 / 2.0, 0.0, 0.0},
        {0.0, 0.0, 1.0 / 3.0, 0.0}
    };
    
    vector<double> PR = {0.0, 0.0, 0.0, 0.0};
    vector<double> PRv = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};
    
    long int i,j,h;
    i=0; j=0; h=5;
    
    for (;;)
    {
        PR = PRv;
        for (i=0;i<4;i++)
        {
            double temp=0.0;
            for (j=0;j<4;j++)
                temp+=L[i][j]*PR[j];
            PRv[i]=temp;
        }
        
        if ( tavolsag(PR,PRv) < 0.0000001)
            break;
    }
    kiir (PR);
    return 0;
    
}
