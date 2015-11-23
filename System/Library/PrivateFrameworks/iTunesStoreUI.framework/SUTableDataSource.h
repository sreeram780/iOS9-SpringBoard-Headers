/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SUVariableCellConfigurationCache, SUImageCache, ISURLOperationPool, NSArray;

@interface SUTableDataSource : NSObject {

	id _cellReuseSource;
	long long _columnCount;
	SUVariableCellConfigurationCache* _configurationCache;
	long long _preferringUserInteractionCount;

}

@property (assign,nonatomic) id cellReuseSource;                                                               //@synthesize cellReuseSource=_cellReuseSource - In the implementation block
@property (nonatomic,readonly) SUImageCache * imageCache; 
@property (nonatomic,readonly) ISURLOperationPool * imagePool; 
@property (nonatomic,readonly) long long tableViewStyle; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (assign,nonatomic) long long columnCount;                                                            //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (getter=isPreferringUserInteraction,nonatomic,readonly) BOOL preferringUserInteraction; 
-(SUImageCache *)imageCache;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)headerViewForSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(NSArray *)sectionIndexTitles;
-(long long)columnCount;
-(void)setColumnCount:(long long)arg1 ;
-(void)resetCaches;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)setCellReuseSource:(id)arg1 ;
-(BOOL)deleteIndexPath:(id)arg1 ;
-(void)resetLayoutCaches;
-(void)endPreferringUserInteraction;
-(void)beginPreferringUserInteraction;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(BOOL)canDeleteIndexPath:(id)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 ;
-(double)heightForPlaceholderCells;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg1 ;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(void)didBeginPreferringUserInteraction;
-(ISURLOperationPool *)imagePool;
-(void)didEndPreferringUserInteraction;
-(void)reloadCellContexts;
-(id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2 ;
-(id)cellContextForConfigurationClass:(Class)arg1 ;
-(BOOL)isPreferringUserInteraction;
-(long long)numberOfColumnsInSection:(long long)arg1 ;
-(id)cellReuseSource;
@end

