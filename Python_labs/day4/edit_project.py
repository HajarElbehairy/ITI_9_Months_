import json

def edit():
    _Title=input("Enter project title :")
    list = []
    json_file = open('projects.json')
    for line in json_file:
        Dict = json.loads(line)
        list.append(Dict)
        
    for dict in list:
        if _Title == dict['Title'] :
            print(dict)
            value_update=input("what do you need to edit ro update:")
            if value_update in dict:
                new_value=input("the new value:")
                dict[value_update]=new_value
    try:
                    with open('projects.json', 'w') as json_file:
                        for proj in dict:
                            json.dump(proj, json_file)
                            json_file.write("\n")
                    print("Changes saved successfully!")
    except Exception as e:
                    print(f"An error occurred while saving: {e}")

            
                
edit()
            

    