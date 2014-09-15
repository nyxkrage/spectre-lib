//
//  MPTypes.h
//  MasterPassword
//
//  Created by Maarten Billemont on 02/01/12.
//  Copyright (c) 2012 Lyndir. All rights reserved.
//

#import "MPKey.h"

typedef NS_ENUM(NSUInteger, MPElementTypeClass) {
    /** Generate the password. */
            MPElementTypeClassGenerated = 1 << 4,
    /** Store the password. */
            MPElementTypeClassStored = 1 << 5,
};

typedef NS_ENUM(NSUInteger, MPElementVariant) {
    /** Generate the password. */
            MPElementVariantPassword,
    /** Generate the login name. */
            MPElementVariantLogin,
};

typedef NS_ENUM(NSUInteger, MPElementFeature) {
    /** Export the key-protected content data. */
            MPElementFeatureExportContent = 1 << 10,
    /** Never export content. */
            MPElementFeatureDevicePrivate = 1 << 11,
};

typedef NS_ENUM(NSUInteger, MPElementType) {
    MPElementTypeGeneratedMaximum = 0x0 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedLong = 0x1 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedMedium = 0x2 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedBasic = 0x4 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedShort = 0x3 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedPIN = 0x5 | MPElementTypeClassGenerated | 0x0,
    MPElementTypeGeneratedName = 0xF | MPElementTypeClassGenerated | 0x0,

    MPElementTypeStoredPersonal = 0x0 | MPElementTypeClassStored | MPElementFeatureExportContent,
    MPElementTypeStoredDevicePrivate = 0x1 | MPElementTypeClassStored | MPElementFeatureDevicePrivate,
};

#define MPErrorDomain                         @"MPErrorDomain"

#define MPCheckpointHelpChapter               @"MPCheckpointHelpChapter"
#define MPCheckpointCopyToPasteboard          @"MPCheckpointCopyToPasteboard"
#define MPCheckpointCopyLoginNameToPasteboard @"MPCheckpointCopyLoginNameToPasteboard"
#define MPCheckpointResetPasswordCounter      @"MPCheckpointResetPasswordCounter"
#define MPCheckpointIncrementPasswordCounter  @"MPCheckpointIncrementPasswordCounter"
#define MPCheckpointEditPassword              @"MPCheckpointEditPassword"
#define MPCheckpointEditLoginName             @"MPCheckpointEditLoginName"
#define MPCheckpointUseType                   @"MPCheckpointUseType"
#define MPCheckpointDeleteElement             @"MPCheckpointDeleteElement"
#define MPCheckpointShowGuide                 @"MPCheckpointShowGuide"
#define MPCheckpointShowSetup                 @"MPCheckpointShowSetup"
#define MPCheckpointChangeMP                  @"MPCheckpointChangeMP"
#define MPCheckpointMPErrorUbiquity           @"MPCheckpointMPErrorUbiquity"
#define MPCheckpointLocalStoreReset           @"MPCheckpointLocalStoreReset"
#define MPCheckpointCloudStoreReset           @"MPCheckpointCloudStoreReset"
#define MPCheckpointSignInFailed              @"MPCheckpointSignInFailed"
#define MPCheckpointSignedIn                  @"MPCheckpointSignedIn"
#define MPCheckpointConfig                    @"MPCheckpointConfig"
#define MPCheckpointCloud                     @"MPCheckpointCloud"
#define MPCheckpointSitesImported             @"MPCheckpointSitesImported"
#define MPCheckpointSitesExported             @"MPCheckpointSitesExported"
#define MPCheckpointExplicitMigration         @"MPCheckpointExplicitMigration"
#define MPCheckpointReview                    @"MPCheckpointReview"
#define MPCheckpointApps                      @"MPCheckpointApps"
#define MPCheckpointApp                       @"MPCheckpointApp"
#define MPCheckpointEmergencyGenerator        @"MPCheckpointEmergencyGenerator"
#define MPCheckpointLogs                      @"MPCheckpointLogs"
#define MPCheckpointStarted                   @"MPCheckpointStarted"

#define MPSignedInNotification                @"MPSignedInNotification"
#define MPSignedOutNotification               @"MPSignedOutNotification"
#define MPKeyForgottenNotification            @"MPKeyForgottenNotification"
#define MPElementUpdatedNotification          @"MPElementUpdatedNotification"
#define MPCheckConfigNotification             @"MPCheckConfigNotification"
#define MPSitesImportedNotification           @"MPSitesImportedNotification"
#define MPFoundInconsistenciesNotification    @"MPFoundInconsistenciesNotification"

#define MPSitesImportedNotificationUserKey    @"MPSitesImportedNotificationUserKey"
#define MPInconsistenciesFixResultUserKey     @"MPInconsistenciesFixResultUserKey"

static void MPCheckpoint(NSString *checkpoint, NSDictionary *attributes) {

    inf(@"%@: %@", checkpoint, attributes);
}
