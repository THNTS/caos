        .text
        .global main

main:
        call    readi32
        cmpl    $0,  %eax
        jl      end
print_and_decr:
        push    %eax
        call    writei32
        call    nl
        pop     %eax
        decl    %eax
        cmpl    $0, %eax
        jl      end
        jmp     print_and_decr

end:
        call    finish