/** 
* @file pharmacy.h
* Various tasks performed at a pharmacy
*
*/

#ifndef __PHARMACY_H__
#define __PHARMACY_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
 * @brief Structure contains details about an item
 * 
 */
typedef struct item
{
    char name[30];
    int unit_price;
    int qty;
}item;

//float amount(item, )

#endif  /* #define ___PHARMACY_H__ */