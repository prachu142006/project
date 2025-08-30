def add(x,y):
    return x+y

def subtract(x,y):
    return x-y

def multiply(x,y):
    return x*y

def divide(x,y):
    if y == 0:
        return "Error division by zero."
    else:
        return x / y

def display_menu():
    print("Select operation:")
    print("1.Add")
    print("2.subtract")
    print("3.multiply")
    print("4.divide")
    print("5.Exit")

    def calculator():
        while True:
            display_menu()
            choice = input("Enter choice(1\2\3\4\5):")

            if choice =='5':
                print("Exiting the calculator,goodbye!")
                break

            num1 = float(input("Enter first number:"))
            num2 = float(input("Enter second number:"))

            if choice == '1':
                print(f"{num1}+{num2} = {add(num1 + num2)}")
            elif choice =='2':
                 print(f"{num1}-{num2} = {subtract(num1 - num2)}")
            elif choice =='3':
                 print(f"{num1}*{num2} = {multiply(num1 * num2)}")
            elif choice =='4':
                 print(f"{num1}/{num2} = {divide(num1 / num2)}")
            else:
                 print(f"Invalid input! please select a valid operation.")
                 calculator()

