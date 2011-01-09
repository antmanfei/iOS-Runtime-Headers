/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, NSString, OADColorScheme, NSMutableDictionary;



@interface CMState : NSObject 
{
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mResources;
    NSInteger mSrcFormat;
    BOOL mIsThumbnail;
    NSInteger _textLevel;
}


- (id)init;
- (void)dealloc;
- (id)colorMap;
- (void)setColorMap:(id)arg1;
- (void)setSrcFormat:(NSInteger)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (NSInteger)sourceFormat;
- (id)colorScheme;
- (void)setColorScheme:(id)arg1;
- (void)setResources:(id)arg1;
- (BOOL)isThumbnail;
- (id)resources;
- (id)componentByName:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setResourceUrlPrefix:(id)arg1;
- (id)resourceUrlPrefix;
- (void)setHtmlResource:(id)arg1;
- (id)getHtmlResource;
- (BOOL)isOffice12;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (void)pushTextLevel;
- (void)popTextLevel;
- (NSInteger)textLevel;

@end