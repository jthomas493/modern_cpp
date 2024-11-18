#ifndef ABBB1497_4445_4A6F_AFCA_3774821BCF6A
#define ABBB1497_4445_4A6F_AFCA_3774821BCF6A
#pragma once
struct Car
{
private:
    float fuel{0};
    float speed{0};
    int passengers{0};
    int arr[5] = {1, 2, 3};
    char *p{};

public:
    Car();
    Car(float amount);
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();
    ~Car();
};
#endif /* ABBB1497_4445_4A6F_AFCA_3774821BCF6A */
