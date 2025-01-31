include /masm32/include/masm32rt.inc

factorial PROTO:DWORD

.code
start:
    call main
    exit

    main proc
        LOCAL var1:DWORD
        LOCAL result:DWORD


    print chr$(10)
    mov var1, sval(input("Enter n: "))
    print chr$("   ")
    print str$(var1)
    print chr$("! = ")
    invoke factorial, var1
    mov result, eax
    print str$(result)
    print chr$(10)
    ret
    
main endp

factorial proc v1 :DWORD
    mov eax, 1
    cmp v1, 0
    je STOP
CONTD:
    cmp v1, 1
    je STOP
    mul v1
    dec v1
    jmp CONTD
    
STOP:
    ret
factorial endp

end start