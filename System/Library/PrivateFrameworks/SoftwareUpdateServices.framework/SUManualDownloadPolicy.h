/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy {

	BOOL _downloadFreeForCellular;
	BOOL _downloadAllowableForCellular;
	BOOL _downloadAllowableForCellular2G;
	BOOL _downloadAllowableForCellularRoaming;
	BOOL _downloadAllowableForWiFi;
	BOOL _autoDownloadAllowableForCellular;
	BOOL _hasEnoughDiskSpace;
	BOOL _powerRequired;
	BOOL _downloadable;
	Class _fakeClass;

}

@property (nonatomic,retain) Class fakeClass;                                                                                    //@synthesize fakeClass=_fakeClass - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) BOOL downloadable;                                                            //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,getter=isPowerRequired,nonatomic) BOOL powerRequired;                                                          //@synthesize powerRequired=_powerRequired - In the implementation block
@property (assign,getter=hasEnoughDiskSpace,nonatomic) BOOL hasEnoughDiskSpace;                                                  //@synthesize hasEnoughDiskSpace=_hasEnoughDiskSpace - In the implementation block
@property (assign,getter=isDownloadFreeForCellular,nonatomic) BOOL downloadFreeForCellular;                                      //@synthesize downloadFreeForCellular=_downloadFreeForCellular - In the implementation block
@property (assign,getter=isDownloadAllowableForCellular,nonatomic) BOOL downloadAllowableForCellular;                            //@synthesize downloadAllowableForCellular=_downloadAllowableForCellular - In the implementation block
@property (assign,getter=isDownloadAllowableForCellular2G,nonatomic) BOOL downloadAllowableForCellular2G;                        //@synthesize downloadAllowableForCellular2G=_downloadAllowableForCellular2G - In the implementation block
@property (assign,getter=isDownloadAllowableForCellularRoaming,nonatomic) BOOL downloadAllowableForCellularRoaming;              //@synthesize downloadAllowableForCellularRoaming=_downloadAllowableForCellularRoaming - In the implementation block
@property (assign,getter=isDownloadAllowableForWiFi,nonatomic) BOOL downloadAllowableForWiFi;                                    //@synthesize downloadAllowableForWiFi=_downloadAllowableForWiFi - In the implementation block
-(BOOL)isDownloadable;
-(Class)class;
-(id)init;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(void)setDownloadable:(BOOL)arg1 ;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)superIsDownloadable;
-(Class)fakeClass;
-(void)setFakeClass:(Class)arg1 ;
-(void)setPowerRequired:(BOOL)arg1 ;
-(void)setHasEnoughDiskSpace:(BOOL)arg1 ;
-(void)setDownloadFreeForCellular:(BOOL)arg1 ;
-(void)setDownloadAllowableForCellular:(BOOL)arg1 ;
-(void)setDownloadAllowableForCellular2G:(BOOL)arg1 ;
-(void)setDownloadAllowableForCellularRoaming:(BOOL)arg1 ;
-(void)setDownloadAllowableForWiFi:(BOOL)arg1 ;
@end

