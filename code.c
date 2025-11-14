#include <stdio.h>

struct stock {
    float cost;
    float returns;
    char name[50];
};

long long factorial(int n) {
    if (n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

void solve(float score[], int x, int k, struct stock s[], int n, int combination[], int all_combs[][x], int *comb_count, int index, int chosen_count) {
    float total_cost=0, total_profit=0;
 
    if (chosen_count == k) {
        for (int m=0;m<k;m++) {
            int idx = combination[m];
            all_combs[m][*comb_count] = idx;
            
            total_cost += s[idx].cost;
            total_profit += s[idx].cost*(s[idx].returns/100);
        }
        
        score[*comb_count] = total_profit/total_cost;
        (*comb_count)++;
        return;
    }

    if (index == n) {
        return;
    }

    combination[chosen_count] = index;
    solve(score, x, k, s, n, combination, all_combs, comb_count, index + 1, chosen_count + 1);
    solve(score, x, k, s, n, combination, all_combs, comb_count, index + 1, chosen_count);
}

int main() {
    int n, k, x;
    float tempr;

    printf("How many stock options do you have? ");
    scanf("%d", &n);
    if (n<=0){
        printf("Invalid input! enter some positive value and try again.");
        return 0;
    }
    if(n>16){
        printf("Please try with options <=16.");
        return 0;
    }

    struct stock s[n];   

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of stock %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Cost: ");
        scanf("%f", &s[i].cost);
        printf("Expected returns (in %): ");
        scanf("%f", &s[i].returns);
    }

    printf("\nHow many stocks will you buy at once? ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k. It should be between 1 and %d.\n", n);
        return 0;
    }

    int combination[k];   
    x = factorial(n)/(factorial(k)*factorial(n-k));

    int all_combs[k][x];
    float score[x];
    int comb_count=0;

    solve(score, x, k, s, n, combination, all_combs, &comb_count, 0, 0);

    for (int l = 0; l < x - 1; l++) {
        for (int j = 0; j < x - l - 1; j++) {
            if (score[j] < score[j + 1]) {
                float temp_score = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp_score;

                for (int m = 0; m < k; m++) {
                    int temp_idx = all_combs[m][j];
                    all_combs[m][j] = all_combs[m][j + 1];
                    all_combs[m][j + 1] = temp_idx;
                }
            }
        }
    }

    printf("\nBest possible combination(s) of stocks:\n");
    
    int q;
    if (comb_count>=5){
        q=5;
    }
    else if (5>comb_count && comb_count>=3){
        q=3;
    }
    else if (comb_count==2){
        q=2;
    }
    else if (comb_count==1){
        q=1;
    }
    
    for (int z=0;z<q;z++){
        float temp_ttl_cost=0;
        float temp_ttl_profit=0;
        printf("%d)", z+1);
        for (int ij=0;ij<k;ij++){
            printf("%s", s[all_combs[ij][z]].name);
            if (ij<k-1){
                printf(" and ");
            }
            temp_ttl_cost += s[all_combs[ij][z]].cost;
            temp_ttl_profit += ((s[all_combs[ij][z]].returns/100)*(s[all_combs[ij][z]].cost));
        }
        printf(" [combined cost: ₹%.2f (profit: ₹%.2f)]", temp_ttl_cost, temp_ttl_profit);
        printf("\n");
    }

    return 0;
}
