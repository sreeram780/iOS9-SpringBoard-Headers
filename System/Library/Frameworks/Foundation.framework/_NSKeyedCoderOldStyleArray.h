/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	char _type;
	BOOL _decoded;
	char _padding[2];

}
-(id)initWithObjCType:(char)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(char)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

