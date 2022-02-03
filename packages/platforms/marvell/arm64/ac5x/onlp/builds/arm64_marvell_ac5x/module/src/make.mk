############################################################
#
#
#
############################################################

LIBRARY := arm64_marvell_ac5x
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
#$(LIBRARY)_LAST := 1
include $(BUILDER)/lib.mk
