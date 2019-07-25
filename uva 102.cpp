#include<iostream>
using namespace std;
int main()
{
    int a[9];
    int max, i, in, in1, in2, sum;

    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8]) {

        max = a[0];
        in = in1 = in2 = 0;
        for (i = 1; i < 9; i++) {
            if (max < a[i]) {
                max = a[i];
                in = i;
            }
        }
        
        sum = 0;
        //cout << max << " " << in << endl;
        
        if (in == 0 || in == 3 || in == 6) {
            if (in == 0) {
                sum += a[3] + a[6];
                a[0] = a[3] + a[6];
                a[3] = a[6] = 0;
            }
            else if (in == 3) {
                sum += a[0] + a[6];
                a[3] = a[0] + a[6];
                a[0] = a[6] = 0;
            }
            else if (in == 6) {
                sum += a[0] + a[3];
                a[6] = a[0] + a[3];
                a[0] = a[3] = 0;
            }

            //cout << "B";
        }

        else if (in == 1 || in == 4 || in == 7) {
            if (in == 1) {
                sum += a[4] + a[7];
                a[1] = a[4] + a[7];
                a[4] = a[7] = 0;
            }
            else if (in == 4) {
                sum += a[1] + a[7];
                a[4] = a[1] + a[7];
                a[1] = a[7] = 0;
            }
            else if (in == 7) {
                sum += a[1] + a[4];
                a[7] = a[1] + a[4];
                a[1] = a[4] = 0;
            }

            //cout << "G";
        }

        else if (in == 2 || in == 5 || in == 8) {
            if (in == 2) {
                sum += a[5] + a[8];
                a[2] = a[5] + a[8];
                a[5] = a[8] = 0;
            }
            else if (in == 5) {
                sum += a[2] + a[8];
                a[5] = a[2] + a[8];
                a[2] = a[8] = 0;
            }
            else if (in == 8) {
                sum += a[2] + a[5];
                a[8] = a[2] + a[5];
                a[2] = a[5] = 0;
            }

            //cout << "C";
        }

        //cout << sum << endl;

        if (in == 0 || in == 1 || in == 2) {
        	max = a[3];
        	in1 = 3;
        	for (i = 4; i < 9; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in1 = i;
				}
			}
		}
		
		else if (in == 3 || in == 4 || in == 5) {
        	max = a[0];
        	in1 = 0;
        	for (i = 1; i < 3; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in1 = i;
				}
			}
			
			for (i = 6; i < 9; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in1 = i;
				}
			}
		}
		
		else if (in == 6 || in == 7 || in == 8) {
        	max = a[0];
        	in1 = 0;
        	for (i = 1; i < 6; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in1 = i;
				}
			}
		}
		
		//cout << max << " " << in << endl;
		
		if (in1 == 0 || in1 == 3 || in1 == 6) {
            if (in1 == 0) {
                sum += a[3] + a[6];
                a[0] = a[3] + a[6];
                a[3] = a[6] = 0;
            }
            else if (in1 == 3) {
                sum += a[0] + a[6];
                a[3] = a[0] + a[6];
                a[0] = a[6] = 0;
            }
            else if (in1 == 6) {
                sum += a[0] + a[3];
                a[6] = a[0] + a[3];
                a[0] = a[3] = 0;
            }

            //cout << "B";
        }

        else if (in1 == 1 || in1 == 4 || in1 == 7) {
            if (in1 == 1) {
                sum += a[4] + a[7];
                a[1] = a[4] + a[7];
                a[4] = a[7] = 0;
            }
            else if (in1 == 4) {
                sum += a[1] + a[7];
                a[4] = a[1] + a[7];
                a[1] = a[7] = 0;
            }
            else if (in1 == 7) {
                sum += a[1] + a[4];
                a[7] = a[1] + a[4];
                a[1] = a[4] = 0;
            }

            //cout << "G";
        }

        else if (in1 == 2 || in1 == 5 || in1 == 8) {
            if (in1 == 2) {
                sum += a[5] + a[8];
                a[2] = a[5] + a[8];
                a[5] = a[8] = 0;
            }
            else if (in1 == 5) {
                sum += a[2] + a[8];
                a[5] = a[2] + a[8];
                a[2] = a[8] = 0;
            }
            else if (in1 == 8) {
                sum += a[2] + a[5];
                a[8] = a[2] + a[5];
                a[2] = a[5] = 0;
            }

            //cout << "C";
        }
        
        //cout << sum << endl;
        
        if ((in == 0 || in == 1 || in == 2) && (in1 == 3 || in1 == 4 || in1 == 5)) {
        	max = a[6];
        	in2 = 6;
        	for (i = 7; i < 9; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		else if ((in == 0 || in == 1 || in == 2) && (in1 == 6 || in1 == 7 || in1 == 8)) {
        	max = a[3];
        	in2 = 3;
        	for (i = 4; i < 6; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		else if ((in == 3 || in == 4 || in == 5) && (in1 == 6 || in1 == 7 || in1 == 8)) {
        	max = a[0];
        	in2 = 0;
        	for (i = 1; i < 3; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		else if ((in == 3 || in == 4 || in == 5) && (in1 == 0 || in1 == 1 || in1 == 2)) {
        	max = a[6];
        	in2 = 6;
        	for (i = 7; i < 9; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		else if ((in == 6 || in == 7 || in == 8) && (in1 == 0 || in1 == 1 || in1 == 2)) {
        	max = a[3];
        	in2 = 3;
        	for (i = 4; i < 6; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		else if ((in == 6 || in == 7 || in == 8) && (in1 == 3 || in1 == 4 || in1 == 5)) {
        	max = a[0];
        	in2 = 0;
        	for (i = 1; i < 3; i++) {
        		if (max < a[i]) {
        			max = a[i];
        			in2 = i;
				}
			}
		}
		
		if (in2 == 0 || in2 == 3 || in2 == 6) {
            if (in2 == 0) {
                sum += a[3] + a[6];
                a[0] = a[3] + a[6];
                a[3] = a[6] = 0;
            }
            else if (in2 == 3) {
                sum += a[0] + a[6];
                a[3] = a[0] + a[6];
                a[0] = a[6] = 0;
            }
            else if (in2 == 6) {
                sum += a[0] + a[3];
                a[6] = a[0] + a[3];
                a[0] = a[3] = 0;
            }

            //cout << "B";
        }

        else if (in2 == 1 || in2 == 4 || in2 == 7) {
            if (in2 == 1) {
                sum += a[4] + a[7];
                a[1] = a[4] + a[7];
                a[4] = a[7] = 0;
            }
            else if (in2 == 4) {
                sum += a[1] + a[7];
                a[4] = a[1] + a[7];
                a[1] = a[7] = 0;
            }
            else if (in2 == 7) {
                sum += a[1] + a[4];
                a[7] = a[1] + a[4];
                a[1] = a[4] = 0;
            }

            //cout << "G";
        }

        else if (in2 == 2 || in2 == 5 || in2 == 8) {
            if (in2 == 2) {
                sum += a[5] + a[8];
                a[2] = a[5] + a[8];
                a[5] = a[8] = 0;
            }
            else if (in2 == 5) {
                sum += a[2] + a[8];
                a[5] = a[2] + a[8];
                a[2] = a[8] = 0;
            }
            else if (in2 == 8) {
                sum += a[2] + a[5];
                a[8] = a[2] + a[5];
                a[2] = a[5] = 0;
            }

            //cout << "C";
        }
        
        //cout << sum << endl;
		
		for (i = 0; i < 9; i++) {
			if (a[i] > 0) {
				if (i == 0)
        			cout << 'B';
        		else if (i == 1)
        			cout << 'G';
        		else if (i == 2)
        			cout << 'C';
        		
        		if (i == 3)
        			cout << 'B';
        		else if (i == 4)
        			cout << 'G';
        		else if (i == 5)
        			cout << 'C';
        			
        		if (i == 6)
        			cout << 'B';
        		else if (i == 7)
        			cout << 'G';
        		else if (i == 8)
        			cout << 'C';
			}
		}
		
		cout << " " << sum << endl;
    }
    
    
    return 0;
}
