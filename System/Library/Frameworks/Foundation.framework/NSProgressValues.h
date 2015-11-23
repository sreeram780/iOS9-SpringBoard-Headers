/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, _NSProgressFraction, NSString;

@interface NSProgressValues : NSObject <NSSecureCoding> {

	NSMutableDictionary* _userInfo;
	_NSProgressFraction* _selfFraction;
	_NSProgressFraction* _childFraction;
	NSString* _localizedDescription;
	NSString* _localizedAdditionalDescription;
	BOOL _isCancellable;
	BOOL _isPausable;
	BOOL _isCancelled;
	BOOL _isPaused;
	BOOL _usingChildUserInfo;
	NSString* _kind;
	BOOL _isPrioritizable;
	long long _portionOfParent;

}
+(id)decodableClasses;
+(id)_derivedKeys;
+(id)_importantKeys;
+(BOOL)supportsSecureCoding;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(id)overallFraction;
-(void)setFractionCompleted:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)fractionCompleted;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
@end

