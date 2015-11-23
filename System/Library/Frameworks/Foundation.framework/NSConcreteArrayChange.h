/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSArrayChange.h>

@interface NSConcreteArrayChange : NSArrayChange {

	unsigned long long _changeType;
	unsigned long long _sourceIndex;
	unsigned long long _destinationIndex;
	id _value;

}
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)destinationIndex;
-(void)dealloc;
-(id)value;
-(unsigned long long)changeType;
@end

