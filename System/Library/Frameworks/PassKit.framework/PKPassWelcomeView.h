/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView {

	UIButton* _appStoreButton;

}
+(id)messageAttributedString:(BOOL)arg1 ;
+(double)headerImageRegionHeight;
+(UIEdgeInsets)margins;
+(UIEdgeInsets)textInsets;
-(void)_scanCodePressed;
-(void)_appStorePressed;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
@end

