class Enemy:
    '''
    Enemy class

    Attributes:
        name: str
        hp: int
    '''
    def __init__(self, name: str, hp: int):
        self.__name = name
        self.__hp = hp

    def get_name(self) -> str:
        return self.__name

    def greet(self):
        '''
        Greet the enemy
        '''
        print(f"Hello, {self.__name} with health: {self.__hp}!")
    
    def __str__(self) -> str:
        return f"Enemy: {self.__name}, HP: {self.__hp}"