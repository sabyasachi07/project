    #include<stdio.h>
    #include<stdlib.h> 
   
    void read();
    void write();
    struct record
    {
      char name[30];
      int roll;
      long int phone;
      float addr;
       char sex;
   
    }s;
   void main()
    {
    int ch;
    
        while(1)
        {
            printf("\n1:Write Records");
            printf("\n2:Read female Records");
            printf("\n3:Exit");
            printf("\n\tEnter Your Choice:- ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                write();
                break;
                case 2:
                read();
                break;
                case 3:
                exit(1);
                default:
                printf("\n\tOption not Available\n");
                break;
            }
        }
 
    }
    void write()
    {
    int i,n=0;
    FILE *fp;
        fp=fopen("stu.dat","wb");
        if(fp==NULL)
        {
            printf("can't create file");
            
            exit(1);
        }
        printf("\n\tHow Many Records You Want to Enter:=");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter Employee roll := ");
            scanf("%d",&s.roll);
	   getc(stdin);fflush(stdin);
           
	  

	   printf("\nEnter Employee Name := ");
            scanf("%[^\n]",s.name);
             getc(stdin);fflush(stdin);
           
	    printf("\nEnter Employee phone number := ");
            scanf("%ld",&s.phone);
           getc(stdin);fflush(stdin);

            printf("\nEnter the address:=");
            scanf("%f",&s.addr);
	    getc(stdin);fflush(stdin);

	 printf("\n Enter the character");    
    	        scanf("%c",&s.sex);
           getc(stdin);fflush(stdin);


            
            printf("\n*****************\n");
            fwrite(&s,sizeof(s),1,fp);
        }
    fclose(fp);
    }
    void read()
    {
    FILE *fp;
        fp=fopen("stu.dat","rb");
        if(fp==NULL)
        {
            printf("can't read file");
            
            exit(1);
        }
            while(fread(&s,sizeof(s),1,fp)==1)
            {
                printf("\nEmployee Roll no := %d",s.roll);
                printf("\nEmployee Name := %s",s.name);
		printf("Employee phone number := %ld",s.phone);
                printf("Enter the address := %f",s.addr);

                printf("\nemployee sex:= %c",s.sex)
			;
                printf("\n********************\n");
            }
    fclose(fp);
    }
