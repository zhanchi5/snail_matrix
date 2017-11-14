#include <iostream>
#include <iomanip>
#include <string>


int main()
{

        unsigned int n,m;
        std::cout << "Введите размерность матрицы:" << '\n';
        //std::string token;
        std::cin >> n >> m;
        /*getline (std::cin, name);
        std::stringstream ss(name);
        while (ss >> token)
        {
                printf("%s\n", token.c_str());
        }
        //std::cin.getline (name,256);
        for (auto &i : name) {
                if (i == '\t' or i == '\n' or i == ' ' ) {
                        std::cout << "An error has accured while reading input data" << '\n';
                }
        }
*/        //std::cout << name[0] << '\n';
        int mat[n][m];
        int i=0, j, k = 0, p=1;

        while (i < n*m) /*Цикл по номеру витка*/
        {
                k++;
                for (j=k-1; j<m-k+1; j++)
                {
                        mat[k-1][j]=p++;
                        i++;
                } /*Определение значений верхнего гор столбца*/

                for (j=k; j<n-k+1; j++)
                {
                        mat[j][m-k]=p++;
                        i++;
                } /* --//-- По правому вертикальному столбцу*/

                for (j=m-k-1; j>=k-1; j--)
                {
                        mat[n-k][j]=p++;
                        i++;
                } /* --//-- по нижнему горизонтальному столбцу*/

                for (j=n-k-1; j>=k; j--)
                {
                        mat[j][k-1]=p++;
                        i++;
                } /* --//-- по левому вертикальному столбцу*/

        }

        for (int q=0; q<n; q++)
        {
                for (int w=0; w<m; w++)
                {
                        std::cout << std::setw(4) << mat[q][w];
                };
                std::cout << "\n";
        }

        return(0);
}
