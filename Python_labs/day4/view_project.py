import json
def view():
    _Title=input("enter project title:")
    list = []
    json_file = open('projects.json')
    for line in json_file:
        Dict = json.loads(line)
        list.append(Dict)
        
    for dict in list:
        if _Title == dict['Title'] :
            print("your projects :")
            for dict in list:
                print(dict)
        else:
            print("Are you sure wit this title?")
view()

