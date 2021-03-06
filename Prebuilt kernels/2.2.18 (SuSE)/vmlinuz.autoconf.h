/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Language for Kernel Configuration
 */
#define CONFIG_CONFIGLANG_ENGLISH 1
#undef  CONFIG_CONFIGLANG_GERMAN
#undef  CONFIG_CONFIGLANG_FRENCH
#undef  CONFIG_CONFIGLANG_SPANISH

/*
 * If you change this option, help texts are changed immediately.
 */

/*
 * xconfig must be restarted to show the new language.
 */

/*
 * Platform support
 */
#define CONFIG_PPC 1
#define CONFIG_6xx 1
#undef  CONFIG_8xx
#undef  CONFIG_PMAC
#undef  CONFIG_PREP
#undef  CONFIG_CHRP
#define CONFIG_ALL_PPC 1
#undef  CONFIG_APUS
#undef  CONFIG_GEMINI
#undef  CONFIG_MBX
#undef  CONFIG_SMP
#undef  CONFIG_ALTIVEC
#define CONFIG_POWERMAC 1

/*
 * General setup
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_MODULES 1
#undef  CONFIG_MODVERSIONS
#define CONFIG_KMOD 1
#define CONFIG_PCI 1
#undef  CONFIG_PCI_QUIRKS
#define CONFIG_PCI_OLD_PROC 1
#define CONFIG_NET 1
#define CONFIG_SYSCTL 1
#define CONFIG_SYSVIPC 1
#define CONFIG_BSD_PROCESS_ACCT 1
#define CONFIG_BINFMT_ELF 1
#define CONFIG_KERNEL_ELF 1
#undef  CONFIG_BINFMT_MISC
#define CONFIG_BINFMT_MISC_MODULE 1
#undef  CONFIG_BINFMT_JAVA
#undef  CONFIG_PARPORT
#define CONFIG_PARPORT_MODULE 1
#undef  CONFIG_PARPORT_PC
#define CONFIG_PARPORT_PC_MODULE 1
#undef  CONFIG_PARPORT_OTHER
#define CONFIG_VGA_CONSOLE 1
#define CONFIG_FB 1
#undef  CONFIG_PMAC_PBOOK
#undef  CONFIG_PROC_DEVICETREE
#undef  CONFIG_TOTALMP
#undef  CONFIG_BOOTX_TEXT
#undef  CONFIG_MOTOROLA_HOTSWAP
#define CONFIG_CMDLINE_BOOL 1
#define CONFIG_PROC_PREPRESIDUAL 1
#define CONFIG_CMDLINE "root=/dev/sda3"

/*
 * Plug and Play support
 */
#define CONFIG_PNP 1
#undef  CONFIG_PNP_PARPORT
#define CONFIG_PNP_PARPORT_MODULE 1

/*
 * Block devices
 */
#define CONFIG_BLK_DEV_FD 1
#define CONFIG_BLK_DEV_IDE 1

/*
 * Please see Documentation/ide.txt for help/info on IDE drives
 */
#undef  CONFIG_BLK_DEV_HD_IDE
#define CONFIG_BLK_DEV_IDEDISK 1
#define CONFIG_BLK_DEV_IDECD 1
#undef  CONFIG_BLK_DEV_IDETAPE
#define CONFIG_BLK_DEV_IDETAPE_MODULE 1
#define CONFIG_BLK_DEV_IDEFLOPPY 1
#undef  CONFIG_BLK_DEV_IDESCSI
#define CONFIG_BLK_DEV_IDESCSI_MODULE 1
#define CONFIG_BLK_DEV_CMD640 1
#define CONFIG_BLK_DEV_CMD640_ENHANCED 1
#define CONFIG_BLK_DEV_RZ1000 1
#define CONFIG_BLK_DEV_IDEPCI 1
#define CONFIG_BLK_DEV_IDEDMA 1
#undef  CONFIG_BLK_DEV_OFFBOARD
#define CONFIG_IDEDMA_AUTO 1
#undef  CONFIG_BLK_DEV_OPTI621
#undef  CONFIG_BLK_DEV_ALI15X3
#undef  CONFIG_BLK_DEV_TRM290
#undef  CONFIG_BLK_DEV_NS87415
#undef  CONFIG_BLK_DEV_VIA82C586
#define CONFIG_BLK_DEV_CMD646 1
#undef  CONFIG_BLK_DEV_CS5530
#define CONFIG_BLK_DEV_SL82C105 1
#define CONFIG_BLK_DEV_IDE_PMAC 1
#define CONFIG_BLK_DEV_IDEDMA_PMAC 1
#define CONFIG_BLK_DEV_IDEDMA 1
#define CONFIG_PMAC_IDEDMA_AUTO 1
#undef  CONFIG_IDE_CHIPSETS

/*
 * Additional Block Devices
 */
#undef  CONFIG_BLK_DEV_LVM
#define CONFIG_BLK_DEV_LVM_MODULE 1
#define CONFIG_BLK_DEV_LOOP 1
#undef  CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_NBD_MODULE 1
#define CONFIG_BLK_DEV_MD 1
#undef  CONFIG_AUTODETECT_RAID
#undef  CONFIG_MD_LINEAR
#define CONFIG_MD_LINEAR_MODULE 1
#undef  CONFIG_MD_STRIPED
#define CONFIG_MD_STRIPED_MODULE 1
#undef  CONFIG_MD_MIRRORING
#define CONFIG_MD_MIRRORING_MODULE 1
#undef  CONFIG_MD_RAID5
#define CONFIG_MD_RAID5_MODULE 1
#undef  CONFIG_MD_TRANSLUCENT
#undef  CONFIG_MD_HSM
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_SIZE (64000)
#define CONFIG_BLK_DEV_INITRD 1
#undef  CONFIG_BLK_DEV_XD
#undef  CONFIG_BLK_DEV_DAC960
#undef  CONFIG_PARIDE_PARPORT
#define CONFIG_PARIDE_PARPORT_MODULE 1
#undef  CONFIG_PARIDE
#define CONFIG_PARIDE_MODULE 1

/*
 * Parallel IDE high-level drivers
 */
#undef  CONFIG_PARIDE_PD
#define CONFIG_PARIDE_PD_MODULE 1
#undef  CONFIG_PARIDE_PCD
#define CONFIG_PARIDE_PCD_MODULE 1
#undef  CONFIG_PARIDE_PF
#define CONFIG_PARIDE_PF_MODULE 1
#undef  CONFIG_PARIDE_PT
#define CONFIG_PARIDE_PT_MODULE 1
#undef  CONFIG_PARIDE_PG
#define CONFIG_PARIDE_PG_MODULE 1

/*
 * Parallel IDE protocol modules
 */
