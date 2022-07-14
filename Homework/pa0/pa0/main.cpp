#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
#include <cmath>
int main(){
    double rad = 360*(acos(-1)/180);
    Eigen::Matrix<double,2,2> rotate;
    rotate(0,0) = cos(rad);
    rotate(0,1) = -sin(rad);
    rotate(1,0) = sin(rad);
    rotate(1,1) = cos(rad);
    std::cout<<rotate<<std::endl;
    Eigen::Matrix<double,2,1> v;
    v(0,0) = 5.0;
    v(1,0) = 15.0;
    std::cout<<rotate*v<<std::endl;
    v = rotate*v;
    Eigen::Matrix<double,2,1> translate;
    translate(0,0) = 2.0f;
    translate(0,1) = 2.0f;
    std::cout<<v+translate<<std::endl;
    return 0;
}