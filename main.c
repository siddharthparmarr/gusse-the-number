#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
int number;
int nuguesses=1;
int remain;
int user;

printf ("enter the number that you want to guess between 1- (Yourguesshere)\n");
scanf ("%d",&user);

printf ("How many attempts you want for this ? ");
scanf ("%d", &remain);

srand(time(0));
number=rand()%user + 1; //generate random number
int a;

do{
printf ("enter the number between 1-%d\n", user);
scanf ("%d",&a);

    if (a>number){
        printf (" lower number please!\n");

    }

    else if (a<number){
        printf ("Higher number please!\n");

    }

    else {

        printf("You guessed it in %d attempts\n ", nuguesses);

        break;

    }
        remain--;
                
    nuguesses++;
    printf("remaining attempts are %d \n", remain);
}while (remain!=0);

if (a==number) {
printf(" Congrats! you won the game!" );

}

else {

printf (" OH ! You lose try next time\n");
printf("The number is %d\n", number);
}


return 0;
}