#undef  CONFIG_PARIDE_ATEN
#define CONFIG_PARIDE_ATEN_MODULE 1
#undef  CONFIG_PARIDE_BPCK
#define CONFIG_PARIDE_BPCK_MODULE 1
#undef  CONFIG_PARIDE_COMM
#define CONFIG_PARIDE_COMM_MODULE 1
#undef  CONFIG_PARIDE_DSTR
#define CONFIG_PARIDE_DSTR_MODULE 1
#undef  CONFIG_PARIDE_FIT2
#define CONFIG_PARIDE_FIT2_MODULE 1
#undef  CONFIG_PARIDE_FIT3
#define CONFIG_PARIDE_FIT3_MODULE 1
#undef  CONFIG_PARIDE_EPAT
#define CONFIG_PARIDE_EPAT_MODULE 1
#undef  CONFIG_PARIDE_EPIA
#define CONFIG_PARIDE_EPIA_MODULE 1
#undef  CONFIG_PARIDE_FRIQ
#define CONFIG_PARIDE_FRIQ_MODULE 1
#undef  CONFIG_PARIDE_FRPW
#define CONFIG_PARIDE_FRPW_MODULE 1
#undef  CONFIG_PARIDE_KBIC
#define CONFIG_PARIDE_KBIC_MODULE 1
#undef  CONFIG_PARIDE_KTTI
#define CONFIG_PARIDE_KTTI_MODULE 1
#undef  CONFIG_PARIDE_ON20
#define CONFIG_PARIDE_ON20_MODULE 1
#undef  CONFIG_PARIDE_ON26
#define CONFIG_PARIDE_ON26_MODULE 1
#undef  CONFIG_BLK_CPQ_DA
#define CONFIG_BLK_CPQ_DA_MODULE 1
#undef  CONFIG_BLK_CPQ_CISS_DA
#undef  CONFIG_BLK_DEV_HD

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#define CONFIG_NETLINK 1
#define CONFIG_RTNETLINK 1
#define CONFIG_NETLINK_DEV 1
#define CONFIG_FIREWALL 1
#define CONFIG_FILTER 1
#define CONFIG_UNIX 1
#define CONFIG_INET 1
#define CONFIG_IP_MULTICAST 1
#define CONFIG_IP_ADVANCED_ROUTER 1
#define CONFIG_RTNETLINK 1
#define CONFIG_NETLINK 1
#define CONFIG_IP_MULTIPLE_TABLES 1
#undef  CONFIG_IP_ROUTE_MULTIPATH
#define CONFIG_IP_ROUTE_TOS 1
#define CONFIG_IP_ROUTE_VERBOSE 1
#undef  CONFIG_IP_ROUTE_LARGE_TABLES
#undef  CONFIG_IP_ROUTE_NAT
#undef  CONFIG_IP_PNP
#define CONFIG_IP_FIREWALL 1
#define CONFIG_IP_FIREWALL_NETLINK 1
#define CONFIG_NETLINK_DEV 1
#define CONFIG_IP_ROUTE_FWMARK 1
#undef  CONFIG_IP_TRANSPARENT_PROXY
#define CONFIG_IP_MASQUERADE 1

/*
 * Protocol-specific masquerading support will be built as modules.
 */
#define CONFIG_IP_MASQUERADE_ICMP 1

/*
 * Protocol-specific masquerading support will be built as modules.
 */
#define CONFIG_IP_MASQUERADE_MOD 1
#undef  CONFIG_IP_MASQUERADE_IPAUTOFW
#define CONFIG_IP_MASQUERADE_IPAUTOFW_MODULE 1
#undef  CONFIG_IP_MASQUERADE_IPPORTFW
#define CONFIG_IP_MASQUERADE_IPPORTFW_MODULE 1
#undef  CONFIG_IP_MASQUERADE_MFW
#define CONFIG_IP_MASQUERADE_MFW_MODULE 1
#undef  CONFIG_IP_ROUTER
#undef  CONFIG_NET_IPIP
#define CONFIG_NET_IPIP_MODULE 1
#undef  CONFIG_NET_IPGRE
#define CONFIG_NET_IPGRE_MODULE 1
#undef  CONFIG_NET_IPGRE_BROADCAST
#undef  CONFIG_IP_MROUTE
#define CONFIG_IP_ALIAS 1
#undef  CONFIG_ARPD
#define CONFIG_SYN_COOKIES 1

/*
 * (it is safe to leave these untouched)
 */
#define CONFIG_INET_RARP 1
#define CONFIG_SKB_LARGE 1
#undef  CONFIG_IPV6
#define CONFIG_IPV6_MODULE 1
#define CONFIG_IPV6_EUI64 1
#undef  CONFIG_IPV6_NO_PB

/*
 *  
 */
#undef  CONFIG_IPX
#define CONFIG_IPX_MODULE 1
#define CONFIG_IPX_INTERN 1
#undef  CONFIG_SPX
#define CONFIG_SPX_MODULE 1
#undef  CONFIG_ATALK
#define CONFIG_ATALK_MODULE 1
#undef  CONFIG_X25
#define CONFIG_X25_MODULE 1
#undef  CONFIG_LAPB
#define CONFIG_LAPB_MODULE 1
#undef  CONFIG_BRIDGE
#undef  CONFIG_NET_DIVERT
#undef  CONFIG_LLC
#undef  CONFIG_ECONET
#undef  CONFIG_WAN_ROUTER
#define CONFIG_WAN_ROUTER_MODULE 1
#undef  CONFIG_NET_FASTROUTE
#undef  CONFIG_NET_HW_FLOWCONTROL
#undef  CONFIG_CPU_IS_SLOW

/*
 * QoS and/or fair queueing
 */
#define CONFIG_NET_SCHED 1
#define CONFIG_NETLINK 1
#define CONFIG_RTNETLINK 1
#undef  CONFIG_NET_SCH_CBQ
#define CONFIG_NET_SCH_CBQ_MODULE 1
#undef  CONFIG_NET_SCH_CSZ
#define CONFIG_NET_SCH_CSZ_MODULE 1
#undef  CONFIG_NET_SCH_PRIO
#define CONFIG_NET_SCH_PRIO_MODULE 1
#undef  CONFIG_NET_SCH_RED
#define CONFIG_NET_SCH_RED_MODULE 1
#undef  CONFIG_NET_SCH_SFQ
#define CONFIG_NET_SCH_SFQ_MODULE 1
#undef  CONFIG_NET_SCH_TEQL
#define CONFIG_NET_SCH_TEQL_MODULE 1
#undef  CONFIG_NET_SCH_TBF
#define CONFIG_NET_SCH_TBF_MODULE 1
#define CONFIG_NET_QOS 1
#define CONFIG_NET_ESTIMATOR 1
#define CONFIG_NET_CLS 1
#undef  CONFIG_NET_CLS_ROUTE4
#define CONFIG_NET_CLS_ROUTE4_MODULE 1
#define CONFIG_NET_CLS_ROUTE 1
#undef  CONFIG_NET_CLS_FW
#define CONFIG_NET_CLS_FW_MODULE 1
#undef  CONFIG_NET_CLS_U32
#define CONFIG_NET_CLS_U32_MODULE 1
#undef  CONFIG_NET_CLS_RSVP
#define CONFIG_NET_CLS_RSVP_MODULE 1
#undef  CONFIG_NET_CLS_RSVP6
#define CONFIG_NET_CLS_RSVP6_MODULE 1
#define CONFIG_NET_CLS_POLICE 1

/*
 * SCSI support
 */
#define CONFIG_SCSI 1

