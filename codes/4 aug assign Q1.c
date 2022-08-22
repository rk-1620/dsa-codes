#include<stdio.h>
#include<conio.h>

int insert(int *);   //TO INSERT THE ELEMENTS IN THE ARRAY
int view(int *);    //TO VIEW THE ELEMENT OF THE ARRAY
int del(int *);       //TO DELETE ELEMENT OF THE ARRAY

//main function
void main()
{
    int a[10];        // ARRAY OF LENGTH 10
    int ch;
    while(1)
    {
			printf("\n******* Enter the choice:******** \n");
            printf("\n Enter 1 to insert element in array: \t");
            printf("\n Enter 2 to view element in array: \t");
            printf("\n Enter 3 to delete element in array: \t");
            printf("\n Enter 4 to Exit: \t\n");
            
            printf("\n Enter your choice: =  ");
        
            scanf("%d", &ch);	// COMMAND GIVEN BY THE USER
            if(ch==1){
            	insert(a);      //FUNCTION TO INSERT THE ELEMENT IN THE ARRAY
                getch;
			}
			else if(ch==2){
				view(a);      //FUNCTION TO VIEW THE ELEMENT OF THE ARRAY
                getch;
			}
			else if(ch==3){
				del(a);       //FUNCTION TO DELETE THE ELEMENT IN THE ARRAY
                getch;
			}else{
				exit(0);
			}
    }
}
    int insert(int *a)
    {
		//FUNCTION TO INSERT THE ELEMENT IN THE ARRAY
        int i, n;
        printf("\nEnter the no. of elements in array: \t");
        scanf("%d", &n);
        printf("\n ********Enter %d elements in array********* \n", n);
        for(i=0; i<n; i++)
        {
        	printf("\n Enter element number %d in array: \t", i+1);
            scanf("%d", &a[i]);
        }
        a[i]='\0';
        return *a;
    }
    int view(int *a)
    {
		//FUNCTION TO VIEW THE ELEMENT OF THE ARRAY
        int j;
        printf("\n");
        printf("\n\t****Element of array****\n");
        
        printf("\n");
        printf("\t\t");
        for(j=0; a[j]!=NULL; j++)
        {
        	
            printf(" %d ", a[j]);

        }
        printf("\n");
        printf("\n");
        return *a;
    }
    int del(int *a)
    {
		//FUNCTION TO DELETE THE ELEMENT IN THE ARRAY
        int c, k, position;
        for(k=0; a[k]!=NULL; k++)
        {
        }
            printf("\n Enter the position to delete element:\t");
            scanf("%d", &position);
            if(position<=k)
            {

                for(c=position-1; c<k-1; c++)
                {
                    a[c]=a[c+1];
                }
                printf("\n");
        		printf("\n\t****Array after deletion****\n");
        		
                printf("\n ");
                printf("\t\t");
                for(c=0; c<k-1; c++)
                {
                    printf(" %d ", a[c]);
                }
            }
            return *a;
    }
