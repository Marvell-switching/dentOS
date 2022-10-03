############################################################
#
#
#
############################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
arm64_marvell_ac5x_INCLUDES := -I $(THIS_DIR)inc
arm64_marvell_ac5x_INTERNAL_INCLUDES := -I $(THIS_DIR)src
arm64_marvell_ac5x_DEPENDMODULE_ENTRIES := init:arm64_marvell_ac5x ucli:arm64_marvell_ac5x
