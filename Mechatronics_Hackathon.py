import time

ACTUATOR_COUNT = 200
ACTUATOR_ON_TIME = 0.05  
ACTUATOR_OFF_TIME = 0.05  


actuator_states = [0] * ACTUATOR_COUNT

def raise_actuator(index):
    actuator_states[index] = 1
    time.sleep(ACTUATOR_ON_TIME)

def lower_actuator(index):
    actuator_states[index] = 0
    time.sleep(ACTUATOR_OFF_TIME)

def display_braille_A():
    raise_actuator(0)  
    raise_actuator(1)  
    raise_actuator(3)  
    raise_actuator(4)  
    time.sleep(2)  
    for i in range(ACTUATOR_COUNT):
        lower_actuator(i)


def display_drawing():
    pass


def simulate_user_input():
    display_braille_A()     #A
