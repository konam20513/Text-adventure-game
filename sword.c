#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEALTH 20
#define MIN_DAMAGE 1
#define MAX_DAMAGE 5
#define MIN_ATTACK 6

int main()  
{
    int choice,choice_1,choice_2;
    int location = 1;
    int swordFound = 0;
    int monsterDead = 0;

    printf("Welcome to The Quest for the Lost Sword!\n");
    printf("You are on a journey to find a lost sword.\n");
    printf("Along the way, you will face challenges and enemies.\n");
    printf("Good luck on your quest!\n");

    while (swordFound == 0)
    {
        switch(location)
        {
            case 1:
            printf("You are at the entrance of a forest.\n");
            printf("1. Go left.\n");
            printf("2. Go right.\n");
            printf("3. Go straight.\n");
            printf("What would you like to do? ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                location = 2;
            }
            else if (choice == 2)
            {
                location = 3;
            }
            else if (choice == 3)
            {
                location = 4;
            }
            else
            {
                printf("Invalid choice.\n");
            }
            break;

            case 2:
            printf("You've chosen to explore the dark cave.\n");
            printf("As you venture deeper into the cave, you come across a group of goblins.\n");
            printf("Do you:\n");
            printf("1. Fight the goblins\n");
            printf("2. Attempt to sneak past them\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                int playerHealth = HEALTH;
                int monsterHealth = HEALTH;
                int playerAttack;
                int monsterAttack;

                srand(time(NULL));

                while (monsterHealth > 0 && playerHealth > 0)
                {
                    playerAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_ATTACK;
                    monsterAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
                    monsterHealth -= playerAttack;
                    playerHealth -= monsterAttack;
                    printf("You draw your sword and engage in battle with the goblins.\n");
                    printf("You attack the monster for %d damage.\n", playerAttack);
                    printf("The monster attacks you for %d damage.\n", monsterAttack);
                    printf("Your health: %d\n", playerHealth);
                    printf("Monster health: %d\n", monsterHealth);
                }
                if (monsterHealth <=0)
                {
                    monsterDead = 1;
                    printf("After a hard-fought battle, you emerge victorious.\n");
                    printf("You can now explore this area.\n");
                    printf("1. Continue exploring.\n");
                    printf("2. Return to the entrance of the forest.\n");
                    printf("What would you like to do? ");
                    scanf("%d", &choice_1);

                    if (choice_1 == 1)
                    {
                        location = 5;
                    }
                    else if (choice_1 == 2)
                    {
                        location = 1;
                        printf("You have returned to the entrance of the forest.\n");
                    }
                }
                else
                {
                    printf("Invalid choice.\n");
                }
                break;
            }

            else if (choice == 2)
            {
                int playerHealth = HEALTH;
                int monsterHealth = HEALTH;
                int playerAttack;
                int monsterAttack;

                srand(time(NULL));

                while (monsterHealth > 0 && playerHealth > 0)
                {
                    playerAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_ATTACK;
                    monsterAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
                    monsterHealth -= playerAttack;
                    playerHealth -= monsterAttack;
                    printf("You try to sneak past the goblins, but one of them spots you.\n");
                    printf("You are forced to fight your way out of the cave.\n");
                    printf("You attack the monster for %d damage.\n", playerAttack);
                    printf("The monster attacks you for %d damage.\n", monsterAttack);
                    printf("Your health: %d\n", playerHealth);
                    printf("Monster health: %d\n", monsterHealth);
                }
                if (monsterHealth <=0)
                {
                    monsterDead = 1;
                    printf("Despite the odds against you, you manage to defeat the goblins and escape the cave.\n");
                    printf("You can now explore this area.\n");
                    printf("1. Continue exploring.\n");
                    printf("2. Return to the entrance of the forest.\n");
                    printf("What would you like to do? ");
                    scanf("%d", &choice_2);

                    if (choice_2 == 1)
                    {
                        location = 5;
                    }
                    else if (choice_2 == 2)
                    {
                        location = 1;
                        printf("You have returned to the entrance of the forest.\n");
                    }
                }
                else
                {
                    printf("Invalid choice.\n");
                }
                break;
            }

            

            case 3:
            printf("You've chosen to wander the enchanted forest.\n");
            printf("As you stroll through the forest, you come across a magical unicorn.\n");
            printf("Do you:\n");
            printf("1. Attempt to ride the unicorn\n");
            printf("2. Observe it from a distance\n");
            scanf("%d", &choice);
            if (choice == 2)
            {
                printf("You admire the beauty of the unicorn from a distance.\n");
                printf("As you turn to leave, you spot a group of dark creatures approaching.\n");
                printf("Do you:\n");
                printf("1. Fight the dark creatures\n");
                printf("2. Flee on the back of the unicorn\n");
                scanf("%d", &choice_1);
                
                if (choice_1 == 1)
                {
                    int playerHealth = HEALTH;
                    int monsterHealth = HEALTH;
                    int playerAttack;
                    int monsterAttack;

                    srand(time(NULL));

                    while (monsterHealth > 0 && playerHealth > 0)
                    {
                        playerAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_ATTACK;
                        monsterAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
                        monsterHealth -= playerAttack;
                        playerHealth -= monsterAttack;
                        printf("You draw your sword and prepare to defend yourself.\n");
                        printf("You attack the monster for %d damage.\n", playerAttack);
                        printf("The monster attacks you for %d damage.\n", monsterAttack);
                        printf("Your health: %d\n", playerHealth);
                        printf("Monster health: %d\n", monsterHealth);
                    }
                    if (monsterHealth <=0)
                    {
                        monsterDead = 1;
                        printf("Despite being outnumbered, you manage to defeat the dark creatures.\n");
                        printf("You can now explore this area.\n");
                        printf("1. Continue exploring.\n");
                        printf("2. Return to the entrance of the forest.\n");
                        printf("What would you like to do? ");
                        scanf("%d", &choice);

                        if (choice == 1)
                        {
                            location = 5;
                        }
                        else if (choice == 2)
                        {
                            location = 1;
                            printf("You have returned to the entrance of the forest.\n");
                        }
                    }
                    else
                    {
                        printf("Invalid choice.\n");
                    }
                    break;
                }

                else if (choice_1 == 2)
                {
                    printf("You quickly mount the unicorn and flee the scene.\n");
                    printf("As you ride off into the sunset, you feel grateful for the unicorn's help.\n");
                    location = 5;
                    break;

                }
            }

            else if (choice == 1)
            {
                printf("You approach the unicorn and try to mount it.\n");
                printf("To your surprise, the unicorn allows you to ride it.\n");
                printf("Together, you explore the wonders of the enchanted forest.\n");
                location = 5;
                break;
            }



            case 4:
            printf("You've chosen to delve into the dragon's lair.\n");
            printf("As you venture deeper into the lair, you come face to face with a fire-breathing dragon.\n");
            printf("Do you:\n");
            printf("1. Fight the dragon\n");
            printf("2. Attempt to negotiate with the dragon\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                int playerHealth = HEALTH;
                int monsterHealth = HEALTH;
                int playerAttack;
                int monsterAttack;

                srand(time(NULL));

                while (monsterHealth > 0 && playerHealth > 0)
                {
                    playerAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_ATTACK;
                    monsterAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
                    monsterHealth -= playerAttack;
                    playerHealth -= monsterAttack;
                    printf("You draw your sword and engage in a fierce battle with the dragon.\n");
                    printf("You attack the monster for %d damage.\n", playerAttack);
                    printf("The monster attacks you for %d damage.\n", monsterAttack);
                    printf("Your health: %d\n", playerHealth);
                    printf("Monster health: %d\n", monsterHealth);
                }
                if (monsterHealth <=0)
                {
                    monsterDead = 1;
                    printf("After a long and exhausting fight, you emerge victorious.\n");
                    printf("You can now explore this area.\n");
                    printf("1. Continue exploring.\n");
                    printf("2. Return to the entrance of the forest.\n");
                    printf("What would you like to do? ");
                    scanf("%d", &choice);

                    if (choice == 1)
                    {
                        location = 5;
                    }
                    else if (choice == 2)
                    {
                        location = 1;
                        printf("You have returned to the entrance of the forest.\n");
                    }
                }
                else
                {
                    printf("Invalid choice.\n");
                }
                break;
            }

            else if (choice == 2)
            {
                printf("You try to reason with the dragon, but it doesn't seem interested in negotiating.\n");
                printf("Do you:\n");
                printf("1. Fight the dragon\n");
                printf("2. Flee the lair\n");
                printf("What would you like to do? \n");
                scanf("%d", &choice_1);
                
                if (choice_1 == 1)
                {
                    int playerHealth = HEALTH;
                    int monsterHealth = HEALTH;
                    int playerAttack;
                    int monsterAttack;

                    srand(time(NULL));

                    while (monsterHealth > 0 && playerHealth > 0)
                    {
                        playerAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_ATTACK;
                        monsterAttack = rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
                        monsterHealth -= playerAttack;
                        playerHealth -= monsterAttack;
                        printf("You draw your sword and engage in a fierce battle with the dragon.\n");
                        printf("You attack the monster for %d damage.\n", playerAttack);
                        printf("The monster attacks you for %d damage.\n", monsterAttack);
                        printf("Your health: %d\n", playerHealth);
                        printf("Monster health: %d\n", monsterHealth);
                    }
                    if (monsterHealth <=0)
                    {
                        monsterDead = 1;
                        printf("After a long and exhausting fight, you emerge victorious.\n");
                        printf("You can now explore this area.\n");
                        printf("1. Continue exploring.\n");
                        printf("2. Return to the entrance of the forest.\n");
                        printf("What would you like to do? \n");
                        scanf("%d", &choice_2);

                        if (choice_2 == 1)
                        {
                            location = 5;
                        }
                        else if (choice_2 == 2)
                        {
                            location = 1;
                            printf("You have returned to the entrance of the forest.\n");
                        }
                    }
                    else
                    {
                        printf("Invalid choice.\n");
                    }
                    break;
                }
                else if(choice_1==2)
                {
                    location=1;
                    printf("You have returned to the entrance of the forest.\n");

                }
                
            }




            case 5:
            printf("You find a cave.\n");
            printf("1. Enter the cave.\n");
            printf("2. Return to the entrance of the forest.\n");
            printf("What would you like to do? ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                location = 6;
            }
            else if (choice == 2)
            {
                location = 1;
                printf("You have returned to the entrance of the forest.\n");
            }
            else
            {
                printf("Invalid choice.\n");
            }
            break;

            case 6:
            printf("You find a room filled with treasure.\n");
            printf("You also see the lost sword in the corner.\n");
            printf("1. Take the sword.\n");
            printf("2. Leave the sword and return to the entrance of the forest.\n");
            printf("What would you like to do? ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                swordFound = 1;
                printf("You have successfully found the lost sword!\n");
                printf("Congratulations, you have completed the quest!\n");
            }
            else if (choice == 2)
            {
                location = 1;
                printf("You have left the lost sword and returned to the entrance of the forest.\n");
            }
            else
            {
                printf("Invalid choice.\n");
            }
            break;

            default:
            printf("Invalid location.\n");
            break;
        }
    }
    return 0;
}