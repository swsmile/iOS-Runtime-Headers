/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSNumber *position;
@property (nonatomic, copy) NSNumber *primary;
@property (nonatomic, copy) NSString *source;
@property (readonly) Class superclass;

+ (id)teamRank;
+ (id)teamRankWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)position;
- (id)primary;
- (void)setPosition:(id)arg1;
- (void)setPrimary:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
