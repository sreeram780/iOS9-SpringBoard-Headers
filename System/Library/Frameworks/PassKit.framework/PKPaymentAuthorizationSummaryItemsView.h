/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationSummaryItemsView : UIView {

	NSMutableArray* _labelViews;
	NSMutableArray* _valueViews;
	NSMutableArray* _constraints;
	PKPaymentAuthorizationLayout* _layout;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)_labelAttributedStringWithString:(id)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)removeLabelsAndValues;
-(void)addLabel:(id)arg1 value:(id)arg2 itemType:(unsigned long long)arg3 ;
-(id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(PKPaymentAuthorizationLayout *)layout;
-(void)updateConstraints;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
@end

