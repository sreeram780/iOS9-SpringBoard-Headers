/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLBuiltInArgument : MTLArgumentInternal {

	unsigned short _builtInType;
	unsigned short _builtInDataType;

}
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(BOOL)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 ;
-(unsigned long long)builtInDataType;
-(unsigned long long)builtInType;
@end

