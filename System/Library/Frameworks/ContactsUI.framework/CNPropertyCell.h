/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate, CNPresenterDelegate;
@class UIResponder, CNPropertyGroupItem;

@interface CNPropertyCell : CNLabeledCell {

	BOOL _allowsEditing;
	BOOL _ignoreSuggested;
	BOOL _forceSuggested;
	id _property;
	UIResponder* _firstResponderItem;
	double _labelWidth;
	id<CNPropertyCellDelegate> _delegate;
	id<CNPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic,__weak) id property;                                             //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UIResponder * firstResponderItem;                             //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                             //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL ignoreSuggested;                                           //@synthesize ignoreSuggested=_ignoreSuggested - In the implementation block
@property (assign,nonatomic) BOOL forceSuggested;                                            //@synthesize forceSuggested=_forceSuggested - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (assign,nonatomic) double labelWidth;                                              //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
-(void)performDefaultAction;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performAccessoryAction;
-(UIResponder *)firstResponderItem;
-(void)setIgnoreSuggested:(BOOL)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setForceSuggested:(BOOL)arg1 ;
-(void)setLabelWidth:(double)arg1 ;
-(BOOL)forceSuggested;
-(BOOL)ignoreSuggested;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(id)valueString;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(double)labelWidth;
-(void)setProperty:(id)arg1 ;
-(BOOL)isSuggested;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)copy:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)labelString;
-(id)property;
@end

