
/******************************
 * 注：除程序中注明不能使用第三方库外，其他操作推荐使用opencv
 * © Yihang.ai
 * Version : 1.4
 ******************************/
#include <stdio.h>
// #include <algorithm>
// #include <opencv2/opencv.hpp>

/**
 * Project1: 计算两三角形是否有交集
 * 要求： 
 *  1） 计算给定两个三角形是否有交集
 *  2） 输出以bool结果给出
 *  3） 计算过程不可直接使用第三方库
 *  4） 除计算过程外，图像读取、显示、输出可使用第三方库
 * 输入： 三角形描述 [x1, y1, x2, y2, x3, y3]
 *       分别表示三角形三个顶点的坐标
 * 输出： 计算所有三角形是否有交集
 * */
bool has_overlap(int triangle1[6], int triangle2[6])
{

}

/**
 * Project2: 给定输入数据流，每来一个数据，求取最新N个数据中中间大小M（M≤N）个数据的均值和方差
 * 要求： 
 *  1） 给定数据流，求取最新N个数据中满足条件的均值和方差
 *  2） 条件为：N个数据按大小排序后，取中间M（M≤N）个数据
 *  3） 设定 N=10， M=6
 * 注意：最新的N个数据表示按照数据流顺序最新的数据，比如 数据流为 [2,3,5,1,5,6]，则最新3个数据为[1,5,6]
 * 输入： 数据流
 * 输出： 均值和方差，存放在mean和var中，按照索引数据流存放
 *       开始时，数据量<M时，返回已输入数据的均值和方差
 * */
int calc_mean_var(float data[], int N, int M, float mean[], float var[])
{
    
    /* code here */
    /* 例如 */
    for(int i = 0; i < 100; i++)
    {
        if(i < N-1) 
        {
            mean[i] = 0;
            var[i]  = 0;
            continue;
        }
        float in_data = data[i];
        //
        // ...
        // calculate newest data mean and variance
        // then fill mean and var
        //
        printf("[%03d] mean = %f, variance = %f\n", i, mean[i], var[i]);
    }
    return 0;
}
/**
 * Project3: 单应性变换
 * 要求： 
 *  1） 已知一个平面上的4个点（A、B、C、D），经过两个针孔相机分别成像得到4个点的图像坐标分别为
 *          相机1： (xA1, yA1)，(xB1, yB1), (xC1, yC1), (xD1, yD1)
 *          相机2： (xA2, yA2)，(xB2, yB2), (xC2, yC2), (xD2, yD2),
 *      计算相机1的图像到相机2图像的单应矩阵，并转换相机2图像中的点坐标到相机1图像坐标中
 *  2） 计算单应矩阵及求取点坐标时不可直接使用第三方库
 *  3） 除2）要求的过程外，其他过程如求矩阵的逆、迹、秩可根据个人习惯使用第三方库
 * 输入： 4个点在相机1图像中的坐标，以二维数组形式给出，
 *       4个点在相机2图像中的坐标，以二维数组形式给出，
 *       N个相机2图像中坐标的点，以长度为N的二维数组形式给出 
 * 输出： N个相机2图像中坐标的点，以长度为N的二维数组形式给出 
 * */
void calc_homography(int pts1[4][2], int pts2[4][2], int pts_in[][2], int pts_out[][2])
{
    
}

/**
 * Project4: 连通域检测
 * 要求： 
 *  1） 对输入图像进行8-邻接连通域检测，连通域检测不可使用第三方库
 *  2） 输出连通域的数量，并将每个连通域的面积打印，如“连通域1 : 40, 连通域1 : 100”
 *  3） 连通域面积即为连通域中的像素数目
 * 输入图像： Project4.jpg
 * 输出： 将连通域面积填充到area数组中，并且按照从大到小排序，即索引为0的面积最大
 *       cnt: 返回连通域的数目
 * */
