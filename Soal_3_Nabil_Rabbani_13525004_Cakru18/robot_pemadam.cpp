#include <bits/stdc++.h> 
using namespace std;

class robotpemadam{
    private:
        int jarak;
        string status;
    public:
        void inputsensor(int input_jarak){
            jarak = input_jarak;
        }
        void proseslogika(){
            if (jarak > 20){
                status = "Maju Mencari Api";
            }
            else if (jarak <= 20 && jarak > 5){
                status = "UDAH DEKET NIH BRAY";
            }
            else if (jarak <= 5){
                status = "Posisi Tepat! gas semprot kali ya!";
            }

        }
        void cetakstatus(){
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
        }

};

int main (){

    robotpemadam nih;
    int input;

    while (true){

        cout << "input sensor (ketik 67 untuk keluar): ";
        cin >> input;

        if (input == 67){
            cout << "keluar program";
            break;
        }
        nih.inputsensor(input);
        nih.proseslogika();
        nih.cetakstatus();


    }

    return 0;
}

