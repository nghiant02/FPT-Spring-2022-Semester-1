include \masm32\include\masm32rt.inc

.data
.code
start:
    call main
    exit
;<<<<<<<<<<<<<
main proc
    LOCAL varA:DWORD
    LOCAL varB:DWORD
    LOCAL result:DWORD
    LOCAL remainder:DWORD
    LOCAL isNegA:DWORD
    LOCAL isNegB:DWORD
    ;
    mov isNegA, 0
    mov isNegB, 0
    print chr$("Calculate equation ax + b = 0",13,10)
    mov varA, sval(input("Enter a: "))
    mov varB, sval(input("Enter b: "))
    ;
    mov eax, varB
    neg eax
    mov varB, eax
    ;
    cmp varA, 0
    je Error
    jl NegA
    jg CheckB
NegA:
    mov isNegA, 1
CheckB:
    cmp varB, 0
    jl NegB
    jge SOLVE
NegB:
    mov isNegB, 1
SOLVE:
    mov eax, isNegB
    cmp isNegA, eax
    je CASE1
    jl CASE3
    jg CASE2
CASE1:
    mov eax, varB
    mov ebx, varA
    xor edx, edx
    div ebx
    mov result, eax
    mov remainder, edx
    jmp PRINT
CASE3:
    mov eax, varA
    neg eax
    mov varA, eax
    mov ebx, varB
    neg ebx
    mov varB, ebx
    jmp CASE2
CASE2:
    mov eax, varB
    mov ebx, varA
    xor edx, edx
    idiv ebx
    mov result, eax
    mov remainder, edx
PRINT:
    print chr$("Result: x = ")
    print str$(result)
    print chr$(" and remainder: ")
    print str$(remainder)
    jmp STOP
Error:
    print chr$(13,10,"A can not equal 0!")
STOP:
    ret
main endp
end start