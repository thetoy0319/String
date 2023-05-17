//2.WAP to create login mechanism by entering right email & password.

#include<stdio.h>
#include<string.h>

int main(){
	
	char email[20] , password[20];
	
	printf("Enter E-mail : ");
	scanf("%s",email);
	
	printf("Enter Password : ");
	scanf("%s",password);
	
	char r_email[] = "xyz312@gmail.com";
	char r_password[] = "a_312";
	
	int y = strcmp(email,r_email);
	int z = strcmp(password,r_password);
		
	if(y==0 && z==0){
		printf("Login Successfully");
	}
	else{
		printf("Login Fail !");
	}
	
	return 0;
}
