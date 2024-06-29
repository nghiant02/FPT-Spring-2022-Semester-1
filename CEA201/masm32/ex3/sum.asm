; Ex03.asm
; Write a program that will accept 3 numbers, then sum of them and their average will be printed out

; Declare program model and all libraries using only one file
  include \masm32\include\masm32rt.inc
  
.code                       
start:                          ; the CODE entry point to the program
    call main                   ; branch to the "main" procedure
    exit
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
main proc
   
LOCAL var1:DWORD                
LOCAL var2:DWORD                 
LOCAL var3:DWORD  
; Input 3 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : "))
    mov var3, sval(input("Enter number 3 : "))
    
;tong    
print chr$("Tong cua 3 so: ")    
mov ecx, var1       
add ecx, var2             
add ecx, var3    
print str$(ecx)    
print chr$(13,10)
;trungbinh    
print chr$("Trung binh cua 3 so: ")    
mov ecx, var1      
add ecx, var2             
add ecx, var3    
mov eax, ecx    ;eax dung de chua phan nguyen    
xor edx, edx    ;xoa du lieu trong thanh ghi
mov ebx,3    
div ebx    
print str$(eax)    
print chr$(13,10)                      
ret
main endp
end start