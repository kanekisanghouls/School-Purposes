#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    char employeeName[100];
    float height;
    float weight;
    int age;
    int bioSex;
    int muscleFat;
    bool startData = true;
    bool repeat = true;

do{
    do{


        printf("Good day, let's find out your Body Mass Index (BMI), and Basal Metabolic Rate (BMR).\n");
        printf("Please input your full name: \n");
        scanf(" %[^\n]s", &employeeName);
        printf("Please input your height (in centimeters) (Please include 2 decimal points):   \n");
        scanf("%f", &height);
        printf("Please input your weight (in kilograms) (Please include 2 decimal points):   \n");
        scanf("%f", &weight);
        printf("Please input your age:   \n");
        scanf("%d", &age);
        printf("What is your biological sex?\n[1] Male \n[2] Female\n");
        scanf("%d", &bioSex);
        printf("Do you have more muscle than fat?\n[1] Yes\n[2] No\n");
        scanf("%d", &muscleFat);
        printf("\n");
        printf("The data you provided are as follows:\n");
        printf("Name: %s\n", employeeName);
        printf("Height: %5.2f cm\n", height);
        printf("Weight: %3.2f kg\n", weight);
        printf("Age: %d\n", age);
        if(bioSex==1)
        {
            printf("Biological sex: Male\n");
        }
        else if(bioSex==2)
        {
            printf("Biological sex: Female\n");
        }
        if(muscleFat==1)
        {
            printf("More muscle mass.\n");
        }
        else if(muscleFat==2)
        {
            printf("Less muscle mass\n");
        }


        printf("\n");
        int choice;
        printf("Are all data correct?\n[1] Yes\n[2] No\n");
        scanf("%d", &choice);
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
            printf("Invalid input\n");
            break;
        }
        printf("\n");
    }while(startData);




    if(bioSex==1)
    {
        float bmrWeightMen = (13.397 * weight);
        float bmrHeightMen = (4.799 * height);
        float bmrAgeMen = (5.677 * age);
        float bmrMen = (88.362) + bmrWeightMen + bmrHeightMen - bmrAgeMen;
        printf("Your Basal Metabolic Rate (BMR) is: %4.2f\n", bmrMen);
    }
    else if(bioSex==2)
    {
        float bmrWeightWomen = (9.247 * weight);
        float bmrHeightWomen = (3.097* height);
        float bmrAgeWomen = (4.330 * age);
        float bmrWomen = (447.593) + bmrWeightWomen + bmrWeightWomen - bmrAgeWomen;
        printf("Your Basal Metabolic Rate (BMR) is: %4.2f\n", bmrWomen);
    }
    printf("This number represents the number of calories your body needs\n");
    printf("to perform basic functions while you are at rest.\n");
    printf("\n");


    float heightMeters = height/100.00;
    float bmiHeight = (heightMeters*heightMeters);
    float bmi = (weight/bmiHeight);


    printf("Your Body Mass Index(BMI) is: %3.2f kg/m^2\n", bmi);


    if(muscleFat==1)
    {
        if(bmi>=25 && bmi<=30)
        {
            printf("%s, your BMI indicates that you are Overweight however,\n", employeeName);
            printf("considering your muscle mass, you are considered healthy if you partake in athletic sports,\n");
            printf("manual labor, boxing, and the like.\n");
        }
    }
    else if(muscleFat==2)
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
        printf("%s, your BMI indicates that you are on a severe case of malnourishment or anorexia\n", employeeName);
        printf("please eat more food that are healthy and filling.\n");
    }
    if(bioSex==1)
    {
        if(bmi>=18 && bmi<=25)
        {
            if(muscleFat==1)
            {
                printf("%s, your BMI indicates that you are up to the healthy and normal standards.\n", employeeName);
            }
            else if(muscleFat==2)
            {
                printf("%s, your BMI indicates that you are in normal standards but due to\n", employeeName);
                printf("your lesser muslce mass, you are considered 'Skinny fat' which is in bad shape.\n");
                printf("Try to change any bad eating habits.\n");
            }
        }
        else if(bmi>=17 && bmi<=18)
        {
            printf("%s, your BMI indicates that you have Mild Thinness but still under\n", employeeName);
            printf("the normal standards. However, this is more common or normal for women rather than men.");
        }


    }
    else if(bioSex==2)
    {
        if(bmi>=17 && bmi<=18)
        {
            printf("%s, your BMI indicates that you have Mild Thinness but still under\n", employeeName);
            printf("the normal standards. This BMI is considered ideal for women conforming\n");
            printf("to Asian standards.\n");
        }
        else if(bmi>=18 && bmi<=25)
        {
            if(muscleFat==1)
            {
                printf("%s, your BMI indicates that you are up to the healthy and normal standards.\n", employeeName);
            }
            else if(muscleFat==2)
            {
                printf("%s, your BMI indicates that you are in normal standards but due to\n", employeeName);
                printf("your lesser muslce mass, you are considered 'Skinny fat' which is in bad shape.\n");
            }
        }
    }

    printf("\n");
    printf("Thank you and don't forget to eat at least 2000 calories a day! ");

    int repeatOpt;
    printf("Do you wish to input another employees' information?\n[1] Yes\n[2] No\n");
    scanf("%d", &repeatOpt);

    if(repeatOpt==1)
    {
            repeat=true;
    }
    else if(repeatOpt==2)
    {
            repeat=false;
    }

}while(repeat);


printf("Thank you and have a wonderful day.");
    return 0;
}
