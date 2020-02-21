/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H
#define nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H

/*
 * signature   :  sRawEntryDescriptorInfo
 * global name :  nTECSInfo_sRawEntryDescriptorInfo
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES {
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT {
    uint16_t       (*getNRawEntryDescriptorInfo__T)( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *edp );
    ER             (*getRawDescriptor__T)( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *edp, int_t subsc, void** rawDesc );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Defined
#define  Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Defined
typedef struct { struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *vdes; } Descriptor( nTECSInfo_sRawEntryDescriptorInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SRAWENTRYDESCRIPTORINFO_GETNRAWENTRYDESCRIPTORINFO (1)
#define	FUNCID_NTECSINFO_SRAWENTRYDESCRIPTORINFO_GETRAWDESCRIPTOR (2)

#endif /* nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H */
