/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FlickrRemoteSessionProtocol;
@interface FlickrUploadSession : NSObject {

	id<FlickrRemoteSessionProtocol> _remoteSession;

}
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPosts:(id)arg1 error:(id*)arg2 ;
@end

