/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;



@interface PBSlideState : NSObject 
{
    NSMutableDictionary *mBuildOrderMap;
    NSUInteger mCurrentGroupId;
}


- (void)addBuild:(id)arg1 order:(NSUInteger)arg2;
- (id)buildOrderMap;
- (NSUInteger)generateGroupId;
- (void)reset;
- (id)init;
- (void)dealloc;

@end