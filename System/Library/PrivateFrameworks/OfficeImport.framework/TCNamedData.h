/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface TCNamedData : NSObject {

	NSData* mData;
	NSString* mName;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
+(id)namedDataWithData:(id)arg1 named:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(NSData *)data;
-(id)initWithData:(id)arg1 named:(id)arg2 ;
@end

