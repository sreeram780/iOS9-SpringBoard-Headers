/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface TIAddressBookMecabraCache : NSObject {

	BOOL _valid;
	NSArray* _nameReadingPairs;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSArray * nameReadingPairs;               //@synthesize nameReadingPairs=_nameReadingPairs - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(void)setNameReadingPairs:(NSArray *)arg1 ;
-(NSArray *)nameReadingPairs;
@end

