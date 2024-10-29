"""
Thermostat Regulator
Using conditionals to set the temperature
"""


def thermostat_regulator(
    current_temperature: float,
    low_temperature: float = 20,
    high_temperature: float = 27,
) -> str:
    if current_temperature < low_temperature:
        state = "Turn on heater"
    elif current_temperature > high_temperature:
        state = "Turn on cooler"
    else:
        state = "Do nothing"

    print(f"State: {state}")
    return state


if __name__ == "__main__":
    low_temp = input("Input a low temperature: (Optional) ")
    if len(low_temp) == 0:
        low_temp = -1
    else:
        low_temp = float(low_temp)

    high_temp = input("Input a high temperature: (Optional) ")
    if len(high_temp) == 0:
        high_temp = float(-1)
    else:
        high_temp = float(high_temp)

    temperature = float(input("What is the current temperature? "))

    if low_temp != -1 and high_temp != -1:
        current_state = thermostat_regulator(
            temperature, low_temperature=low_temp, high_temperature=high_temp
        )
    elif low_temp == -1 and high_temp != -1:
        current_state = thermostat_regulator(temperature, high_temperature=high_temp)
    elif low_temp != -1 and high_temp == -1:
        current_state = thermostat_regulator(temperature, low_temperature=low_temp)
    else:
        current_state = thermostat_regulator(temperature)

    print(current_state)
