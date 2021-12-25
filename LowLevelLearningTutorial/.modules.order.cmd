cmd_/home/pi/lll-gpio-driver/modules.order := {   echo /home/pi/lll-gpio-driver/lll-gpio-driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/lll-gpio-driver/modules.order
