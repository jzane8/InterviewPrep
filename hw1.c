#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* surface_area_cube
 * calculate the surface area of a cube with given side length
 * inputs:
 *    double side_length - the length of each side
 * output:
 *    double - surface area of the cube
 */
double surface_area_cube(double side_length)
{
	fprintf(stderr,"error: surface_area_cube: Not yet implemented\n");
	return 0;
}

/* sides_to_area
 * calculate the internal area of a 2-d polygon given side length and
 * number of sides
 * inputs:
 *    unsigned int num_sides - number of sides of the polygon
 *    double side_length - the length of each side
 * output:
 *    double - area of the polygon
 */
double sides_to_area(unsigned int num_sides, double side_length)
{
	fprintf(stderr,"error: sides_to_area: Not yet implemented\n");
	return -1.0;
}

/* print_number_grid
 * print out a number grid as a 10x10 table of numbers. It must start with
 * the even 10's number that is closest to and smaller than or equal to
 * start_num
 * inputs:
 *    int start_num
 * outputs:
 *    none - output is printed to the screen
 */
void print_number_grid(int start_num)
{

	fprintf(stderr,"error: print_number_grid: Not yet implemented\n");
}

/* extract_digit
 * Extracts a single base-10 digit from pattern. Digits are numbered from
 * right to left beginning with the number 0. Therefore, the 1's place is
 * digit 0, the 10's plae is digit 1, etc.
 * inputs:
 *   unsigned int pattern - pattern from which we're extracting a number
 *   unsigned int digit - the digit we're extracting from pattern
 * outputs:
 *   unsigned int - the value in digit digit of pattern
 */
unsigned int extract_digit(unsigned int pattern, unsigned int digit)
{
	unsigned int div10 = pattern/10;
	unsigned int div100 = pattern/100;
	unsigned int div1000 = pattern/1000;
	unsigned int even10 = div10*10;
	unsigned int even100 = div100*100;
	unsigned int even1000 = div1000*1000;
	switch(digit) {
		case 0:
			return pattern-even10;
		case 1:
			return div10-(even100/10);
		case 2:
			return div100-(even1000/100);
		case 3:
			return div1000;
	}
	return 0;
}

/* num_of_color
 * Counts the number of digits that match the color specified.
 * It only checks the lowest 4 digits of the pattern.
 * inputs:
 *    unsigned int pattern - the input pattern
 *    unsigned int color - the color whose instances we're counting in pattern
 * outputs:
 *    unsigned int - number of instances of color in lowest 4 digits of pattern
 */
unsigned int num_of_color(unsigned int pattern, unsigned int color)
{
	unsigned int result = 0;
	for(unsigned int i=0;i<4;i++){
		printf("E_D: %d\n", extract_digit(pattern,i));
		printf("color: %d\n", color);
		if (extract_digit(pattern,i) == color)
			result++;
		printf("result: %d\n", result);
	}
	return result;
}

/* count_exact_matches
 * counts the number of exact matches (value & position) between guess and solution
 * it only checks four digits, as in mastermind. It is looking for colors
 * encoded as the numbers 1-6.
 * inputs:
 *   unsigned int guess - the guess
 *   unsigned int solution - the solution against which guess is checked
 * outputs:
 *   unsigned int - the number of exact matches
 */

unsigned int count_exact_matches(unsigned int guess, unsigned int solution)
{
	fprintf(stderr,"count_exact_matches: Not yet implemented\n");
	return 0;
}

/* count_color_matches
 * counts the number of color matches between guess and solution
 * it only checks four digits, as in mastermind. It is looking for colors
 * encoded as the numbers 1-6.
 * inputs:
 *   unsigned int guess - the guess
 *   unsigned int solution - the solution against which guess is checked
 * outputs:
 *   unsigned int - the number of color matches
 */

unsigned int count_color_matches(unsigned int guess, unsigned int solution)
{
	fprintf(stderr,"count_color_matches: Not yet implemented\n");
	return 0;
}


/* get_guess_feedback
 * returns mastermind feedback comparing guess with solution. It encodes
 * the feedback as a two-digit number. 10's place is number of exact
 * matches and 1's place is number of additional pegs matching in color
 * inputs:
 *   unsigned int guess - the guess
 *   unsigned int solution - the solution against which guess is checked
 * outputs:
 *   unsigned int - the feedback encoded as described above
 */
unsigned int get_guess_feedback(unsigned int guess, unsigned int solution)
{
	fprintf(stderr,"get_guess_feedback: Not yet implemented\n");
	return 0;
}

int main()
{

	int iresult;
	double dresult;
	unsigned int pattern;

	/* I am putting in a call to each function - just to check compiling.
	 * You need to make check functions and create better more test cases.
	 * THIS IS NOT GOOD CHECKING CODE. JUST FOR COMPILING!!!
	 */

	dresult = surface_area_cube(5.3);
	dresult = surface_area_cube(-2);

	dresult = sides_to_area(4, 5.8);

	printf("number grid: 13\n");
	print_number_grid(13);
	printf("\n\n");
	printf("number grid: -15\n");
	print_number_grid(-15);

	pattern = 6561;
	printf("extract digit 3 from %d: %d\n",
			pattern, extract_digit(pattern, 3));

	pattern = 4014;

	printf("count color 4 from %d: %d\n",
		pattern, num_of_color(pattern, 4));


	iresult = count_exact_matches(3413, 2315);
	iresult = count_color_matches(3413, 2315);
	iresult = get_guess_feedback(3413, 2315);

}
