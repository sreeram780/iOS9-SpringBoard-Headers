/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIDatePicker.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>

@class NSDate, NSString;

@interface PKDatePickerImpl_DatePicker : UIDatePicker <PKDatePickerInternalImplementationProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * date; 
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

