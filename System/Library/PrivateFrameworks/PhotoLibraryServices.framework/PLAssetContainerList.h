/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAssetContainerList <NSObject,PLDiagnosticsProvider>
@property (nonatomic,readonly) unsigned long long containersCount; 
@required
-(id)containers;
-(unsigned long long)containersCount;
-(id)photoLibrary;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(BOOL)isEmpty;
-(id)managedObjectContext;

@end

