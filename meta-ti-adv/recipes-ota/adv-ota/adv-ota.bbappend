FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

do_install_append() {

    if [ -e ${D}/tools/adv-ota.sh ] ; then
        rm ${D}/tools/adv-ota.sh
    fi

    if [ -e ${WORKDIR}/adv-ota_TI.sh ] ; then
        install -m 755 ${WORKDIR}/adv-ota_TI.sh ${D}/tools/adv-ota.sh
    fi

    if [ -e ${WORKDIR}/adv-reboot-TI ] ; then
        if [ -f ${D}/tools/adv-reboot ] ; then
            rm ${D}/tools/adv-reboot
        fi
        install -m 755 ${WORKDIR}/adv-reboot-TI ${D}/tools/adv-reboot
    fi
}

