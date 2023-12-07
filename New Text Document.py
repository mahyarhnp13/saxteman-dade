class MyArray:
    def __init__(self):
        self.array = []
    def insert(self, obj, index):
        self.array.insert(index, obj)
    def delete(self, index):
        if 0 <= index < len(self.array):
            return self.array.pop(index)
        else:
            print("خطا: ایندکس معتبر نیست.")