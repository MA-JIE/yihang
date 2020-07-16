#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int cross(pair<int, int> &u, pair<int, int> &v);
//线是否相交
bool line_intersection(pair<int, int> &p1, pair<int, int> &p2, pair<int, int> &p3, pair<int, int> &p4);
//是否包含另外一个三角形
bool point_in_triangle(pair<int, int> &a, pair<int, int> &b, pair<int, int> &c, pair<int, int> &p);
//判断三角形是否相交
bool triangle_intersection(vector<pair<int, int>> &triangle1, vector<pair<int, int>> &triangle2);
int main()
{
    vector<pair<int, int>> triangle1;
    vector<pair<int, int>> triangle2;
    cout << "输入第一个三角形的三个点的坐标:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> tmp(x, y);
        triangle1.emplace_back(tmp);
    }
    cout << "输入第一个三角形的三个点的坐标:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> tmp(x, y);
        triangle2.emplace_back(tmp);
    }
    bool res = true;
    res = triangle_intersection(triangle1, triangle2);
    cout << res << endl;
    return 0;
}
bool line_intersection(pair<int, int> &p1, pair<int, int> &p2, pair<int, int> &p3, pair<int, int> &p4)
{
    int d, u, v;
    d = (p4.second - p3.second) * (p2.first - p1.first) - (p4.first - p3.first) * (p2.second - p1.second);
    u = (p4.first - p3.first) * (p1.second - p3.second) - (p4.second - p3.second) * (p1.first - p3.first);
    v = (p2.first - p1.first) * (p1.second - p3.second) - (p2.second - p1.second) * (p1.first - p3.first);
    if (d < 0)
    {
        u = -u;
        v = -v;
        d = -d;
    }
    return (d >= u && u >= 0) && (d >= v && v >= 0);
}
int cross(pair<int, int> &u, pair<int, int> &v)
{
    return u.first * v.second - u.second - v.first;
}
bool point_in_triangle(pair<int, int> &a, pair<int, int> &b, pair<int, int> &c, pair<int, int> &p)
{
    pair<int, int> v0(c.first - a.first, c.second - a.second);
    pair<int, int> v1(b.first - a.first, b.second - a.second);
    pair<int, int> v2(p.first - a.first, p.second - a.second);
    int u, v, d;
    u = cross(v2, v0);
    v = cross(v1, v2);
    d = cross(v1, v0);
    if (d < 0)
    {
        u = -u;
        v = -v;
        d = -d;
    }
    return u >= 0 && v >= 0 && (u + v) <= d;
}
bool triangle_intersection(vector<pair<int, int>> &triangle1, vector<pair<int, int>> &triangle2)
{
    if (line_intersection(triangle1[0], triangle1[1], triangle2[0], triangle2[1]))
    {
        return true;
    }
    if (line_intersection(triangle1[0], triangle1[1], triangle2[0], triangle2[2]))
    {
        return true;
    }
    if (line_intersection(triangle1[0], triangle1[1], triangle2[1], triangle2[2]))
    {
        return true;
    }
    if (line_intersection(triangle1[0], triangle1[2], triangle2[0], triangle2[1]))
    {
        return true;
    }
    if (line_intersection(triangle1[0], triangle1[2], triangle2[0], triangle2[2]))
    {
        return true;
    }
    if (line_intersection(triangle1[0], triangle1[2], triangle2[1], triangle2[2]))
    {
        return true;
    }
    if (line_intersection(triangle1[1], triangle1[2], triangle2[0], triangle2[1]))
    {
        return true;
    }
    if (line_intersection(triangle1[1], triangle1[2], triangle2[0], triangle2[2]))
    {
        return true;
    }
    if (line_intersection(triangle1[1], triangle1[2], triangle2[1], triangle2[2]))
    {
        return true;
    }
    bool intri = false;
    intri = intri || point_in_triangle(triangle1[0], triangle1[1], triangle1[2], triangle2[0]);
    intri = intri || point_in_triangle(triangle1[0], triangle1[1], triangle1[2], triangle2[1]);
    intri = intri || point_in_triangle(triangle1[0], triangle1[1], triangle1[2], triangle2[2]);
    if (intri == true)
    {
        return true;
    }
    intri = false;
    intri = intri || point_in_triangle(triangle2[0], triangle2[1], triangle2[2], triangle1[0]);
    intri = intri || point_in_triangle(triangle2[0], triangle2[1], triangle2[2], triangle1[1]);
    intri = intri || point_in_triangle(triangle2[0], triangle2[1], triangle2[2], triangle1[2]);
    if (intri == true)
    {
        return true;
    }
    return false;
}
