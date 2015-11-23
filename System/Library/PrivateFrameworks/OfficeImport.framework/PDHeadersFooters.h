/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PDHeadersFooters : NSObject {

	BOOL mHasDateTime;
	BOOL mHasNowDateTime;
	BOOL mHasUserDateTime;
	BOOL mHasSlideNumber;
	BOOL mHasHeader;
	BOOL mHasFooter;
	int mDateTimeFormat;
	NSString* mUserDateTime;
	NSString* mHeader;
	NSString* mFooter;

}
-(void)dealloc;
-(void)setHeader:(id)arg1 ;
-(id)header;
-(BOOL)hasDateTime;
-(void)setHasDateTime:(BOOL)arg1 ;
-(BOOL)hasNowDateTime;
-(void)setHasNowDateTime:(BOOL)arg1 ;
-(BOOL)hasUserDateTime;
-(void)setHasUserDateTime:(BOOL)arg1 ;
-(BOOL)hasSlideNumber;
-(void)setHasSlideNumber:(BOOL)arg1 ;
-(BOOL)hasHeader;
-(void)setHasHeader:(BOOL)arg1 ;
-(BOOL)hasFooter;
-(void)setHasFooter:(BOOL)arg1 ;
-(id)userDateTime;
-(void)setUserDateTime:(id)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
@end

