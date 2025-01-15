from importing import validate_date_format
import json

def project():
    while True:
        Title = input("Your project title: ")
        Details = input("Details: ")
        Total_target = input("Total target: ")
        Start_date = input("Start Date (day/month/year): ")
        End_date = input("End Date (day/month/year): ")
        # if not validate_date_format(Start_date) or not validate_date_format(End_date):
        #     print("Invalid date format! Please enter dates in the format (day/month/year).")
        #     continue
        if not Total_target.isdigit():
            print("Total target must be a number!")
            continue
        
        project = {
            
            "Title": Title,
            "Details": Details,
            "Total_target": int(Total_target),  
            "Start_date": Start_date,
            "End_date": End_date
        }
        try:
            with open("projects.json", "a") as projects_file:
                json.dump(project,projects_file )
                projects_file.write("\n")
            print("project registered successfully!")
            break
        except Exception as e:
            print(f"An error occurred while saving user data: {e}")
            break
project()
