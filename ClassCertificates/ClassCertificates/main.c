//
//  main.c
//  ClassCertificates
//
//  Created by Gabe on 10/12/14.
//  Copyright (c) 2014 Gabe Snyder. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days!\n",
           student, course, numDays);
}

int main(int argc, const char * argv[])
{
    congratulateStudent("Kate", "Cocoa", 5);
    //Sleep is a waiting function called from the unistd.h file--see above...
    sleep(5);
    
    congratulateStudent("Gabe", "Ruby", 365);
    congratulateStudent("Gondo", "Objective-C", 2);
    //Because numDays accepts an 'int' type, 99.21 will be shortened to 99.
    congratulateStudent("Paige", "Python", 99.21);
    
    return 0;
}
