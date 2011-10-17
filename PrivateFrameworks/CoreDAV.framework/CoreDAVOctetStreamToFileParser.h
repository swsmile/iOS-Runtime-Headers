/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser  {
    NSFileHandle *_fileHandle;
}

@property(retain) NSFileHandle * fileHandle;


- (id)fileHandle;
- (void)setFileHandle:(id)arg1;
- (id)initWithFileHandle:(id)arg1;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
- (void)dealloc;

@end