#include<stdio.h>
#include<stdlib.h>
#include <time.h>
//anagram words
char an_word1[]={"hard"};
char an_word2[]={"earth"};
char an_word3[]={"chair"};
//Caeser phrases
char phrase1[]={"Do or die"};
char phrase2[]={"Know thyself"};
char phrase3[]={"Section B is best"};
//word guessing challenges
char word1[]={"bookworm"};
char word2[]={"firewood"};
char word3[]={"brotherhood"};
//Function prototypes
void game();
void show_menu();
int anagram_challenge();
int caeser_challenge();
int word_guess();
void word_choose(char[],char[],char[],char[]);
int score_calculation(char[],int);
int str_cmp(char [],char[]);
int str_len(char[]);
int substr(char[] ,char[] );
void str_cp(char [],char[]);
void str_scramb(char[]);
void caesar_encrypt(char [],int);
void caesar_decrypt(char[],int );

int main(){
    printf("Welcome to the Game World\n");
    show_menu();
}
//funtion definition
void game(){
    srand(time(0));
    int score1,score2,score3,total;
    score1=anagram_challenge();
    score2=caeser_challenge();
    score3=word_guess();
    printf("Game Over\n");
    total=score1+score2+score3;
    if(score1>0&&score2>0&&score3>0) total+=5;
    printf("Your total score: %d points",total);
}
void show_menu(){
    printf("1.Start Game\n2.Exit Game");
    printf("\nEnter Your Choice ");
    int c;
    scanf("%d",&c);
    getchar();
    if(c==1){
        game();
    }
    else return;
}
int anagram_challenge(){
    printf("\n\nStarting Anagram Challenge...\n");
    char word[100];
    word_choose(an_word1,an_word2,an_word3,word);
    char scrambled[str_len(word)+1];
    str_cp(word,scrambled);
    str_scramb(scrambled);
    printf("Scrambled word %s\n",scrambled);
    for(int i=1;i<=4;i++){
        int score=score_calculation(word,i);
        if(score!=0){
            return score;
            break;}
    }
    printf("The word was \"%s\"\n",word);
    return 0;
}
int caeser_challenge(){
    int shift=rand()%25+1;
    printf("\n\nStarting Caeser Challenge...\n");
    char phrase[100];
    word_choose(phrase1,phrase2,phrase3,phrase);
    caesar_encrypt(phrase,shift);
    printf("Encrypted phrase: %s\n",phrase);
    caesar_decrypt(phrase,shift);
    for(int i=1;i<=4;i++){
        int score=score_calculation(phrase,i);
        if(score!=0){
            return score;
            break;}
    }
    printf("The phrase was \"%s\"\n",phrase);
    return 0;
}
int word_guess(){
    printf("\n\nStarting Word Guessing Challenge...\n");
    char word[100];
    word_choose(word1,word2,word3,word);
    printf("Hint: %c%c%c____\n",word[0],word[1],word[2]);
    int used_u1=0,used_u2=0;
    printf("Select an option: 1. Write Answer 2. Check Substring 3. Check Length\n");
    for(int i=1;i<=4;i++){
        int t=4;
        while(t!=1){
            printf("Your choice: ");
            scanf("%d",&t);
            getchar();
            if(t==2){
                if(used_u1==0){
                    printf("Entering substring ");
                    char sub[100];
                    scanf("%s",sub);
                    getchar();
                    if(substr(word,sub)) printf("Yes\n");
                    else printf("No\n");
                    used_u1=1;
                }
                else printf("Error: Utility function already used.\n");
            }
            else if(t==3){
                if(used_u2==0){
                    printf("Enter length ");
                    int len;
                    scanf("%d",&len);
                    getchar();
                    if(str_len(word)==len) printf("Yes\n");
                    else printf("No\n");
                    used_u2=1;
                }
                else printf("Error: Utility function already used.\n");
            }
        }
        int score=score_calculation(word,i);
        if(score!=0){
            printf(" using %d utility functions\n",used_u1+used_u2);
            return score-(used_u1+used_u2)*2;
            break;
        }
    }
    printf("The word was \"%s\"\n",word);
    return 0;
}
int str_cmp(char p[], char q[]){
    while(p[0]!='\0'){
        if(p[0]!=q[0]) return 0;
        p++;
        q++;
    }
    return 1;
}
int str_len(char p[]){
    int i=0;
    while(p[0]!='\0'){
        p++;
        i++;
    }
    return i;
}
void str_cp(char p[], char q[]){
    while(p[0]!='\0'){
        q[0]=p[0];
        p++;
        q++;
    }
    q[0] = '\0';
}
void str_scramb(char p[]){
    int len=str_len(p);
    for(int i=0;i<len;i++){
        int x=rand()%(len);
        char temp= p[i];
        p[i]=p[x];
        p[x]=temp;
    }
}
void caesar_encrypt(char p[],int shift){
    while(p[0]!='\0'){
        if(p[0]==' ') {
            p++;
            continue;
        }
        if(96<p[0]&&p[0]<123) p[0]='a'+(p[0]-'a'+shift)%26;
        if(64<p[0]&&p[0]<91) p[0]='A'+(p[0]-'A'+shift)%26;
        p++;
    }
}
void caesar_decrypt(char p[],int shift){
    caesar_encrypt(p,26-shift);
}
int score_calculation(char p[],int attempt){
    if(attempt<4){
        char guess[100];
        printf("Your Guess: ");
        scanf("%[^\n]",guess);
        getchar();
        if(str_cmp(p,guess)){
            printf("Correct! You solved it in %d attempt(s)",attempt);
            return 10*(3-attempt)+10;
        }
        else printf("Incorrect! Try again\n");
    }
    if(attempt==4){
    printf("No attempts left.\n");
    }
    return 0;
}
void word_choose(char p[],char q[],char r[],char selected[]){
    int index= rand()%3;
    if(index==1) str_cp(p,selected);
    if(index==2) str_cp(q,selected);
    else str_cp(r, selected);
    return;
}
int substr(char p[], char q[]){
    for(int i=0;i<(str_len(p)-str_len(q));i++){
        int str=0;
        for(int j=0;j<str_len(q);j++){
            if(p[i+j]==q[j]) str++;
        }
        if(str==str_len(q)) return 1;
    }
    return 0;
}
