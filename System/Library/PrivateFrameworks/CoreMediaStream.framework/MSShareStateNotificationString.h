/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSShareStateNotificationString : NSObject {

	NSString* _sourcePersonID;
	NSString* _title;
	NSString* _body;

}

@property (nonatomic,retain) NSString * sourcePersonID;              //@synthesize sourcePersonID=_sourcePersonID - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                        //@synthesize body=_body - In the implementation block
+(id)notificationStringsWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3 ;
-(NSString *)sourcePersonID;
-(void)setSourcePersonID:(NSString *)arg1 ;
@end

