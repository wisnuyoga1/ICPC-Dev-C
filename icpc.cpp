#include <stdio.h>
#include <string.h>


// PROBLEM A

int main() {
    int N;
    char S[100];
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%s", S);

        int len = strlen(S);

        for (int j = 0; j < len; j++){
            if (S[j] == 'c'){
                if (j + 1 < len){
                    if (S[j + 1] == 'a' || S[j + 1] == 'o' || S[j + 1] == 'u'){
                        S[j] = 'k';
                    }
else if (S[j + 1] == 'e' || S[j + 1] == 'i' || S[j + 1] == 'y'){
                        S[j] = 's';
                    }
else if (S[j + 1] == 'h'){
                        for (int k = j + 1; k < len; k++){
                            S[k] = S[k + 1];
                        }
                    }
else{
                        S[j] = 'k';
                    }
                }
else{
                    S[j] = 'k';
                }
            }
        }
        printf("%s\n", S);
    }
    return 0;
}


// PROBLEM M

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
int meow(int N, int *skilz){
    
    qsort(skilz, 3 * N, sizeof(int), compare);

    int min = skilz[N];

    for (int i = N; i < 3 * N; i += 2){
        if (skilz[i] < min){
            min = skilz[i];
        }
    }
    return min;
}

int main(){
    int N;

    scanf("%d", &N);
    int A[3 * N];

    for (int i = 0; i < 3 * N; i++){
        scanf("%d", &A[i]);
    }

    int result = meow(N, A);
    printf("%d\n", result);
    return 0;
}


// pROBLEM E

#include <stdio.h>
#include <string.h>
int main(){
    int T;
    if(scanf("%d", &T) == 1){
while(T--){
        char N[100001];
if(scanf("%100000s", N)){
        int len = strlen(N);
        int moveCount = 0;

        for (int i = 0; i <= len - 3; i++){
            int sum = (N[i] - '0') + (N[i + 1] - '0') + (N[i + 2] - '0');
            if (sum % 3 == 0) {
                moveCount++;
                len--;
                for(int j = i+1; j < len; j++){
                N[j] = N[j+1];
}
            }
        }

        if (moveCount % 2 == 1){
            printf("Anda\n");
        }
else{
            printf("Kamu\n");
        }
        }
        else{
printf("Failed to read.\n");
}
    }
}
else{
printf("Failed to read.\n");
}
    return 0;
}




