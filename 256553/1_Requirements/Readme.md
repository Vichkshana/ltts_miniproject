# Requirements
## Introduction
 
 * Pharmaceutical services are an essential component of health care service. Pharmacy management or pharmacy information system is a system that stores data, organizes and maintains the medication within pharmacies.
 * In this system a bill will be generated for every purchase, ultimately keeping track of the pharmaceutical stock.

## Research

Effective pharmaceutical services promote rational and cost-effective use of medicines.

### Benefits
#### Rational use of medicine
* Ensures the continuous availability of all pharmaceuticals that are required for patient care.
* Responds to sudden increases in medicine demand, ensuring that adequate supplies are available to deal with any emergencies that arise.
#### Ease burden on staff
* Automating processes like billing, keeping records and placing orders minimizes work load and administrative expenses.
#### Organization
* Ensure that the pharmacy is more organised and hassel free.


## Cost and Features 
Time:
Scope:
Cost:

## Defining Our System
The system focuses on two activities - generating the bill and managing the medicines.
### Bill generation:
The name and unit price of every medicine would be available in the medicine list. Based on the quantity purchased, the bill amount is generated.
### Medicine management:
* Making sure to keep a check on the expiry dates of medicine.
* Notify the user in case something in stock is going to expire.
* Update the stock that has expired or run out of.


## SWOT ANALYSIS
![SWOT Analysis](swot.png)


# 4W&#39;s and 1&#39;H


## What is the mini project about?
This project is about developing a system that will generate bills and keep track of the stock present at their store while doing so.

## Why is it developed?
The system is developed to ensure rational use of medicine and ease the burden on staff.

## When will it be ready for use?
April 16,2021


## Where is this mini project applicable?
Every pharmacy can use this system to organise their operations and get work done efficiently.

## How is it implemented?
The system is developed ny gathering information about the various types of medicine that will be sold, their category, price and quantity that will be required at the store.

# Detail requirements
## High Level Requirements:


ID | Description | Status (Implemented/Future)
----- | ------------|----------:
HR01  | User shall be able to generate bill | Implemented |
HR02  | User shall be able to manage the medicines | Implemented |

##  Low level Requirements:


ID | Description | HLR ID| Status (Implemented/Future)
----- | ------------- |-------- | -------:
LR01  | The bill for every purchase will be generated according to the amount specified for each item available at the store. | HR01 |Implemented
LR02 | When a particular item is sold, it is decremented from the in-store stock available | HR02 | Implemented
LR03 | By decrementing the items that have been sold from the stock, the user can be notified when he is about to run out of any particular item. | HR02 | Implemented
LR04 | When the user is notified about a stock running low, the system can place an order to the dealer. | HR02 | Future 
LR05 | Expiry date of medicine is always checked and in case a stock is about to expire, the user will be notified so that new stock can be purchased| HR02 | Future