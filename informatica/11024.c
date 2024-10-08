/* verificare se input é divisibile sia 
per tre sia per 5 */

#include <stdio.h>
int main(){

    int n=0;
     
    printf("inserisciun valore: ");
    scanf("%d",&n);

    if(n%3== 0){//non si mette il ; nell if 
        if(n%5==0)
            printf("%d é divisibile sia per 3 che per 5 ");
        else{
            printf("%d é divisibile sia per 3 ma non per 5 ");
        }
    } 
    else{
        printf("%d é divisibile per 3 " , n);
    }
    return 0;
        




















}