//Construindo Casas
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int A, B, C, Total;
    
    while (cin >> A && A!=0 && cin >> B >> C)
    {
        Total = sqrt((A*B)*(100./C));
        printf("%d\n",Total);
    }
}