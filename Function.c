#include<stdio.h>
#include<stdbool.h>
#include<string.h>


// Option ==================================================================================================.
void Option( int count){
    if(count == 0) printf("\e[1mHello, Welcome to my project C programming collection system!\e[0m\n");
    else printf("\e[1mC programming collection system\e[0m\n");
    printf("Please select the function you want to use: \n");
    printf("1. Basic Calculator\n");
    printf("2. Simple To-Do List\n");
    printf("3. Binary Search Tree (BST)\n");
    printf("4. Data StaLsLcs Calculator\n");
    printf("5. Library Management System\n");
    printf("6. BMI Calculator\n");
    printf("7. Banking System SimulaLon\n");
    printf("8. Unit Converter\n");
    printf("9. Exit\n");
    printf("Enter your choice: ");
}

// Exit ====================================================================================================>
bool Exit(){
    char Exit;
    do {
        printf("Do you want to exit the program? (y/n): ");
        scanf("%c", &Exit);
        scanf("%c", &Exit);
        if (Exit == 'y' || Exit == 'Y') return true;
        else if (Exit == 'n' || Exit == 'N') return false;
        else{
            system("cls");
            Option(1);
            printf("9\n\n");
            printf("Please enter the correct key.\n");
        } 
    } while (true);
    
}

// Countdown function =======================================================================================>
void countdown(int n, int m){
    /*
    m = 1 : exit
    */
    for(int i = n; i >= 0; i--){
        system("cls");
        if (m == 1) printf("The system will be exit in %d\n", i);
        sleep(1);
    }
}

// Basic calculator ================================================================================>
void Basic_Calculator(){
    system("cls");
    while (true){
        int n1, n2;
        char opterator;
        printf("Enter two numbers and opterator(+ - * /) in form (e.g. 1 + 1): ");
        scanf("%d %c %d", &n1, &opterator,&n2);
        switch (opterator){
        case '+':
            printf("Result: %d\n", n1 + n2);
            break;
        case '-':
            printf("Result: %d\n", n1 - n2);
            break;
        case '*':
            printf("Result: %d\n", n1 * n2);
            break;
        case '/':
            printf("Result: %.2f\n",(float) n1 / n2);
            break;
        default:
            break;
        }
        if (Exit()){
            system("cls");
            break;
        }
        system("cls");
    }
}

