/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface __CNCallStack : NSObject {

	void* _frames;
	unsigned _count;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)frameCount;
-(void*)frames;
-(id)copyArrayRepresentation;
-(id)initWithFrames:(void*)arg1 count:(unsigned)arg2 ;
-(void)finalize;
@end

