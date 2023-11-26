#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Writable {
public:
    virtual void writeState(const string& filename) const = 0;
    virtual ~Writable() = default;
};

class Readable {
public:
    virtual void readState(const string& filename) = 0;
    virtual ~Readable() = default;
};

class TestClass : public Writable, public Readable {
private:
    int intValue;
    double doubleValue;
    string stringValue;

public:
    TestClass(int i, double d, const string& s)
        : intValue(i), doubleValue(d), stringValue(s) {}

    void writeState(const string& filename) const override {
        ofstream outputFile(filename);

        if (outputFile.is_open()) {
            outputFile << intValue << " " << doubleValue << " " << stringValue;
            outputFile.close();
            cout << "State written to file: " << filename << endl;
        }
        else {
            cerr << "Unable to open file: " << filename << endl;
        }
    }

    void readState(const string& filename) override {
        ifstream inputFile(filename);

        if (inputFile.is_open()) {
            inputFile >> intValue >> doubleValue >> stringValue;
            inputFile.close();
            cout << "State read from file: " << filename << endl;
        }
        else {
            cerr << "Unable to open file: " << filename << endl;
        }
    }

    void displayState() const {
        cout << "Int Value: " << intValue << endl;
        cout << "Double Value: " << doubleValue << endl;
        cout << "String Value: " << stringValue << endl;
    }
};

int main() {
    TestClass myObject(42, 3.14, "Test");

    cout << "Initial State:" << endl;
    myObject.displayState();

    myObject.writeState("testFile.txt");

    myObject = TestClass(99, 2.71, "Modified State");

    cout << "\nModified State:" << endl;
    myObject.displayState();

    myObject.readState("testFile.txt");
    cout << "\nState after reading from file:" << endl;
    myObject.displayState();

    return 0;
}
