%package -n patterns-sailfish-device-adaptation-jasmine_sprout
Summary: Jolla HW Adaptation jasmine_sprout
Requires: droid-hal-jasmine_sprout
Requires: droid-hal-jasmine_sprout-img-boot
Requires: droid-hal-jasmine_sprout-kernel-modules
Requires: droid-config-jasmine_sprout-sailfish
Requires: droid-config-jasmine_sprout-pulseaudio-settings
Requires: droid-config-jasmine_sprout-policy-settings
Requires: droid-config-jasmine_sprout-preinit-plugin
Requires: droid-config-jasmine_sprout-flashing
Requires: droid-config-jasmine_sprout-bluez5
Requires: droid-hal-version-jasmine_sprout
Requires: droid-biometry-fp

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Telephony
Requires: ofono-ril-binder-plugin
Requires: dummy_netd

# Bluetooth
Requires: bluebinder

# Sensors
Requires: hybris-libsensorfw-qt5-binder

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
Requires: audiosystem-passthrough

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
#Requires: usb-moded-defaults-android
#Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
#Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
#Requires: jolla-devicelock-daemon-encsfa
Requires: sailfish-fpd-community 
Requires: sailfish-devicelock-fpd

# This is needed on devices like the MI A2.
Requires: droid-fake-crypt

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC for devices using Android 8 or newer as base
#Requires: nfcd-binder-plugin
#Requires: jolla-settings-system-nfc

# For torch
Requires: jolla-settings-system-flashlight

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

%description -n patterns-sailfish-device-adaptation-jasmine_sprout
Pattern with packages for jasmine_sprout HW Adaptation

%files -n patterns-sailfish-device-adaptation-jasmine_sprout
