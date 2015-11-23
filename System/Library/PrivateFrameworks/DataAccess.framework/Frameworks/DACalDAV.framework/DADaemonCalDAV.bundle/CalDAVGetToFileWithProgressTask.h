/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetToFileTask.h>

@class MobileCalDAVAttachmentDownloader, NSString;

@interface CalDAVGetToFileWithProgressTask : CoreDAVGetToFileTask {

	MobileCalDAVAttachmentDownloader* _downloader;
	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) MobileCalDAVAttachmentDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                           //@synthesize previousETag=_previousETag - In the implementation block
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
-(MobileCalDAVAttachmentDownloader *)downloader;
-(void)setDownloader:(MobileCalDAVAttachmentDownloader *)arg1 ;
@end

