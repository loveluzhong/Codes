#include <iostream>
#include <cmath>
using namespace std;

// 1:与指定数字相同的数的个数
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 输出一个整数序列中与指定数字相同的数的个数。

// 输入
// 输入包含三行：
// 第一行为N，表示整数序列的长度(N <= 100)；
// 第二行为N个整数，整数之间以一个空格分开；
// 第三行包含一个整数，为指定的整数m。
// 输出
// 输出为N个数中与m相同的数的个数。
// 样例输入
// 3
// 2 3 2
// 2
// 样例输出
// 2

// int main() {
//     int num, n, sum = 0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     cin >> num;
//     for (int i = 0; i < n; ++i) {
//         if (num == arr[i])  ++sum;
//     }
//     cout << sum;
// }

// 2:陶陶摘苹果
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。
// 陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。

// 现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，
// 请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。

// 输入
// 包括两行数据。第一行包含10个100到200之间（包括100和200）的整数（以厘米为单位）
// 分别表示10个苹果到地面的高度，两个相邻的整数之间用一个空格隔开。第二行只包括一个100到120之间（包含100和120）的整数（以厘米为单位），
// 表示陶陶把手伸直的时候能够达到的最大高度。
// 输出
// 包括一行，这一行只包含一个整数，表示陶陶能够摘到的苹果的数目。
// 样例输入
// 100 200 150 140 129 134 167 198 200 111
// 110
// 样例输出
// 5
// 来源
// NOIP2005复赛 普及组 第一题

// int main() {
//     int arr[10], p, sum = 0;
//     for (int i = 0; i < 10; ++i)    cin >> arr[i];
//     cin >> p;
//     for (int i = 0; i < 10; ++i)
//         if (p + 30 >= arr[i])   ++sum;
//     cout << sum;
// }

// 3:年龄与疾病
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，
// 按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。

// 输入
// 共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
// 输出
// 按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，
// 以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。
// 样例输入
// 10
// 1 11 21 31 41 51 61 71 81 91
// 样例输出
// 20.00%
// 20.00%
// 20.00%
// 40.00%

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     double a, b, c, d;
//     a = b = c = d = 0;
//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &arr[i]);
//         if (arr[i] >= 0 && arr[i] <= 18)    ++a;
//         else if (arr[i] >=19 && arr[i] <= 35) ++b;
//         else if (arr[i] >= 36 && arr[i] <= 60) ++c;
//         else ++d;
//     }
//     printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%", a/n*100, b/n*100, c/n*100, d/n*100);
// }

// 4:校门外的树
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。
// 我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。

// 由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。
// 已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。
// 现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。

// 输入
// 第一行有两个整数L（1 <= L <= 10000）和 M（1 <= M <= 100），L代表马路的长度，M代表区域的数目，
// L和M之间用一个空格隔开。接下来的M行每行包含两个不同的整数，用一个空格隔开，
// 表示一个区域的起始点和终止点的坐标。

// 对于20%的数据，区域之间没有重合的部分；
// 对于其它的数据，区域之间有重合的情况。
// 输出
// 包括一行，这一行只包含一个整数，表示马路上剩余的树的数目。
// 样例输入
// 500 3
// 150 300
// 100 200
// 470 471
// 样例输出
// 298
// 来源
// NOIP2005复赛 普及组 第二题

// int main() {
//     int l, m;
//     cin >> l >> m;
//     int arr[l + 1];
//     for (int i = 0; i < l+1; ++i)
//         arr[i] = 1;
//     for (int i = 0; i < m; ++i) {
//         int a, b;
//         cin >> a >> b;
//         for (int j = a; j <= b; ++j)
//             arr[j] = 0;
//     }
//     int sum = 0;
//     for (int i = 0; i < l+1; i++)
//         if(arr[i])  ++sum;
//     cout << sum;
// }

// 5:计算鞍点
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
// 鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
// 例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
// 11 3 5 6 9
// 12 4 7 8 10
// 10 5 6 9 11
// 8 6 4 7 2
// 15 10 11 20 25

// 输入
// 输入包含一个5行5列的矩阵
// 输出
// 如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
// 样例输入
// 11 3 5 6 9
// 12 4 7 8 10
// 10 5 6 9 11
// 8  6 4 7 2
// 15 10 11 20 25
// 样例输出
// 4 1 8

// int main() {
//     int arr[6][6];
//     for (int i = 1; i <= 5; ++i)
//         for (int j = 1; j <= 5; ++j)
//             cin >> arr[i][j];
//     int isFound = 0;

//     for (int i = 1; i <= 5; ++i) {
//         for (int j = 1; j <= 5; ++j) {
//             int isMin = 1, isMax = 1;
//             int tmp = arr[i][j];
//             for (int k = 1; k <= 5; ++k) {
//                 if (arr[i][k] > tmp)
//                     isMax = 0;
//             }
//             for (int k = 1; k <= 5; ++k) {
//                 if (arr[k][j] < tmp)
//                     isMin = 0;
//             }
//             if (isMin && isMax) {
//                 isFound = 1;
//                 cout << i << " " << j << " " << arr[i][j];
//             }
//         }
//     }
//     if (!isFound)
//         cout << "not found";
// }

// 6:图像模糊处理
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：

// 1. 四周最外侧的像素点灰度值不变；

// 2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。

// 输入
// 第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
// 接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在0~255之间。
// 输出
// n行，每行m个整数，为模糊处理后的图像。相邻两个整数之间用单个空格隔开。
// 样例输入
// 4 5
// 100 0 100 0 50
// 50 100 200 0 0
// 50 50 100 100 200
// 100 100 50 50 100
// 样例输出
// 100 0 100 0 50
// 50 80 100 60 0
// 50 80 100 90 200
// 100 100 50 50 100

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     int arr1[n][m];
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> arr[i][j];
//             arr1[i][j] = arr[i][j];
//         }
//     }

//     for (int i = 1; i < n - 1; ++i) {
//         for (int j = 1; j < m - 1; ++j) {
//             double sum = 0;
//             sum += arr[i][j];
//             sum += arr[i-1][j];
//             sum += arr[i+1][j];
//             sum += arr[i][j-1];
//             sum += arr[i][j+1];
//             arr1[i][j] = round(sum / 5);
//         }
//     }

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cout << arr1[i][j];
//             if (j < m-1)
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }

// 7:矩阵转置
// 查看 提交 统计 提问
// 总时间限制: 1000ms 内存限制: 65536kB
// 描述
// 输入一个n行m列的矩阵A，输出它的转置AT。

// 输入
// 第一行包含两个整数n和m，表示矩阵A的行数和列数。1 <= n <= 100，1 <= m <= 100。
// 接下来n行，每行m个整数，表示矩阵A的元素。相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。
// 输出
// m行，每行n个整数，为矩阵A的转置。相邻两个整数之间用单个空格隔开。
// 样例输入
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 样例输出
// 1 4 7
// 2 5 8
// 3 6 9

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n+1][m+1];
    int arr1[m+1][n+1];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            cin >> arr[i][j];
            arr1[j][i] = arr[i][j];
        }
    for(int i = 1;i <= m; ++i) {
        for(int j = 1; j <= n; ++j ) 
            cout << arr1[i][j] << " ";
        cout << endl;
    }
        
}