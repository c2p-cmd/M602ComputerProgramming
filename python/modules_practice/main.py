from practice_module import random_circle_area, get_date_time

if __name__ == '__main__':
    (radius, area) = random_circle_area()

    print(f"Area of circle with {radius} cm is {area:0.2f} sq. cm")

    date_time = get_date_time()

    print(f"Current date time is {date_time}")
