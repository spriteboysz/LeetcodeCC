/**
 * Author: Deean
 * Date: 2022-09-02 22:33
 * FileName: algorithm/P1603.cpp
 * Description: 1603. 设计停车系统
 */

#include <iostream>
#include <vector>

using namespace std;

class ParkingSystem {
private:
    vector<int> park;
public:
    ParkingSystem(int big, int medium, int small) {
        park = {big, medium, small};
    }

    bool addCar(int carType) {
        return park[carType - 1]-- > 0;
    }
};

int main() {
    ParkingSystem parkingSystem = ParkingSystem(1, 1, 0);
    cout << parkingSystem.addCar(1) << endl; // 返回 true ，因为有 1 个空的大车位
    cout << parkingSystem.addCar(2) << endl; // 返回 true ，因为有 1 个空的中车位
    cout << parkingSystem.addCar(3) << endl; // 返回 false ，因为没有空的小车位
    cout << parkingSystem.addCar(1) << endl; // 返回 false ，因为没有空的大车位，唯一一个大车位已经被占据了
    return 0;
}