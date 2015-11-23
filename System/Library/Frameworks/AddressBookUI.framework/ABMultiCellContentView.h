/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPersonCellContentView.h>
#import <libobjc.A.dylib/ABResponderDelegate.h>

@protocol ABMultiCellContentViewUpdateDelegate;
@class UITableViewCell, UIView, ABAbstractPropertyGroup;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {

	UITableViewCell* _cell;
	BOOL _usesCustomPropertyCell;
	UIView* _labelDivider;
	BOOL _isImportant;
	BOOL _isEmphasized;
	BOOL _isHighlighted;
	BOOL _allowsEditing;
	BOOL _isEditing;
	BOOL _shouldIgnoreEndEditing;
	int _property;
	ABAbstractPropertyGroup* _pg;
	id _pgInfo;
	BOOL _needsReload;
	UIView* _touchedView;
	id<ABMultiCellContentViewUpdateDelegate> _updateDelegate;
	int _abCellStyle;

}

@property (assign,nonatomic) UITableViewCell * cell;                                               //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) BOOL usesCustomPropertyCell;                                          //@synthesize usesCustomPropertyCell=_usesCustomPropertyCell - In the implementation block
@property (nonatomic,readonly) ABAbstractPropertyGroup * propertyGroup;                            //@synthesize pg=_pg - In the implementation block
@property (nonatomic,retain) id propertyGroupInfo;                                                 //@synthesize pgInfo=_pgInfo - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                   //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreEndEditing;                                          //@synthesize shouldIgnoreEndEditing=_shouldIgnoreEndEditing - In the implementation block
@property (assign,getter=isImportant,nonatomic) BOOL important;                                    //@synthesize isImportant=_isImportant - In the implementation block
@property (assign,getter=isEmphasized,nonatomic) BOOL emphasized;                                  //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) id<ABMultiCellContentViewUpdateDelegate> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic) int abCellStyle;                                                      //@synthesize abCellStyle=_abCellStyle - In the implementation block
+(Class)classForProperty:(int)arg1 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(CGSize)sizeThatFits:(CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5 ;
+(void)setupTextField:(id)arg1 withStyleProvider:(id)arg2 ;
+(id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(int)abCellStyle;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1 ;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1 ;
-(BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2 ;
-(BOOL)wantsLabelDivider;
-(id)initWithFrame:(CGRect)arg1 property:(int)arg2 ;
-(id)initCommonWithFrame:(CGRect)arg1 property:(int)arg2 ;
-(BOOL)canHandleProperty:(int)arg1 ;
-(void)setPropertyGroupInfo:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5 ;
-(BOOL)usesCustomPropertyCell;
-(id)labelTextColorWhenEditing:(BOOL)arg1 ;
-(id)displayTextColor;
-(id)displayHighlightedTextColor;
-(void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2 ;
-(void)layoutLabel;
-(CGRect)frameForLabelDivider;
-(id)badgeIconWhenEditing:(BOOL)arg1 ;
-(void)reloadLabelFromModel;
-(CGRect)rectForView:(id)arg1 ;
-(id)viewForFirstResponder;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(BOOL)canBeginEditingAnytime;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1 ;
-(BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2 ;
-(void)setPropertyGroup:(id)arg1 andInfo:(id)arg2 ;
-(void)clearTextFieldDelegates:(id)arg1 ;
-(id)newTextFieldWithFrame:(CGRect)arg1 tag:(long long)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4 ;
-(void)reloadIfNeeded:(BOOL)arg1 reloadFromModel:(BOOL)arg2 ;
-(CGRect)focusRectForView:(id)arg1 ;
-(void)setEmphasized:(BOOL)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
-(BOOL)entryFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)entryFieldShouldEndEditing:(id)arg1 ;
-(void)entryFieldDidBeginEditing:(id)arg1 ;
-(void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3 ;
-(void)entryField:(id)arg1 didEndEditingForKey:(id)arg2 ;
-(BOOL)entryFieldShouldReturn:(id)arg1 ;
-(ABAbstractPropertyGroup *)propertyGroup;
-(id)propertyGroupInfo;
-(BOOL)isImportant;
-(BOOL)isEmphasized;
-(id<ABMultiCellContentViewUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<ABMultiCellContentViewUpdateDelegate>)arg1 ;
-(void)setUsesCustomPropertyCell:(BOOL)arg1 ;
-(BOOL)shouldIgnoreEndEditing;
-(void)setShouldIgnoreEndEditing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pickerView;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)setLabelText:(id)arg1 ;
@end

