/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/TKTonePickerItem.h>

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem {

	long long _classicToneIndex;

}

@property (nonatomic,readonly) TKTonePickerItem * parentItem; 
@property (assign,nonatomic) long long classicToneIndex;                   //@synthesize classicToneIndex=_classicToneIndex - In the implementation block
-(TKTonePickerItem *)parentItem;
-(void)_setClassicToneIndex:(long long)arg1 ;
-(id)childItemAtIndex:(long long)arg1 ;
-(long long)classicToneIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

