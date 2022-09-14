Topic 1: Install Ubuntu and learn to use Latex and Git (1 week, easy).
1) Install Ubuntu (suggested) on your computer or install Ubuntu on a virtual machine.
2) Setup Latex and Git environment on Ubuntu.
3) Create a private repo with Git on Github.
4) Submit arbitrary files to the repo with comments using Terminal in Ubuntu.
5) Find a way to generate a submission conflict, and solve it.
6) Write a two-column report describing your steps to accomplish 1-5 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.

Topic 2: Customize Linux kernel (1 week, easy).
1) Clone the source code of Linux kernel from the publicly available repo and find the specific kernel version of Ubuntu you installed in Topic 1.
2) Build the kernel image and replace the original image with the one built by you. Make sure your kernel works well.
3) Modify the kernel source code and insert some personal marks or logs into the code, then rebuild a kernel image. Show that your marks or logs work well.
4) Write a two-column report describing your steps to accomplish 1-3 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
5) Create a directory named "Topic 2" in the repo you created in Topic 1, and submit your code and report to the directory.

Topic 3: Play with devices (2 weeks, medium)
1) Write a simple loadable kernel module, and load it into the kernel you built in Topic 2.
2) Write a console driver that directly controls the MMIO registers of the console. The driver should provide a printf-like function, which is a variadic function and outputs the formatted strings via the console.
3) Add a character device under "/dev" directory, and name your device as whatever you like.
4) Write a driver for your device in the kernel module you created in 1, and write a user-level application to communicate with your device. Your driver accepts inputs (as A) from the character device you created in 3, and then outputs "Hello A" via the console driver you wrote in 2.
5) Write a two-column report describing your steps to accomplish 1-4 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
6) Create a directory named "Topic 3" in the repo you created in Topic 1, and submit your code and report to the directory.

Topic 4: Cross-compiling (1 week, easy)
1) Create a virtual machine in your Ubuntu, and the virtual machine should be created based on the 64-bit Arm architecture. 
2) Install Ubuntu on your virtual machine.
3) Learn what cross-compile is and setup the cross-compile toolchain to compile 64-bit Arm binaries from your x86 Ubuntu machine.
4) Transplant the drivers you made in Topic 3 to 64-bit Arm architecture, and make sure they work well on your 64-bit Arm Ubuntu machine.
5) Write a two-column report describing your steps to accomplish 1-4 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
6) Create a directory named "Topic 4" in the repo you created in Topic 1 and submit your code and report to the directory.

Topic 5: Privileges in Arm architecture (1 week, easy)
1) List the different exception levels in Armv8 and Armv9.2 architecture.
2) Understand what these exception levels are and what kind of software these exception levels are designed for.
3) Learn how to switch between two exception levels.
4) Understand the idea of Trusted Execution Environment (TEE), TrustZone, and Confidential Computing Architecture (CCA).
5) Explain why TrustZone and Confidential Computing Architecture can be used to build TEE.
6) Write a two-column report describing your steps to accomplish 1-5 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
7) Create a directory named "Topic 5" in the repo you created in Topic 1 and submit your report to the directory.

Topic 6: Address Translation (2 week, medium)
1) Understand the idea of address translation process in each exception level, and learn why they are required in Arm architecture.
2) Understand the structure of a page table, and explain the detailed process of address translation.
3) Show all the possible address translation when an user-level virtual address is accessed.
4) Change each level of a page table in EL1 and show your change works well.
5) Write a two-column report describing your steps to accomplish 1-4 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
6) Create a directory named "Topic 6" in the repo you created in Topic 1 and submit your code and report to the directory.

Topic 7: Interrupt and Exception (2 week, hard)
1) Explain the similarity and difference between interrupts and exceptions.
2) Explain what the exception vector is and learn how to handle interrupt and exception in Arm architecture.
3) Write a customized interrupt or exception handler in 64-bit Arm Linux via directly modifying the exception vector (without using Linux APIs).
4) Write a two-column report describing your steps to accomplish 1-3 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
5) Create a directory named "Topic 7" in the repo you created in Topic 1 and submit your code and report to the directory.

Topic 8: Trusted Execution Environment (2 week, hard)
1) Run Arm Trusted Firmware for Armv8 on QEMU or FVP.
2) Combine what you learned in previous topics, try to pass two integer parameters from user-level application to EL3. Sum the integers in EL3 and return the result to the user-level application.
3) Write a two-column report describing your steps to accomplish 1-2 in English with Latex. Make sure your Latex report contains text, table, code snippet, and figure.
4) Create a directory named "Topic 8" in the repo you created in Topic 1 and submit your code and report to the directory.
