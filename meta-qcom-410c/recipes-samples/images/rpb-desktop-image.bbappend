# Scripts
IMAGE_INSTALL_append = " stress-script thermal-script "

# Tool for kernel parameters
IMAGE_INSTALL_append = " abootimg "

# Tools for function verification
IMAGE_INSTALL_append = " stress stress-ng devmem2 fbv i2c-tools ethtool evtest "
IMAGE_INSTALL_append = " minicom "

# Misc
# - X resource database manager
IMAGE_INSTALL_append = " xrdb "

# Native Compiler
IMAGE_INSTALL_append = " packagegroup-sdk-target "