/*
 * SCSI support type (disk, tape, CD-ROM)
 */
#define CONFIG_BLK_DEV_SD 1
#undef  CONFIG_CHR_DEV_ST
#define CONFIG_CHR_DEV_ST_MODULE 1
#undef  CONFIG_CHR_DEV_OSST
#define CONFIG_CHR_DEV_OSST_MODULE 1
#define CONFIG_BLK_DEV_SR 1
#define CONFIG_BLK_DEV_SR_VENDOR 1
#undef  CONFIG_CHR_DEV_SG
#define CONFIG_CHR_DEV_SG_MODULE 1

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#undef  CONFIG_SCSI_MULTI_LUN
#define CONFIG_SCSI_CONSTANTS 1
#undef  CONFIG_SCSI_LOGGING

/*
 * SCSI low-level drivers
 */
#undef  CONFIG_BLK_DEV_3W_XXXX_RAID
#undef  CONFIG_SCSI_7000FASST
#undef  CONFIG_SCSI_ACARD
#define CONFIG_SCSI_ACARD_MODULE 1
#undef  CONFIG_SCSI_AHA152X
#undef  CONFIG_SCSI_AHA1542
#undef  CONFIG_SCSI_AHA1740
#undef  CONFIG_SCSI_AACRAID
#define CONFIG_SCSI_AACRAID_MODULE 1
#define CONFIG_SCSI_AIC7XXX 1
#undef  CONFIG_AIC7XXX_TCQ_ON_BY_DEFAULT
#define CONFIG_AIC7XXX_CMDS_PER_DEVICE (8)
#define CONFIG_AIC7XXX_PROC_STATS 1
#define CONFIG_AIC7XXX_RESET_DELAY (15)
#undef  CONFIG_SCSI_IPS
#undef  CONFIG_SCSI_ADVANSYS
#define CONFIG_SCSI_ADVANSYS_MODULE 1
#undef  CONFIG_SCSI_IN2000
#undef  CONFIG_SCSI_AM53C974
#undef  CONFIG_SCSI_MEGARAID
#undef  CONFIG_SCSI_BUSLOGIC
#undef  CONFIG_SCSI_CPQFCTS
#undef  CONFIG_SCSI_DTC3280
#undef  CONFIG_SCSI_DPT_I2O
#undef  CONFIG_SCSI_EATA
#undef  CONFIG_SCSI_EATA_DMA
#undef  CONFIG_SCSI_EATA_PIO
#undef  CONFIG_SCSI_FUTURE_DOMAIN
#undef  CONFIG_SCSI_GDTH
#undef  CONFIG_SCSI_GENERIC_NCR5380
#define CONFIG_SCSI_GENERIC_NCR5380_MODULE 1
#undef  CONFIG_SCSI_GENERIC_NCR53C400
#define CONFIG_SCSI_G_NCR5380_PORT 1
#undef  CONFIG_SCSI_G_NCR5380_MEM
#undef  CONFIG_SCSI_INITIO
#undef  CONFIG_SCSI_INIA100
#undef  CONFIG_SCSI_PPA
#define CONFIG_SCSI_PPA_MODULE 1
#undef  CONFIG_SCSI_IMM
#define CONFIG_SCSI_IMM_MODULE 1
#undef  CONFIG_SCSI_IZIP_EPP16
#undef  CONFIG_SCSI_IZIP_SLOW_CTR
#undef  CONFIG_PPSCSI
#define CONFIG_PPSCSI_MODULE 1
#undef  CONFIG_PPSCSI_T348
#define CONFIG_PPSCSI_T348_MODULE 1
#undef  CONFIG_PPSCSI_T358
#define CONFIG_PPSCSI_T358_MODULE 1
#undef  CONFIG_PPSCSI_ONSCSI
#define CONFIG_PPSCSI_ONSCSI_MODULE 1
#undef  CONFIG_PPSCSI_SPARCSI
#define CONFIG_PPSCSI_SPARCSI_MODULE 1
#undef  CONFIG_PPSCSI_EPSA2
#define CONFIG_PPSCSI_EPSA2_MODULE 1
#undef  CONFIG_PPSCSI_EPST
#define CONFIG_PPSCSI_EPST_MODULE 1
#undef  CONFIG_SCSI_NCR53C406A
#define CONFIG_SCSI_NCR53C406A_MODULE 1
#undef  CONFIG_SCSI_SYM53C416
#define CONFIG_SCSI_SYM53C416_MODULE 1
#undef  CONFIG_SCSI_SIM710
#undef  CONFIG_SCSI_NCR53C7xx
#define CONFIG_SCSI_NCR53C8XX 1
#define CONFIG_SCSI_SYM53C8XX 1
#define CONFIG_SCSI_NCR53C8XX_DEFAULT_TAGS (8)
#define CONFIG_SCSI_NCR53C8XX_MAX_TAGS (32)
#define CONFIG_SCSI_NCR53C8XX_SYNC (20)
#undef  CONFIG_SCSI_NCR53C8XX_IOMAPPED
#undef  CONFIG_SCSI_NCR53C8XX_PQS_PDS
#define CONFIG_SCSI_NCR53C8XX_SYMBIOS_COMPAT 1
#undef  CONFIG_SCSI_PAS16
#undef  CONFIG_SCSI_PCI2000
#define CONFIG_SCSI_PCI2000_MODULE 1
#undef  CONFIG_SCSI_PCI2220I
#define CONFIG_SCSI_PCI2220I_MODULE 1
#undef  CONFIG_SCSI_PSI240I
#undef  CONFIG_SCSI_QLOGIC_FAS
#undef  CONFIG_SCSI_QLOGIC_ISP
#undef  CONFIG_SCSI_QLOGIC_FC
#undef  CONFIG_SCSI_QLOGIC_QLA2X00
#undef  CONFIG_SCSI_SEAGATE
#undef  CONFIG_SCSI_DC395x_TRMS1040
#undef  CONFIG_SCSI_DC390T
#undef  CONFIG_SCSI_T128
#undef  CONFIG_SCSI_U14_34F
#undef  CONFIG_SCSI_ULTRASTOR
#undef  CONFIG_SCSI_DEBUG
#define CONFIG_SCSI_DEBUG_MODULE 1
#define CONFIG_SCSI_MESH 1
#define CONFIG_SCSI_MESH_SYNC_RATE (5)
#define CONFIG_SCSI_MAC53C94 1

/*
 * IEEE 1394 (FireWire) support
 */
#undef  CONFIG_IEEE1394
#define CONFIG_IEEE1394_MODULE 1
#undef  CONFIG_IEEE1394_PCILYNX
#define CONFIG_IEEE1394_PCILYNX_MODULE 1
#define CONFIG_IEEE1394_PCILYNX_LOCALRAM 1
#undef  CONFIG_IEEE1394_AIC5800
#define CONFIG_IEEE1394_AIC5800_MODULE 1
#undef  CONFIG_IEEE1394_OHCI1394
#define CONFIG_IEEE1394_OHCI1394_MODULE 1
#undef  CONFIG_IEEE1394_RAWIO
#define CONFIG_IEEE1394_RAWIO_MODULE 1
#define CONFIG_IEEE1394_VERBOSEDEBUG 1

