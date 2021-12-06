#include <stdio.h>

// int main(){
//  printf("Once upon a time, there was a man named Tony\n");
//  printf("His age was 25 years old.\n");
//  printf("Tony is owner and CEO of Stark Industries");
//  printf("\n");
//  return 0;
// }



/* With variables */


int main(){
    char storyCharacterName[] = "Tony";
    int charAge = 25;
    printf("Once upon a time, there was a man named %s\n", storyCharacterName);
    printf("His charAge was %d years old.\n", charAge);
    printf("%s is owner and CEO of Stark Industries", storyCharacterName);
    printf("\n");
    return 0;
}