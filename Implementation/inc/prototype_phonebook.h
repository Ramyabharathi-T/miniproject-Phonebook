/**
 * @file prototype_phonebook.h
 * 
 * @author Ramyabharathi T
 * 
 * @brief This is a simple phonebook application
 * 
 * @version 0.1
 * 
 * @date 2021-04-13
 * 
 * 
 */

#ifndef __PROTOTYPE_PHONEBOOK_H__
#define __PROTOTYPE_PHONEBOOK_H__


#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct contact{
    char name[20];
    char gender[10];
    char gmail[30];
    char lastname[20];
    int phone;
    char group[20];
}s[100];
/**
 * @brief Structure that stores different attributes of a contact
 * 
 */
struct group{
    char gname[10];
}g[20];
/**
 * @brief Structures that stores the name of a group
 * 
 */
void readgroup();
/**
 * @brief To create a group
 * 
 */
void read();
void readnew();
/**
 * @brief To create a contact based on user's input
 * 
 */
void deletecont();
/**
 * @brief To delete a contact
 * 
 */
void sortbyg();
/**
 * @brief To sort the contacts by group
 */
void display();
/**
 * @brief To display the contacts
 */
void menu();
/**
 * @brief To display the menu containing various methods
 */

#endif