// Simple To-Do List ===============================================================================>
void simple_list_to_do(){
    bool key_simple_list = false;
    int option_simple_list, row, column;
    char Title[1][100][50];
    char list[100][100][50];
    int count_row = 0;
    int count_column = 0;
    system("cls");
    while (true){
        printf("\e[1mList to Do\e[0m\n");
        printf("You already have list with %d rows and %d columns\n", count_row, count_column);
        printf("Please select the function you want to use\n");
        printf("1. Add new list\n");
        printf("2. Show list\n");
        printf("3. Delete list\n");
        printf("4. Exit\n");
        if (key_simple_list){
            printf("Please enter your options to continue: ");
            scanf("%d", &option_simple_list);
            switch (option_simple_list){
                case 1:
                    while (true){
                        system("cls");
                        int insert_row_column;
                        printf("Do you want to insert row or column? \n");
                        printf("Enter 1 for row and 2 for column: ");
                        scanf("%d", &insert_row_column);
                        switch (insert_row_column){
                        case 2:
                            int insert_column;
                            printf("Enter the column number: ");
                            scanf("%d", &insert_column);
                            printf("Now, your list is in form of (%d %d): \n\n", count_row, count_column + insert_column);
                            for(int i = 0; i < count_column + insert_column; i++){
                                if (i < count_column) printf("%s\t", Title[0][i]);
                                else if (i >= count_column) printf("Title\t");
                            }
                            printf("\n");
                            for(int i = 0; i < count_row - 1; i++){
                                for(int j = 0; j < count_column + insert_column; j++){
                                     if (j < count_column) printf("%s\t", list[i][j]);
                                     else printf("x\t");
                                }
                                printf("\n");
                            }
                            printf("\n");
                            // Addtion for title

                            // Addition of list
                            for(int i = 0; i < count_row; i++){
                                for(int j = count_column; j < count_row + insert_column; j++){
                                    system("cls");
                                    for(int k = count_column; k < count_column + insert_column; k++){
                                        printf("Title\t");
                                    }
                                    printf("\n");
                                    for(int k = count_column; k < count_column + insert_column; k++){
                                        for(int l = 0; l < count_column; l++){
                                            printf("x\t");
                                        }
                                        printf("\n");
                                    }
                                }
                            }
                            break;
                        case 1:
                            int insert_row;
                            printf("Enter the row number: ");
                            scanf("%d", &insert_row);
                            break;
                        
                        default:
                            break;
                        }
                        break;
                    }
                    break;
                case 2:
                    system("cls");
                    printf("\e[1mShow list\e[0m\n");
                    for(int i = 0; i < column; i ++){
                        printf("%s\t", Title[0][i]);
                    }
                    for(int i = 0; i < row - 1; i++){
                        for(int j = 0; j < column; j++){
                            printf("%s\t", list[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                default:
                    break;
            }
        }
        else{
            system("cls");
            printf("\033[3mfor: this system you can create what list you want to do with you opinions\033[0m\n");
            printf("note:\tThis system just version 1.0.0\n");
            printf("\tWith system you can create only list with text, we will update it soon\n");
            printf("\tPlease enter the number of rows and columns and we will show the form\n");
            printf("\nHow many rows and columns do you want to create(e.g. row column): ");
            scanf("%d %d", &row, &column);
            count_column = column;
            count_row = row;
            key_simple_list = true;

            system("cls");
            printf("Your list is in form of (%d %d): \n\n", row, column);
            for (int i = 0; i < column; i++){
                printf("Tilte\t");
            }
            printf("\n");
            for(int i = 0; i < row - 1; i++){
                for (int j = 0; j < column; j++){
                    printf("x\t");
                }
                printf("\n");
            }
            printf("\n\033[3mNotes:\tx is refer to the nunmber\n\n\033[0m");
            printf("\nThis is just the form please add the title of you list...\n");
            for(int i = 0; i < column; i++){
                printf("Enter title for column %d: ", i + 1);
                scanf("%s", Title[0][i]);
            }

            if (row - 1 == 0){
                system("cls");
                printf("You list is in form: \n\n");
                for (int i = 0; i < column; i++){
                    printf("%s\t", Title[0][i]);
                }
                printf("\n\nYou have created your list successfully...\n\n");
                continue;
            }

            // add list number ===================================================================>
            for(int i = 0; i < row -1; i++){
                for(int j = 0; j < column; j++){
                    system("cls");
                    printf("\nYou have update your list now it in form : \n\n");
                    for (int k = 0; k < column; k++){
                        printf("%s\t", Title[0][k]);
                    }
                    // i is the limit
                    // k is the integer index
                    printf("\n");
                    for(int k = 0; k < row - 1; k++){
                        for (int l = 0; l < column; l++){// check the position and addition 
                            if(k == i && l == j){
                                printf("\e[1mX\e[0m\t");
                            }
                            else if (k < i){ // finished line 
                                printf("%s\t", list[k][l]);
                            }
                            else if ((k < i + 1 && l < j)){// New line with apprend number (i + 1 because it refers to the first row)
                            // k = 0 if k < i + 1 and i = 0
                            // or you can add k <= i
                            // k = 0 if k <= i and i = 0
                                printf("%s\t", list[k][l]);
                            }
                            else{// position that haven't added
                                printf("x\t"); 
                            }
                        }
                        printf("\n");
                    }
                    printf("\nPlease enter your number into your list\n");
                    printf("Enter the %s of row[%d]: ", Title[0][j], i + 1);
                    scanf("%s", list[i][j]);
                }
            }
            system("cls");
            printf("You have update your list now it's in form : \n\n");
            for (int i = 0; i < column; i++){
                printf("%s\t", Title[0][i]);
            }
            printf("\n");
            for(int i = 0; i < row - 1; i++){
                for (int j = 0; j < column; j++){
                    printf("%s\t",list[i][j]);
                }
                printf("\n");
            }
            printf("\nYou have created your list successfully...\n\n");
        }
    }
}     



// main ======================================================================================================>
int main () {
    int count = 0;
    system("cls");
    while (true){  
        bool Key_main = false;
        int choice;
        Option(count);
        scanf("%d", &choice);
        printf("\n");

        // Select option =========================================================================>
        switch (choice){
        case 1: Basic_Calculator();
            break;
        case 2: simple_list_to_do();
            break;

        // Exit ===================================================================>
        case 9:
            if (Exit()) {
                Key_main = true ;
                countdown(3, 1);
            }
            break;
        default:
            system("cls");
            printf("This function is not available yet.\n");
            printf("Please try to enter the number the number from 1 to 8.\n");
            break;
        }
        if(Key_main) break;
        count++;
    }
    system("cls");
}