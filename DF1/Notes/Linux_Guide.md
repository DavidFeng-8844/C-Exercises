# Linux 常用命令
---

## vi 的使用
vi   三种模式     命令模式   编辑模式   行尾模式

    一进去就是命令模式，任何时候按ESC都是命令模式， 行尾模式在命令模式下按：wq!  (如) 命令模式： 移动光标    1G  （第一行）    10G 第10行    G末尾   b back   f  forward
            编辑功能    x  删除    dd 删除一行   yy复制   p paste  
              u回退    /查找
 
  在命令模式下通过这几个字符 a  A    i I   o O 进入编辑模式， 

# 常用命令    

## 命令汇总

ls 命令用来列出文件或目录信息。
ls  -a  可以查看到隐藏文件  
cp    file1   file2    拷贝文件
pwd 查看当前目录

echo   $PATH    查看变量PATH 所列的路径
more  仅查看文件内容，不能修改，看完就退出了
cat 命令主要用于滚屏显示文件内容或是将多个文件合并成一个文件
cat test.txt test2.txt >test3.txt     查看内容并把两个文件合并后输出到新的文件
tail 命令用于显示文件的末尾部分，默认情况下，只显示文件的末尾 10 行内容
如   tail  -f  /var/log/mdmesg   查看系统日志，CTRL+C退出


这一行内容讲解：
drwxr-xr-x 18 david david      4096 Aug 13 18:57 miniconda3

d 目录   rwx  read write execute 读写执行   三个rwx分别是owner\group\other的权限

pwd 命令用于显示用户当前所处的目录
cd 命令用来在不同的目录中进行切换
在 Linux 系统中，用“ .”代表当前目录；用“ ..”代表当前目录的父目录；用“ ~”代表用户的个人家目录（主目录）
    uname -a  查看操作系统版本和内核版本、硬件架构x86_64
    mkdir 命令用于创建一个目录。 -p：在创建目录时，如果父目录不存在，则同时创建该目录及该目录的父目录。
    rmdir 命令用于删除空目录。   rm  -r也是一样的
    cp 命令主要用于文件或目录的复制。-R：递归复制目录，即包含目录下的各级子目录。
    mv 命令主要用于文件或目录的移动或改名。
    rm 命令主要用于文件或目录的删除
    touch 命令用于建立文件或更新文件的修改日期

    rpm 命令主要用于对 RPM 软件包进行管理
    rpm 命令的常用参数选项如下。
• -qa：查询系统中安装的所有软件包。• -q：查询指定的软件包在系统中是否安装。
• -qi：查询系统中已安装软件包的描述信息。• -ql：查询系统中已安装软件包里所包含的文件列表。
• -qf：查询系统中指定文件所属的软件包。
• 
• -i：用于安装指定的 RPM 软件包。
• -e：删除已安装的 RPM 软件包。
• 用法： $ rpm -qa|grep gcc    查看系统上是否已安装了gcc  管道|
     gcc-c++-4.4.7-4.el6.x86_64

> whereis 命令用来寻找命令的可执行文件所在的位置
whatis 命令用于获取命令简介。它从某个程序的使用手册中抽出一行简单的介绍性文件，帮助用户迅速了解这个程序的具体功能。

> man  用户手册查看命令的解释
man 命令用于列出命令的帮助手册。

---
## find 
> find 命令用于文件查找。它的功能非常强大
find  /home/david  -name test.*  -print 
   /home/david/test.txt
find /path/to/search -type f -name "*part_of_filename*"

### Case insensitive search 
find /path/to/search -type f -iname "*part_of_filename*"

### Using regex 
find /path/to/search -type f -regex ".*part_of_filename.*"

#### Using Regex for pattern matching 
Regular expressions (regex or regexp) are powerful patterns used for matching character combinations in strings. In the context of file searching or pattern matching, regex can be employed to create more complex and flexible search patterns. Here are some basic concepts and examples of regex pattern matching:

Basic Concepts:
Literal Characters:

Characters like letters and numbers are matched literally. For example, the regex abc matches the string "abc" exactly.
Wildcard (Dot .):

The dot (.) in regex matches any single character except for a newline. For example, the regex a.c matches "abc," "adc," "a1c," etc.
Character Classes ([]):

Square brackets define a character class. For example, [aeiou] matches any vowel, and [0-9] matches any digit.
Quantifiers (*, +, ?):

Quantifiers specify the number of occurrences of a character or group. For example, a* matches zero or more "a" characters, a+ matches one or more, and a? matches zero or one.
Anchors (^, $):

The caret (^) matches the start of a line, and the dollar sign ($) matches the end of a line. For example, ^abc matches "abc" only at the start of a line.


> grep 命令用于查找文件中包含有指定字符串的行。

> dd 命令用于按照指定大小和个数的数据块来复制文件或转换文件，
  dd if=/dev/zero of=file1 count=2 bs=20M

> dmesg 命令用实例名和物理名称来标识连到系统上的设备。
  free 命令主要用来查看系统内存、虚拟内存的大小及占用情况
  date 命令可以用来查看系统当前的日期和时间，

> 进程  （操作提供已经在运行的程序）
  ps 命令主要用于查看系统的进程。常用用法
    ps -ef|grep david
  top  不带任何参数，显示系统的资源使用情况


