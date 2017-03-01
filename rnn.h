#include <iostream>
#include <map> 
#include <stdio.h>
#include <math.h>
#include <time.h>
using namespace std;

class Rnn{

    private:
        int binary_dim, input_dim, hidden_dim, output_dim;
        double alpha;
        double synapse_0[2][16],synapse_1[16][1],synapse_h[16][16];
        double synapse_0_update,synapse_1_update,synapse_h_update;

    public:

        Rnn(){
        }

        double get_random(){
            return rand() % 20000 * 0.0001 - 1.0;
        }

        void init(){
            binary_dim = 8;
            input_dim = 2;
            hidden_dim = 16;
            output_dim = 1;
            alpha = 0.1;
            srand((int)time(0));
            for(int i = 0; i < 2; i ++){
                for(int j = 0;j < 16; j ++){
                    synapse_0[i][j] = get_random(); 
                    synapse_0_update[i][j] = 0;
                }
            }

            for(int i = 0; i < 16; i ++){
                for(int j = 0;j < 1; j ++){
                    synapse_1[i][j] = get_random();
                    synapse_1_update[i][j] = 0;
                }
            }

            for(int i = 0; i < 16; i ++){
                for(int j = 0;j < 16; j ++){
                    synapse_h[i][j] = get_random();
                    synapse_h[i][j] = 0; 
                }
            }

        }

        void tobinary(int x, int a[], int len){
            int t = 0;
            memeset(a, 0, len);
            while(x || t < len){
                if(x == 0){
                    a[t++] = x % 2;
                    x /= 2;
                }
                else{
                    a[t++] = 0;
                }
            }
            return a;
        }

        double * sigmod(double x){
            return 1.0 / (1 + exp(-x))
        }

        void train(){
            int latgest_num = pow(2,binary_dim);
            map<int, string> m;
            for(int i = 1;i <= latgest_num; i ++){
                map[]
            }
        }
};

