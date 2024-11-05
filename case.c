#include<stdio.h>
int main(){
    int choice;
    printf("type the no to get any info on that anime:\n1.Bleach\t2.One Piece\t3.Naruto");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Bleach follows the life of a soul reaper Kurosaki Ichigo\nwho unwillingly becomes a shinigami who then\nhelps the soul society to win over Aizen!");
        break;
    
    case 2:
        printf("The crew of strawhats go out to find one piece,the treasure\nleft by Gol.D.Roger the pirate king\ncompeting with several other pirates!");
        break;
    case 3:
        printf("The life of a outcast boy in Konoha village\n who dreams to be the THE HOKAGE\nthe highest position in the village!\n Dattebayo!!");
        break;
    default:
        printf("wrong choice bakayaro!!");
        break;
    }
}