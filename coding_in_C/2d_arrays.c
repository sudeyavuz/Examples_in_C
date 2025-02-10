#include <stdio.h>
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/sizeof(arr[0][0]);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}