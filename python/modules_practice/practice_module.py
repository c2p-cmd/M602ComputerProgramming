def random_circle_area() -> tuple[float, float]:
    '''
    A method to calculate area of a circle with random radius

    Returns:
        - tuple[float, float]
    '''
    from random import randint
    from math import pi

    radius = randint(1, 100)

    return (radius, pi * radius * radius)

def get_date_time() -> str:
    '''
    A method to get current date and time
    Returns:
        - str
    '''
    from datetime import datetime

    now = datetime.now()

    return now.strftime(format="%d/%M/%Y, %H:%M:%S")