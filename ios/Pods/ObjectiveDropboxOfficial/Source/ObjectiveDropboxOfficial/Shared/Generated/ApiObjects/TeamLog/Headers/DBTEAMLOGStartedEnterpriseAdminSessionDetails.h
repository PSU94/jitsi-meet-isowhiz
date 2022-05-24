///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFedExtraDetails;
@class DBTEAMLOGStartedEnterpriseAdminSessionDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `StartedEnterpriseAdminSessionDetails` struct.
///
/// Started enterprise admin session.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGStartedEnterpriseAdminSessionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// More information about the organization or team.
@property (nonatomic, readonly) DBTEAMLOGFedExtraDetails *federationExtraDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param federationExtraDetails More information about the organization or
/// team.
///
/// @return An initialized instance.
///
- (instancetype)initWithFederationExtraDetails:(DBTEAMLOGFedExtraDetails *)federationExtraDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `StartedEnterpriseAdminSessionDetails`
/// struct.
///
@interface DBTEAMLOGStartedEnterpriseAdminSessionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGStartedEnterpriseAdminSessionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGStartedEnterpriseAdminSessionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGStartedEnterpriseAdminSessionDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGStartedEnterpriseAdminSessionDetails *)instance;

///
/// Deserializes `DBTEAMLOGStartedEnterpriseAdminSessionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGStartedEnterpriseAdminSessionDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGStartedEnterpriseAdminSessionDetails` object.
///
+ (DBTEAMLOGStartedEnterpriseAdminSessionDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
