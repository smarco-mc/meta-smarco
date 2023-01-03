require conf/machine/include/riscv/tune-riscv.inc

TUNEVALID[smarco-ariane] = "SmarCo ARIANE Cores"
TUNEVALID[smarco-vaisra] = "SmarCo VAISRA Cores"

AVAILTUNES += " smarco-ariane smarco-vaisra"

# SmarCo ARIANE Cores
TUNE_FEATURES:tune-smarco-ariane = "${TUNE_FEATURES:tune-riscv64} smarco-ariane"
TUNE_ARCH:tune-smarco-ariane = "riscv64"
TUNE_PKGARCH:tune-smarco-ariane = "riscv64"
PACKAGE_EXTRA_ARCHS:tune-smarco-ariane = "riscv64"
TUNE_CCARGS_MARCH:tune-smarco-ariane .= "${@bb.utils.contains('TUNE_FEATURES', 'riscv64', ' -march=rv64gc', '', d)}"

# Smarco VAISRA Cores
TUNE_FEATURES:tune-smarco-vaisra = "${TUNE_FEATURES:tune-riscv64} smarco-vaisra"
TUNE_ARCH:tune-smarco-vaisra = "riscv64"
TUNE_PKGARCH:tune-smarco-vaisra = "riscv64"
PACKAGE_EXTRA_ARCHS:tune-smarco-vaisra = "riscv64"
TUNE_CCARGS_MARCH:tune-smarco-ariane .= "${@bb.utils.contains('TUNE_FEATURES', 'riscv64', ' -march=rv64g', '', d)}"

#TUNE_CCARGS:append = "${@bb.utils.contains('TUNE_FEATURES', 'smarco-ariane', ' -mtune=smarco-ariane', ' ', d)}"
#TUNE_CCARGS:append = "${@bb.utils.contains('TUNE_FEATURES', 'smarco-vaisra', ' -mtune=smarco-vaisra', ' ', d)}"
