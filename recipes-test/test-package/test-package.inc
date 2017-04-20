FILES_${PN} = "/usr/lib/test-update-${PV}"

do_install() {
   install -d ${D}/usr/lib/test-update-${PV}
   dd if=/dev/urandom of=${D}/usr/lib/test-update-${PV}/a-big-file bs=1M count=${PV}
}
