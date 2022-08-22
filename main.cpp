#include <windows.h>

int main(int , char *[])
{
    BOOL buttonsAreSwapped =SwapMouseButton (1);
    if( buttonsAreSwapped)
        // revert to non swapped
        return SwapMouseButton (0);
    else
        return SwapMouseButton(1);
}
