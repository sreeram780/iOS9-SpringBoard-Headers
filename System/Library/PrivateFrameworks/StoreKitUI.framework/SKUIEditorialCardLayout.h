/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, SKUILockupViewElement, NSArray;

@interface SKUIEditorialCardLayout : NSObject {

	NSMutableArray* _allLockups;
	SKUILockupViewElement* _primaryLockup;
	CGSize _primaryLockupSize;
	double _secondaryLockupWidth;

}

@property (nonatomic,readonly) NSArray * allLockups;                               //@synthesize allLockups=_allLockups - In the implementation block
@property (nonatomic,readonly) SKUILockupViewElement * primaryLockup;              //@synthesize primaryLockup=_primaryLockup - In the implementation block
@property (nonatomic,readonly) CGSize primaryLockupSize;                           //@synthesize primaryLockupSize=_primaryLockupSize - In the implementation block
@property (nonatomic,readonly) double secondaryLockupWidth;                        //@synthesize secondaryLockupWidth=_secondaryLockupWidth - In the implementation block
-(id)initWithCard:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(NSArray *)allLockups;
-(SKUILockupViewElement *)primaryLockup;
-(CGSize)primaryLockupSize;
-(double)secondaryLockupWidth;
@end

