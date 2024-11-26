class Item:
    '''
    Item class
    Attributes:
        name: str
    '''
    def __init__(self, name):
        self.__name = name

    def get_name(self) -> str:
        return self.__name
    
    def __str__(self):
        return f'Item: {self.__name}'