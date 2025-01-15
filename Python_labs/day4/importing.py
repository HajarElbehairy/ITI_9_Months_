import re
import json

def validate_phone(phone):
    return re.match(r"^(010|011|012|015)[0-9]{8}$", phone)

def validate_email_format(email):
    email_regex = r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"
    return re.match(email_regex, email) is not None


def validate_date_format(date):
    date_pattern = r"^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/[0-9]{4}$"
    return  re.match(date_pattern, date)