/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1

/*
 * ARCnet devices
 */
#undef  CONFIG_ARCNET
#undef  CONFIG_DUMMY
#define CONFIG_DUMMY_MODULE 1
#undef  CONFIG_BONDING
#define CONFIG_BONDING_MODULE 1
#undef  CONFIG_EQUALIZER
#define CONFIG_EQUALIZER_MODULE 1
#undef  CONFIG_ETHERTAP
#define CONFIG_ETHERTAP_MODULE 1
#define CONFIG_ETHERTAP_MC 1
#undef  CONFIG_NET_SB1000
#undef  CONFIG_PPPOX
#define CONFIG_PPPOX_MODULE 1

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#undef  CONFIG_MACE
#undef  CONFIG_BMAC
#undef  CONFIG_GMAC
#undef  CONFIG_NCR885E
#define CONFIG_NET_VENDOR_3COM 1
#undef  CONFIG_EL1
#undef  CONFIG_EL2
#undef  CONFIG_ELPLUS
#undef  CONFIG_EL16
#undef  CONFIG_EL3
#undef  CONFIG_3C515
#undef  CONFIG_BC90X
#define CONFIG_BC90X_MODULE 1
#undef  CONFIG_VORTEX
#define CONFIG_VORTEX_MODULE 1
#undef  CONFIG_LANCE
#define CONFIG_LANCE_MODULE 1
#undef  CONFIG_NET_VENDOR_SMC
#undef  CONFIG_NET_VENDOR_RACAL
#undef  CONFIG_RTL8139
#define CONFIG_RTL8139_MODULE 1
#undef  CONFIG_RTL8139TOO
#define CONFIG_NET_ISA 1
#undef  CONFIG_AT1700
#undef  CONFIG_E2100
#undef  CONFIG_DEPCA
#undef  CONFIG_EWRK3
#undef  CONFIG_EEXPRESS
#undef  CONFIG_EEXPRESS_PRO
#define CONFIG_EEXPRESS_PRO_MODULE 1
#undef  CONFIG_FMV18X
#undef  CONFIG_HPLAN_PLUS
#undef  CONFIG_HPLAN
#undef  CONFIG_HP100
#undef  CONFIG_ETH16I
#define CONFIG_ETH16I_MODULE 1
#undef  CONFIG_NE2000
#define CONFIG_NE2000_MODULE 1
#undef  CONFIG_SEEQ8005
#undef  CONFIG_SK_G16
#define CONFIG_NET_EISA 1
#define CONFIG_PCNET32 1
#undef  CONFIG_ADAPTEC_STARFIRE
#undef  CONFIG_AC3200
#undef  CONFIG_APRICOT
#define CONFIG_APRICOT_MODULE 1
#undef  CONFIG_LP486E
#undef  CONFIG_CS89x0
#undef  CONFIG_DM9102
#define CONFIG_DE4X5 1
#undef  CONFIG_DEC_ELCP
#define CONFIG_DEC_ELCP_MODULE 1
#undef  CONFIG_DEC_ELCP_OLD
#define CONFIG_DEC_ELCP_OLD_MODULE 1
#undef  CONFIG_DGRS
#define CONFIG_DGRS_MODULE 1
#undef  CONFIG_EEXPRESS_PRO100
#define CONFIG_EEXPRESS_PRO100_MODULE 1
#undef  CONFIG_E100
#undef  CONFIG_EEXPRESS_PRO1000
#undef  CONFIG_LNE390
#undef  CONFIG_NE3210
#undef  CONFIG_NE2K_PCI
#define CONFIG_NE2K_PCI_MODULE 1
#undef  CONFIG_RL100ATX
#define CONFIG_RL100ATX_MODULE 1
#undef  CONFIG_TLAN
#undef  CONFIG_VIA_RHINE
#undef  CONFIG_SIS900
#undef  CONFIG_ES3210
#undef  CONFIG_EPIC100
#define CONFIG_EPIC100_MODULE 1
#undef  CONFIG_ZNET
#undef  CONFIG_NET_POCKET

/*
 * Ethernet (1000 Mbit)
 */
#undef  CONFIG_ACENIC
#undef  CONFIG_HAMACHI
#undef  CONFIG_YELLOWFIN
#undef  CONFIG_SK98LIN
#define CONFIG_FDDI 1
#undef  CONFIG_DEFXX
#undef  CONFIG_SKFP
#undef  CONFIG_HIPPI

/*
 * Appletalk devices
 */
#undef  CONFIG_LTPC
#define CONFIG_LTPC_MODULE 1
#undef  CONFIG_COPS
#define CONFIG_COPS_MODULE 1
#define CONFIG_COPS_DAYNA 1
#define CONFIG_COPS_TANGENT 1
#undef  CONFIG_IPDDP
#define CONFIG_IPDDP_MODULE 1
#define CONFIG_IPDDP_ENCAP 1
#define CONFIG_IPDDP_DECAP 1
#undef  CONFIG_PLIP
#define CONFIG_PPP 1

/*
 * CCP compressors for PPP will also be built in.
 */
#undef  CONFIG_SLIP
#define CONFIG_SLIP_MODULE 1
#define CONFIG_SLIP_COMPRESSED 1
#define CONFIG_SLIP_SMART 1
#undef  CONFIG_SLIP_MODE_SLIP6
#undef  CONFIG_NET_RADIO

/*
 * Token ring devices
 */
#define CONFIG_TR 1
#define CONFIG_IBMTR 1
#define CONFIG_IBMLS 1
#define CONFIG_IBMOL 1
#undef  CONFIG_SKTR
#define CONFIG_SKTR_MODULE 1
#undef  CONFIG_NET_FC
#undef  CONFIG_RCPCI
#define CONFIG_RCPCI_MODULE 1
#undef  CONFIG_SHAPER
#define CONFIG_SHAPER_MODULE 1

/*
 * Wan interfaces
 */
