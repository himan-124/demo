class Vehicle {
public:
    int noofwheels;
    double fuelStatus; // percentage
    void start() {
        cout << "Engine Started\n";
        fuelStatus = fuelStatus - 0.5;
    }
    void stop() {
        cout << "Engine Stopped\n";
    }
    void refillFuel (int fuel) {
        cout << fuel << " fuel added to the tank\n";
        fuelStatus = fuelStatus + fuel;
    }
};
class Car : public Vehicle{
public:
    string brand;
    Car (int fuelStatus, string brand)
    {
        this->fuelStatus = fuelStatus;
        this->brand = brand;
    }
int main() {
    Car c1(50, "Toyota");
    c1.noofwheels = 4;
    c1.start();
    cout << "Car Brand: " << c1.brand << endl;
    cout << "Fuel Status: " << c1.fuelStatus << "%" << endl;
    c1.refillFuel(20);
    cout << "Updated Fuel Status: " << c1.fuelStatus << "%" << endl;
    c1.stop();
    return 0;
}

    void Display() {
        cout << "x=" << x << endl;
        cout << "y=" << *y << endl;
    }
};

