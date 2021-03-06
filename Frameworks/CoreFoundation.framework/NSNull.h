/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSNull : NSObject <CAAction, NSCopying, NSSecureCoding, PQLBindable, SiriCoreSQLiteValue, TSDMixing, TSDPathPainter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)null;
+ (BOOL)supportsSecureCoding;

- (unsigned long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_fakeNil;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)sfu_appendJsonStringToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCoreSQLiteValue_escapedString:(BOOL)arg1;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (int)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;
- (void)tsch_saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_4_1; unsigned int x_1_4_2; char *x_1_4_3; } x_1_3_1; struct __short { union { unsigned char x_1_5_1; BOOL x_1_5_2; } x_2_4_1; BOOL x_2_4_2[11]; } x_1_3_2; struct __raw { unsigned long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
