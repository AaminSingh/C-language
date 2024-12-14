// Printing patterns 
//1)

/*void main(){
    int i,j;
    i = 1;
    while(i<=5){
        printf("\n");
        j=1;
        while(j<=i){
            printf("*");
            j++;

        }
        i++;
    } 
    getch();
}*/

//------------------------------OR-------------------------------//


main(){
    int i,j,n;
    printf("Enter n :");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        printf("\n");  // for next line of the pyramid
    }}
}