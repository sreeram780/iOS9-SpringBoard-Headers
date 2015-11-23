/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class PDSlide;

@interface PMSlideMapper : CMMapper {

	PDSlide* mSlide;
	CGRect mRect;

}
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(void)mapMasterSlideAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(CGRect)slideRect;
-(id)defaultTheme;
-(id)initWithPDSlide:(id)arg1 slideRect:(CGRect)arg2 parent:(id)arg3 ;
-(id)slideName;
@end

