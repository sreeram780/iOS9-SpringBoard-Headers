/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest {

	STEmailMessage* _message;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(id)_initWithMessage:(id)arg1 ;
@end

