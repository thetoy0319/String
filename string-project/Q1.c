//1.WAP to check of a given password is valid or not.

#include<stdio.h>
#include<string.h>

int main(){
	
	char password[20];
	int i;
	int digit = 0;
	int letter = 0;
	int specialsymbol = 0;
	
	printf("Required criteria for password:\n");
    printf("1. One letter,One digit and One special symbol must be in password\n"); 
	printf("2. Password must be at least of 6 characters\n"); 
	
	printf("\n\n");  

    printf("Enter password:");
    scanf("%s",password); 
	
	if(strlen(password)>=6){    
	        
       for(i=0 ; i<strlen(password) ; i++){  
       
        if((password[i] >='A' && password[i]<='Z') || (password[i] >='a' && password[i]<='z')){  
		                  
            letter = 1;     	               
        }
        
        else if(password[i] >='0' && password[i]<='9'){ 
		                   
            digit = 1;        	            
        }
        
        else{     
		               
            specialsymbol = 1; 	                 
        }   
       }  
	             
      if((letter && digit && specialsymbol) == 1){  
	                
        printf("Password is valid");
      }
      
      else{
      	
        printf("Password is not valid ");		                
     }
    }
    else{ 
	           
        printf("Less than 6 letters!!");
    } 
	

	
	return 0;
}
