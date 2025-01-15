import json
def delete():
    _Title=input("enter project title:")
    list = []
    json_file = open('projects.json')
    for line in json_file:
        Dict = json.loads(line)
        list.append(Dict)
        
    for dict in list:
        if _Title == dict['Title'] :
             list.remove(dict)