# **System Call And Library Function in C**  
***
 # 1. System Call :  
 ***
>>  ## 1. There are two modes in the computer system one is user mode and another is kernel mode.  
***
>> ## 2. In computer system there are different types of processes that are running on a computer system. 
***
>> ## 3. When an application runs on system, it is said to be in user mode or computer is in user mode.  
***
>> ## 4. When there is a requirement of hardware resource, the process sends a request to the kernel to get the process access and then computer enters in kernel mode.
***
>> ## 5.These requests are sent by USING SYSTEM CALL. 
***
>> ## 6. The computer switches between these two mode frequently. Whenever the task is completed the computer goes back to the user mode from kernel mode. 
***
>> ## 7. This mode of transition is called context switching.
***
# 2. Library Call :
***
>> ## 1. A Library call is a kind of request to use a specific piece of function that is defined in a programming library. 
***            
>> ## 2. A library file contains code data file, object file that are packed into one file for use. 
***            
>> ## 3. To make a library call, library should be imported first. 
***        
>> ## 4.The library call may be depended on the system call to complete the task.
*** 

# Difference Between System Call And Library Call:


| No#      | **SYSTEM CALL** | **LIBRARY CALL** |
| - | - | - |
|1. | A system call is a request made by the program to enter into kernel mode to access a process.. | A library call is a request made by the program to access a library function defined in a programming library. |
|2. | In kernel mode the programs are directly accessible to the memory and hardware resources. |	In user mode, the programs cannot directly accessible to the memory and hardware resources. | 
|3.	 | In system call, the mode is executed or switches from user mode to Kernel mode.	| In library call, the mode is executed in user mode only.|
|4.	| In system call the execution process speed is slower than the library call because there is a mode of transition called context switching. | In library call the execution process speed is faster than the system call because there is no mode of context switching. |
|5.	| A system call is a function provided by the kernel to enter into the kernel mode to access the hardware resources. | A Library call is a function provided by the programming library to perform a task.|
|6.	| System call are the entry points of the kernel, and therefore they are not linked to the program.	| Library functions are linked into your program. | 
|7.	| A system call is not portable. | A library call is portable.|
||||
|8.	| System call have more privileges than library calls because it runs in a supervisory mode.| Library call have less privileges than system calls because it is runs in a user mode only.|
|9.	| System calls are provided by the system and are executed by the system kernel.| Library calls included the ANSI C standard library. |
||||
|10. | In system call all functions are a part of the kernel. | In library call all library functions are a part of the standard library file of programming languages. |
||||
|11. | Whenever a program requires the memory or hardware resources, it directly sends a request to the kernel to get the process access by using a system call. | Whenever a programmer or a developer uses a specific library function, the programmer has to invoke or call the library function first by including a header file into his program. The preprocessor ( # ) directives helps to include header files. Some useful header files are :- 1. #include<stdio.h> 2. #include<math.h> 3. #include<conio.h>|
||||
|12. | Examples of system calls are – | Example of Library call are – |
1. fork() 
   
2. exec()

||||


1. fopen()

2. fclose()

3. scanf()

4. printf() |
