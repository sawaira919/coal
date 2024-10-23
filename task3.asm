
.model small
.stack 100h
.data
.code

main proc
    
   
 
   mov cx,26
   mov dx,65
              
        l:
   mov ah,2
   int 21h
   inc dx  
    Loop l
 
   
   mov ah,4ch
   int 21h   
  
  main endp  




