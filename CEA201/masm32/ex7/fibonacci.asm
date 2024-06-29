include \masm32\include\masm32rt.inc

.data
.code
start:
    call main
    invoke crt_exit, 0
;<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
main proc
    LOCAL varN:DWORD
    LOCAL t1:DWORD
    LOCAL t2:DWORD
    LOCAL f:DWORD
    LOCAL counter:DWORD
    mov t1, 1
    mov t2, 1
    ;
    mov eax, sval(input("Enter n to print n fibonaci:"))
    mov varN, eax
    cmp varN, 2
    jle CASE1
    jg CASE2
    ;
CASE1:
    cmp varN, 0
    jle STOP
    mov eax, varN
    mov counter, eax
LOOP1:
    print chr$("1  ")
    sub counter, 1
    cmp counter, 0
    jg LOOP1
    jle STOP
CASE2:
    mov eax, varN
    sub eax, 2
    mov varN, eax
    mov counter, eax
    print chr$("1  1")
LOOP2:
    print chr$("  ")
    mov eax, t1
    add eax, t2
    mov f, eax
    print str$(f)
    mov ebx, t2
    mov t1, ebx
    mov ebx, f
    mov t2, ebx
    dec counter
    cmp counter, 0
    jg LOOP2
    jle STOP
STOP:
    ret
main endp
end start
    
    
    