#undef  CONFIG_HOSTESS_SV11
#define CONFIG_HOSTESS_SV11_MODULE 1
#undef  CONFIG_COSA
#define CONFIG_COSA_MODULE 1
#undef  CONFIG_SEALEVEL_4021
#define CONFIG_SEALEVEL_4021_MODULE 1
#undef  CONFIG_SYNCLINK_SYNCPPP
#define CONFIG_SYNCLINK_SYNCPPP_MODULE 1
#undef  CONFIG_LANMEDIA
#define CONFIG_LANMEDIA_MODULE 1
#undef  CONFIG_COMX
#define CONFIG_COMX_MODULE 1
#undef  CONFIG_COMX_HW_COMX
#define CONFIG_COMX_HW_COMX_MODULE 1
#undef  CONFIG_COMX_HW_LOCOMX
#define CONFIG_COMX_HW_LOCOMX_MODULE 1
#undef  CONFIG_COMX_HW_MIXCOM
#define CONFIG_COMX_HW_MIXCOM_MODULE 1
#undef  CONFIG_COMX_PROTO_PPP
#define CONFIG_COMX_PROTO_PPP_MODULE 1
#undef  CONFIG_COMX_PROTO_LAPB
#define CONFIG_COMX_PROTO_LAPB_MODULE 1
#undef  CONFIG_COMX_PROTO_FR
#define CONFIG_COMX_PROTO_FR_MODULE 1
#undef  CONFIG_HDLC
#define CONFIG_HDLC_MODULE 1
#undef  CONFIG_N2
#define CONFIG_N2_MODULE 1
#undef  CONFIG_C101
#define CONFIG_C101_MODULE 1
#undef  CONFIG_WANXL
#undef  CONFIG_PC300
#define CONFIG_PC300_MODULE 1
#define CONFIG_PC300_X25 1
#undef  CONFIG_DLCI
#define CONFIG_DLCI_MODULE 1
#define CONFIG_DLCI_COUNT (24)
#define CONFIG_DLCI_MAX (8)
#undef  CONFIG_SDLA
#define CONFIG_SDLA_MODULE 1
#define CONFIG_WAN_DRIVERS 1
#undef  CONFIG_VENDOR_SANGOMA
#define CONFIG_VENDOR_SANGOMA_MODULE 1
#define CONFIG_WANPIPE_CARDS (1)
#define CONFIG_WANPIPE_FR 1
#define CONFIG_WANPIPE_PPP 1
#define CONFIG_WANPIPE_CHDLC 1
#undef  CONFIG_XPEED
#define CONFIG_XPEED_MODULE 1
#undef  CONFIG_LAPBETHER
#define CONFIG_LAPBETHER_MODULE 1
#undef  CONFIG_X25_ASY
#define CONFIG_X25_ASY_MODULE 1
#undef  CONFIG_SBNI

/*
 * Amateur Radio support
 */
#define CONFIG_HAMRADIO 1

/*
 * Packet Radio protocols
 */
#undef  CONFIG_AX25
#define CONFIG_AX25_MODULE 1
#define CONFIG_AX25_DAMA_SLAVE 1
#undef  CONFIG_NETROM
#define CONFIG_NETROM_MODULE 1
#undef  CONFIG_ROSE
#define CONFIG_ROSE_MODULE 1

/*
 * AX.25 network device drivers
 */
#undef  CONFIG_MKISS
#define CONFIG_MKISS_MODULE 1
#undef  CONFIG_6PACK
#define CONFIG_6PACK_MODULE 1
#undef  CONFIG_BPQETHER
#define CONFIG_BPQETHER_MODULE 1
#undef  CONFIG_DMASCC
#define CONFIG_DMASCC_MODULE 1
#undef  CONFIG_SCC
#define CONFIG_SCC_MODULE 1
#undef  CONFIG_SCC_DELAY
#define CONFIG_SCC_TRXECHO 1
#undef  CONFIG_BAYCOM_SER_FDX
#define CONFIG_BAYCOM_SER_FDX_MODULE 1
#undef  CONFIG_BAYCOM_SER_HDX
#define CONFIG_BAYCOM_SER_HDX_MODULE 1
#undef  CONFIG_BAYCOM_PAR
#define CONFIG_BAYCOM_PAR_MODULE 1
#undef  CONFIG_BAYCOM_EPP
#define CONFIG_BAYCOM_EPP_MODULE 1
#undef  CONFIG_SOUNDMODEM
#undef  CONFIG_YAM
#define CONFIG_YAM_MODULE 1

/*
 * Misc. hamradio protocols
 */
#undef  CONFIG_HFMODEM

/*
 * IrDA (infrared) support
 */
#undef  CONFIG_IRDA

/*
 * ISDN subsystem
 */
#undef  CONFIG_ISDN
#define CONFIG_ISDN_MODULE 1
#define CONFIG_ISDN_PPP 1
#define CONFIG_ISDN_PPP_VJ 1
#define CONFIG_ISDN_MPP 1
#define CONFIG_ISDN_AUDIO 1
#define CONFIG_ISDN_TTY_FAX 1
#define CONFIG_ISDN_X25 1

/*
 * ISDN feature submodules
 */
#undef  CONFIG_ISDN_DRV_LOOP
#define CONFIG_ISDN_DRV_LOOP_MODULE 1
#define CONFIG_ISDN_DIVERSION 1

/*
 * low-level hardware drivers
 */

/*
 * Passive ISDN cards
 */
#undef  CONFIG_ISDN_DRV_HISAX
#define CONFIG_ISDN_DRV_HISAX_MODULE 1

/*
 *   D-channel protocol features
 */
#define CONFIG_HISAX_EURO 1
#undef  CONFIG_DE_AOC
#undef  CONFIG_HISAX_NO_SENDCOMPLETE
#undef  CONFIG_HISAX_NO_LLC
#undef  CONFIG_HISAX_NO_KEYPAD
#define CONFIG_HISAX_1TR6 1
#undef  CONFIG_HISAX_NI1

/*
 *   HiSax supported cards
 */
#define CONFIG_HISAX_16_0 1
#define CONFIG_HISAX_16_3 1
#undef  CONFIG_HISAX_TELESPCI
#define CONFIG_HISAX_S0BOX 1
#define CONFIG_HISAX_AVM_A1 1
#define CONFIG_HISAX_FRITZPCI 1
#define CONFIG_HISAX_AVM_A1_PCMCIA 1
#define CONFIG_HISAX_ELSA 1
#define CONFIG_HISAX_IX1MICROR2 1
#define CONFIG_HISAX_DIEHLDIVA 1
#define CONFIG_HISAX_ASUSCOM 1
#define CONFIG_HISAX_TELEINT 1
#define CONFIG_HISAX_HFCS 1
#define CONFIG_HISAX_SEDLBAUER 1
#define CONFIG_HISAX_SPORTSTER 1
#define CONFIG_HISAX_MIC 1
#undef  CONFIG_HISAX_NETJET
#undef  CONFIG_HISAX_NETJET_U
#define CONFIG_HISAX_NICCY 1
#define CONFIG_HISAX_ISURF 1
#define CONFIG_HISAX_HSTSAPHIR 1
#define CONFIG_HISAX_BKM_A4T 1
#define CONFIG_HISAX_SCT_QUADRO 1
#define CONFIG_HISAX_GAZEL 1
#undef  CONFIG_HISAX_HFC_PCI
#undef  CONFIG_HISAX_W6692
#define CONFIG_HISAX_HFC_SX 1

/*
 * Active ISDN cards
 */
#undef  CONFIG_ISDN_DRV_ICN
#define CONFIG_ISDN_DRV_ICN_MODULE 1
#undef  CONFIG_ISDN_DRV_PCBIT
#undef  CONFIG_ISDN_DRV_SC
#define CONFIG_ISDN_DRV_SC_MODULE 1
#undef  CONFIG_ISDN_DRV_ACT2000
#define CONFIG_ISDN_DRV_ACT2000_MODULE 1
#undef  CONFIG_ISDN_DRV_EICON
#define CONFIG_ISDN_DRV_EICON_MODULE 1
#define CONFIG_ISDN_DRV_EICON_PCI 1
#define CONFIG_ISDN_DRV_EICON_ISA 1
#undef  CONFIG_ISDN_DRV_EICON_STANDALONE
#undef  CONFIG_ISDN_CAPI
#undef  CONFIG_ISDN_CAPI_MIDDLEWARE

