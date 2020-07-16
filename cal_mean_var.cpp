#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <algorithm>
using namespace std;
void getMeanStd0(vector<float> &vec, float &mean, float &stdd);
void cal_mean_val(vector<float> &data, int &N, int &M, vector<float> &mean, vector<float> &var);
int main()
{
    int M = 6;
    int N = 10;
    vector<float> mean;
    vector<float> var;
    vector<float> data;
    cout << "输入数据流:" << endl;
    //比如100个数据
    for (int i = 0; i < 100; i++)
    {
        float tmp;
        cin >> tmp;
        data.emplace_back(tmp);
    }
    cal_mean_val(data, N, M, mean, var);
    return 0;
}
void getMeanStd0(vector<float> &vec, float &mean, float &stdd)
{
    if (vec.empty())
    {
        return;
    }
    mean = 0;
    stdd = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        mean += vec[i];
    }
    mean /= vec.size();

    for (int i = 0; i < vec.size(); ++i)
    {
        stdd += (vec[i] - mean) * (vec[i] - mean);
    }
    stdd /= (vec.size() - 1);
    stdd = sqrt(stdd);
}
void cal_mean_val(vector<float> &data, int &N, int &M, vector<float> &mean, vector<float> &var)
{
    int length = data.size();
    vector<float> sub_data;
    float mean_val = 0;
    float var_val = 0;
    for (int i = 0; i < length; i++)
    {
        sub_data.emplace_back(data[i]);
        while (sub_data.size() > N)
        {
            sub_data.erase(sub_data.begin(), sub_data.begin() + 1);
        }
        if (i < N - 1)
        {
            getMeanStd0(sub_data, mean_val, var_val);
            mean.emplace_back(mean_val);
            var.emplace_back(var_val);
            continue;
        }
        sort(sub_data.begin(), sub_data.end());
        vector<float> subsub_data;
        for (int i = 0; i < N; i++)
        {
            if (i < 2)
            {
                continue;
            }
            if (subsub_data.size() == M)
            {
                break;
            }
            subsub_data.emplace_back(sub_data[i]);
        }
        getMeanStd0(sub_data, mean_val, var_val);
        mean.emplace_back(mean_val);
        var.emplace_back(var_val);
    }
}
