.model small
.stack 100h
.data  
result DB 0
.code
  main proc
    
    mov cx,3
    mov ax,0
    
    L1:
    add ax,cx
    
    Loop L1
    mov result,al
    mov ah,2
    mov dl,result
    add dl,48
    int 21h

   
   mov ah,4ch
   int 21h   
  




