        .string "Hello, Holberton"
        .text
        .globl  main
        .type   main, @function
main:
.LFB2:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        subq    $16, %rsp
        movq    $.LC0, -8(%rbp)
        movl    -12(%rbp), %eax
        movl    %eax, %edi
        movl    $0, %eax
        call    open
        movl    %eax, -12(%rbp)
        movq    -8(%rbp), %rax
        movq    %rax, %rdi
        call    strlen
        movq    %rax, %rdx
        movq    -8(%rbp), %rax
        movzbl  (%rax), %eax
        movsbl  %al, %ecx
        movl    -12(%rbp), %eax
        movl    %ecx, %esi
        movl    %eax, %edi
        movl    $0, %eax
        call    write
        movl    -12(%rbp), %eax
        movl    %eax, %edi
        movl    $0, %eax
        call    close
        leave
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc

