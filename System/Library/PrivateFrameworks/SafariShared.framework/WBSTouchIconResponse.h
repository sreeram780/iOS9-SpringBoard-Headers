/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIImage, UIColor;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse {

	BOOL _generated;
	UIImage* _touchIcon;
	UIColor* _extractedBackgroundColor;

}

@property (nonatomic,readonly) UIImage * touchIcon;                             //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,readonly) UIColor * extractedBackgroundColor;              //@synthesize extractedBackgroundColor=_extractedBackgroundColor - In the implementation block
@property (getter=isGenerated,nonatomic,readonly) BOOL generated;               //@synthesize generated=_generated - In the implementation block
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isGenerated;
-(UIImage *)touchIcon;
-(id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(UIColor *)extractedBackgroundColor;
@end

