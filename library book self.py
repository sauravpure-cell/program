#library book borrow program
#Dictionary:book name:number of times borrow

borrow= {
    "Book A": 4,
    "Book B": 0,
    "Book c": 3,
    "Book D": 5,
    "Book E": 7,
}

#1. Average number books borrow
average = sum(borrow.values()) / len(borrow)

#2. Books with Highest Borrow
highest_book = max(borrow,key = borrow.get)

#3. Book with lowest Borrow
lowest_book = min(borrow, key=borrow.get)

#4. Count no of books not Borrow
not_borrow = list(borrow.values()).count(0)

#5. most frequently borrowed count values
most_frequent = max(set(borrow.values()), key=list(borrow.values()).count)

print("Average number of books borrowED:", average)
print("book with highest borrow:", highest_book)
print("book with lowest borrow:", lowest_book)
print("number of books not borrow:", not_borrow)
print("most frequently borrowed count value:", most_frequent)