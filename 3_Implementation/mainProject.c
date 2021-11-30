/**
 * @file mainProject.c
 * @author pushpalathabt (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>


#include"user.h"
#include"topicfunctions.h"




/**
 * @brief The main function takes the user details
 *
 * @return int
 */


int main(){
    /**
     * @brief U is the object to the user
     *
     */
    user U;

    /**
     * @brief setxy is function it takes the x,y int input and set their position on the compiler
     *
     */
   
    printf("---------------------------------------------------\n");
    
    printf(" ________Hi! There Please Enter the Details_________\n");
  
    printf("-----------------------------------------------------\n");
   
    printf("*******************************************************\n");
    


  
   printf("First Name:\t");

   scanf("%s",U.first);
  
   printf("Last Name:\t");

    scanf("%s",U.last);
  
   printf("Email id:\t");

   scanf("%s",U.email);
  
  
   printf("Phone Number:\t");

   scanf("%s",U.phone);

  
   printf("*******************************************************\n");
   
   
   
   


   

    Topicindex();

   //topics(Topicchoice);

    return 0;


    }