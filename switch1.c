 #include<stdio.h>

int main(){
    char S;
    char c="a","e","i","o","u";
    printf("enter A letetr:");
    scanf("%c",&S);
    switch (S)
    {
    case "a":
        printf("you have entered a vowel");
        break;
    case "e":
        printf("you have entered a vowel");
        break;
    case "i":
        printf("you have entered a vowel");
        break;
    case "o":
        printf("you have entered a vowel");
        break;
    case "u":
        printf("you have entered a vowel");
        break;            

    
    default:
    printf("you have entered a consonant");
        break;
    }
    

    
    return 0;
}