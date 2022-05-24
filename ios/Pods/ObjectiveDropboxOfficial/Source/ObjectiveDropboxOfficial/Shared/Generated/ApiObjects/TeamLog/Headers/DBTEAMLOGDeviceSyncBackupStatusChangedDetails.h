///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGBackupStatus;
@class DBTEAMLOGDesktopDeviceSessionLogInfo;
@class DBTEAMLOGDeviceSyncBackupStatusChangedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceSyncBackupStatusChangedDetails` struct.
///
/// Enabled/disabled backup for computer.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceSyncBackupStatusChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Device's session logged information.
@property (nonatomic, readonly) DBTEAMLOGDesktopDeviceSessionLogInfo *desktopDeviceSessionInfo;

/// Previous status of computer backup on the device.
@property (nonatomic, readonly) DBTEAMLOGBackupStatus *previousValue;

/// Next status of computer backup on the device.
@property (nonatomic, readonly) DBTEAMLOGBackupStatus *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param desktopDeviceSessionInfo Device's session logged information.
/// @param previousValue Previous status of computer backup on the device.
/// @param dNewValue Next status of computer backup on the device.
///
/// @return An initialized instance.
///
- (instancetype)initWithDesktopDeviceSessionInfo:(DBTEAMLOGDesktopDeviceSessionLogInfo *)desktopDeviceSessionInfo
                                   previousValue:(DBTEAMLOGBackupStatus *)previousValue
                                       dNewValue:(DBTEAMLOGBackupStatus *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeviceSyncBackupStatusChangedDetails`
/// struct.
///
@interface DBTEAMLOGDeviceSyncBackupStatusChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDeviceSyncBackupStatusChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDeviceSyncBackupStatusChangedDetails` object.
///
+ (DBTEAMLOGDeviceSyncBackupStatusChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
