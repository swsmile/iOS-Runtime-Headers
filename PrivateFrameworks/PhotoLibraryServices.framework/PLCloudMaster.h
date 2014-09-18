/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSManagedObject, NSSet, NSString;

@interface PLCloudMaster : PLManagedObject {
}

@property(retain) NSSet * assetAttributes;
@property short cloudLocalState;
@property(retain) NSString * cloudMasterGUID;
@property short cloudServerState;
@property(retain) NSDate * creationDate;
@property(retain) NSString * filename;
@property short fullSizeJPEGSource;
@property(retain) NSDate * importDate;
@property(retain) NSManagedObject * mediaMetadata;
@property(retain) NSString * mediaMetadataType;
@property(retain) NSSet * resources;
@property(retain) NSString * uniformTypeIdentifier;

+ (id)allCloudMastersInManagedObjectContext:(id)arg1;
+ (id)cloudMasterWithGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersWithGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2;

- (void)awakeFromInsert;
- (id)cloudResourceForResourceType:(unsigned long long)arg1;
- (id)cplResourceForResourceType:(unsigned long long)arg1;
- (id)description;

@end