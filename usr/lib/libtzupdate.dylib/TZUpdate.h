/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject {

	TZFileSystemInterface* _fileSystemInterface;
	NSXPCConnection* _connectionToService;

}

@property (retain) TZFileSystemInterface * fileSystemInterface;              //@synthesize fileSystemInterface=_fileSystemInterface - In the implementation block
@property (retain) NSXPCConnection * connectionToService;                    //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)isUpdateWaitingWithCompletion:(/*^block*/id)arg1 ;
-(id)createNewXPCConnection;
-(BOOL)isUpdateWaiting;
-(TZFileSystemInterface *)fileSystemInterface;
-(void)purgeAllAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)affectedZones;
-(id)currentTZDataVersion;
-(BOOL)alertForAllZones;
-(id)updateTZDataVersion;
-(void)setFileSystemInterface:(TZFileSystemInterface *)arg1 ;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
@end

