/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {

	PDSlide* mSlide;
	int mMasterId;

}
+(id)createPair:(id)arg1 masterId:(int)arg2 ;
-(void)dealloc;
-(void)setSlide:(id)arg1 masterId:(int)arg2 ;
-(id)slide;
-(int)masterId;
@end

