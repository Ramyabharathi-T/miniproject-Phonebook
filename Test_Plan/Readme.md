# TEST PLAN:
## Table no: High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | "Menu Enter your choice--1.to enter new contact  2.to delete  3.to sort by group  4.display  5.to enter new group 0.to Exit  | PASS | Scenario|
|  H_02|Initiation of the game |The assigned player must first choose the position to place his symbol | The Board gets updated and asks for next person to provide input| PASS | Requirement based |
|  H_03|Show Board | Updates the marks on the board| 2.Displays the progress of the game |SUCCESS|Requirement based |


## Table no: Low level test plan
| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|The game starts and the players have to interact with console to place their response| player should enter a choice for the placing mark on given position| Game in progress| SUCCESS |Requirement based |
|  L_02|H_03|TO check the progress of the Game|None |Displays that the Game has been won and by the repected player by returning 1 |SUCCESS | Requirement based |
|  L_02|H_03|TO check the progress of the Game|None |Displays that the Game has been drawn by returning 0 |SUCCESS | Requirement based |
|  L_02|H_03|TO check the progress of the Game|None |Displays that the Game is in progress by returning -1 |SUCCESS | Requirement based |
