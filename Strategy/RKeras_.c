#include <r.h>

function run()
{
    if(!Rstart("", 2)) //enable verbose output
    {
        print("Error - could not start R session!");
        quit();
    }
    
    Rx("x <- mean(rnorm(100, 0, 1))", 0); //default mode: wait until R code completes
    Rx("print(x)", 3); //execute asynchronously, print output to debug view and Zorro GUI window 
        
    if(!Rrun())
    {
        print("Error - R session has been terminated!");
        quit();
    }
}
