Tools Used:
I used ChatGPT to help me understand the Lab 7 instructions, plan my two C++ programs, and understand how selection statements work. ChatGPT helped explain BMI classification, input validation, character arrays, and the strcmp function. I used the explanations to understand the requirements and organize my README file and test tables.

Programming Decision:
One important programming decision was to validate the inputs before performing calculations or mixing colors. In the BMI program, I check whether weight or height is zero or negative before calculating BMI. In the Color Mixer program, I use character arrays and strcmp because the assignment requires them instead of std::string. I also check both color inputs so an invalid color in either position produces an error message.

Checking My Work:
I ran the tests for both programs and compared the actual results with my expected results. The tests matched my predictions. For example, entering a weight of 150 pounds and a height of 70 inches produced a BMI of 21.52 and the optimal-weight category. I also tested invalid BMI measurements, reversed color combinations, identical colors, and invalid color names. These tests helped me check that the selection statements handled the required cases.

What I Learned:
I learned how to use if, else if, and else to classify values and how to use strcmp to compare character-array contents. I also learned why input validation should happen before a calculation and why BMI should be classified using its unrounded value. I feel more confident understanding selection statements and testing different branches. I still need to practice writing conditions independently and checking exact boundary values to make sure every case works correctly.
