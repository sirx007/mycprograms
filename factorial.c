//program to print factorial number (based on use input)

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int f = 1; 

    for (int i = 1; i <= n; i++) {
        f = f * i;

    }
    printf("final factorial is %d", f);

    return 0;

}