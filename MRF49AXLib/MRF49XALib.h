

//Registers
#define STSREG                0x01
#define GENCREG               0x02
#define AFCCREG               0x03
#define TXCREG                0x04
#define TXBREG                0x05
#define CFSREG                0x06
#define RXCREG                0x07
#define BBFCREG               0x08
#define RXFIFOREG             0x09
#define FIFORSTREG            0x0A
#define SYNBREG               0x0B
#define DRSREG                0x0C
#define PMCREG                0x0D
#define WTSREG                0x0E
#define DCSREG                0x0F
#define BCSREG                0x10
#define PLLCREG               0x11

//STSREG Bit number and length
#define TXRXFIFO_BIT          15
#define TXRXFIFO_LEN          1
#define POR_BIT               14
#define POR_LEN               1
#define TXOWRXOF_BIT          13
#define TXOWRXOF_LEN          1
#define WUTINT_BIT            12
#define WUTINT_LEN            1
#define LCEXINT_BIT           11
#define LCEXINT_LEN           1
#define LBTD_BIT              10
#define LBTD_LEN              1
#define FIFOEM_BIT            9
#define FIFOEM_LEN            1
#define ATRSSI_BIT            8
#define ATRSSI_LEN            1
#define DQDO_BIT              7
#define DQDO_LEN              1
#define CLKRL_BIT             6
#define CLKRL_LEN             1
#define AFCCT_BIT             5
#define AFCCT_LEN             1
#define OFFSV_BIT             4
#define OFFSV_LEN             1
#define OFFSB_BIT             3
#define OFFSB_LEN             4

//GENCREG Bit number and length
#define TXDEN_BIT             7
#define TXDEN_LEN             1
#define FIFOEN_BIT            6
#define FIFOEN_LEN            1
#define FBS_BIT               5
#define FBS_LEN               2
#define LCS_BIT               3
#define LCS_LEN               4

//AFCCREG Bit number and length
#define AUTOMS_BIT            7
#define AUTOMS_LEN            2
#define ARFO_BIT              5
#define ARFO_LEN              2
#define MFCS_BIT              3
#define MFCS_LEN              1
#define HAM_BIT               2
#define HAM_LEN               1
#define FOREN_BIT             1
#define FOREN_LEN             1
#define FOFEN_BIT             0
#define FOFEN_LEN             1

//TXCREG Bit number and length
#define MODPLY_BIT            8
#define MODPLY_LEN            1
#define MODBW_BIT             7
#define MODBW_LEN             4
#define OTXPWR_BIT            2
#define OTXPWR_LEN            3

//TXBREG Bit number and length
#define TXDB_BIT              7
#define TXDB_LEN              8

//CFSREG Bit number and length
#define FREQB_BIT             11
#define FREQB_LEN             12

//RXCREG Bit number and length
#define FINTDIO_BIT           10
#define FINTDIO_LEN           1
#define DIORT_BIT             9
#define DIORT_LEN             2
#define RXBW_BIT              7
#define RXBW_LEN              3
#define RXLNA_BIT             4
#define RXLNA_LEN             2
#define DRSSIT_BIT            2
#define DRSSIT_LEN            3

//BBFCREG Bit number and length
#define ACRLC_BIT             7
#define ACRLC_LEN             1
#define MCRLC_BIT             6
#define MCRLC_LEN             1
#define FTYPE_BIT             4
#define FTYPE_LEN             1
#define DQTI_BIT              2
#define DQTI_LEN              3

//RXFIFOREG Bit number and length
#define RXDB                  7
#define RXDBLEN               8

//FIFORSTREG Bit number and length
#define FFBC_BIT              7
#define FFBC_LEN              4
#define SYCHLEN_BIT           3
#define SYCHLEN_LEN           1
#define FFSC_BIT              2
#define FFSC_LEN              1
#define FSCF_BIT              1
#define FSCF_LEN              1
#define DRSTM_BIT             0
#define DRSTM_LEN             1

//SYNBREG Bit number and length
#define SYNCB_BIT             7
#define SYNCB_LEN             8

//DRSREG Bit number and length
#define DRPE_BIT              7
#define DRPE_LEN              1
#define DRPV_BIT              6
#define DRPV_LEN              7

//PMCREG Bit number and length
#define RXCEN_BIT             7
#define RXCEN_LEN             1
#define BBCEN_BIT             6
#define BBCEN_LEN             1
#define TXCEN_BIT             5
#define TXCEN_LEN             1
#define SYNEN_BIT             4
#define SYNEN_LEN             1
#define OSCEN_BIT             3
#define OSCEN_LEN             1
#define LBDEN_BIT             2
#define LBDEN_LEN             1
#define WUTEN_BIT             1
#define WUTEN_LEN             1
#define CLKOEN_BIT            0
#define CLKOEN_LEN            1

//WTSREG Bit number and length
#define WTEV_BIT              12
#define WTEV_LEN              5
#define WTMV_BIT              7
#define WTMV_LEN              8

//DCSREG Bit number and length
#define DCMV_BIT              7
#define DCMV_LEN              7
#define DCMEN_BIT             0
#define DCMEN_LEN             1

//BCSREG Bit number and length
#define COFSB_BIT             7
#define COFSB_LEN             3
#define LBDVB_BIT             3
#define LBDVB_LEN             4

//PLLCREG Bit number and length
#define CBTC_BIT              6
#define CBTC_LEN              2
#define PDDS_BIT              3
#define PDDS_LEN              1
#define PLLDD_BIT             2
#define PLLDD_LEN             1
#define PLLBWB_BIT            0
#define PLLBWB_LEN            1




