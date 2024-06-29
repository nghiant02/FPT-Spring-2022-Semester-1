include \masm32\include\masm32rt.inc
  
.data
v1 dd 0
v2 dd 0
result dd 0 
remainder dd 0
 
.code                       
start:                         
    call main                  
    exit

main proc
              
    mov v1, sval(input("v1 :"))
    mov v2, sval(input("v2 :"))

    print chr$("v1 + v2 = ")
    mov ecx, v1               
    add ecx, v2              
    print str$(ecx)
    print chr$(13,10)

    print chr$("v1 - v2 = ")
    mov ecx, v1               
    sub ecx, v2               
    print str$(ecx)
    print chr$(13,10)

    print chr$("v1 * v2 = ")
    mov eax, v1              
    mul v2 
    mov result,eax            
    print str$(result)
    print chr$(13,10)

    print chr$("v1 / v2 = ")
    mov edx, 0             
    mov eax, v1
    div v2
    mov result,eax 
    mov remainder,edx           
    print str$(result)
    print chr$(" , remainder = ")
    print str$(remainder)

   
    ret
main endp

end start                      