/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFShowAlarmRequest : AFSiriRequest {

	NSArray* _alarms;

}

@property (nonatomic,copy) NSArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
@end

