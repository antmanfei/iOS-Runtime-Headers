/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISTouchIDDialog : ISDialog {
    NSString * _body;
    BOOL  _isFree;
    NSString * _username;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic) BOOL isFree;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)body;
- (id)buttonForButtonType:(int)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (BOOL)isFree;
- (void)setBody:(id)arg1;
- (void)setIsFree:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end