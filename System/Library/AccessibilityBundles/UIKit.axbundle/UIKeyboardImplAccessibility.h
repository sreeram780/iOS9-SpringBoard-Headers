/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardImplAccessibility_super.h>

@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInputModeToNextInPreferredList;
-(void)updateLayoutForInterfaceOrientation:(long long)arg1 ;
-(id)_accessibilityKeyboardInputDelegate;
-(BOOL)_accessibilityInputObjectUsesSecureText:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)updateTextCandidateView;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(void)dismissKeyboard;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 ;
-(void)acceptCandidate:(id)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)showKeyboard;
-(void)hideKeyboard;
-(void)toggleSoftwareKeyboard;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(BOOL)autocorrectSpellingEnabled;
@end

