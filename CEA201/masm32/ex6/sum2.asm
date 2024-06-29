

    .486                                       ; create 32 bit code
    .model flat, stdcall                       ; 32 bit memory model
    option casemap :none                       ; case sensitive

    include \masm32\include\msvcrt.inc
    includelib \masm32\lib\msvcrt.lib
    include \masm32\include\windows.inc        ; always first
    include \masm32\macros\macros.asm          ; MASM support macros

    include \masm32\include\masm32.inc
    include \masm32\include\gdi32.inc
    include \masm32\include\user32.inc
    include \masm32\include\kernel32.inc

    includelib \masm32\lib\masm32.lib
    includelib \masm32\lib\gdi32.lib
    includelib \masm32\lib\user32.lib
    includelib \masm32\lib\kernel32.lib
    
sum PROTO: DWORD, :DWORD

.code
start:
    call main
    exit
    
main proc
    LOCAL var1:DWORD
    LOCAL var2:DWORD
    LOCAL result:DWORD
    
ADDCAL:
;Input 2 intergers
    mov var1, sval(input("Enter number a: "))
    mov var2, sval(input("Enter number b: "))
    
;Gán ket qua vao result
    invoke sum, var1, var2
    mov result, eax

;Print the result
    print chr$("Sum of them:")
    print str$(result)
    print chr$(13,10)

ret

main endp


sum proc v1:DWORD, v2: DWORD
    mov eax, v1
    add eax, v2
    ret
sum endp
    
end start