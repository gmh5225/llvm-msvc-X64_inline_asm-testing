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

__declspec(naked) void test_2()
{
    // error : 'naked' attribute is not supported on 'x86_64'
    // ->>>>>>>>>>>>>>>>>>>>>>>
    // 20220528 support in llvm-msvc-v1.5
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
    test_2();
    return 0;
}
