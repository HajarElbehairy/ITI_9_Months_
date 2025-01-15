import json
from importing import validate_phone, validate_email_format  

def registration():
    while True:
        
        first_name = input("Please enter your first name: ")
        last_name = input("Please enter your last name: ")
        email = input("Please enter your email: ")
        phone = input("Please enter your phone number: ")
        password = input("Please enter a strong password: ")
        confirm_password = input("Please confirm your password: ")

        
        if first_name.isdigit() or last_name.isdigit():
            print("Invalid name! Names cannot contain numbers.")
            continue

        if not validate_phone(phone):
            print("Invalid phone number! Please try again.")
            continue

        if not validate_email_format(email):
            print("Invalid email format! Please try again.")
            continue

        if password != confirm_password:
            print("Passwords do not match! Please try again.")
            continue

        
        user = {
            "first_name": first_name,
            "last_name": last_name,
            "email": email,
            "phone": phone,
            "password": password  
        }

        try:
            with open("users.json", "a") as users_data_file:
                json.dump(user, users_data_file)
                users_data_file.write("\n")
            print("User registered successfully!")
            break
        except Exception as e:
            print(f"An error occurred while saving user data: {e}")
            break

registration()
