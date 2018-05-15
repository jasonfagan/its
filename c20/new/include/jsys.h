/* Header file for JSYS system call function */

typedef struct {
	int t1;
	int t2;
	int t3;
	int t4;
	} acblk;

/* Jsys definitions, these are from the MIT monsym circa early 1982 */

# define LOGIN	 01
# define CRJOB	 02
# define LGOUT	 03
# define CACCT	 04
# define EFACT	 05
# define SMON	 06
# define TMON	 07
# define GETAB	 010
# define ERSTR	 011
# define GETER	 012
# define GJINF	 013
# define TIME	 014
# define RUNTM	 015
# define SYSGT	 016
# define GNJFN	 017
# define GTJFN	 020
# define OPENF	 021
# define CLOSF	 022
# define RLJFN	 023
# define GTSTS	 024
# define STSTS	 025
# define DELF	 026
# define SFPTR	 027
# define JFNS	 030
# define FFFFP	 031
# define RDDIR	 032
# define CPRTF	 033
# define CLZFF	 034
# define RNAMF	 035
# define SIZEF	 036
# define GACTF	 037
# define STDIR	 040
# define DIRST	 041
# define BKJFN	 042
# define RFPTR	 043
# define CNDIR	 044
# define RFBSZ	 045
# define SFBSZ	 046
# define SWJFN	 047
# define BIN	 050
# define BOUT	 051
# define SIN	 052
# define SOUT	 053
# define RIN	 054
# define ROUT	 055
# define PMAP	 056
# define RPACS	 057
# define SPACS	 060
# define RMAP	 061
# define SACTF	 062
# define GTFDB	 063
# define CHFDB	 064
# define DUMPI	 065
# define DUMPO	 066
# define DELDF	 067
# define ASND	 070
# define RELD	 071
# define CSYNO	 072
# define PBIN	 073
# define PBOUT	 074
# define PSIN	 075
# define PSOUT	 076
# define MTOPR	 077
# define CFIBF	 0100
# define CFOBF	 0101
# define SIBE	 0102
# define SOBE	 0103
# define DOBE	 0104
# define GTABS	 0105
# define STABS	 0106
# define RFMOD	 0107
# define SFMOD	 0110
# define RFPOS	 0111
# define RFCOC	 0112
# define SFCOC	 0113
# define STI	 0114
# define DTACH	 0115
# define ATACH	 0116
# define DVCHR	 0117
# define STDEV	 0120
# define DEVST	 0121
# define MOUNT	 0122
# define DSMNT	 0123
# define INIDR	 0124
# define SIR	 0125
# define EIR	 0126
# define SKPIR	 0127
# define DIR	 0130
# define AIC	 0131
# define IIC	 0132
# define DIC	 0133
# define RCM	 0134
# define RWM	 0135
# define DEBRK	 0136
# define ATI	 0137
# define DTI	 0140
# define CIS	 0141
# define SIRCM	 0142
# define RIRCM	 0143
# define RIR	 0144
# define GDSTS	 0145
# define SDSTS	 0146
# define RESET	 0147
# define RPCAP	 0150
# define EPCAP	 0151
# define CFORK	 0152
# define KFORK	 0153
# define FFORK	 0154
# define RFORK	 0155
# define RFSTS	 0156
# define SFORK	 0157
# define SFACS	 0160
# define RFACS	 0161
# define HFORK	 0162
# define WFORK	 0163
# define GFRKH	 0164
# define RFRKH	 0165
# define GFRKS	 0166
# define DISMS	 0167
# define HALTF	 0170
# define GTRPW	 0171
# define GTRPI	 0172
# define RTIW	 0173
# define STIW	 0174
# define SOBF	 0175
# define RWSET	 0176
# define GETNM	 0177
# define GET	 0200
# define SFRKV	 0201
# define SAVE	 0202
# define SSAVE	 0203
# define SEVEC	 0204
# define GEVEC	 0205
# define GPJFN	 0206
# define SPJFN	 0207
# define SETNM	 0210
# define FFUFP	 0211
# define DIBE	 0212
# define FDFRE	 0213
# define GDSKC	 0214
# define LITES	 0215
# define TLINK	 0216
# define STPAR	 0217
# define ODTIM	 0220
# define IDTIM	 0221
# define ODCNV	 0222
# define IDCNV	 0223
# define NOUT	 0224
# define NIN	 0225
# define STAD	 0226
# define GTAD	 0227
# define ODTNC	 0230
# define IDTNC	 0231
# define FLIN	 0232
# define FLOUT	 0233
# define DFIN	 0234
# define DFOUT	 0235

