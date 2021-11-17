//NOTE, THIS EXAMPLE IS MAINLY TO WORK WITH COORDINATES IN PHYSICS.

#include <iostream>
using namespace std;
#include <methods.h>
#include <vector>
 using vett = vector<int>;

/*two distinct vectors with same storage position, we can handle the input manually with one for.
  Each input will have i = 0 pos for each vector.
	
    input examle: Xcoords: 1 3 5 
				  Ycoords: 2 4 6
		
						1 X*Y Coords: 2 
						2 X*Y Coords: 12 
						3 X*Y Coords: 30

each multiplication used i * i with precise position. None of the values are duplicated.*/



int methods::Xcoords;
int methods::Ycoords;
vett methods::coords1;
vett methods::coords2;
vett methods::XYcoords;
int methods::totsum;
int methods::counter;
int methods::XY;

void methods::two_vectors() { //correct method, but uses more space.
        //obtaining 6 coordinates, 3 on X 3 on Y.
        for (size_t i = 0; i < 3; i++){
            cin >> Xcoords;
            cin >> Ycoords;
            coords1.push_back(Xcoords);
            coords2.push_back(Ycoords);

        }
        
        //doing multiplication of coordinates

        for (size_t i = 0; i < 3; i++){
            totsum = coords1[i] * coords2[i];
            //X[i] * Y[i]
            cout << i+1 << " XY coordinates: " << totsum << endl;
        }
        

}


/*What if we try it on a single vector?
input example: 	XYcoords: 1 2 3 4 5 6 (everything on same vector with contiguous data (i+1)) 

	  Output: 			1 X Y Coords: 2
						2 X Y Coords: 6 //2 value is taken again, when here we don't want to.
						3 X Y Coords: 12
						4 X Y Coords: 20
						5 X Y Coords: 30
						6 X Y Coords: 1611898958 //Out of bounds!
What happens here is: 
1) the first cicle starts
2) Multiplies XY[i] = 1 * XY[i+1] = 2
3) i increases to 1, and it referres to the previous i+1 element, which was 2.
4) 2 is being reused to be multiplied with it's next coordinate, which is 3
5) We get wrong results, until we reach a i+1 out of bounds position. */

void methods::single_vector() { //!WRONG METHOD.

        for (size_t i = 0; i < 6; i++){
            cin >> XY;
            XYcoords.push_back(XY);
        }
        for (size_t i = 0; i < 6; i++){
            totsum = XYcoords[i] * XYcoords[i+1];
            cout << i+1 << " XY coordinates: " << totsum << endl;
        }

        XYcoords.clear();
}
        
/*What we need, is to skip for each iteration 2 positions, each operation
 it's made with two positions, so we need to access the next two positions directly*
 And to avoid Out of bounds value, we set the size decreased by 1, since we already
 access the i+1 element.*/


 void methods::single_vector_solution() {

     for (size_t i = 0; i < 6; i++){
         cin >> XY;
         XYcoords.push_back(XY);
     }
     //size-1 to avoid out of bounds value error. 6 was the size, now we do 5. i+=2 to calculate each two distinct coordinates.
	 //in this way we avoid to repeat the values: [0] * [1], [2] * [3] and so on.
     for (size_t i = 0; i < 5; i+=2){
         totsum = XYcoords[i] * XYcoords[i+1];
         counter++;
         cout << counter << " XY coords: " << totsum << endl;
      }
     
 }
