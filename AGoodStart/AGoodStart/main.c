//
//  main.c
//  AGoodStart
//
//  Created by Gabe on 10/12/14.
//  Copyright (c) 2014 Gabe Snyder. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declare the variable called weight of float type
    float weight;
    
    //Store a number in variable weight
    weight = 14.2;
    
    //Log variable weight to the user
    printf("The turkey weighs %f pounds.\n", weight);
    
    //Declare another variable of float type
    float cookingTime;
    
    //Calculate the cooking time and store it in variable cookingTime
    cookingTime = (15.0 + 15.0 * weight)/60;
    
    //Log cookingTime to the user...
    printf("Cook it for %f hours!\n", cookingTime);
    
    //End this function...
    return 0;

    
}