# define CRDIR	 0240
# define GTDIR	 0241
# define DSKOP	 0242
# define SPRIW	 0243
# define DSKAS	 0244
# define SJPRI	 0245
# define STO	 0246
# define ARCF	 0247
# define ASNDP	 0260
# define RELDP	 0261
# define ASNDC	 0262
# define RELDC	 0263
# define STRDP	 0264
# define STPDP	 0265
# define STSDP	 0266
# define RDSDP	 0267
# define WATDP	 0270

# define GTNCP	 0272
# define GTHST	 0273
# define ATNVT	 0274
# define CVSKT	 0275
# define CVHST	 0276
# define FLHST	 0277

# define GCVEC	 0300
# define SCVEC	 0301
# define STTYP	 0302
# define GTTYP	 0303
# define BPT	 0304
# define GTDAL	 0305
# define WAIT	 0306
# define HSYS	 0307
# define USRIO	 0310
# define PEEK	 0311
# define MSFRK	 0312
# define ESOUT	 0313
# define SPLFK	 0314
# define ADVIS	 0315
# define JOBTM	 0316
# define DELNF	 0317
# define SWTCH	 0320
# define TFORK	 0321
# define RTFRK	 0322
# define UTFRK	 0323
# define SCTTY	 0324

# define OPRFN	 0326

# define SETER	 0336

/* NEW (NOT IN BBN TENEX) JSYS'S ADDED STARTING AT 500 */

# define RSCAN	 0500
# define HPTIM	 0501
# define CRLNM	 0502
# define INLNM	 0503
# define LNMST	 0504
# define RDTXT	 0505
# define SETSN	 0506
# define GETJI	 0507
# define MSEND	 0510
# define MRECV	 0511
# define MUTIL	 0512
# define ENQ	 0513
# define DEQ	 0514
# define ENQC	 0515
# define SNOOP	 0516
# define SPOOL	 0517
# define ALLOC	 0520
# define CHKAC	 0521
# define TIMER	 0522
# define RDTTY	 0523
# define TEXTI	 0524
# define UFPGS	 0525
# define SFPOS	 0526
# define SYERR	 0527
# define DIAG	 0530
# define SINR	 0531
# define SOUTR	 0532
# define RFTAD	 0533
# define SFTAD	 0534
# define TBDEL	 0535
# define TBADD	 0536
# define TBLUK	 0537
# define STCMP	 0540
# define SETJB	 0541
# define GDVEC	 0542
# define SDVEC	 0543
# define COMND	 0544
# define PRARG	 0545
# define GACCT	 0546
# define LPINI	 0547
# define GFUST	 0550
# define SFUST	 0551
# define ACCES	 0552
# define RCDIR	 0553
# define RCUSR	 0554
# define MSTR	 0555
# define STPPN	 0556
# define PPNST	 0557
# define PMCTL	 0560
# define PLOCK	 0561
# define BOOT	 0562
# define UTEST	 0563
# define USAGE	 0564
# define WILD	 0565
# define VACCT	 0566
# define NODE	 0567
# define ADBRK	 0570
# define SINM	 0571
# define SOUTM	 0572
# define SWTRP	 0573
# define GETOK	 0574
# define RCVOK	 0575
# define GIVOK	 0576
# define SKED	 0577
# define MTU	 0600
# define XRIR	 0601
# define XSIR	 0602

# define GTBLT	 0634
# define VTSOP	 0635
# define RTMOD	 0636
# define STMOD	 0637
# define RTCHR	 0640
# define STCHR	 0641
# define RTGRV	 0642
# define STGRV	 0643
# define DBGIM	 0677

/* TEMPORARY JSYS DEFINITIONS */

# define SEND	 0740
# define RECV	 0741
# define OPEN	 0742
# define CLOSE	 0743
# define SCSLV	 0744
# define STAT	 0745
# define CHANL	 0746
# define ABORT	 0747

/* MORE TEMPORARY JSYS DEFINITIONS */

# define SNDIM	 0750
# define RCVIM	 0751
# define ASNSQ	 0752
# define RELSQ	 0753

# define SNDIN	 0754
# define RCVIN	 0755
# define ASNIQ	 0756
# define RELIQ	 0757

# define METER	 0766
# define SMAP	 0767
# define THIBR	 0770
# define TWAKE	 0771
# define MRPAC	 0772
# define SETPV	 0773
# define MTALN	 0774
# define TTMSG	 0775
# define MDDT	 0777