# M2-embedded_homeautomation
Home automation make r home smarter & life easier.


# Requirements

 ## INTRODUCTION
 Home automation, often referred to as domotics is building automation for a home, called a
smart home or smart house. The purpose of this  project is to develop a system for controlling common home electrical devices using wireless to enable direct control.
Commonly, home automation software gives the user access to an interface to the home automation system by attaching a home automation computer to the wireless network. 
This project report entitled as “Home Automation Using RF” gives a detailed description of home automation in general and practical implementation done by us in this project.
We have covered around some basic most needed modules which are in general required for every household. Further this report describes each of the modules used while making 
this project, and also a description of each and every step of their construction is given. These modules cover Lighting control of the house, curtain control, Fan control,
gate contol and security control of outer portion of house. All needed components and equipments are listed with their cost analysis and a short description of cost effective implementation is given for normal household. Moving on further a brief knowledge future enhancements is also provided in order to upgrade this project to higher level.


## RESEARCH
Home automation  system makes the operations of various home appliances more convenient
and saves energy. With the energy saving concept, Smarthome automation or building automation
makes life very simple nowadays. It involves automatic controlling of all electrical or
electronic devices in homes or even remotely through wireless communication. Centralized
control of lighting equipments, air conditioning and heating, audio/video systems, security
systems, kitchen appliances and all other equipments used in home systems is possible with
this system.

## Advantages
* Managing all of your home devices from one place. 
* The convenience factor here is enormous.
* Flexibility for new devices and appliances. 
* Maximizing home security. 
* Remote control of home functions. 
* Increased energy efficiency. 
* Improved appliance functionality. 
* Home management insights.


## Disadvantages
* Significant installation costs.
* Reliable internet connection is crucial.
* Security issues.
* Technological problems in connected homes.
* You may lock yourself out of your own house.
* Helplessness if technology fails.
* Some people may not like smart technologies.
* Maintenance and repair issues.

# COST, FEATURE & TIMELINE
## COST
Till the cost is not been predicted. we are in the process. Stay connected we will let you know very soon.

## FEATURE 
* Remote access.
* Advanced security.
* Lighting control
* Automatic device control
* Energy Management
* Interoperability
* Upgradeability

# TIMELINE
## Before
![smart home pic](https://user-images.githubusercontent.com/75003344/143393133-ab909cef-65e0-4a85-b37d-5a2d0b42cff2.jpg)
## After
![image](https://user-images.githubusercontent.com/75003344/144170885-2995e0c2-c589-4fa6-a427-ca0a341c55f6.png)



# SWOT Analysis
## Strength
* market leader in home appliances segment
* Manufacturing units in areas with tax-incentives
* Wide range of product categories to cater to low,middle and high income groups

## Weaknesses
* Exportoriented company_Exposure to exchange risk
* Heavy reliance on short term debts

## Opportunities
* Strategic Alliances
* Home Appliances market is growing very fast
* Opportunities to launch new products

## Threats
 * Price wars with closest competitors
 * Cometition from companies along with new entrants
 * Exposure to cyclicality and volatilily of industry 

## 4 W's and 1 H
### Who
* coustomer / user who want their home smarter.
### What
* Verify the details of the applainces .
### When
* During the need of applainces .
### Where
* Home location,office etc.
### How
* Remotly controling the applainces.

## High Level Requirements
| ID | Description | 
| --- | --- | 
| HR01 | System should be able to access the applainces when person in the home |
| HR02 | User should be able to access the applainces  | 
| HR03 | System should recognize oned device/applainces | 
| HR04 | OTP generated verification for user | 
| HR05 | System should recognize invalid user | 

## Low Level Requirement
| ID | Description | 
| --- | --- | 
| LR01 | Only if the person inside the home then only device must be on| 
| LR02 | full list of applainces |
| LR03 | status of applainces| 
| LR04 | Present device/applainces must be tracked | 

# Hardware requirement:-
ATMEL ATMEGA 16 (an AVR based microcontroller)
PIR sensor –passive infrared sensors
Stepper motors
LCD display
Proximity sensor 
 Motor driving IC
Power supply requirements
Transformers (step down)
Diode bridges (500 mA,1A)
Capacitors filter
Voltage regulators
Small heat sinks 
 Master board (PCB) consisting of regular components which subject to change as per the requirements.
Miscellaneous
LEDs
Switches
Connecting wires
LDRs


# Software specifications:-
vs code
Compiler AVR GCC 
Win AVR loader
Programming through embedded C
Proteus simulation software.
		


# High level Design
## Use Case Diagram

![M2_1](https://user-images.githubusercontent.com/75003344/144357501-c966bff3-418c-47cf-99ab-6fa46f0efd25.png)



# Low Level Design
## Activity Diagram
![M1_4](https://user-images.githubusercontent.com/75003344/144357652-d3643594-51de-4ab4-8e5b-1d223a53c0a2.png)



 # High Level Design
## Architecture diagram

![M2_3](https://user-images.githubusercontent.com/75003344/144357811-b2332525-de74-4d07-bf36-6f9d4db38073.png)


# Low level Design
## Data Flow Diagram
![M2_2](https://user-images.githubusercontent.com/75003344/144357761-e5d56f04-2252-4262-a669-474424004256.png)



# BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/75003344/144360919-590b2b9c-3f40-4792-93d8-61bc02825ce1.png)


# Simulation
![image](https://user-images.githubusercontent.com/75003344/144374478-b4795329-b668-490d-90ef-0dd5cbab7594.png)





# Test plan and test output

# HIGH level Test Plan

| Test NO.   |       Description     |  Expected i/p  |  Expected O/P | Actual O/P | Type of test |
|--------------------|:-------------:|-----------------|---------------|------------|------------|
| H_01  |      PIR SENSOR      |  SENSING  |  WILL SHOW | SHOWN | Functional |
| H_02  |     LDR   |  SENSING  |  WILL SHOW | SHOWN | Functional |
| H_03  |      TEMPARATURE SENSOR  |   SENSING  |  WILL SHOW | SHOWN| Functional|


# Test Plan

|  Test ID | Description  | Expected Input  | Expected Output  | Actual Output  | Pass/Fail |
|---|---|---|---|---|---|
| TID_01  | Device functions  | function values| ON  |ON| PASS  |
| TID_02  | Device functions  | function values| ON  |ON| PASS  |
| TID_03  | Device functions  | function values| ON  |ON| PASS  |
| TID_04  | Device functions  | function values| ON  |ON| PASS  |
| TID_05 | Device functions  | function values| ON  |ON| PASS  |


# ImagesAndVideos

## First output after runing makefile
 
 ![image](https://user-images.githubusercontent.com/75003344/144374478-b4795329-b668-490d-90ef-0dd5cbab7594.png)
 
 ## PIR Sensor
 ![image](https://user-images.githubusercontent.com/75003344/144439817-52c4c7fd-baa1-4886-b05b-fbe42a870554.png)

 
 ## relay circuit
 ![image](https://user-images.githubusercontent.com/75003344/144374478-b4795329-b668-490d-90ef-0dd5cbab7594.png)






