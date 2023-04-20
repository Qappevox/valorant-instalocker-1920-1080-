import pyautogui as pg
import time

class Instalock:
    def __init__(self) -> None:
        pass

    def locker(self, x, y):
        for i in range(50):
            pg.moveTo(x,y)
            pg.click()
            pg.moveTo(950, 790)
            pg.click()

    def lock_it(self, data):

        data = data.lower()
        topList = ["astra", "breach", "brim", "chamber", "cypher", "fade", "gekko", "harbor", "jett", "kayo", "killjoy"]
        bottomList = ["neon", "omen", "pho", "raze", "reyna", "sage", "skye", "sova", "viper", "yoru"]
        referance = [560, 935]
        time.sleep(3)
        counter = 0
        for i in topList:
            if data == i:
                print(f"locker coords: {referance[0] + counter * 80}, {referance[1]}")
                self.locker(referance[0] + counter * 80, referance[1])
                
            counter += 1
        counter = 0
        for i in bottomList:
            if data == i:
                print(f"locker coords: {referance[0] + counter * 80}, {referance[1] + 80}")
                self.locker(referance[0] + counter * 80, referance[1] + 80)
            
            counter += 1

    def log(self):
        while True:
            time.sleep(2)
            print(pg.position())

#log()
banner = """  menu:
    astra, breach, brim, chamber, cypher, fade, gekko, harbor, jett, kayo, killjoy
    neon, omen, pho, raze, reyna, sage, skye, sova, viper, yoru
    """
print(banner)

i = Instalock()
i.lock_it("jett")
