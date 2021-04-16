/** 
* @file pharmacy.h
* Various tasks performed at a pharmacy
*
*/

#ifndef __PHARMACY_H__
#define __PHARMACY_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Structure contains details about an item
 * 
 */
struct Medicine{
    int item_code,stock;
    float unit_price;
    char name[100];
  }m[10];
/**
 * @brief Calculates the bill amount and displays a bill
 * 
 */
void bill();

/**
 * @brief Displays the list of medicines available at the store
 * 
 */
int display();

/**
 * @brief To check if there is enough stock available at the store
 * 
 */
int checkstock();

#endif  /* #define ___PHARMACY_H__ */