void print_connected_area(const char *in_img_name, float area[], int &cnt)
{

    /** 打印示例
    printf("检测到连通域数目 = %d\n", N);
    for(int i = 0; i < size; i++)
    {
        printf("连通域[ %d ]面积： %d\n", i, area);
    }
     */
}


/**
 * Project5: 计算最小外接矩形
 * 要求： 
 *  1） 给定输入图像，使用project4的方法计算连通域
 *  2） 计算每个连通域的最小外接矩形
 * 注意：题目要求最小外接矩形可能为旋转矩形，矩形可能是长方形或者正方形
 *      即矩形的边不必须是平行坐标轴的   
 * 输入图像： Project5.jpg
 * 输出： 将连通域最小外接矩形的面积输出到area数组中，并且按照从大到小排序，即索引为0的面积最大
 *       cnt 返回连矩形的数目
 * */
void connected_rectangle_area(const char * in_img_name, float area[], int &cnt)
{

}


#define MAX_AREA_CNT 1024
/**
 * main function test
 */
int main(int argc, char **argv)
{
    // Project1
    printf("========= Project1 =============== \n");
    int tri[5][6] = {
        {100, 200, 305, 105, 100, 25},  // triangle in
        {86, 192, 100, 150, 102, 75},
        {200, 260, 160, 100, 201, 300},
        {150, 100, 50, 60, 300, 60},
        {260, 200, 150, 60, 80, 100}
    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            printf("Overlap [%d][%d] = %d\n", i, j, has_overlap(tri[i], tri[j]));
        }        
    }
    // Project2
    printf("\n========= Project2 =============== \n");
    float data[100] = { -32.21, 42.36, -17.66, 46.93, 88.45, -39.05, -7.16, 21.54, 1.85, 3.5, -96.02, 89.63, 50.39, 
                        -79.37, 29.27, 73.82, -81.32, 69.24, -46.98, 95.53, -76.9, -52.23, -16.27, 74.15, 13.69, -89.37, 
                        26.37, -4.59, 74.6, -29.5, -21.7, 5.82, -50.47, -87.16, 58.73, 14.16, -89.38, 86.33, 32.58, 
                        -81.52, 69.85, -16.05, -4.21, -47.58, -86.84, 47.59, -43.65, 99.82, -97.1, 20.21, 9.82, -35.07, 
                        96.11, 25.29, -84.58, -78.7, 10.65, 58.65, -59.29, 53.49, 28.44, -25.67, -22.98, 35.67, -8.69, 
                        -41.43, -22.29, 48.63, 31.49, 39.87, -86.7, 75.24, 49.47, -1.74, 70.02, -2.42, 41.28, -62.6, 
                        -36.29, -4.4, 23.36, -20.06, -54.91, 18.47, 33.65, 86.59, -42.31, -89.57, 21.13, 41.44, -21.17, 
                        60.26, -30.71, 0.0, -18.57, 71.01, 31.32, -68.95, -93.25, 27.48  
                    };
    const int N = 10;
    const int M = 6;
    float mean[100], var[100];
    calc_mean_var(data, N, M, mean, var);
    //Project3
    printf("\n========= Project3 =============== \n");
    int pts1[4][2] = {
        {20, 45},
        {30, 600},
        {560, 650},
        {550, 30}
    };
    int pts2[4][2] = {
        {10, 15},
        {400, 560},
        {450, 600},
        {560, 20}
    };

    int pts_in[][2] = {
        {15, 25},
        {35, 67},
        {100, 200},
        {300, 560}
    };
    int pts_out[4][2];
    calc_homography(pts1, pts2, pts_in, pts_out);
    //Project4
    printf("\n========= Project4 =============== \n");
    float area[MAX_AREA_CNT];
    int cnt;
    print_connected_area("project4.jpg", area, cnt);
    //Project5
    printf("\n========= Project5 =============== \n");
    float rect_area[MAX_AREA_CNT];
    connected_rectangle_area("project4.jpg", rect_area, cnt); 

    return 0;
}

