from timeit import default_timer as timer
from datetime import timedelta

def main() -> None:
    start = timer()
    MAX_COUNT = 1_00_00_00_000

    value: int = 0
    for _ in range(MAX_COUNT):
        value += 1
    end = timer()

    time_taken = timedelta(seconds=end-start)
    print(f"Counted till {value} in {time_taken}")

if __name__ == '__main__':
    main()