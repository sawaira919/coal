.model small
.stack 100h
.data
.code

main proc
    
   
 
   mov cx,10
   mov dx,48
              
   l:
   mov ah,2
   int 21h
   Inc dx  
    Loop l
 
   
   mov ah,4ch
   int 21h   
  
  main endp  




