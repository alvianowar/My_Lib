#include <bits/stdc++.h>
using namespace std;

int nod[ 1000005 ];

int main() {
        for( int i = 1; i <= 1000000; i++ ) {
                for( int j = i; j <= 1000000; j += i ) {
                        nod[j]++;
                }
        }
        for( int i = 1; i <= 10; i++ ) {
                printf("nod of %d = %d\n",i,nod[i]);
        }
        return 0;
}
