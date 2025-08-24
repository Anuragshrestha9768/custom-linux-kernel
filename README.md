# Custom Linux System Call (`my_syscall`)

## 📌 Introduction
This project demonstrates the implementation and testing of a **custom Linux system call** in Ubuntu 24.04.3 LTS running on a VirtualBox VM.  
The syscall (`my_syscall`) accepts an integer argument from a user program and returns a computed result.

---

## ⚙️ Environment
- **OS:** Ubuntu 24.04.3 LTS  
- **Kernel:** Linux 6.x (custom compiled)  
- **VM:** VirtualBox  

---

## 🛠️ Implementation Steps

### 1. Create the syscall file - `kernel/my_syscall.c`
### 2. Register the syscall - `arch/x86/entry/syscalls/syscall_64.tbl`
### 3. Update the Makefile - `kernel/Makefile`
### 4. Rebuild and Boot the Kernel
make -j$(nproc)
sudo make modules_install
sudo make install
Then reboot
### 5. User-Space Test Program - `test_syscall.c`
### 6. Compile and run 
gcc test_syscall.c -o test_syscall
./test_syscall
