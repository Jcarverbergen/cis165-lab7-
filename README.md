# cis165-lab7-
 bmi.cpp   color_mixer.cpp   README.md   AI_REFLECTION.md
Variables
weight: stores the weight in pounds.
height: stores the height in inches.
bmi: stores the calculated Body Mass Index.
Validation
The program checks whether weight or height is less than or equal to zero. If either measurement is invalid, it displays an error message and stops before calculating BMI.

Calculation
The program calculates BMI using the formula:

bmi = weight * 703.0 / (height * height);

The result is stored in the bmi variable.

Selection Statements
The program uses if, else if, and else to classify BMI:

Less than 18.5: Underweight
18.5 through 25.0, including both endpoints: Optimal weight
Greater than 25.0: Overweight
The BMI is displayed with two decimal places using fixed and setprecision(2). The original calculated value is used for classification.

Program 2: Color Mixer Plan
Inputs
The program asks the user for two primary-color names: red, blue, or yellow.

Variables
COLOR_SIZE: named constant defining the character-array size.
first_color: character array storing the first color.
second_color: character array storing the second color.
first_valid: indicates whether the first color is valid.
second_valid: indicates whether the second color is valid.
result: stores or points to the resulting color.
Validation
The program uses strcmp to check that both inputs are valid primary colors. If either input is invalid, the program displays an error message instead of producing a mixed color.

The inputs use setw(COLOR_SIZE) to limit how many characters are read into each array.

Comparisons and Output
The program checks whether both colors are identical. If they are, it displays that color. Otherwise, it checks the combinations of red and blue, red and yellow, and blue and yellow in either input order.

The results are purple, orange, and green, respectively.

Test Records
I predicted the expected results before running the tests. I compiled and ran both programs and compared the actual output with my predictions. All tests listed below matched their expected results.

BMI Test Results

 Program/test | Inputs | Expected result | Actual result | Match or correction |
|---|---|---|---|---|
| BMI 1 | Weight: 100, Height: 70 | 14.35 — Underweight | 14.35 — Underweight | Match |
| BMI 2 | Weight: 150, Height: 70 | 21.52 — Optimal weight | 21.52 — Optimal weight | Match |
| BMI 3 | Weight: 200, Height: 70 | 28.69 — Overweight | 28.69 — Overweight | Match |
| BMI 4 | Weight: 150, Height: 0 | Error: weight and height must be positive. | Error: weight and height must be positive. | Match |
| BMI 5 | Weight: -150, Height: 70 | Error: weight and height must be positive. | Error: weight and height must be positive. | Match |
| BMI 6 (additional test) | Weight: 128.5, Height: 70 | 18.43 — Underweight | 18.43 — Underweight | Match |
| BMI 7 (additional test) | Weight: 130, Height: 70 | 18.57 — Optimal weight | 18.57 — Optimal weight | Match |


Color Mixer Test Results

 Program/test | Inputs | Expected result | Actual result | Match or correction |
|---|---|---|---|---|
| Color Mixer 1 | red, blue | purple | purple | Match |
| Color Mixer 2 | red, yellow | orange | orange | Match |
| Color Mixer 3 | blue, yellow | green | green | Match |
| Color Mixer 4 | blue, red | purple | purple | Match |
| Color Mixer 5 | red, red | red | red | Match |
| Color Mixer 6 | orange, blue | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. | Match |
| Color Mixer 7 | red, orange | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. | Match |
| Color Mixer 8 (additional test) | yellow, yellow | yellow | yellow | Match |
| Color Mixer 9 (additional test) | green, red | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. | Match |
Explanation Questions
1. How does the BMI formula use pounds and inches? Why is height * height needed?
The formula multiplies weight in pounds by 703.0 and divides by height in inches squared. Multiplying height by itself calculates its square. In C++, the ^ operator does not mean exponentiation.

2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter?
The first condition checks whether BMI is less than 18.5. The next condition checks whether BMI is less than or equal to 25.0. Therefore, exactly 18.5 and exactly 25.0 belong to the optimal-weight category. The order matters because the first condition handles values below 18.5, and the second handles the remaining values through 25.0. The final else handles values greater than 25.0.

3. Why do you check weight and height before calculating BMI?
Weight and height must both be positive. Checking them first prevents the program from calculating BMI with invalid measurements. If either value is zero or negative, the program displays an error and stops.

4. Why do you classify the unrounded BMI and round only its displayed value?
Rounding before classification could cause a value near a boundary to be placed in the wrong category. The program uses the original calculated BMI to choose a category and formats only the displayed result to two decimal places.

5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
strcmp returns zero when two null-terminated character strings contain the same text. Using == to compare character arrays does not compare their text contents. strcmp is the required way to compare the color names in this program.

6. How do you make each mixture work in either input order and handle two identical primary colors?
The program checks both possible orders for each mixture. For example, red and blue and blue and red both produce purple. It checks whether the two valid colors are identical first, so red and red produce red, blue and blue produce blue, and yellow and yellow produce yellow.

7. How do you check for an invalid color in either input position?
The program validates the first and second inputs separately using strcmp. If either validity check fails, the condition using || displays an error message and prevents the program from producing a mixed color.

8. How do named constants and result variables make your programs easier to read and check?
The named constant COLOR_SIZE clearly identifies the character-array size and makes it easier to change. The bmi variable stores the calculation before it is displayed, and the result variable stores or points to the selected color. These choices make the code easier to understand, test, and maintain.

Compile and Run Instructions
I compiled and ran each program separately using a C++17 compiler with warning flags enabled.

BMI

bash
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi
Color Mixer

bash
g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer
