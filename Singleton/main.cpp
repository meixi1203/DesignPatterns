#include "common.h"
#include "Singleton.h"


int main()
{
    for(int count = 0; count < 100000; count++)
    {
        Singleton *s1 = Singleton::getInstance();
        cout << (void *)s1 << endl;
    }
    return 0;
}
