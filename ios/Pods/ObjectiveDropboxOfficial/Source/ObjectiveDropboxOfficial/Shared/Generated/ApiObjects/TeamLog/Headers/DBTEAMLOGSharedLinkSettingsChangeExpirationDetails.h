///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBTEAMLOGSharedLinkSettingsChangeExpirationDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkSettingsChangeExpirationDetails` struct.
///
/// Changed the expiration date of the shared link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedLinkSettingsChangeExpirationDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Shared content access level.
@property (nonatomic, readonly) DBSHARINGAccessLevel *sharedContentAccessLevel;

/// Shared content link.
@property (nonatomic, readonly, copy, nullable) NSString *sharedContentLink;

/// New shared content link expiration date. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) NSDate *dNewValue;

/// Previous shared content link expiration date. Might be missing due to
/// historical data gap.
@property (nonatomic, readonly, nullable) NSDate *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedContentAccessLevel Shared content access level.
/// @param sharedContentLink Shared content link.
/// @param dNewValue New shared content link expiration date. Might be missing
/// due to historical data gap.
/// @param previousValue Previous shared content link expiration date. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(DBSHARINGAccessLevel *)sharedContentAccessLevel
                               sharedContentLink:(nullable NSString *)sharedContentLink
                                       dNewValue:(nullable NSDate *)dNewValue
                                   previousValue:(nullable NSDate *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param sharedContentAccessLevel Shared content access level.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(DBSHARINGAccessLevel *)sharedContentAccessLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedLinkSettingsChangeExpirationDetails`
/// struct.
///
@interface DBTEAMLOGSharedLinkSettingsChangeExpirationDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedLinkSettingsChangeExpirationDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedLinkSettingsChangeExpirationDetails` object.
///
+ (DBTEAMLOGSharedLinkSettingsChangeExpirationDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
