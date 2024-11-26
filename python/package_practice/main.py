if __name__ == '__main__':
    from game.player import Player
    from game.enemy import Enemy
    from game.item import Item

    p1 = Player('Player-1', hp=30)
    e1 = Enemy('Enemy-1', hp=20)
    i1 = Item('Item-1')

    p1.greet()
    e1.greet()
    print(i1)