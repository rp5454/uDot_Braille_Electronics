Problem Statement:
Imagine you are the lead electronics engineer for a project developing a tactile display which is
to be used to communicate diagrams and text to a blind person. This display contains 20
columns and 10 rows of tactile raisable dots(total 200). Each of these dots is controlled by a
specialized actuator, this actuator is an inductive load consuming 60mA at 5V. Supplying this
current for 50ms to an actuator is enough to raise a dot and hold it there, similarly reversing the
current for 50ms is enough to lower it.

Your goal is to develop a control system to refresh this tactile display. This device should display
either braille or tactile drawings, conceive a convenient/user-friendly means of input, and write
the necessary code to render this on the display. Simulate your solution to demonstrate above
mentioned objectives to the maximum possible extent.

You may be creative with any part of the challenge statement that is not wholly specified.




Soluiton to the problem:

Hardware Setup:
1.	Actuators:
•	Using 200 specialized actuators, each consuming 60mA at 5V.
•	Each actuator can be raised or lowered by applying a current for 50ms.
2.	Microcontroller:
•	Utilizing Arduino to control the actuators.
•	Connecting the actuators to the Arduino Board using suitable drivers or multiplexing techniques.

Software Design:
Input Method:
•	For user-friendly input, implemented a touch-sensitive surface or buttons in a 4x5 grid (20 buttons in total).
•	Assigned each button to a specific function: Braille letters, numbers, or drawing controls.
