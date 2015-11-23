/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {

	DisplayRefreshMonitorIOS* m_monitor;
	CADisplayLink* m_displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithMonitor:(DisplayRefreshMonitorIOS*)arg1 ;
@end