/*
 * Old CD-ROM drivers (not SCSI, not IDE)
 */
#undef  CONFIG_CD_NO_IDESCSI

/*
 * Console drivers
 */
#define CONFIG_DUMMY_CONSOLE 1
#define CONFIG_FB_PM2 1
#define CONFIG_FB_PM2_FIFO_DISCONNECT 1
#define CONFIG_FB_PM2_PCI 1
#define CONFIG_FB_ATY 1
#define CONFIG_FB_OF 1
#undef  CONFIG_FB_CONTROL
#undef  CONFIG_FB_PLATINUM
#undef  CONFIG_FB_VALKYRIE
#undef  CONFIG_FB_IMSTT
#undef  CONFIG_FB_CT65550
#undef  CONFIG_FB_S3TRIO
#define CONFIG_FB_COMPAT_XPMAC 1
#define CONFIG_FB_CLGEN 1
#define CONFIG_FB_IBME15 1
#define CONFIG_FB_MATROX 1
#define CONFIG_FB_MATROX_MILLENIUM 1
#define CONFIG_FB_MATROX_MYSTIQUE 1
#define CONFIG_FB_MATROX_G100 1
#define CONFIG_FB_MATROX_MULTIHEAD 1
#define CONFIG_FB_ATY128 1
#undef  CONFIG_FB_TDFX
#undef  CONFIG_FB_VIRTUAL
#undef  CONFIG_FBCON_ADVANCED
#define CONFIG_FBCON_MFB 1
#define CONFIG_FBCON_CFB8 1
#define CONFIG_FBCON_CFB16 1
#define CONFIG_FBCON_CFB24 1
#define CONFIG_FBCON_CFB32 1
#undef  CONFIG_FBCON_FONTWIDTH8_ONLY
#define CONFIG_FBCON_FONTS 1
#undef  CONFIG_FONT_8x8
#define CONFIG_FONT_8x16 1
#define CONFIG_FONT_SUN8x16 1
#define CONFIG_FONT_SUN12x22 1
#undef  CONFIG_FONT_6x11
#undef  CONFIG_FONT_PEARL_8x8
#undef  CONFIG_FONT_ACORN_8x8

/*
 * Character devices
 */
#define CONFIG_VT 1
#define CONFIG_VT_CONSOLE 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_SERIAL_EXTENDED 1
#define CONFIG_SERIAL_MANY_PORTS 1
#define CONFIG_SERIAL_SHARE_IRQ 1
#undef  CONFIG_SERIAL_DETECT_IRQ
#undef  CONFIG_SERIAL_MULTIPORT
#undef  CONFIG_HUB6
#undef  CONFIG_SERIAL_NONSTANDARD
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_UNIX98_PTY_COUNT (256)
#undef  CONFIG_PRINTER
#define CONFIG_PRINTER_MODULE 1
#define CONFIG_PRINTER_READBACK 1
#define CONFIG_MOUSE 1

/*
 * Mice
 */
#undef  CONFIG_ATIXL_BUSMOUSE
#undef  CONFIG_BUSMOUSE
#undef  CONFIG_MS_BUSMOUSE
#define CONFIG_PSMOUSE 1
#undef  CONFIG_82C710_MOUSE
#undef  CONFIG_PC110_PAD

/*
 * Joysticks
 */
#undef  CONFIG_JOYSTICK
#define CONFIG_JOYSTICK_MODULE 1
#undef  CONFIG_JOY_ANALOG
#define CONFIG_JOY_ANALOG_MODULE 1
#undef  CONFIG_JOY_ASSASSIN
#define CONFIG_JOY_ASSASSIN_MODULE 1
#undef  CONFIG_JOY_GRAVIS
#define CONFIG_JOY_GRAVIS_MODULE 1
#undef  CONFIG_JOY_LOGITECH
#define CONFIG_JOY_LOGITECH_MODULE 1
#undef  CONFIG_JOY_SIDEWINDER
#define CONFIG_JOY_SIDEWINDER_MODULE 1
#undef  CONFIG_JOY_THRUSTMASTER
#define CONFIG_JOY_THRUSTMASTER_MODULE 1
#undef  CONFIG_JOY_CREATIVE
#define CONFIG_JOY_CREATIVE_MODULE 1
#undef  CONFIG_JOY_LIGHTNING
#define CONFIG_JOY_LIGHTNING_MODULE 1
#undef  CONFIG_JOY_PCI
#define CONFIG_JOY_PCI_MODULE 1
#undef  CONFIG_JOY_MAGELLAN
#define CONFIG_JOY_MAGELLAN_MODULE 1
#undef  CONFIG_JOY_SPACEORB
#define CONFIG_JOY_SPACEORB_MODULE 1
#undef  CONFIG_JOY_SPACEBALL
#define CONFIG_JOY_SPACEBALL_MODULE 1
#undef  CONFIG_JOY_WARRIOR
#define CONFIG_JOY_WARRIOR_MODULE 1
#undef  CONFIG_JOY_CONSOLE
#define CONFIG_JOY_CONSOLE_MODULE 1
#undef  CONFIG_JOY_DB9
#define CONFIG_JOY_DB9_MODULE 1
#undef  CONFIG_JOY_TURBOGRAFX
#define CONFIG_JOY_TURBOGRAFX_MODULE 1
#undef  CONFIG_QIC02_TAPE
#define CONFIG_WATCHDOG 1

/*
 * Watchdog Cards
 */
#undef  CONFIG_WATCHDOG_NOWAYOUT
#undef  CONFIG_ACQUIRE_WDT
#undef  CONFIG_ADVANTECH_WDT
#undef  CONFIG_PCWATCHDOG
#undef  CONFIG_I810_TCO
#undef  CONFIG_MIXCOMWD
#undef  CONFIG_60XX_WDT
#undef  CONFIG_SOFT_WATCHDOG
#define CONFIG_SOFT_WATCHDOG_MODULE 1
#undef  CONFIG_WDT
#undef  CONFIG_WDTPCI
#define CONFIG_NVRAM 1
#define CONFIG_RTC 1

/*
 * I2C support
 */
#undef  CONFIG_I2C
#define CONFIG_I2C_MODULE 1
#undef  CONFIG_I2C_ALGOBIT
#define CONFIG_I2C_ALGOBIT_MODULE 1
#undef  CONFIG_I2C_PHILIPSPAR
#undef  CONFIG_I2C_ELV
#define CONFIG_I2C_ELV_MODULE 1
#undef  CONFIG_I2C_VELLEMAN
#define CONFIG_I2C_VELLEMAN_MODULE 1
#undef  CONFIG_I2C_ALGOPCF
#define CONFIG_I2C_ALGOPCF_MODULE 1
#undef  CONFIG_I2C_ELEKTOR
#define CONFIG_I2C_ELEKTOR_MODULE 1
#define CONFIG_I2C_MAINBOARD 1
#undef  CONFIG_I2C_ALI15X3
#undef  CONFIG_I2C_HYDRA
#define CONFIG_I2C_HYDRA_MODULE 1
#undef  CONFIG_I2C_PIIX4
#undef  CONFIG_I2C_VIA
#undef  CONFIG_I2C_ISA
#define CONFIG_I2C_ISA_MODULE 1
#undef  CONFIG_I2C_CHARDEV
#define CONFIG_I2C_CHARDEV_MODULE 1

