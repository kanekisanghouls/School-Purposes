
/* ================================== 
Name: KanekiSanGhouls
CC-COMPROG11 91557 (LAB) | 91574 (LEC)
NOTHING TO SEE HERE [ IGNORE THIS PART]
==================================*/ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int employeeName[1000];
    float height, weight, calories;
    int age, gender, activity, muscles;
    bool startData=true;
    bool repeat=true;

    /*=== INTRO ===*/
    printf("\n[School Name] \n");
    printf("Physical Activty [Midterm Activity]\n");

    /*=== BMI ===*/
    printf("\nThis Body Mass Index calculator is to calculate and state the body condition of person.\n\n");

    /*=== BMR ===*/
    printf("This Basal Metabolic Rate calculator is to calculate the number of calories \nrequired in order to keep your body functioning when you are at rest which \nalso known as your metabolism.\n\n");

    /*=== INTRO#2 ===*/
    printf("\nWelcome to Health Management!");
    printf("\nBefore you proceed, let's have to get to know your health first and yourself aswell!\n");
    printf("\nDirections: You have to put the answer but if just a number, you put a number.\n");

do{
    do
    {
    /*=== Introduce Yourself about your health right now. ===*/
    printf("\n\nPlease input your real name (full name):\n");
    scanf(" %[^\n]s", &employeeName);

    /*=== Height ===*/
    printf("\nPlease enter your height (cm) : ");
    scanf("%f", &height); // wait for user input...

    /*=== Weight ===*/
    printf("\nPlease enter your weight (kg) : ");
    scanf("%f", &weight); // wait for user input...

    /*=== Age ===*/
    printf("\nPlease enter your age (years) : ");
    scanf("%d", &age); // wait for user input...

    /*=== Gender ===*/
    printf("\nPlease specify your gender : \n");
    printf("[1] Male\n[2] Female\n");
    printf("\nI am: ");
    scanf("%d", &gender); // wait for user input...

    /*=== Muscles ===*/
    printf("\nDo you have more muscles in your body? Let us know.\n[1] Yes\n[2] No\n");
    printf("\nI am: ");
    scanf("%d", &muscles);

    /*=== Activity Level (Optional) ===*/
    printf("\nPlease choose your activity level. (Optional)\n"); //the activity level is based on one's life..
    printf("[1] I am sedentary (little or no exercise).\n");
    printf("[2] I am lightly active (light exercise or sports 1-3 days per week).\n");
    printf("[3] I am moderately active (moderate exercise or sports 3-5 days per week).\n");
    printf("[4] I am very active (hard exercise or sport 6-7 days per week).\n");
    printf("[5] I am super active (very hard exercise or sports and a physical job or 2 times training).\n");
    printf("\nI am : ");
    scanf("%d", &activity); // wait for user input...

    /*=== Last Process to continue ===*/
    printf("\n");
    printf("The data you provided are as follows:\n");
    printf("Name: %s\n", employeeName);
    printf("Height: %5.2f cm\n", height);
    printf("Weight: %3.2f kg\n", weight);
    printf("Age: %d\n", age);

        printf("\n");
        int choice;
        printf("Are all data information correct? If yes, please proceed.\n[1] Yes\n[2] No\n");
        printf("Answer: ");
        scanf("%d", &choice);

        /*=== Start Data True and False ===*/
        if(choice==1)
        {
            startData=false;
        }
        else if(choice==2)
        {
            startData=true;
        }
        else
        {
            printf("Invalid Input. Please try again later.\n");
            break;
        }
        printf("\n");
    }while(startData);

    printf("This number represents the number of calories your body needs\nto perform basic functions while you are at rest. \nPlease rest well and get some food to stay healthy!.\n");

    /*=== Float Section ===*/
    float heightMeters = height/100.00;
    float bmiHeight = (heightMeters*heightMeters);
    float bmi = (weight/bmiHeight);


    printf("Your Body Mass Index(BMI) is: %3.2f kg/m^2\n", bmi);

    /*=== BMI, Muscles and Gender Section ===*/
    if(muscles == 1)
    {
        if(bmi>=25 && bmi<=30)
        {
            printf("%s, your BMI indicates that you are Overweight and you need to exercise Physical Activity\n", employeeName);

        }
    }
    else if(muscles == 2)
    {
        if(bmi>=25 && bmi<=30)
        {
            printf("%s, your BMI indicates that you are Overweight.\n", employeeName);
        }
    }
    if(bmi>=30 && bmi<=35)
    {
        printf("%s, your BMI indicates that you are Obese.\n", employeeName);
    }
    else if(bmi>=35 && bmi<=40)
    {
        printf("%s, your BMI indicates that you are Obese XL.\n", employeeName);
    }
    else if(bmi>40)
    {
        printf("%s, your BMI indicates that you are Obese XXL.\n", employeeName);
    }
    else if(bmi<16)
    {
        printf("%s, your BMI indicates that you are on a severe case of malnourishment\n", employeeName);
        printf("please eat and eat a lot to make you healthy and have some fats.\n");
    }
    if(gender == 1)
    {
        if(bmi>=18 && bmi<=25)
        {
            if(muscles == 1)
            {
                printf("%s, your BMI indicates that you are up to the healthy and normal standards.\n", employeeName);
            }
            else if(muscles == 2)
            {
                printf("%s, your BMI indicates that you are in normal standards but due to\n", employeeName);
                printf("your lesser muslce mass, you are considered Skinny Fat but you are still fabulous.\n");
                printf("Try to change any bad eating habits to improve yourself.\n");
            }
        }
        else if(bmi>=17 && bmi<=18)
        {
            printf("%s, your BMI indicates that you have Mild Thinness but still under\n", employeeName);
            printf("the normal standards. However, this is more common or normal for women rather than men.");
        }


    }
    else if(gender == 2)
    {
        if(bmi>=17 && bmi<=18)
        {
            printf("%s, your BMI indicates that you have Mild Thinness but still under\n", employeeName);
            printf("the normal standards. This BMI is considered ideal for women accepting\n");
            printf("to Asian standards.\n");
        }
        else if(bmi>=18 && bmi<=25)
        {
            if(muscles == 1)
            {
                printf("%s, your BMI indicates that you are up to the healthy and normal standards.\n", employeeName);
            }
            else if(muscles == 2)
            {
                printf("%s, your BMI indicates that you are in normal standards but due to\n", employeeName);
                printf("your lesser muslce mass, you are considered Skinny Fat but you are still fabulous.\n");
            }
        }
    }

    printf("\n");
    printf("Thank you and don't forget to eat at least 2000 calories a day to make you strong more \nAnd you are so fabulous person! ");

    int repeatOpt;
    printf("Do you wish to input another employees information? If no, have a great day!\n[1] Yes\n[2] No\n");
    printf("Answer: ");
    scanf("%d", &repeatOpt);

    if(repeatOpt == 1)
    {
            repeat = true;
    }
    else if(repeatOpt == 2)
    {
            repeat=false;
    }

 }while(repeat);


