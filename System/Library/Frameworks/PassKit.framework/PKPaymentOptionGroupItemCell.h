/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>

@class PKPaymentOptionGroupItem;

@interface PKPaymentOptionGroupItemCell : PKTableViewCell {

	PKPaymentOptionGroupItem* _optionGroupItem;

}

@property (nonatomic,retain) PKPaymentOptionGroupItem * optionGroupItem;              //@synthesize optionGroupItem=_optionGroupItem - In the implementation block
-(void)_updateCellContent;
-(void)setOptionGroupItem:(PKPaymentOptionGroupItem *)arg1 ;
-(PKPaymentOptionGroupItem *)optionGroupItem;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

