#ifndef A7E2EB86_C503_439C_815B_36BCD3D14393
#define A7E2EB86_C503_439C_815B_36BCD3D14393
#include <iostream>
using namespace std;
#include <vector>
#include <methods.h>

class methods {

    private:
            static int Xcoords;
            static int Ycoords;
            using vett = vector<int>;
          
    public:

	        static vett XYcoords; //single vector.
	        static vett coords1;
                static vett coords2;
                static int totsum;
	        static int tot_sum_single_vector;
	        static int X, Y, XY;
                static int counter;
            static void two_vectors();
            static void single_vector();
            static void single_vector_solution();
};
#endif /* A7E2EB86_C503_439C_815B_36BCD3D14393 */