printf("Thank you so much and I love you as your brother! <3");
    return 0;
}

// Name, Height, Weight, Age, Gender(?) || Obese 30 - 35, Obese XL 35 -40, Obese XXL 40+ || Overweight 25 - 30
// Normal 18 - 25 || 18 to 17 Ideal Woman BMI for asian standards
// 16 Beneath = Underweight, Malnourised, or Anorexia
// HINT: Loops, Nested IF, IF ELSE, ELSE IF, Int, String, Char, Boolean
//=======================================================================

/*The Business Organization wants to get the Employees' details of both Genders Male and Female.
Due to their recent study that their Employees often get sick. Health Management wants to get
their Name of the Employee, Height, Weight and Age which are in Metric System standards in
Centimeters and Kilogram, so that they can get their Body Mass Index (BMI) and Basal Metabolic Rate (BMR).

The head nurse advises them to eat at least 2000 calories a day as normal intake, once the
Employees are done being screen. Some are Plus size which are Obese 30 - 35, Obese XL 35 � 40
and Obese XXL yonder 40 Nevertheless there are Obese BMI that are Muscular such as Bodybuilders and Wrestlers type of
physique that is considered as Healthy in Athletic Support ,
Overweight 25 to 30 Some Overweight are not Fat which sometimes well build physique due to Body Recomposition like body
of manual Laborers and Boxers, Normal which the Healthy
Standards 18 to 25 BMI although People with Normal BMI are still in a Bad Shape because they are Skinny Fat that becomes more common in this day and age due to bad Eating habits
with Less Muscle Mass. Mild Thinness 18 to 17 which is the Ideal BMI for Women who wants to stay fit in Asian Standards. Underweight Beneath 16 BMI is on the severe case of Malnourishment or
Anorexia. Which the Head Nurse ask what activities do they do or are they physically activity they do.
*/

    /*=== Physically Activity ===*/
    /* printf("\nPlease choose your activity level.\n"); //the activity level is based on one's life..
    printf("[1] I am sedentary (little or no exercise).\n");
    printf("[2] I am lightly active (light exercise or sports 1-3 days per week).\n");
    printf("[3] I am moderately active (moderate exercise or sports 3-5 days per week).\n");
    printf("[4] I am very active (hard exercise or sport 6-7 days per week).\n");
    printf("[5] I am super active (very hard exercise or sports and a physical job or 2 times training).\n");
    printf("\nI am : ");
    scanf("%d", &activity); // wait for user input...

    bmi=w/((h/100)*(h/100)); //calculate b.m.i
    printf("n\n\Your B.M.I is %.2f kg/m^2nn",bmi); //prints b.m.i
    */


