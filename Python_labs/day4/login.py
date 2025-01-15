import json
def login():
    email=input("Enter mail: ")
    password=input("Enter passwd: ")
    list = []
    json_file = open('users.json')
    for line in json_file:
        Dict = json.loads(line)
        list.append(Dict)
        
    for dict in list:
        if email == dict['email'] and password == dict['password']:
            print("login successful")
        else:
            print("check again..your mail or your password is not correct !")
login()