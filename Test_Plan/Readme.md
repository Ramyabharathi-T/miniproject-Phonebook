# TEST PLAN:
## Table no: High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | "Menu Enter your choice--1.to enter new contact  2.to delete  3.to sort by group  4.display  5.to enter new group 0.to Exit"  | PASS | Scenario|
|  H_02|Creating groups and contacts |Must create groups and the add the contacts to the respective groups | The program creates the group first and then the contacts| PASS | Requirement based |
|  H_03|Diplay of contacts| It should display the updated contacts as list| Displays the list sorted by group|SUCCESS|Requirement based |


## Table no: Low level test plan
| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|Number of groups and contacts to be given from the console| Program must ask for the contact creation for n times as given in the input|Program runs accordingly| SUCCESS |Requirement based |
|  L_02|H_03|TO check the progress of the program|None |Displays the contacts |SUCCESS | Requirement based |
|  L_02|H_03|TO check the progress of the program|None |Displays the menu having exit too |SUCCESS | Requirement based |

