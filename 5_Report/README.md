# M1_application_smarthome
smart home automation provide smartlife✔ & controll over appliances✌


This is a Smart Home application project. This project contains  the device of  like Light, Fan, Door, etc.
At first the user have to provide the details like first name, last name, email and phone number. After that the user can select the device that they want to ON/OFF.



# Requirements

 ## INTRODUCTION
 Home automation, often referred to as domotics is building automation for a home, called a
smart home or smart house. The scope of Smarthome  is no more limited to just controlling
lights and heaters, it has spread its domain to the world of smart devices including TV, Laptop,
Tabs etc. and even automated pet feeding machines. With the rapid increase in usage and reliance
on the features of several smart devices, the need for interconnecting them has become genuine.
As it is said,’ Necessity is the mother of invention’, working towards home automation has
become a new accepted challenge. 


## RESEARCH
Smarthome  system makes the operations of various home appliances more convenient
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
![s11](https://user-images.githubusercontent.com/75003344/143389522-b5667a18-e107-429c-9f40-ac7276e52e33.png)

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
| HR01 | System should be able to access the applainces |
| HR02 | User should be able to access the applainces  | 
| HR03 | System should recognize oned device/applainces | 
| HR04 | OTP generated verification for user | 
| HR05 | System should recognize invalid user | 

## Low Level Requirement
| ID | Description | 
| --- | --- | 
| LR01 | Only  off device must be given an option to select on | 
| LR02 | full list of applainces |
| LR03 | status of applainces| 
| LR04 | Present device/applainces must be tracked | 

# High level Design
## Use Case Diagram


![chart1 (1)](https://user-images.githubusercontent.com/75003344/143061944-92b1a625-316b-4b3b-a050-30e1338efff5.png)



# Low Level Design
## Activity Diagram

![chart2](https://user-images.githubusercontent.com/75003344/143061936-2f873aa9-a1b9-4fb6-8f5b-a38fb3ee7444.png)

 # High Level Design
## Architecture diagram

![STRUCT](https://user-images.githubusercontent.com/75003344/143063557-7451d36c-ae37-4f1b-871f-f1d2658620e1.png)


# Low level Design
## Data Flow Diagram

![DATAFLOW](https://user-images.githubusercontent.com/75003344/143062908-35110b2e-e608-4740-b79e-1a13dae6ecd6.png)

# Implementation
## Introduction
This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program

## Instructions to execute
1. Clone my repository
2. Go to 3_Implementation folder
3. Make sure your system meets all software and hardware requirements
4. Run "make run" command in terminal for main code execution
5. Run "make run_test" command in terminal for test code execution

| Folder | Description |
| --- | --- |
| inc | Contains header files |
| src | Contains main source file for compilation |
| test | Contains unit testing files for all source code & data for testing|
| unity| Contains unity files|

# Test plan and test output

# HIGH level Test Plan

| Test NO.   |       Description     |  Expected i/p  |  Expected O/P | Actual O/P | Type of test |
|--------------------|:-------------:|-----------------|---------------|------------|------------|
| H_01  |      User Name      |  DATE ENTRY  |  WILL SHOW | SHOWN | data |
| H_02  |     mail ID    |  DATE ENTRY  |  WILL SHOW | SHOWN | data |
| H_03  |      Phone number   |   DATE ENTRY  |  WILL SHOW | SHOWN| data|


# Test Plan

|  Test ID | Description  | Expected Input  | Expected Output  | Actual Output  | Pass/Fail |
|---|---|---|---|---|---|
| TID_01  | Device functions  | function values| ON  |ON| PASS  |
| TID_02  | Device functions  | function values| ON  |ON| PASS  |
| TID_03  | Device functions  | function values| ON  |ON| PASS  |
| TID_04  | Device functions  | function values| ON  |ON| PASS  |
| TID_05 | Device functions  | function values| ON  |ON| PASS  |


# Images and Videos

# First output after runing makefile
## User have to give the details 

![p2](https://user-images.githubusercontent.com/75003344/143310161-00286fc6-5052-45ef-a22c-d6beb0e946d8.JPG)

## After that we have choose the device to turn it ON or OFF
![pp1](https://user-images.githubusercontent.com/75003344/143310167-fe1c4b60-2325-4777-9923-0960df285f2f.JPG)

# Code Badges and Score

## Git Codacy Badge


[![Codacy Badge](https://app.codacy.com/project/badge/Grade/3c8f9ee11a7a47a39e6711eb12a3147f)](https://www.codacy.com/gh/pushpalathabt/M1_application_smarthome/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=pushpalathabt/M1_application_smarthome&amp;utm_campaign=Badge_Grade)

## Code Inspector
|quality score|project quality|
|--------|---------|
|![code inspector](https://api.codiga.io/project/30011/score/svg) |![code inspector](https://api.codiga.io/project/30011/status/svg)

|Build code on linux|Build code on windows|Unit Test|cppcheck|
|:--:|:--:|:--:|:--:|
|  [![linux os build](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/buildc.yml/badge.svg)](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/buildc.yml) |[![windows os build](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/w-build.yml/badge.svg)](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/w-build.yml)|[![unit testing - unity](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/unit.yml/badge.svg)](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/unit.yml)|  [![cppcheck-action-test](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/pushpalathabt/M1_application_smarthome/actions/workflows/cppcheck.yml)   |   |


## Integrated Tools to GitHub
*  [Codacy](https://www.codacy.com/)

## GitHub Actions
* Build using Make for CI
* Unit tests with Cunit
* Static code analysis using cppcheck
* Dynamic Code analysis using Valgrind








