// . Find the Character Is Vowel or Not

# include <stdio.h>

int main(){
    char c, lower,upper;

    printf("Enter character : ");
    scanf("%c", &c);

    lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
    upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );

    if(lower){
        printf("Character is lowercase and a Vowel.");
    }else if(upper){
        printf("Character is uppercase and a Vowel.");
    }else{
        printf("Character is not Vowel.");
    }
}
