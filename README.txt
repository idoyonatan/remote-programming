in this file i will save data about the project like protocol, ideas and more

protocol:
the communication between the client and server will be aplication protocl i will made, in the style of http

number|data
1xx communication request, 2xx communication response
3xx data request, 4xx data response
number - data - explanation

101 - no data - check if the phone is authorized
102 - password - request to register in the computer
103 - no data - end communication

201 - true or false - response for 101 request, return if the phone is authorized or not 
202 - succes of fail - response for 102 request, return if the phoe registered succesfuly or not 
203 - no data - response for 103, end communication

301 - "fileName.txt"/all - request for specific file or all of them
302 - no data - request project file list
303 - name - create new file
304 - nem - is exist

401 - file.txt - response for 301, send files
402 - priject* - response for 302, return string array of all the files and directory
403 -succesr or faile - respose for 303 created file or not
404 - true/fale - response for 304, exist or not