> kill 命令前台进程在运行时，可以用“ Ctrl+C”组合键来终止它，但后台进程无法使
用这种方法终止，此时可以使用 kill 命令向进程发送强制终止信号，以达到目
的，例如
 wget 命令   wget 命令用于在终端中下载网络文件，
 who   查看系统有哪些用户在用
 last 命令用于查看所有系统的登录记录，格式为“ las
 uptime  系统启动后到现在的时间
 df -h  查看文件系统
 
 ---

## 目录结构
 > 系统的常用目录结构
   / 根目录
      /etc   放置系统配置文件的目录  比如 /etc/passwd的内容是用户信息如用户名，主目录等
      /home  用户家目录
      /var  放置系统日志信息文件的目录
      /usr   系统用户文件（命令）
      /lib   library file
      /bin  二进制执行文件
      /sbin  系统的脚本文件
      /tmp   临时目录
      /opt  建议第三方软件安装的目录
      /dev  系统的设备
---

## 用户管理    
   配置文件 /etc/passwd   用户名、主目录，ID、shell
   配置文件   /etc/shadow  加密后的密码，时间戳 timestamp   以1970-1-1为基准到现在的毫秒数计算
    /etc/login． defs 文件  （模板文件，新建用户时参考）
    建立用户账户时会根据/etc/login.defs 文件的配置设置用户账户的某些选项。
    1. /etc/group 文件
group 文件位于“ /etc”目录，用于存放用户的组账户信息，对于该文件的
内容任何用户都可以读取。
 /etc/gshadow 文件 /etc/gshadow 文件用于存放组群的加密口令、组管理员等信息，该文件只有 root 用户可以读取。
 创建一个新用户
     useradd -u 1010 -g 1000 -d /home/user3 -s /bin/bash -p 123456 -f -1   user3
             用户ID   组ID    主目录         shell         密码    密码过期(-1过期不禁止)  用户名user3


> passwd 命令
指定和修改用户账户口令的命令是 passwd。超级用户可以为自己和其他用户设置口令，而普通用户只能为自己设置口令。 
 passwd user1      (修改user1的密码)

>  表示root用户的提示符   $普通用户提示符
usermod 命令用于修改用户的属性，格式为“ usermod [选项] 用户名


> su 切换用户命令
 su  - david （和david登录的效果一样的）和 # su    david   (保持原用户的环境变量)   设置环境变量的配置文件/home/david/.bashrc
 
### 用户环境配置文件   /etc/profile    /home/david/.bashrc
    用户一登录就执行的文件和配置信息
    安装软件时重要的配置文件   $PATH  
> umask 指定的就是用户在建立文件或目录时的默认权限值
如果希望对某个指定的用户进行单独的权限控制，就需要用到文件的访问控制列表（ Access Control List， ACL）了
  setfacl -Rm u:bobby:rwx   /root 
  getfacl 命令用于显示文件上设置的 ACL 信息，


### 设备管理     
 磁盘设备名  /dev/nvme0n1       分区设备名      /dev/nvme0n1p1  /dev/nvme0n1p2
                 /dev/sda                          /dev/sda1       /dev/sda2
     查找设备名   ls -l|grep nvme  
     文件系统装载设置文件     /etc/fstab
        告诉系统开机时是否装载（mount) 文件系统,在系统里，文件系统必须装载后才能使用

> fdisk /dev/sda    对磁盘进行分区管理（查看和划分分区） 
      p查看   

      创建文件系统  （使用一个磁盘分区）
         mkfs   -t  ext4   /dev/sdb1
         创建装载目录    /myfs01
         手工装载文件系统    mount -t ext4   /dev/sdb1   /myfs01
         自动装载文件系统   修改/etc/fstab:
                          /dev/sdb1   ext4    /myfs01    defaults  0  0 


### 网络配置
   查看网卡信息  ifconfig -a 
   inet 192.168.3.129   netmask 255.255.255.0
   IP 地址分为网络段和主机段      同一个网络段表示局域网内，直接通讯，无需路由器等设备。跨网段则需要网桥、路由器等设备才能出去。

   debian IP地址配置  vi  /etc/network/interface
     source /etc/network/interfaces.d/*          表示这个目录下的文件都是配置文件

     红帽
     网卡配置文件目录  /etc/sysconfig/network-scripts  文件名  ifcfg-ens160
     netstat -r   查看系统的网关地址使用情况

TYPE=Ethernet
PROXY_METHOD=none
BROWSER_ONLY=no
BOOTPROTO=dhcp           IP获取方法dhcp动态获取    静态:static

bootproto=static
IPADDR=192.168.3.129
NETMASK=255.255.255.0
GATEWAY=192.168.3.1


DEFROUTE=yes
IPV4_FAILURE_FATAL=no
IPV6INIT=yes
IPV6_AUTOCONF=yes
IPV6_DEFROUTE=yes
IPV6_FAILURE_FATAL=no
IPV6_ADDR_GEN_MODE=stable-privacy
NAME=ens160                网卡名
UUID=cda65e14-ca47-456d-922b-11807f1915f1     虚拟机注释掉（因为复制虚拟机的时候这个UUID是一样的）
DEVICE=ens160
ONBOOT=yes                机器启动时激活网卡




