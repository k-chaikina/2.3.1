#include <iostream>


using namespace std;


int main()
{
    
    char x[] = { "bvwevwev euirhvwehv we hvbvn wevuhb ewvj  eee" };
    
    
    for ( auto i : x )
    {
        if (i == 'e')
            cout << "X";
        else
            cout << i ;
    }
    cout << endl ;
    return 0;
}

