/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMOutlineState : NSObject {

	unsigned long long counter[10];
	unsigned long long listId;

}
-(id)init;
-(void)reset;
-(unsigned long long)counterAtLevel:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(unsigned long long)listId;
-(id)initWithListId:(unsigned long long)arg1 ;
-(void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2 ;
@end

