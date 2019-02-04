        .text
        .global print_fib

print_fib:
        pushl   %ebp
        movl    %esp,   %ebp

        movl    A,  %eax
        addl    B,  %eax
        movl    B,  %ecx
        addl    %eax,   %ecx
        movl    %eax,   %edx
        addl    %ecx,   %edx
        push    %edx
        push    %ecx
        push    %eax
        push    $str
        call    printf
        addl    $16,    %esp

        popl    %ebp
        ret

str:    .string "%d %d %d\n"