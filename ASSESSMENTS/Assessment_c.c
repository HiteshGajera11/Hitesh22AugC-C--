#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char name[100],str[50],c;
	int i,vowel,len,consonant,choice,space,digit=0,count=0;
	again:
	printf("Enter Your Name : ");
	gets(name);
 	printf("\nUser Name is %s\n",name);
	
	
	printf("\n\t1 - Reverse.");
	printf("\n\t2 - String Copy.");
	printf("\n\t3 - Concat.");
	printf("\n\t4 - Palindrome.");
	printf("\n\t5 - Length.");
	printf("\n\t6 - Frequency of Charactor in s String. ");
	printf("\n\t7 - Number of Vowels and consonants. ");
	printf("\n\t8 - Number of blank spaces and digits. ");
	printf("\n\t9 - Exit.");
	printf("\n\tDo you Want to Continue? Press 10 ");
	
	printf("\n\n Please Enter Your Choice : ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1 : printf("\n\tThe String After Reversing is %s",strrev(name));
				 break;
		case 2 : strcpy(str,name);
				 printf("\n\tCopy of the string is %s ",str);
				 break;
		case 3 : printf("\n\tThe String Concatenant is %s",strcat(name,str));
				 break;
		case 4 : strcpy(str,name);//copy string to another string.
				 strrev(str);// then reverse 
				 	if(strcmp(name,str))//compare two string 
				 	{
				 		printf("\nThe String is Palindrome.");
				 	}
				 	else
				 	{
				 		printf("\nThe string is not Palindrome.");
				 	};
				 	break;
		case 5 : printf("\n\tThe Lenghth of String is %s",strlen(name));break;
		case 6 : for(c='a';c<='z';c++)
					{
						count=0;
						for(int i=0;name[i]!=NULL;i++)
						{
							if(c==name[i])
								count++;
						}
						if(count>0)
						printf("%c Found in %d times\n",c,count);	
					}
				 for(c='A';c<='Z';c++)
					{
						count=0;
						for(int i=0;name[i]!=NULL;i++)
						{
							if(c==name[i])
								count++;
						}
						if(count>0)
						printf("%c Found in %d times\n",c,count);	
					}
				 break;
		case 7 : vowel=0;consonant=0;len=strlen(name);
					for(i=0;i<len;i++)
					{
						if((name[i]>='a') && (name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
						{
							//If the current character(name[i]) is a vowel
							if(name[i]=='a' || name[i]=='e'|| name[i]=='i'|| name[i]=='o' || name[i]=='u' ||
							name[i]=='A' || name[i]=='E'|| name[i]=='I'|| name[i]=='O' || name[i]=='U')
								vowel++;
							else
								consonant++;
						}
					}
						printf("\nTotal Number of vowel is %d",vowel);
						printf("\nTotal number of consonant of %d",consonant);
				 break;
		case 8 : while(i<=name[i])
					{
						if(name[i]==' ' )
						{
							space++;
						}	
					};
				 for(i=0;name[i]!='\0';i++)
				 {
					 if(name[i]=='0'||name[i]=='1'||name[i]=='2'||name[i]=='3'||name[i]=='4'
					 ||name[i]=='5'||name[i]=='6'||name[i]=='7'||name[i]=='8'||name[i]=='9')
					 digit++;
			 	 };
				 printf("\nTotal number of white spaces is %d",space);
				 printf("\nTotal number of digit is %d",digit);
				 break;
		case 9:  exit(1);
				 break;
		case 10: goto again;
				 break;
		default: printf("Please Enter a Valid choice and Try Again..");
				 break;

	}
	return 0;
}
				 
	




