# Advantech package
IMAGE_FEATURES += " ssh-server-openssh "
IMAGE_INSTALL += " modules-load "
IMAGE_INSTALL += " giflib stress fuse-exfat exfat-utils "
IMAGE_INSTALL += " ppp ntp e2fsprogs cronie e2fsprogs-e2fsck e2fsprogs-resize2fs inetutils inetutils-telnet inetutils-telnetd "
IMAGE_INSTALL += " packagegroup-core-eclipse-debug "

IMAGE_INSTALL += " linux-firmware-rtl8188ee "
IMAGE_INSTALL += " linux-firmware-ralink "
IMAGE_INSTALL += " linux-firmware-sd8897 "
IMAGE_INSTALL += " linux-firmware-ar3k "
IMAGE_INSTALL += " linux-firmware-rtl8821ae "
IMAGE_INSTALL += " linux-firmware-rtl8723 rtl8723bs-bt "

# Native Compiler
IMAGE_INSTALL += " packagegroup-sdk-target "

# Tools
IMAGE_INSTALL += " add-virtual-network advresize-script boottimes-script st quectel-script 3g-script stress-script xterm mdio-tool "

# Depends on projects
IMAGE_INSTALL_append_imx6qrom5420a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom5420b1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6dlrom5420b1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom3420a1 = " keyevent"
IMAGE_INSTALL_append_imx6qrom7420a1 = " keyevent"
IMAGE_INSTALL_append_imx6qprom7421a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom7421a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6dlrom7421a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrsb4410a1 = " lirc "
IMAGE_INSTALL_append_imx6qrsb4410a2 = " lirc "
IMAGE_INSTALL_append_mx8 = " si-script keyevent "
IMAGE_INSTALL_append_imx8mqrom5720a1 = " pmic-setup-script "

# Browser
#IMAGE_INSTALL += " firefox "
