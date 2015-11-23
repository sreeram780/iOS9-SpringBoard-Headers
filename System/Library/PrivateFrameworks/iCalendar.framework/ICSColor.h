/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface ICSColor : NSObject <NSCoding> {

	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;

}
+(BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4 ;
+(id)symbolicColorForLegacyRGB:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)red;
-(unsigned char)green;
-(unsigned char)blue;
-(id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
@end

