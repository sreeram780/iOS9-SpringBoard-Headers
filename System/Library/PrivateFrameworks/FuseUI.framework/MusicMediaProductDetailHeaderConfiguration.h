/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPArtworkCatalog, NSString;

@interface MusicMediaProductDetailHeaderConfiguration : NSObject {

	BOOL _shouldIncludeHeader;
	BOOL _shouldUseSplitMainForContentView;
	MPArtworkCatalog* _headerArtworkCatalog;
	unsigned long long _headerStyle;
	NSString* _lockupArtworkProperty;

}

@property (nonatomic,retain) MPArtworkCatalog * headerArtworkCatalog;              //@synthesize headerArtworkCatalog=_headerArtworkCatalog - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                       //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                       //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeHeader;                             //@synthesize shouldIncludeHeader=_shouldIncludeHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSplitMainForContentView;                //@synthesize shouldUseSplitMainForContentView=_shouldUseSplitMainForContentView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(NSString *)lockupArtworkProperty;
-(unsigned long long)headerStyle;
-(void)setHeaderArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(BOOL)shouldIncludeHeader;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(BOOL)shouldUseSplitMainForContentView;
-(MPArtworkCatalog *)headerArtworkCatalog;
-(void)setShouldIncludeHeader:(BOOL)arg1 ;
-(void)setShouldUseSplitMainForContentView:(BOOL)arg1 ;
@end

