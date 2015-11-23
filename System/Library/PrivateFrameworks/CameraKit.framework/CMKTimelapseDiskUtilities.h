/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMKTimelapseDiskUtilities : NSObject
+(BOOL)hasPendingIrisWork;
+(BOOL)hasPendingWork;
+(id)fileNameForImageFrameIndex:(long long)arg1 ;
+(id)directoryPathForTimelapseUUID:(id)arg1 ;
+(id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1 ;
+(BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg1 ;
+(BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
+(id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)timelapseDirectoryPath;
+(id)stateFileName;
+(id)stateFilePathForTimelapseUUID:(id)arg1 ;
+(id)secondaryStateFileName;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg1 ;
+(BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2 ;
+(id)timelapseUUIDsOnDisk;
+(id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2 ;
+(long long)frameIndexFromImageFileName:(id)arg1 ;
+(id)dummyFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3 ;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg1 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2 ;
+(BOOL)removeDummyFileForTimelapseUUID:(id)arg1 ;
@end