/*
 * Hardware sensors support
 */
#undef  CONFIG_SENSORS
#undef  CONFIG_INTEL_RNG
#undef  CONFIG_AGP
#undef  CONFIG_DRM

/*
 * Video For Linux
 */
#undef  CONFIG_VIDEO_DEV
#undef  CONFIG_DTLK

/*
 * Ftape, the floppy tape device driver
 */
#undef  CONFIG_FTAPE

/*
 * USB support
 */
#undef  CONFIG_USB
#define CONFIG_USB_MODULE 1
#define CONFIG_USB_DEBUG 1

/*
 * Miscellaneous USB options
 */
#define CONFIG_USB_DEVICEFS 1
#define CONFIG_HOTPLUG 1
#define CONFIG_USB_BANDWIDTH 1

/*
 * USB Controllers
 */
#undef  CONFIG_USB_UHCI
#undef  CONFIG_USB_UHCI_ALT
#undef  CONFIG_USB_OHCI
#define CONFIG_USB_OHCI_MODULE 1

/*
 * USB Devices
 */
#undef  CONFIG_USB_PRINTER
#define CONFIG_USB_PRINTER_MODULE 1
#undef  CONFIG_USB_SCANNER
#define CONFIG_USB_SCANNER_MODULE 1
#undef  CONFIG_USB_AUDIO
#define CONFIG_USB_AUDIO_MODULE 1
#undef  CONFIG_USB_ACM
#define CONFIG_USB_ACM_MODULE 1
#undef  CONFIG_USB_SERIAL
#define CONFIG_USB_SERIAL_MODULE 1
#define CONFIG_USB_SERIAL_GENERIC 1
#undef  CONFIG_USB_SERIAL_VISOR
#define CONFIG_USB_SERIAL_VISOR_MODULE 1
#undef  CONFIG_USB_SERIAL_DIGI_ACCELEPORT
#define CONFIG_USB_SERIAL_DIGI_ACCELEPORT_MODULE 1
#undef  CONFIG_USB_SERIAL_WHITEHEAT
#define CONFIG_USB_SERIAL_WHITEHEAT_MODULE 1
#undef  CONFIG_USB_SERIAL_FTDI_SIO
#define CONFIG_USB_SERIAL_FTDI_SIO_MODULE 1
#undef  CONFIG_USB_SERIAL_KEYSPAN_PDA
#define CONFIG_USB_SERIAL_KEYSPAN_PDA_MODULE 1
#undef  CONFIG_USB_SERIAL_KEYSPAN
#define CONFIG_USB_SERIAL_KEYSPAN_MODULE 1
#define CONFIG_USB_SERIAL_KEYSPAN_USA28 1
#define CONFIG_USB_SERIAL_KEYSPAN_USA28X 1
#define CONFIG_USB_SERIAL_KEYSPAN_USA19 1
#define CONFIG_USB_SERIAL_KEYSPAN_USA18X 1
#define CONFIG_USB_SERIAL_KEYSPAN_USA19W 1
#undef  CONFIG_USB_SERIAL_OMNINET
#define CONFIG_USB_SERIAL_OMNINET_MODULE 1
#undef  CONFIG_USB_SERIAL_BELKIN
#define CONFIG_USB_SERIAL_BELKIN_MODULE 1
#undef  CONFIG_USB_SERIAL_EMPEG
#define CONFIG_USB_SERIAL_DEBUG 1
#undef  CONFIG_USB_IBMCAM
#undef  CONFIG_USB_OV511
#undef  CONFIG_USB_DC2XX
#define CONFIG_USB_DC2XX_MODULE 1
#undef  CONFIG_USB_MDC800
#define CONFIG_USB_MDC800_MODULE 1
#undef  CONFIG_USB_STORAGE
#define CONFIG_USB_STORAGE_MODULE 1
#define CONFIG_USB_STORAGE_DEBUG 1
#undef  CONFIG_USB_DABUSB
#define CONFIG_USB_DABUSB_MODULE 1
#undef  CONFIG_USB_PLUSB
#define CONFIG_USB_PLUSB_MODULE 1
#undef  CONFIG_USB_PEGASUS
#define CONFIG_USB_PEGASUS_MODULE 1
#undef  CONFIG_USB_RIO500
#define CONFIG_USB_RIO500_MODULE 1
#undef  CONFIG_USB_DSBR
#undef  CONFIG_USB_BLUETOOTH
#define CONFIG_USB_BLUETOOTH_MODULE 1
#undef  CONFIG_USB_KAWETH
#define CONFIG_USB_KAWETH_MODULE 1

/*
 * USB HID
 */
#undef  CONFIG_USB_HID
#define CONFIG_USB_HID_MODULE 1
#undef  CONFIG_USB_KBD
#define CONFIG_USB_KBD_MODULE 1
#undef  CONFIG_USB_MOUSE
#define CONFIG_USB_MOUSE_MODULE 1
#undef  CONFIG_USB_WACOM
#define CONFIG_USB_WACOM_MODULE 1
#undef  CONFIG_USB_WMFORCE
#define CONFIG_USB_WMFORCE_MODULE 1
#undef  CONFIG_INPUT_KEYBDEV
#define CONFIG_INPUT_KEYBDEV_MODULE 1
#undef  CONFIG_INPUT_MOUSEDEV
#define CONFIG_INPUT_MOUSEDEV_MODULE 1
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X (1024)
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y (768)
#undef  CONFIG_INPUT_JOYDEV
#define CONFIG_INPUT_JOYDEV_MODULE 1
#undef  CONFIG_INPUT_EVDEV
#define CONFIG_INPUT_EVDEV_MODULE 1

/*
 * Mac device drivers
 */
#undef  CONFIG_MAC_KEYBOARD
#undef  CONFIG_ADBMOUSE
#undef  CONFIG_PPC_RTC
#undef  CONFIG_MAC_FLOPPY
#undef  CONFIG_MAC_SERIAL

/*
 * Sound
 */
#undef  CONFIG_SOUND
#define CONFIG_SOUND_MODULE 1
#undef  CONFIG_DMASOUND
#undef  CONFIG_SOUND_CMPCI
#undef  CONFIG_SOUND_CS4281
#undef  CONFIG_SOUND_FUSION
#undef  CONFIG_SOUND_EMU10K1
#undef  CONFIG_SOUND_ES1370
#undef  CONFIG_SOUND_ES1371
#undef  CONFIG_SOUND_MAESTRO
#undef  CONFIG_SOUND_MAESTRO3
#undef  CONFIG_SOUND_ESSSOLO1
#undef  CONFIG_SOUND_ICH
#undef  CONFIG_SOUND_SONICVIBES
#undef  CONFIG_SOUND_TRIDENT
#undef  CONFIG_SOUND_MSNDCLAS
#undef  CONFIG_SOUND_MSNDPIN
#undef  CONFIG_SOUND_VIA82CXXX
#undef  CONFIG_SOUND_OSS

