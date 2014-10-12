//
//  main.c
//  BeerSong
//
//  Created by Gabe on 10/12/14.
//  Copyright (c) 2014 Gabe Snyder. All rights reserved.
//

#include <stdio.h>

void singSongFor(int numberOfBottles)
{
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on this wall!\n\n");
    } else {
        printf("%d bottles of beer on the wall, %d bottles of beer...\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall!\n\n", oneFewer);
        singSongFor(oneFewer);//This function calls itself!
        
        //Print message just before the function ends...
        printf("How are we going to fit %d bottles into the recycling bin?\n", numberOfBottles);
    }
}

int main(int argc, const char * argv[]) {
    // Sing verses here...
    singSongFor(5);
    
    return 0;
}
