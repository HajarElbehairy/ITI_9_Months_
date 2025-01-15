from Registration import registration
from login import login
from Regist_project import project
from view_project import view
from del_project import delete
from edit_project import edit




Print("Hello to our Crowd Funding Menu\n")
print("The Options in our Menu are:\n  option(1):Register\n option(2):Login\n option(3):Create_Project \n option(4):View_Project \n option(5): Edit in object:\n option(6): Delete_object\n")
while True:
    input_option=input("Enter your option")
    if input_option=="1":
        registration()
    elif input_option=="2":
        login()
    elif input_option=="3":
        project()
    elif input_option=="4":
        view()
    elif input_option=="5":
        edit()
    elif input_option=="6":
        delete()
    else:
        ("invalid option")
        continue