/*
 * Filesystems
 */
#define CONFIG_QUOTA 1
#define CONFIG_AUTOFS_FS 1
#define CONFIG_AUTOFS4_FS 1
#undef  CONFIG_ADFS_FS
#define CONFIG_ADFS_FS_MODULE 1
#undef  CONFIG_AFFS_FS
#define CONFIG_AFFS_FS_MODULE 1
#undef  CONFIG_HFS_FS
#define CONFIG_HFS_FS_MODULE 1
#undef  CONFIG_FAT_FS
#define CONFIG_FAT_FS_MODULE 1
#undef  CONFIG_MSDOS_FS
#define CONFIG_MSDOS_FS_MODULE 1
#undef  CONFIG_UMSDOS_FS
#undef  CONFIG_VFAT_FS
#define CONFIG_VFAT_FS_MODULE 1
#define CONFIG_ISO9660_FS 1
#define CONFIG_JOLIET 1
#undef  CONFIG_UDF_FS
#define CONFIG_UDF_FS_MODULE 1
#undef  CONFIG_UDF_RW
#define CONFIG_MINIX_FS 1
#undef  CONFIG_NTFS_FS
#define CONFIG_NTFS_FS_MODULE 1
#undef  CONFIG_NTFS_RW
#undef  CONFIG_HPFS_FS
#define CONFIG_HPFS_FS_MODULE 1
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_CONFIG 1
#define CONFIG_DEVPTS_FS 1
#undef  CONFIG_QNX4FS_FS
#define CONFIG_QNX4FS_FS_MODULE 1
#undef  CONFIG_QNX4FS_RW
#undef  CONFIG_ROMFS_FS
#define CONFIG_ROMFS_FS_MODULE 1
#define CONFIG_EXT2_FS 1
#undef  CONFIG_SYSV_FS
#define CONFIG_SYSV_FS_MODULE 1
#undef  CONFIG_UFS_FS
#define CONFIG_UFS_FS_MODULE 1
#undef  CONFIG_UFS_FS_WRITE
#undef  CONFIG_EFS_FS
#define CONFIG_EFS_FS_MODULE 1
#define CONFIG_SGI_PARTITION 1

/*
 * Network File Systems
 */
#undef  CONFIG_CODA_FS
#define CONFIG_CODA_FS_MODULE 1
#define CONFIG_NFS_FS 1
#define CONFIG_NFS_V3 1
#undef  CONFIG_NFSD
#define CONFIG_NFSD_MODULE 1
#define CONFIG_NFSD_V3 1
#undef  CONFIG_NFSD_TCP
#define CONFIG_SUNRPC 1
#define CONFIG_LOCKD 1
#undef  CONFIG_SMB_FS
#define CONFIG_SMB_FS_MODULE 1
#undef  CONFIG_SMB_NLS_DEFAULT
#undef  CONFIG_NCP_FS
#define CONFIG_NCP_FS_MODULE 1
#define CONFIG_NCPFS_PACKET_SIGNING 1
#define CONFIG_NCPFS_IOCTL_LOCKING 1
#define CONFIG_NCPFS_STRONG 1
#define CONFIG_NCPFS_NFS_NS 1
#define CONFIG_NCPFS_OS2_NS 1
#define CONFIG_NCPFS_SMALLDOS 1
#define CONFIG_NCPFS_MOUNT_SUBDIR 1
#define CONFIG_NCPFS_NLS 1
#define CONFIG_NCPFS_EXTRAS 1

/*
 * Partition Types
 */
#define CONFIG_BSD_DISKLABEL 1
#define CONFIG_MAC_PARTITION 1
#undef  CONFIG_MINIX_SUBPARTITION
#define CONFIG_SMD_DISKLABEL 1
#define CONFIG_SOLARIS_X86_PARTITION 1
#define CONFIG_UNIXWARE_DISKLABEL 1
#define CONFIG_AMIGA_PARTITION 1
#define CONFIG_NLS 1

/*
 * Native Language Support
 */
#define CONFIG_NLS_DEFAULT "cp437"
#undef  CONFIG_NLS_CODEPAGE_437
#define CONFIG_NLS_CODEPAGE_437_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_737
#define CONFIG_NLS_CODEPAGE_737_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_775
#define CONFIG_NLS_CODEPAGE_775_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_850
#define CONFIG_NLS_CODEPAGE_850_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_852
#define CONFIG_NLS_CODEPAGE_852_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_855
#define CONFIG_NLS_CODEPAGE_855_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_857
#define CONFIG_NLS_CODEPAGE_857_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_860
#define CONFIG_NLS_CODEPAGE_860_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_861
#define CONFIG_NLS_CODEPAGE_861_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_862
#define CONFIG_NLS_CODEPAGE_862_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_863
#define CONFIG_NLS_CODEPAGE_863_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_864
#define CONFIG_NLS_CODEPAGE_864_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_865
#define CONFIG_NLS_CODEPAGE_865_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_866
#define CONFIG_NLS_CODEPAGE_866_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_869
#define CONFIG_NLS_CODEPAGE_869_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_874
#define CONFIG_NLS_CODEPAGE_874_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_932
#define CONFIG_NLS_CODEPAGE_932_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_936
#define CONFIG_NLS_CODEPAGE_936_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_949
#define CONFIG_NLS_CODEPAGE_949_MODULE 1
#undef  CONFIG_NLS_CODEPAGE_950
#define CONFIG_NLS_CODEPAGE_950_MODULE 1
#undef  CONFIG_NLS_ISO8859_1
#define CONFIG_NLS_ISO8859_1_MODULE 1
#undef  CONFIG_NLS_ISO8859_2
#define CONFIG_NLS_ISO8859_2_MODULE 1
#undef  CONFIG_NLS_ISO8859_3
#define CONFIG_NLS_ISO8859_3_MODULE 1
#undef  CONFIG_NLS_ISO8859_4
#define CONFIG_NLS_ISO8859_4_MODULE 1
#undef  CONFIG_NLS_ISO8859_5
#define CONFIG_NLS_ISO8859_5_MODULE 1
#undef  CONFIG_NLS_ISO8859_6
#define CONFIG_NLS_ISO8859_6_MODULE 1
#undef  CONFIG_NLS_ISO8859_7
#define CONFIG_NLS_ISO8859_7_MODULE 1
#undef  CONFIG_NLS_ISO8859_8
#define CONFIG_NLS_ISO8859_8_MODULE 1
#undef  CONFIG_NLS_ISO8859_9
#define CONFIG_NLS_ISO8859_9_MODULE 1
#undef  CONFIG_NLS_ISO8859_14
#define CONFIG_NLS_ISO8859_14_MODULE 1
#undef  CONFIG_NLS_ISO8859_15
#define CONFIG_NLS_ISO8859_15_MODULE 1
#undef  CONFIG_NLS_KOI8_R
#define CONFIG_NLS_KOI8_R_MODULE 1
#undef  CONFIG_NLS_KOI8_RU

/*
 * Kernel hacking
 */
#undef  CONFIG_MAGIC_SYSRQ
#undef  CONFIG_KGDB
#define CONFIG_XMON 1
