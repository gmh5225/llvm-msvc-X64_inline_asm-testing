#include <Windows.h>

void
test_1()
{
    _asm
    {
        mov rax,1
        ret
    }
}

int
main()
{
    test_1();
    return 0;
}
