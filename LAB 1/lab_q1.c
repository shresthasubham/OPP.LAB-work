/*Write a program to find the average expenditure of a company for each month of each year, each year
 and average over the range of years specified.
 Use arrays to construct a table, display the table of expenditure and find the sum and average.
*/

#include <stdio.h>
#include <conio.h>

int main(){

    int no_of_year=0,iy;
    printf("\nEnter the number of year: ");
    scanf("%d",&no_of_year);

    float sum[no_of_year],average[no_of_year];
    int table [no_of_year][12],initial_year;
    printf("\nEnter initial year : ");
    scanf("%d",&initial_year);
    iy=initial_year;
    sum[0]=0;
    printf("\nEnter the expenditure of different months\n");
    printf("----------------------------------------------------\n");
    for(int i=0;i<no_of_year;i++){
        for(int j=0;j<12;j++){
            printf("For year %d month %d : ",initial_year,j+1);
            scanf("%d",&table[i][j]);
            sum[i]+=table[i][j];
        }
        printf("\n");
        initial_year++;
    }

    // Storing Average:
    for(int i=0;i<no_of_year;i++){
        average[i]=(sum[i])/12;
    }
     initial_year=iy;
    printf("\nExpenditure table\n");
    printf("-----------------------------------------------------------\n");
    printf("\nYear\tJan\tfeb\tMar\tApril\tMay\tJune\tJul\tAug\tSep\tOct\tNov\tDec\n");
     for(int i=0;i<no_of_year;i++){
        printf("%d\t",initial_year);
        for(int j=0;j<12;j++){

            printf("%d\t",table[i][j]);
        }
        printf("\n");
         initial_year++;
    }

    float temp_sum;
    float temp_average;
    // calculating total sum
    for(int i=0;i<no_of_year;i++){
            temp_sum+=sum[i];
            temp_average+=average[i];
    }
    printf("\nTotal sum and average details:\n");
    printf("-----------------------------------------------------------\n");
    printf("Sum: %.3f",temp_sum);
    printf("\nAverage: %.3f",(temp_average/no_of_year));
    return 0;
}
