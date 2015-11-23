/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OCDReader, OCDWriter, OCDSummary, OADBlipCollection, NSMutableArray, OADTableStyleCollection, OITSUPointerKeyDictionary, OADTheme, OADTextListStyle, OADGraphicStyleCache, NSData;

@interface OCDDocument : NSObject {

	OCDReader* mReader;
	OCDWriter* mWriter;
	OCDSummary* mSummary;
	OADBlipCollection* mBlips;
	NSMutableArray* mCharts;
	OADTableStyleCollection* mTableStyles;
	OITSUPointerKeyDictionary* mDualDrawableMap;
	OADTheme* mDocumentTheme;
	OADTextListStyle* mDefaultTextStyle;
	OADGraphicStyleCache* mGraphicStyleCache;
	NSData* mEncryptionInfo;

}

@property (nonatomic,retain) OCDReader * reader; 
@property (nonatomic,retain) OCDWriter * writer; 
@property (nonatomic,readonly) OCDSummary * summary; 
@property (nonatomic,readonly) OADBlipCollection * blips; 
@property (nonatomic,readonly) NSMutableArray * charts; 
@property (nonatomic,readonly) OADTableStyleCollection * tableStyles; 
@property (nonatomic,readonly) OITSUPointerKeyDictionary * dualDrawableMap; 
@property (nonatomic,readonly) OADTextListStyle * defaultTextStyle; 
@property (nonatomic,retain) OADGraphicStyleCache * graphicStyleCache; 
-(void)dealloc;
-(id)init;
-(OADBlipCollection *)blips;
-(id)theme;
-(OCDSummary *)summary;
-(void)removeUnnecessaryOverrides;
-(OADTableStyleCollection *)tableStyles;
-(BOOL)isFromBinaryFile;
-(id)encryptionInfo;
-(void)setEncryptionInfo:(id)arg1 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)setTheme:(id)arg1 ;
-(OCDReader *)reader;
-(void)setReader:(OCDReader *)arg1 ;
-(OCDWriter *)writer;
-(void)setWriter:(OCDWriter *)arg1 ;
-(NSMutableArray *)charts;
-(OITSUPointerKeyDictionary *)dualDrawableMap;
-(OADTextListStyle *)defaultTextStyle;
-(OADGraphicStyleCache *)graphicStyleCache;
-(void)setGraphicStyleCache:(OADGraphicStyleCache *)arg1 ;
@end

