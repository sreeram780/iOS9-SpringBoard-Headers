/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {

	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;

}
-(double)topMargin;
-(double)rightMargin;
-(double)leftMargin;
-(double)headerMargin;
-(double)bottomMargin;
-(BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(id)documentTitle;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(id)styleMatrix;
-(id)fileName;
-(id)archiver;
-(id)initWithWDom:(id)arg1 archiver:(id)arg2 ;
-(void)setFileName:(id)arg1 ;
-(void)mapWithState:(id)arg1 ;
@end

