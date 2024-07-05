/*
 * Copyright © 2021 Cody Goodson (contact@vibimanx.com)
 * Copyright © 2022 Charles Giessen (charles@lunarg.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the “Software”), to deal in the Software without restriction, including without
 * limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
// This file is a part of VkBootstrap
// https://github.com/charles-lunarg/vk-bootstrap


#pragma once

#include <vulkan/vulkan_core.h>

namespace vkb {

#if (defined(VK_NV_external_memory_sci_buf))
inline bool compare_features_struct(VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& requested, VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& supported) {
    if (requested.sciBufImport && !supported.sciBufImport) return false;
    if (requested.sciBufExport && !supported.sciBufExport) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalMemorySciBufFeaturesNV & dest, VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& to_add) {
    dest.sciBufImport = dest.sciBufImport || to_add.sciBufImport;
    dest.sciBufExport = dest.sciBufExport || to_add.sciBufExport;
}
#endif
#if (defined(VK_NV_device_generated_commands))
inline bool compare_features_struct(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& requested, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& supported) {
    if (requested.deviceGeneratedCommands && !supported.deviceGeneratedCommands) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV & dest, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& to_add) {
    dest.deviceGeneratedCommands = dest.deviceGeneratedCommands || to_add.deviceGeneratedCommands;
}
#endif
#if (defined(VK_NV_device_generated_commands_compute))
inline bool compare_features_struct(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& requested, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& supported) {
    if (requested.deviceGeneratedCompute && !supported.deviceGeneratedCompute) return false;
    if (requested.deviceGeneratedComputePipelines && !supported.deviceGeneratedComputePipelines) return false;
    if (requested.deviceGeneratedComputeCaptureReplay && !supported.deviceGeneratedComputeCaptureReplay) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV & dest, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& to_add) {
    dest.deviceGeneratedCompute = dest.deviceGeneratedCompute || to_add.deviceGeneratedCompute;
    dest.deviceGeneratedComputePipelines = dest.deviceGeneratedComputePipelines || to_add.deviceGeneratedComputePipelines;
    dest.deviceGeneratedComputeCaptureReplay = dest.deviceGeneratedComputeCaptureReplay || to_add.deviceGeneratedComputeCaptureReplay;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDevicePrivateDataFeatures const& requested, VkPhysicalDevicePrivateDataFeatures const& supported) {
    if (requested.privateData && !supported.privateData) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePrivateDataFeatures & dest, VkPhysicalDevicePrivateDataFeatures const& to_add) {
    dest.privateData = dest.privateData || to_add.privateData;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDeviceVariablePointersFeatures const& requested, VkPhysicalDeviceVariablePointersFeatures const& supported) {
    if (requested.variablePointersStorageBuffer && !supported.variablePointersStorageBuffer) return false;
    if (requested.variablePointers && !supported.variablePointers) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVariablePointersFeatures & dest, VkPhysicalDeviceVariablePointersFeatures const& to_add) {
    dest.variablePointersStorageBuffer = dest.variablePointersStorageBuffer || to_add.variablePointersStorageBuffer;
    dest.variablePointers = dest.variablePointers || to_add.variablePointers;
}
#endif
#if (defined(VK_NV_external_sci_sync))
inline bool compare_features_struct(VkPhysicalDeviceExternalSciSyncFeaturesNV const& requested, VkPhysicalDeviceExternalSciSyncFeaturesNV const& supported) {
    if (requested.sciSyncFence && !supported.sciSyncFence) return false;
    if (requested.sciSyncSemaphore && !supported.sciSyncSemaphore) return false;
    if (requested.sciSyncImport && !supported.sciSyncImport) return false;
    if (requested.sciSyncExport && !supported.sciSyncExport) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalSciSyncFeaturesNV & dest, VkPhysicalDeviceExternalSciSyncFeaturesNV const& to_add) {
    dest.sciSyncFence = dest.sciSyncFence || to_add.sciSyncFence;
    dest.sciSyncSemaphore = dest.sciSyncSemaphore || to_add.sciSyncSemaphore;
    dest.sciSyncImport = dest.sciSyncImport || to_add.sciSyncImport;
    dest.sciSyncExport = dest.sciSyncExport || to_add.sciSyncExport;
}
#endif
#if (defined(VK_NV_external_sci_sync2))
inline bool compare_features_struct(VkPhysicalDeviceExternalSciSync2FeaturesNV const& requested, VkPhysicalDeviceExternalSciSync2FeaturesNV const& supported) {
    if (requested.sciSyncFence && !supported.sciSyncFence) return false;
    if (requested.sciSyncSemaphore2 && !supported.sciSyncSemaphore2) return false;
    if (requested.sciSyncImport && !supported.sciSyncImport) return false;
    if (requested.sciSyncExport && !supported.sciSyncExport) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalSciSync2FeaturesNV & dest, VkPhysicalDeviceExternalSciSync2FeaturesNV const& to_add) {
    dest.sciSyncFence = dest.sciSyncFence || to_add.sciSyncFence;
    dest.sciSyncSemaphore2 = dest.sciSyncSemaphore2 || to_add.sciSyncSemaphore2;
    dest.sciSyncImport = dest.sciSyncImport || to_add.sciSyncImport;
    dest.sciSyncExport = dest.sciSyncExport || to_add.sciSyncExport;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDeviceMultiviewFeatures const& requested, VkPhysicalDeviceMultiviewFeatures const& supported) {
    if (requested.multiview && !supported.multiview) return false;
    if (requested.multiviewGeometryShader && !supported.multiviewGeometryShader) return false;
    if (requested.multiviewTessellationShader && !supported.multiviewTessellationShader) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMultiviewFeatures & dest, VkPhysicalDeviceMultiviewFeatures const& to_add) {
    dest.multiview = dest.multiview || to_add.multiview;
    dest.multiviewGeometryShader = dest.multiviewGeometryShader || to_add.multiviewGeometryShader;
    dest.multiviewTessellationShader = dest.multiviewTessellationShader || to_add.multiviewTessellationShader;
}
#endif
#if (defined(VK_KHR_present_id))
inline bool compare_features_struct(VkPhysicalDevicePresentIdFeaturesKHR const& requested, VkPhysicalDevicePresentIdFeaturesKHR const& supported) {
    if (requested.presentId && !supported.presentId) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePresentIdFeaturesKHR & dest, VkPhysicalDevicePresentIdFeaturesKHR const& to_add) {
    dest.presentId = dest.presentId || to_add.presentId;
}
#endif
#if (defined(VK_KHR_present_wait))
inline bool compare_features_struct(VkPhysicalDevicePresentWaitFeaturesKHR const& requested, VkPhysicalDevicePresentWaitFeaturesKHR const& supported) {
    if (requested.presentWait && !supported.presentWait) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePresentWaitFeaturesKHR & dest, VkPhysicalDevicePresentWaitFeaturesKHR const& to_add) {
    dest.presentWait = dest.presentWait || to_add.presentWait;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDevice16BitStorageFeatures const& requested, VkPhysicalDevice16BitStorageFeatures const& supported) {
    if (requested.storageBuffer16BitAccess && !supported.storageBuffer16BitAccess) return false;
    if (requested.uniformAndStorageBuffer16BitAccess && !supported.uniformAndStorageBuffer16BitAccess) return false;
    if (requested.storagePushConstant16 && !supported.storagePushConstant16) return false;
    if (requested.storageInputOutput16 && !supported.storageInputOutput16) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevice16BitStorageFeatures & dest, VkPhysicalDevice16BitStorageFeatures const& to_add) {
    dest.storageBuffer16BitAccess = dest.storageBuffer16BitAccess || to_add.storageBuffer16BitAccess;
    dest.uniformAndStorageBuffer16BitAccess = dest.uniformAndStorageBuffer16BitAccess || to_add.uniformAndStorageBuffer16BitAccess;
    dest.storagePushConstant16 = dest.storagePushConstant16 || to_add.storagePushConstant16;
    dest.storageInputOutput16 = dest.storageInputOutput16 || to_add.storageInputOutput16;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& requested, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& supported) {
    if (requested.shaderSubgroupExtendedTypes && !supported.shaderSubgroupExtendedTypes) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures & dest, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& to_add) {
    dest.shaderSubgroupExtendedTypes = dest.shaderSubgroupExtendedTypes || to_add.shaderSubgroupExtendedTypes;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDeviceSamplerYcbcrConversionFeatures const& requested, VkPhysicalDeviceSamplerYcbcrConversionFeatures const& supported) {
    if (requested.samplerYcbcrConversion && !supported.samplerYcbcrConversion) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSamplerYcbcrConversionFeatures & dest, VkPhysicalDeviceSamplerYcbcrConversionFeatures const& to_add) {
    dest.samplerYcbcrConversion = dest.samplerYcbcrConversion || to_add.samplerYcbcrConversion;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDeviceProtectedMemoryFeatures const& requested, VkPhysicalDeviceProtectedMemoryFeatures const& supported) {
    if (requested.protectedMemory && !supported.protectedMemory) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceProtectedMemoryFeatures & dest, VkPhysicalDeviceProtectedMemoryFeatures const& to_add) {
    dest.protectedMemory = dest.protectedMemory || to_add.protectedMemory;
}
#endif
#if (defined(VK_EXT_blend_operation_advanced))
inline bool compare_features_struct(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& requested, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& supported) {
    if (requested.advancedBlendCoherentOperations && !supported.advancedBlendCoherentOperations) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT & dest, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& to_add) {
    dest.advancedBlendCoherentOperations = dest.advancedBlendCoherentOperations || to_add.advancedBlendCoherentOperations;
}
#endif
#if (defined(VK_EXT_multi_draw))
inline bool compare_features_struct(VkPhysicalDeviceMultiDrawFeaturesEXT const& requested, VkPhysicalDeviceMultiDrawFeaturesEXT const& supported) {
    if (requested.multiDraw && !supported.multiDraw) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMultiDrawFeaturesEXT & dest, VkPhysicalDeviceMultiDrawFeaturesEXT const& to_add) {
    dest.multiDraw = dest.multiDraw || to_add.multiDraw;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceInlineUniformBlockFeatures const& requested, VkPhysicalDeviceInlineUniformBlockFeatures const& supported) {
    if (requested.inlineUniformBlock && !supported.inlineUniformBlock) return false;
    if (requested.descriptorBindingInlineUniformBlockUpdateAfterBind && !supported.descriptorBindingInlineUniformBlockUpdateAfterBind) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceInlineUniformBlockFeatures & dest, VkPhysicalDeviceInlineUniformBlockFeatures const& to_add) {
    dest.inlineUniformBlock = dest.inlineUniformBlock || to_add.inlineUniformBlock;
    dest.descriptorBindingInlineUniformBlockUpdateAfterBind = dest.descriptorBindingInlineUniformBlockUpdateAfterBind || to_add.descriptorBindingInlineUniformBlockUpdateAfterBind;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceMaintenance4Features const& requested, VkPhysicalDeviceMaintenance4Features const& supported) {
    if (requested.maintenance4 && !supported.maintenance4) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMaintenance4Features & dest, VkPhysicalDeviceMaintenance4Features const& to_add) {
    dest.maintenance4 = dest.maintenance4 || to_add.maintenance4;
}
#endif
#if (defined(VK_KHR_maintenance5))
inline bool compare_features_struct(VkPhysicalDeviceMaintenance5FeaturesKHR const& requested, VkPhysicalDeviceMaintenance5FeaturesKHR const& supported) {
    if (requested.maintenance5 && !supported.maintenance5) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMaintenance5FeaturesKHR & dest, VkPhysicalDeviceMaintenance5FeaturesKHR const& to_add) {
    dest.maintenance5 = dest.maintenance5 || to_add.maintenance5;
}
#endif
#if (defined(VK_KHR_maintenance6))
inline bool compare_features_struct(VkPhysicalDeviceMaintenance6FeaturesKHR const& requested, VkPhysicalDeviceMaintenance6FeaturesKHR const& supported) {
    if (requested.maintenance6 && !supported.maintenance6) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMaintenance6FeaturesKHR & dest, VkPhysicalDeviceMaintenance6FeaturesKHR const& to_add) {
    dest.maintenance6 = dest.maintenance6 || to_add.maintenance6;
}
#endif
#if (defined(VK_KHR_maintenance7))
inline bool compare_features_struct(VkPhysicalDeviceMaintenance7FeaturesKHR const& requested, VkPhysicalDeviceMaintenance7FeaturesKHR const& supported) {
    if (requested.maintenance7 && !supported.maintenance7) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMaintenance7FeaturesKHR & dest, VkPhysicalDeviceMaintenance7FeaturesKHR const& to_add) {
    dest.maintenance7 = dest.maintenance7 || to_add.maintenance7;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_features_struct(VkPhysicalDeviceShaderDrawParametersFeatures const& requested, VkPhysicalDeviceShaderDrawParametersFeatures const& supported) {
    if (requested.shaderDrawParameters && !supported.shaderDrawParameters) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderDrawParametersFeatures & dest, VkPhysicalDeviceShaderDrawParametersFeatures const& to_add) {
    dest.shaderDrawParameters = dest.shaderDrawParameters || to_add.shaderDrawParameters;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceShaderFloat16Int8Features const& requested, VkPhysicalDeviceShaderFloat16Int8Features const& supported) {
    if (requested.shaderFloat16 && !supported.shaderFloat16) return false;
    if (requested.shaderInt8 && !supported.shaderInt8) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderFloat16Int8Features & dest, VkPhysicalDeviceShaderFloat16Int8Features const& to_add) {
    dest.shaderFloat16 = dest.shaderFloat16 || to_add.shaderFloat16;
    dest.shaderInt8 = dest.shaderInt8 || to_add.shaderInt8;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceHostQueryResetFeatures const& requested, VkPhysicalDeviceHostQueryResetFeatures const& supported) {
    if (requested.hostQueryReset && !supported.hostQueryReset) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceHostQueryResetFeatures & dest, VkPhysicalDeviceHostQueryResetFeatures const& to_add) {
    dest.hostQueryReset = dest.hostQueryReset || to_add.hostQueryReset;
}
#endif
#if (defined(VK_KHR_global_priority))
inline bool compare_features_struct(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& requested, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& supported) {
    if (requested.globalPriorityQuery && !supported.globalPriorityQuery) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR & dest, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& to_add) {
    dest.globalPriorityQuery = dest.globalPriorityQuery || to_add.globalPriorityQuery;
}
#endif
#if (defined(VK_EXT_device_memory_report))
inline bool compare_features_struct(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& requested, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& supported) {
    if (requested.deviceMemoryReport && !supported.deviceMemoryReport) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT & dest, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& to_add) {
    dest.deviceMemoryReport = dest.deviceMemoryReport || to_add.deviceMemoryReport;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceDescriptorIndexingFeatures const& requested, VkPhysicalDeviceDescriptorIndexingFeatures const& supported) {
    if (requested.shaderInputAttachmentArrayDynamicIndexing && !supported.shaderInputAttachmentArrayDynamicIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayDynamicIndexing && !supported.shaderUniformTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayDynamicIndexing && !supported.shaderStorageTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderUniformBufferArrayNonUniformIndexing && !supported.shaderUniformBufferArrayNonUniformIndexing) return false;
    if (requested.shaderSampledImageArrayNonUniformIndexing && !supported.shaderSampledImageArrayNonUniformIndexing) return false;
    if (requested.shaderStorageBufferArrayNonUniformIndexing && !supported.shaderStorageBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageImageArrayNonUniformIndexing && !supported.shaderStorageImageArrayNonUniformIndexing) return false;
    if (requested.shaderInputAttachmentArrayNonUniformIndexing && !supported.shaderInputAttachmentArrayNonUniformIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayNonUniformIndexing && !supported.shaderUniformTexelBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayNonUniformIndexing && !supported.shaderStorageTexelBufferArrayNonUniformIndexing) return false;
    if (requested.descriptorBindingUniformBufferUpdateAfterBind && !supported.descriptorBindingUniformBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingSampledImageUpdateAfterBind && !supported.descriptorBindingSampledImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageImageUpdateAfterBind && !supported.descriptorBindingStorageImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageBufferUpdateAfterBind && !supported.descriptorBindingStorageBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUniformTexelBufferUpdateAfterBind && !supported.descriptorBindingUniformTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageTexelBufferUpdateAfterBind && !supported.descriptorBindingStorageTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUpdateUnusedWhilePending && !supported.descriptorBindingUpdateUnusedWhilePending) return false;
    if (requested.descriptorBindingPartiallyBound && !supported.descriptorBindingPartiallyBound) return false;
    if (requested.descriptorBindingVariableDescriptorCount && !supported.descriptorBindingVariableDescriptorCount) return false;
    if (requested.runtimeDescriptorArray && !supported.runtimeDescriptorArray) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDescriptorIndexingFeatures & dest, VkPhysicalDeviceDescriptorIndexingFeatures const& to_add) {
    dest.shaderInputAttachmentArrayDynamicIndexing = dest.shaderInputAttachmentArrayDynamicIndexing || to_add.shaderInputAttachmentArrayDynamicIndexing;
    dest.shaderUniformTexelBufferArrayDynamicIndexing = dest.shaderUniformTexelBufferArrayDynamicIndexing || to_add.shaderUniformTexelBufferArrayDynamicIndexing;
    dest.shaderStorageTexelBufferArrayDynamicIndexing = dest.shaderStorageTexelBufferArrayDynamicIndexing || to_add.shaderStorageTexelBufferArrayDynamicIndexing;
    dest.shaderUniformBufferArrayNonUniformIndexing = dest.shaderUniformBufferArrayNonUniformIndexing || to_add.shaderUniformBufferArrayNonUniformIndexing;
    dest.shaderSampledImageArrayNonUniformIndexing = dest.shaderSampledImageArrayNonUniformIndexing || to_add.shaderSampledImageArrayNonUniformIndexing;
    dest.shaderStorageBufferArrayNonUniformIndexing = dest.shaderStorageBufferArrayNonUniformIndexing || to_add.shaderStorageBufferArrayNonUniformIndexing;
    dest.shaderStorageImageArrayNonUniformIndexing = dest.shaderStorageImageArrayNonUniformIndexing || to_add.shaderStorageImageArrayNonUniformIndexing;
    dest.shaderInputAttachmentArrayNonUniformIndexing = dest.shaderInputAttachmentArrayNonUniformIndexing || to_add.shaderInputAttachmentArrayNonUniformIndexing;
    dest.shaderUniformTexelBufferArrayNonUniformIndexing = dest.shaderUniformTexelBufferArrayNonUniformIndexing || to_add.shaderUniformTexelBufferArrayNonUniformIndexing;
    dest.shaderStorageTexelBufferArrayNonUniformIndexing = dest.shaderStorageTexelBufferArrayNonUniformIndexing || to_add.shaderStorageTexelBufferArrayNonUniformIndexing;
    dest.descriptorBindingUniformBufferUpdateAfterBind = dest.descriptorBindingUniformBufferUpdateAfterBind || to_add.descriptorBindingUniformBufferUpdateAfterBind;
    dest.descriptorBindingSampledImageUpdateAfterBind = dest.descriptorBindingSampledImageUpdateAfterBind || to_add.descriptorBindingSampledImageUpdateAfterBind;
    dest.descriptorBindingStorageImageUpdateAfterBind = dest.descriptorBindingStorageImageUpdateAfterBind || to_add.descriptorBindingStorageImageUpdateAfterBind;
    dest.descriptorBindingStorageBufferUpdateAfterBind = dest.descriptorBindingStorageBufferUpdateAfterBind || to_add.descriptorBindingStorageBufferUpdateAfterBind;
    dest.descriptorBindingUniformTexelBufferUpdateAfterBind = dest.descriptorBindingUniformTexelBufferUpdateAfterBind || to_add.descriptorBindingUniformTexelBufferUpdateAfterBind;
    dest.descriptorBindingStorageTexelBufferUpdateAfterBind = dest.descriptorBindingStorageTexelBufferUpdateAfterBind || to_add.descriptorBindingStorageTexelBufferUpdateAfterBind;
    dest.descriptorBindingUpdateUnusedWhilePending = dest.descriptorBindingUpdateUnusedWhilePending || to_add.descriptorBindingUpdateUnusedWhilePending;
    dest.descriptorBindingPartiallyBound = dest.descriptorBindingPartiallyBound || to_add.descriptorBindingPartiallyBound;
    dest.descriptorBindingVariableDescriptorCount = dest.descriptorBindingVariableDescriptorCount || to_add.descriptorBindingVariableDescriptorCount;
    dest.runtimeDescriptorArray = dest.runtimeDescriptorArray || to_add.runtimeDescriptorArray;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceTimelineSemaphoreFeatures const& requested, VkPhysicalDeviceTimelineSemaphoreFeatures const& supported) {
    if (requested.timelineSemaphore && !supported.timelineSemaphore) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceTimelineSemaphoreFeatures & dest, VkPhysicalDeviceTimelineSemaphoreFeatures const& to_add) {
    dest.timelineSemaphore = dest.timelineSemaphore || to_add.timelineSemaphore;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDevice8BitStorageFeatures const& requested, VkPhysicalDevice8BitStorageFeatures const& supported) {
    if (requested.storageBuffer8BitAccess && !supported.storageBuffer8BitAccess) return false;
    if (requested.uniformAndStorageBuffer8BitAccess && !supported.uniformAndStorageBuffer8BitAccess) return false;
    if (requested.storagePushConstant8 && !supported.storagePushConstant8) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevice8BitStorageFeatures & dest, VkPhysicalDevice8BitStorageFeatures const& to_add) {
    dest.storageBuffer8BitAccess = dest.storageBuffer8BitAccess || to_add.storageBuffer8BitAccess;
    dest.uniformAndStorageBuffer8BitAccess = dest.uniformAndStorageBuffer8BitAccess || to_add.uniformAndStorageBuffer8BitAccess;
    dest.storagePushConstant8 = dest.storagePushConstant8 || to_add.storagePushConstant8;
}
#endif
#if (defined(VK_EXT_conditional_rendering))
inline bool compare_features_struct(VkPhysicalDeviceConditionalRenderingFeaturesEXT const& requested, VkPhysicalDeviceConditionalRenderingFeaturesEXT const& supported) {
    if (requested.conditionalRendering && !supported.conditionalRendering) return false;
    if (requested.inheritedConditionalRendering && !supported.inheritedConditionalRendering) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceConditionalRenderingFeaturesEXT & dest, VkPhysicalDeviceConditionalRenderingFeaturesEXT const& to_add) {
    dest.conditionalRendering = dest.conditionalRendering || to_add.conditionalRendering;
    dest.inheritedConditionalRendering = dest.inheritedConditionalRendering || to_add.inheritedConditionalRendering;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceVulkanMemoryModelFeatures const& requested, VkPhysicalDeviceVulkanMemoryModelFeatures const& supported) {
    if (requested.vulkanMemoryModel && !supported.vulkanMemoryModel) return false;
    if (requested.vulkanMemoryModelDeviceScope && !supported.vulkanMemoryModelDeviceScope) return false;
    if (requested.vulkanMemoryModelAvailabilityVisibilityChains && !supported.vulkanMemoryModelAvailabilityVisibilityChains) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVulkanMemoryModelFeatures & dest, VkPhysicalDeviceVulkanMemoryModelFeatures const& to_add) {
    dest.vulkanMemoryModel = dest.vulkanMemoryModel || to_add.vulkanMemoryModel;
    dest.vulkanMemoryModelDeviceScope = dest.vulkanMemoryModelDeviceScope || to_add.vulkanMemoryModelDeviceScope;
    dest.vulkanMemoryModelAvailabilityVisibilityChains = dest.vulkanMemoryModelAvailabilityVisibilityChains || to_add.vulkanMemoryModelAvailabilityVisibilityChains;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceShaderAtomicInt64Features const& requested, VkPhysicalDeviceShaderAtomicInt64Features const& supported) {
    if (requested.shaderBufferInt64Atomics && !supported.shaderBufferInt64Atomics) return false;
    if (requested.shaderSharedInt64Atomics && !supported.shaderSharedInt64Atomics) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderAtomicInt64Features & dest, VkPhysicalDeviceShaderAtomicInt64Features const& to_add) {
    dest.shaderBufferInt64Atomics = dest.shaderBufferInt64Atomics || to_add.shaderBufferInt64Atomics;
    dest.shaderSharedInt64Atomics = dest.shaderSharedInt64Atomics || to_add.shaderSharedInt64Atomics;
}
#endif
#if (defined(VK_EXT_shader_atomic_float))
inline bool compare_features_struct(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& requested, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& supported) {
    if (requested.shaderBufferFloat32Atomics && !supported.shaderBufferFloat32Atomics) return false;
    if (requested.shaderBufferFloat32AtomicAdd && !supported.shaderBufferFloat32AtomicAdd) return false;
    if (requested.shaderBufferFloat64Atomics && !supported.shaderBufferFloat64Atomics) return false;
    if (requested.shaderBufferFloat64AtomicAdd && !supported.shaderBufferFloat64AtomicAdd) return false;
    if (requested.shaderSharedFloat32Atomics && !supported.shaderSharedFloat32Atomics) return false;
    if (requested.shaderSharedFloat32AtomicAdd && !supported.shaderSharedFloat32AtomicAdd) return false;
    if (requested.shaderSharedFloat64Atomics && !supported.shaderSharedFloat64Atomics) return false;
    if (requested.shaderSharedFloat64AtomicAdd && !supported.shaderSharedFloat64AtomicAdd) return false;
    if (requested.shaderImageFloat32Atomics && !supported.shaderImageFloat32Atomics) return false;
    if (requested.shaderImageFloat32AtomicAdd && !supported.shaderImageFloat32AtomicAdd) return false;
    if (requested.sparseImageFloat32Atomics && !supported.sparseImageFloat32Atomics) return false;
    if (requested.sparseImageFloat32AtomicAdd && !supported.sparseImageFloat32AtomicAdd) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT & dest, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& to_add) {
    dest.shaderBufferFloat32Atomics = dest.shaderBufferFloat32Atomics || to_add.shaderBufferFloat32Atomics;
    dest.shaderBufferFloat32AtomicAdd = dest.shaderBufferFloat32AtomicAdd || to_add.shaderBufferFloat32AtomicAdd;
    dest.shaderBufferFloat64Atomics = dest.shaderBufferFloat64Atomics || to_add.shaderBufferFloat64Atomics;
    dest.shaderBufferFloat64AtomicAdd = dest.shaderBufferFloat64AtomicAdd || to_add.shaderBufferFloat64AtomicAdd;
    dest.shaderSharedFloat32Atomics = dest.shaderSharedFloat32Atomics || to_add.shaderSharedFloat32Atomics;
    dest.shaderSharedFloat32AtomicAdd = dest.shaderSharedFloat32AtomicAdd || to_add.shaderSharedFloat32AtomicAdd;
    dest.shaderSharedFloat64Atomics = dest.shaderSharedFloat64Atomics || to_add.shaderSharedFloat64Atomics;
    dest.shaderSharedFloat64AtomicAdd = dest.shaderSharedFloat64AtomicAdd || to_add.shaderSharedFloat64AtomicAdd;
    dest.shaderImageFloat32Atomics = dest.shaderImageFloat32Atomics || to_add.shaderImageFloat32Atomics;
    dest.shaderImageFloat32AtomicAdd = dest.shaderImageFloat32AtomicAdd || to_add.shaderImageFloat32AtomicAdd;
    dest.sparseImageFloat32Atomics = dest.sparseImageFloat32Atomics || to_add.sparseImageFloat32Atomics;
    dest.sparseImageFloat32AtomicAdd = dest.sparseImageFloat32AtomicAdd || to_add.sparseImageFloat32AtomicAdd;
}
#endif
#if (defined(VK_EXT_shader_atomic_float2))
inline bool compare_features_struct(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& requested, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& supported) {
    if (requested.shaderBufferFloat16Atomics && !supported.shaderBufferFloat16Atomics) return false;
    if (requested.shaderBufferFloat16AtomicAdd && !supported.shaderBufferFloat16AtomicAdd) return false;
    if (requested.shaderBufferFloat16AtomicMinMax && !supported.shaderBufferFloat16AtomicMinMax) return false;
    if (requested.shaderBufferFloat32AtomicMinMax && !supported.shaderBufferFloat32AtomicMinMax) return false;
    if (requested.shaderBufferFloat64AtomicMinMax && !supported.shaderBufferFloat64AtomicMinMax) return false;
    if (requested.shaderSharedFloat16Atomics && !supported.shaderSharedFloat16Atomics) return false;
    if (requested.shaderSharedFloat16AtomicAdd && !supported.shaderSharedFloat16AtomicAdd) return false;
    if (requested.shaderSharedFloat16AtomicMinMax && !supported.shaderSharedFloat16AtomicMinMax) return false;
    if (requested.shaderSharedFloat32AtomicMinMax && !supported.shaderSharedFloat32AtomicMinMax) return false;
    if (requested.shaderSharedFloat64AtomicMinMax && !supported.shaderSharedFloat64AtomicMinMax) return false;
    if (requested.shaderImageFloat32AtomicMinMax && !supported.shaderImageFloat32AtomicMinMax) return false;
    if (requested.sparseImageFloat32AtomicMinMax && !supported.sparseImageFloat32AtomicMinMax) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT & dest, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& to_add) {
    dest.shaderBufferFloat16Atomics = dest.shaderBufferFloat16Atomics || to_add.shaderBufferFloat16Atomics;
    dest.shaderBufferFloat16AtomicAdd = dest.shaderBufferFloat16AtomicAdd || to_add.shaderBufferFloat16AtomicAdd;
    dest.shaderBufferFloat16AtomicMinMax = dest.shaderBufferFloat16AtomicMinMax || to_add.shaderBufferFloat16AtomicMinMax;
    dest.shaderBufferFloat32AtomicMinMax = dest.shaderBufferFloat32AtomicMinMax || to_add.shaderBufferFloat32AtomicMinMax;
    dest.shaderBufferFloat64AtomicMinMax = dest.shaderBufferFloat64AtomicMinMax || to_add.shaderBufferFloat64AtomicMinMax;
    dest.shaderSharedFloat16Atomics = dest.shaderSharedFloat16Atomics || to_add.shaderSharedFloat16Atomics;
    dest.shaderSharedFloat16AtomicAdd = dest.shaderSharedFloat16AtomicAdd || to_add.shaderSharedFloat16AtomicAdd;
    dest.shaderSharedFloat16AtomicMinMax = dest.shaderSharedFloat16AtomicMinMax || to_add.shaderSharedFloat16AtomicMinMax;
    dest.shaderSharedFloat32AtomicMinMax = dest.shaderSharedFloat32AtomicMinMax || to_add.shaderSharedFloat32AtomicMinMax;
    dest.shaderSharedFloat64AtomicMinMax = dest.shaderSharedFloat64AtomicMinMax || to_add.shaderSharedFloat64AtomicMinMax;
    dest.shaderImageFloat32AtomicMinMax = dest.shaderImageFloat32AtomicMinMax || to_add.shaderImageFloat32AtomicMinMax;
    dest.sparseImageFloat32AtomicMinMax = dest.sparseImageFloat32AtomicMinMax || to_add.sparseImageFloat32AtomicMinMax;
}
#endif
#if (defined(VK_KHR_vertex_attribute_divisor))
inline bool compare_features_struct(VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& requested, VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& supported) {
    if (requested.vertexAttributeInstanceRateDivisor && !supported.vertexAttributeInstanceRateDivisor) return false;
    if (requested.vertexAttributeInstanceRateZeroDivisor && !supported.vertexAttributeInstanceRateZeroDivisor) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR & dest, VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& to_add) {
    dest.vertexAttributeInstanceRateDivisor = dest.vertexAttributeInstanceRateDivisor || to_add.vertexAttributeInstanceRateDivisor;
    dest.vertexAttributeInstanceRateZeroDivisor = dest.vertexAttributeInstanceRateZeroDivisor || to_add.vertexAttributeInstanceRateZeroDivisor;
}
#endif
#if (defined(VK_EXT_astc_decode_mode))
inline bool compare_features_struct(VkPhysicalDeviceASTCDecodeFeaturesEXT const& requested, VkPhysicalDeviceASTCDecodeFeaturesEXT const& supported) {
    if (requested.decodeModeSharedExponent && !supported.decodeModeSharedExponent) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceASTCDecodeFeaturesEXT & dest, VkPhysicalDeviceASTCDecodeFeaturesEXT const& to_add) {
    dest.decodeModeSharedExponent = dest.decodeModeSharedExponent || to_add.decodeModeSharedExponent;
}
#endif
#if (defined(VK_EXT_transform_feedback))
inline bool compare_features_struct(VkPhysicalDeviceTransformFeedbackFeaturesEXT const& requested, VkPhysicalDeviceTransformFeedbackFeaturesEXT const& supported) {
    if (requested.transformFeedback && !supported.transformFeedback) return false;
    if (requested.geometryStreams && !supported.geometryStreams) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceTransformFeedbackFeaturesEXT & dest, VkPhysicalDeviceTransformFeedbackFeaturesEXT const& to_add) {
    dest.transformFeedback = dest.transformFeedback || to_add.transformFeedback;
    dest.geometryStreams = dest.geometryStreams || to_add.geometryStreams;
}
#endif
#if (defined(VK_NV_representative_fragment_test))
inline bool compare_features_struct(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& requested, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& supported) {
    if (requested.representativeFragmentTest && !supported.representativeFragmentTest) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV & dest, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& to_add) {
    dest.representativeFragmentTest = dest.representativeFragmentTest || to_add.representativeFragmentTest;
}
#endif
#if (defined(VK_NV_scissor_exclusive))
inline bool compare_features_struct(VkPhysicalDeviceExclusiveScissorFeaturesNV const& requested, VkPhysicalDeviceExclusiveScissorFeaturesNV const& supported) {
    if (requested.exclusiveScissor && !supported.exclusiveScissor) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExclusiveScissorFeaturesNV & dest, VkPhysicalDeviceExclusiveScissorFeaturesNV const& to_add) {
    dest.exclusiveScissor = dest.exclusiveScissor || to_add.exclusiveScissor;
}
#endif
#if (defined(VK_NV_corner_sampled_image))
inline bool compare_features_struct(VkPhysicalDeviceCornerSampledImageFeaturesNV const& requested, VkPhysicalDeviceCornerSampledImageFeaturesNV const& supported) {
    if (requested.cornerSampledImage && !supported.cornerSampledImage) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCornerSampledImageFeaturesNV & dest, VkPhysicalDeviceCornerSampledImageFeaturesNV const& to_add) {
    dest.cornerSampledImage = dest.cornerSampledImage || to_add.cornerSampledImage;
}
#endif
#if (defined(VK_NV_compute_shader_derivatives))
inline bool compare_features_struct(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& requested, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& supported) {
    if (requested.computeDerivativeGroupQuads && !supported.computeDerivativeGroupQuads) return false;
    if (requested.computeDerivativeGroupLinear && !supported.computeDerivativeGroupLinear) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV & dest, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& to_add) {
    dest.computeDerivativeGroupQuads = dest.computeDerivativeGroupQuads || to_add.computeDerivativeGroupQuads;
    dest.computeDerivativeGroupLinear = dest.computeDerivativeGroupLinear || to_add.computeDerivativeGroupLinear;
}
#endif
#if (defined(VK_NV_shader_image_footprint))
inline bool compare_features_struct(VkPhysicalDeviceShaderImageFootprintFeaturesNV const& requested, VkPhysicalDeviceShaderImageFootprintFeaturesNV const& supported) {
    if (requested.imageFootprint && !supported.imageFootprint) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderImageFootprintFeaturesNV & dest, VkPhysicalDeviceShaderImageFootprintFeaturesNV const& to_add) {
    dest.imageFootprint = dest.imageFootprint || to_add.imageFootprint;
}
#endif
#if (defined(VK_NV_dedicated_allocation_image_aliasing))
inline bool compare_features_struct(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& requested, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& supported) {
    if (requested.dedicatedAllocationImageAliasing && !supported.dedicatedAllocationImageAliasing) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV & dest, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& to_add) {
    dest.dedicatedAllocationImageAliasing = dest.dedicatedAllocationImageAliasing || to_add.dedicatedAllocationImageAliasing;
}
#endif
#if (defined(VK_NV_copy_memory_indirect))
inline bool compare_features_struct(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& requested, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& supported) {
    if (requested.indirectCopy && !supported.indirectCopy) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV & dest, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& to_add) {
    dest.indirectCopy = dest.indirectCopy || to_add.indirectCopy;
}
#endif
#if (defined(VK_NV_memory_decompression))
inline bool compare_features_struct(VkPhysicalDeviceMemoryDecompressionFeaturesNV const& requested, VkPhysicalDeviceMemoryDecompressionFeaturesNV const& supported) {
    if (requested.memoryDecompression && !supported.memoryDecompression) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMemoryDecompressionFeaturesNV & dest, VkPhysicalDeviceMemoryDecompressionFeaturesNV const& to_add) {
    dest.memoryDecompression = dest.memoryDecompression || to_add.memoryDecompression;
}
#endif
#if (defined(VK_NV_shading_rate_image))
inline bool compare_features_struct(VkPhysicalDeviceShadingRateImageFeaturesNV const& requested, VkPhysicalDeviceShadingRateImageFeaturesNV const& supported) {
    if (requested.shadingRateImage && !supported.shadingRateImage) return false;
    if (requested.shadingRateCoarseSampleOrder && !supported.shadingRateCoarseSampleOrder) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShadingRateImageFeaturesNV & dest, VkPhysicalDeviceShadingRateImageFeaturesNV const& to_add) {
    dest.shadingRateImage = dest.shadingRateImage || to_add.shadingRateImage;
    dest.shadingRateCoarseSampleOrder = dest.shadingRateCoarseSampleOrder || to_add.shadingRateCoarseSampleOrder;
}
#endif
#if (defined(VK_HUAWEI_invocation_mask))
inline bool compare_features_struct(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& requested, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& supported) {
    if (requested.invocationMask && !supported.invocationMask) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI & dest, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& to_add) {
    dest.invocationMask = dest.invocationMask || to_add.invocationMask;
}
#endif
#if (defined(VK_NV_mesh_shader))
inline bool compare_features_struct(VkPhysicalDeviceMeshShaderFeaturesNV const& requested, VkPhysicalDeviceMeshShaderFeaturesNV const& supported) {
    if (requested.taskShader && !supported.taskShader) return false;
    if (requested.meshShader && !supported.meshShader) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMeshShaderFeaturesNV & dest, VkPhysicalDeviceMeshShaderFeaturesNV const& to_add) {
    dest.taskShader = dest.taskShader || to_add.taskShader;
    dest.meshShader = dest.meshShader || to_add.meshShader;
}
#endif
#if (defined(VK_EXT_mesh_shader))
inline bool compare_features_struct(VkPhysicalDeviceMeshShaderFeaturesEXT const& requested, VkPhysicalDeviceMeshShaderFeaturesEXT const& supported) {
    if (requested.taskShader && !supported.taskShader) return false;
    if (requested.meshShader && !supported.meshShader) return false;
    if (requested.multiviewMeshShader && !supported.multiviewMeshShader) return false;
    if (requested.primitiveFragmentShadingRateMeshShader && !supported.primitiveFragmentShadingRateMeshShader) return false;
    if (requested.meshShaderQueries && !supported.meshShaderQueries) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMeshShaderFeaturesEXT & dest, VkPhysicalDeviceMeshShaderFeaturesEXT const& to_add) {
    dest.taskShader = dest.taskShader || to_add.taskShader;
    dest.meshShader = dest.meshShader || to_add.meshShader;
    dest.multiviewMeshShader = dest.multiviewMeshShader || to_add.multiviewMeshShader;
    dest.primitiveFragmentShadingRateMeshShader = dest.primitiveFragmentShadingRateMeshShader || to_add.primitiveFragmentShadingRateMeshShader;
    dest.meshShaderQueries = dest.meshShaderQueries || to_add.meshShaderQueries;
}
#endif
#if (defined(VK_KHR_acceleration_structure))
inline bool compare_features_struct(VkPhysicalDeviceAccelerationStructureFeaturesKHR const& requested, VkPhysicalDeviceAccelerationStructureFeaturesKHR const& supported) {
    if (requested.accelerationStructure && !supported.accelerationStructure) return false;
    if (requested.accelerationStructureCaptureReplay && !supported.accelerationStructureCaptureReplay) return false;
    if (requested.accelerationStructureIndirectBuild && !supported.accelerationStructureIndirectBuild) return false;
    if (requested.accelerationStructureHostCommands && !supported.accelerationStructureHostCommands) return false;
    if (requested.descriptorBindingAccelerationStructureUpdateAfterBind && !supported.descriptorBindingAccelerationStructureUpdateAfterBind) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceAccelerationStructureFeaturesKHR & dest, VkPhysicalDeviceAccelerationStructureFeaturesKHR const& to_add) {
    dest.accelerationStructure = dest.accelerationStructure || to_add.accelerationStructure;
    dest.accelerationStructureCaptureReplay = dest.accelerationStructureCaptureReplay || to_add.accelerationStructureCaptureReplay;
    dest.accelerationStructureIndirectBuild = dest.accelerationStructureIndirectBuild || to_add.accelerationStructureIndirectBuild;
    dest.accelerationStructureHostCommands = dest.accelerationStructureHostCommands || to_add.accelerationStructureHostCommands;
    dest.descriptorBindingAccelerationStructureUpdateAfterBind = dest.descriptorBindingAccelerationStructureUpdateAfterBind || to_add.descriptorBindingAccelerationStructureUpdateAfterBind;
}
#endif
#if (defined(VK_KHR_ray_tracing_pipeline))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& requested, VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& supported) {
    if (requested.rayTracingPipeline && !supported.rayTracingPipeline) return false;
    if (requested.rayTracingPipelineShaderGroupHandleCaptureReplay && !supported.rayTracingPipelineShaderGroupHandleCaptureReplay) return false;
    if (requested.rayTracingPipelineShaderGroupHandleCaptureReplayMixed && !supported.rayTracingPipelineShaderGroupHandleCaptureReplayMixed) return false;
    if (requested.rayTracingPipelineTraceRaysIndirect && !supported.rayTracingPipelineTraceRaysIndirect) return false;
    if (requested.rayTraversalPrimitiveCulling && !supported.rayTraversalPrimitiveCulling) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingPipelineFeaturesKHR & dest, VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& to_add) {
    dest.rayTracingPipeline = dest.rayTracingPipeline || to_add.rayTracingPipeline;
    dest.rayTracingPipelineShaderGroupHandleCaptureReplay = dest.rayTracingPipelineShaderGroupHandleCaptureReplay || to_add.rayTracingPipelineShaderGroupHandleCaptureReplay;
    dest.rayTracingPipelineShaderGroupHandleCaptureReplayMixed = dest.rayTracingPipelineShaderGroupHandleCaptureReplayMixed || to_add.rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    dest.rayTracingPipelineTraceRaysIndirect = dest.rayTracingPipelineTraceRaysIndirect || to_add.rayTracingPipelineTraceRaysIndirect;
    dest.rayTraversalPrimitiveCulling = dest.rayTraversalPrimitiveCulling || to_add.rayTraversalPrimitiveCulling;
}
#endif
#if (defined(VK_KHR_ray_query))
inline bool compare_features_struct(VkPhysicalDeviceRayQueryFeaturesKHR const& requested, VkPhysicalDeviceRayQueryFeaturesKHR const& supported) {
    if (requested.rayQuery && !supported.rayQuery) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayQueryFeaturesKHR & dest, VkPhysicalDeviceRayQueryFeaturesKHR const& to_add) {
    dest.rayQuery = dest.rayQuery || to_add.rayQuery;
}
#endif
#if (defined(VK_KHR_ray_tracing_maintenance1))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& requested, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& supported) {
    if (requested.rayTracingMaintenance1 && !supported.rayTracingMaintenance1) return false;
    if (requested.rayTracingPipelineTraceRaysIndirect2 && !supported.rayTracingPipelineTraceRaysIndirect2) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR & dest, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& to_add) {
    dest.rayTracingMaintenance1 = dest.rayTracingMaintenance1 || to_add.rayTracingMaintenance1;
    dest.rayTracingPipelineTraceRaysIndirect2 = dest.rayTracingPipelineTraceRaysIndirect2 || to_add.rayTracingPipelineTraceRaysIndirect2;
}
#endif
#if (defined(VK_EXT_fragment_density_map))
inline bool compare_features_struct(VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& requested, VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& supported) {
    if (requested.fragmentDensityMap && !supported.fragmentDensityMap) return false;
    if (requested.fragmentDensityMapDynamic && !supported.fragmentDensityMapDynamic) return false;
    if (requested.fragmentDensityMapNonSubsampledImages && !supported.fragmentDensityMapNonSubsampledImages) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentDensityMapFeaturesEXT & dest, VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& to_add) {
    dest.fragmentDensityMap = dest.fragmentDensityMap || to_add.fragmentDensityMap;
    dest.fragmentDensityMapDynamic = dest.fragmentDensityMapDynamic || to_add.fragmentDensityMapDynamic;
    dest.fragmentDensityMapNonSubsampledImages = dest.fragmentDensityMapNonSubsampledImages || to_add.fragmentDensityMapNonSubsampledImages;
}
#endif
#if (defined(VK_EXT_fragment_density_map2))
inline bool compare_features_struct(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& requested, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& supported) {
    if (requested.fragmentDensityMapDeferred && !supported.fragmentDensityMapDeferred) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT & dest, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& to_add) {
    dest.fragmentDensityMapDeferred = dest.fragmentDensityMapDeferred || to_add.fragmentDensityMapDeferred;
}
#endif
#if (defined(VK_QCOM_fragment_density_map_offset))
inline bool compare_features_struct(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& requested, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& supported) {
    if (requested.fragmentDensityMapOffset && !supported.fragmentDensityMapOffset) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM & dest, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& to_add) {
    dest.fragmentDensityMapOffset = dest.fragmentDensityMapOffset || to_add.fragmentDensityMapOffset;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceScalarBlockLayoutFeatures const& requested, VkPhysicalDeviceScalarBlockLayoutFeatures const& supported) {
    if (requested.scalarBlockLayout && !supported.scalarBlockLayout) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceScalarBlockLayoutFeatures & dest, VkPhysicalDeviceScalarBlockLayoutFeatures const& to_add) {
    dest.scalarBlockLayout = dest.scalarBlockLayout || to_add.scalarBlockLayout;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& requested, VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& supported) {
    if (requested.uniformBufferStandardLayout && !supported.uniformBufferStandardLayout) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceUniformBufferStandardLayoutFeatures & dest, VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& to_add) {
    dest.uniformBufferStandardLayout = dest.uniformBufferStandardLayout || to_add.uniformBufferStandardLayout;
}
#endif
#if (defined(VK_EXT_depth_clip_enable))
inline bool compare_features_struct(VkPhysicalDeviceDepthClipEnableFeaturesEXT const& requested, VkPhysicalDeviceDepthClipEnableFeaturesEXT const& supported) {
    if (requested.depthClipEnable && !supported.depthClipEnable) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDepthClipEnableFeaturesEXT & dest, VkPhysicalDeviceDepthClipEnableFeaturesEXT const& to_add) {
    dest.depthClipEnable = dest.depthClipEnable || to_add.depthClipEnable;
}
#endif
#if (defined(VK_EXT_memory_priority))
inline bool compare_features_struct(VkPhysicalDeviceMemoryPriorityFeaturesEXT const& requested, VkPhysicalDeviceMemoryPriorityFeaturesEXT const& supported) {
    if (requested.memoryPriority && !supported.memoryPriority) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMemoryPriorityFeaturesEXT & dest, VkPhysicalDeviceMemoryPriorityFeaturesEXT const& to_add) {
    dest.memoryPriority = dest.memoryPriority || to_add.memoryPriority;
}
#endif
#if (defined(VK_EXT_pageable_device_local_memory))
inline bool compare_features_struct(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& requested, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& supported) {
    if (requested.pageableDeviceLocalMemory && !supported.pageableDeviceLocalMemory) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT & dest, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& to_add) {
    dest.pageableDeviceLocalMemory = dest.pageableDeviceLocalMemory || to_add.pageableDeviceLocalMemory;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceBufferDeviceAddressFeatures const& requested, VkPhysicalDeviceBufferDeviceAddressFeatures const& supported) {
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceBufferDeviceAddressFeatures & dest, VkPhysicalDeviceBufferDeviceAddressFeatures const& to_add) {
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
}
#endif
#if (defined(VK_EXT_buffer_device_address))
inline bool compare_features_struct(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& requested, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& supported) {
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT & dest, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& to_add) {
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceImagelessFramebufferFeatures const& requested, VkPhysicalDeviceImagelessFramebufferFeatures const& supported) {
    if (requested.imagelessFramebuffer && !supported.imagelessFramebuffer) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImagelessFramebufferFeatures & dest, VkPhysicalDeviceImagelessFramebufferFeatures const& to_add) {
    dest.imagelessFramebuffer = dest.imagelessFramebuffer || to_add.imagelessFramebuffer;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& requested, VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& supported) {
    if (requested.textureCompressionASTC_HDR && !supported.textureCompressionASTC_HDR) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceTextureCompressionASTCHDRFeatures & dest, VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& to_add) {
    dest.textureCompressionASTC_HDR = dest.textureCompressionASTC_HDR || to_add.textureCompressionASTC_HDR;
}
#endif
#if (defined(VK_NV_cooperative_matrix))
inline bool compare_features_struct(VkPhysicalDeviceCooperativeMatrixFeaturesNV const& requested, VkPhysicalDeviceCooperativeMatrixFeaturesNV const& supported) {
    if (requested.cooperativeMatrix && !supported.cooperativeMatrix) return false;
    if (requested.cooperativeMatrixRobustBufferAccess && !supported.cooperativeMatrixRobustBufferAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCooperativeMatrixFeaturesNV & dest, VkPhysicalDeviceCooperativeMatrixFeaturesNV const& to_add) {
    dest.cooperativeMatrix = dest.cooperativeMatrix || to_add.cooperativeMatrix;
    dest.cooperativeMatrixRobustBufferAccess = dest.cooperativeMatrixRobustBufferAccess || to_add.cooperativeMatrixRobustBufferAccess;
}
#endif
#if (defined(VK_EXT_ycbcr_image_arrays))
inline bool compare_features_struct(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& requested, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& supported) {
    if (requested.ycbcrImageArrays && !supported.ycbcrImageArrays) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT & dest, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& to_add) {
    dest.ycbcrImageArrays = dest.ycbcrImageArrays || to_add.ycbcrImageArrays;
}
#endif
#if (defined(VK_NV_present_barrier))
inline bool compare_features_struct(VkPhysicalDevicePresentBarrierFeaturesNV const& requested, VkPhysicalDevicePresentBarrierFeaturesNV const& supported) {
    if (requested.presentBarrier && !supported.presentBarrier) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePresentBarrierFeaturesNV & dest, VkPhysicalDevicePresentBarrierFeaturesNV const& to_add) {
    dest.presentBarrier = dest.presentBarrier || to_add.presentBarrier;
}
#endif
#if (defined(VK_KHR_performance_query))
inline bool compare_features_struct(VkPhysicalDevicePerformanceQueryFeaturesKHR const& requested, VkPhysicalDevicePerformanceQueryFeaturesKHR const& supported) {
    if (requested.performanceCounterQueryPools && !supported.performanceCounterQueryPools) return false;
    if (requested.performanceCounterMultipleQueryPools && !supported.performanceCounterMultipleQueryPools) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePerformanceQueryFeaturesKHR & dest, VkPhysicalDevicePerformanceQueryFeaturesKHR const& to_add) {
    dest.performanceCounterQueryPools = dest.performanceCounterQueryPools || to_add.performanceCounterQueryPools;
    dest.performanceCounterMultipleQueryPools = dest.performanceCounterMultipleQueryPools || to_add.performanceCounterMultipleQueryPools;
}
#endif
#if (defined(VK_NV_coverage_reduction_mode))
inline bool compare_features_struct(VkPhysicalDeviceCoverageReductionModeFeaturesNV const& requested, VkPhysicalDeviceCoverageReductionModeFeaturesNV const& supported) {
    if (requested.coverageReductionMode && !supported.coverageReductionMode) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCoverageReductionModeFeaturesNV & dest, VkPhysicalDeviceCoverageReductionModeFeaturesNV const& to_add) {
    dest.coverageReductionMode = dest.coverageReductionMode || to_add.coverageReductionMode;
}
#endif
#if (defined(VK_INTEL_shader_integer_functions2))
inline bool compare_features_struct(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& requested, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& supported) {
    if (requested.shaderIntegerFunctions2 && !supported.shaderIntegerFunctions2) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL & dest, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& to_add) {
    dest.shaderIntegerFunctions2 = dest.shaderIntegerFunctions2 || to_add.shaderIntegerFunctions2;
}
#endif
#if (defined(VK_KHR_shader_clock))
inline bool compare_features_struct(VkPhysicalDeviceShaderClockFeaturesKHR const& requested, VkPhysicalDeviceShaderClockFeaturesKHR const& supported) {
    if (requested.shaderSubgroupClock && !supported.shaderSubgroupClock) return false;
    if (requested.shaderDeviceClock && !supported.shaderDeviceClock) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderClockFeaturesKHR & dest, VkPhysicalDeviceShaderClockFeaturesKHR const& to_add) {
    dest.shaderSubgroupClock = dest.shaderSubgroupClock || to_add.shaderSubgroupClock;
    dest.shaderDeviceClock = dest.shaderDeviceClock || to_add.shaderDeviceClock;
}
#endif
#if (defined(VK_KHR_index_type_uint8))
inline bool compare_features_struct(VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& requested, VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& supported) {
    if (requested.indexTypeUint8 && !supported.indexTypeUint8) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceIndexTypeUint8FeaturesKHR & dest, VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& to_add) {
    dest.indexTypeUint8 = dest.indexTypeUint8 || to_add.indexTypeUint8;
}
#endif
#if (defined(VK_NV_shader_sm_builtins))
inline bool compare_features_struct(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& requested, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& supported) {
    if (requested.shaderSMBuiltins && !supported.shaderSMBuiltins) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV & dest, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& to_add) {
    dest.shaderSMBuiltins = dest.shaderSMBuiltins || to_add.shaderSMBuiltins;
}
#endif
#if (defined(VK_EXT_fragment_shader_interlock))
inline bool compare_features_struct(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& requested, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& supported) {
    if (requested.fragmentShaderSampleInterlock && !supported.fragmentShaderSampleInterlock) return false;
    if (requested.fragmentShaderPixelInterlock && !supported.fragmentShaderPixelInterlock) return false;
    if (requested.fragmentShaderShadingRateInterlock && !supported.fragmentShaderShadingRateInterlock) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT & dest, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& to_add) {
    dest.fragmentShaderSampleInterlock = dest.fragmentShaderSampleInterlock || to_add.fragmentShaderSampleInterlock;
    dest.fragmentShaderPixelInterlock = dest.fragmentShaderPixelInterlock || to_add.fragmentShaderPixelInterlock;
    dest.fragmentShaderShadingRateInterlock = dest.fragmentShaderShadingRateInterlock || to_add.fragmentShaderShadingRateInterlock;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& requested, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& supported) {
    if (requested.separateDepthStencilLayouts && !supported.separateDepthStencilLayouts) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures & dest, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& to_add) {
    dest.separateDepthStencilLayouts = dest.separateDepthStencilLayouts || to_add.separateDepthStencilLayouts;
}
#endif
#if (defined(VK_EXT_primitive_topology_list_restart))
inline bool compare_features_struct(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& requested, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& supported) {
    if (requested.primitiveTopologyListRestart && !supported.primitiveTopologyListRestart) return false;
    if (requested.primitiveTopologyPatchListRestart && !supported.primitiveTopologyPatchListRestart) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT & dest, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& to_add) {
    dest.primitiveTopologyListRestart = dest.primitiveTopologyListRestart || to_add.primitiveTopologyListRestart;
    dest.primitiveTopologyPatchListRestart = dest.primitiveTopologyPatchListRestart || to_add.primitiveTopologyPatchListRestart;
}
#endif
#if (defined(VK_KHR_pipeline_executable_properties))
inline bool compare_features_struct(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& requested, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& supported) {
    if (requested.pipelineExecutableInfo && !supported.pipelineExecutableInfo) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR & dest, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& to_add) {
    dest.pipelineExecutableInfo = dest.pipelineExecutableInfo || to_add.pipelineExecutableInfo;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& requested, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& supported) {
    if (requested.shaderDemoteToHelperInvocation && !supported.shaderDemoteToHelperInvocation) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures & dest, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& to_add) {
    dest.shaderDemoteToHelperInvocation = dest.shaderDemoteToHelperInvocation || to_add.shaderDemoteToHelperInvocation;
}
#endif
#if (defined(VK_EXT_texel_buffer_alignment))
inline bool compare_features_struct(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& requested, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& supported) {
    if (requested.texelBufferAlignment && !supported.texelBufferAlignment) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT & dest, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& to_add) {
    dest.texelBufferAlignment = dest.texelBufferAlignment || to_add.texelBufferAlignment;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceSubgroupSizeControlFeatures const& requested, VkPhysicalDeviceSubgroupSizeControlFeatures const& supported) {
    if (requested.subgroupSizeControl && !supported.subgroupSizeControl) return false;
    if (requested.computeFullSubgroups && !supported.computeFullSubgroups) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSubgroupSizeControlFeatures & dest, VkPhysicalDeviceSubgroupSizeControlFeatures const& to_add) {
    dest.subgroupSizeControl = dest.subgroupSizeControl || to_add.subgroupSizeControl;
    dest.computeFullSubgroups = dest.computeFullSubgroups || to_add.computeFullSubgroups;
}
#endif
#if (defined(VK_KHR_line_rasterization))
inline bool compare_features_struct(VkPhysicalDeviceLineRasterizationFeaturesKHR const& requested, VkPhysicalDeviceLineRasterizationFeaturesKHR const& supported) {
    if (requested.rectangularLines && !supported.rectangularLines) return false;
    if (requested.bresenhamLines && !supported.bresenhamLines) return false;
    if (requested.smoothLines && !supported.smoothLines) return false;
    if (requested.stippledRectangularLines && !supported.stippledRectangularLines) return false;
    if (requested.stippledBresenhamLines && !supported.stippledBresenhamLines) return false;
    if (requested.stippledSmoothLines && !supported.stippledSmoothLines) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceLineRasterizationFeaturesKHR & dest, VkPhysicalDeviceLineRasterizationFeaturesKHR const& to_add) {
    dest.rectangularLines = dest.rectangularLines || to_add.rectangularLines;
    dest.bresenhamLines = dest.bresenhamLines || to_add.bresenhamLines;
    dest.smoothLines = dest.smoothLines || to_add.smoothLines;
    dest.stippledRectangularLines = dest.stippledRectangularLines || to_add.stippledRectangularLines;
    dest.stippledBresenhamLines = dest.stippledBresenhamLines || to_add.stippledBresenhamLines;
    dest.stippledSmoothLines = dest.stippledSmoothLines || to_add.stippledSmoothLines;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDevicePipelineCreationCacheControlFeatures const& requested, VkPhysicalDevicePipelineCreationCacheControlFeatures const& supported) {
    if (requested.pipelineCreationCacheControl && !supported.pipelineCreationCacheControl) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelineCreationCacheControlFeatures & dest, VkPhysicalDevicePipelineCreationCacheControlFeatures const& to_add) {
    dest.pipelineCreationCacheControl = dest.pipelineCreationCacheControl || to_add.pipelineCreationCacheControl;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceVulkan11Features const& requested, VkPhysicalDeviceVulkan11Features const& supported) {
    if (requested.storageBuffer16BitAccess && !supported.storageBuffer16BitAccess) return false;
    if (requested.uniformAndStorageBuffer16BitAccess && !supported.uniformAndStorageBuffer16BitAccess) return false;
    if (requested.storagePushConstant16 && !supported.storagePushConstant16) return false;
    if (requested.storageInputOutput16 && !supported.storageInputOutput16) return false;
    if (requested.multiview && !supported.multiview) return false;
    if (requested.multiviewGeometryShader && !supported.multiviewGeometryShader) return false;
    if (requested.multiviewTessellationShader && !supported.multiviewTessellationShader) return false;
    if (requested.variablePointersStorageBuffer && !supported.variablePointersStorageBuffer) return false;
    if (requested.variablePointers && !supported.variablePointers) return false;
    if (requested.protectedMemory && !supported.protectedMemory) return false;
    if (requested.samplerYcbcrConversion && !supported.samplerYcbcrConversion) return false;
    if (requested.shaderDrawParameters && !supported.shaderDrawParameters) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVulkan11Features & dest, VkPhysicalDeviceVulkan11Features const& to_add) {
    dest.storageBuffer16BitAccess = dest.storageBuffer16BitAccess || to_add.storageBuffer16BitAccess;
    dest.uniformAndStorageBuffer16BitAccess = dest.uniformAndStorageBuffer16BitAccess || to_add.uniformAndStorageBuffer16BitAccess;
    dest.storagePushConstant16 = dest.storagePushConstant16 || to_add.storagePushConstant16;
    dest.storageInputOutput16 = dest.storageInputOutput16 || to_add.storageInputOutput16;
    dest.multiview = dest.multiview || to_add.multiview;
    dest.multiviewGeometryShader = dest.multiviewGeometryShader || to_add.multiviewGeometryShader;
    dest.multiviewTessellationShader = dest.multiviewTessellationShader || to_add.multiviewTessellationShader;
    dest.variablePointersStorageBuffer = dest.variablePointersStorageBuffer || to_add.variablePointersStorageBuffer;
    dest.variablePointers = dest.variablePointers || to_add.variablePointers;
    dest.protectedMemory = dest.protectedMemory || to_add.protectedMemory;
    dest.samplerYcbcrConversion = dest.samplerYcbcrConversion || to_add.samplerYcbcrConversion;
    dest.shaderDrawParameters = dest.shaderDrawParameters || to_add.shaderDrawParameters;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_features_struct(VkPhysicalDeviceVulkan12Features const& requested, VkPhysicalDeviceVulkan12Features const& supported) {
    if (requested.samplerMirrorClampToEdge && !supported.samplerMirrorClampToEdge) return false;
    if (requested.drawIndirectCount && !supported.drawIndirectCount) return false;
    if (requested.storageBuffer8BitAccess && !supported.storageBuffer8BitAccess) return false;
    if (requested.uniformAndStorageBuffer8BitAccess && !supported.uniformAndStorageBuffer8BitAccess) return false;
    if (requested.storagePushConstant8 && !supported.storagePushConstant8) return false;
    if (requested.shaderBufferInt64Atomics && !supported.shaderBufferInt64Atomics) return false;
    if (requested.shaderSharedInt64Atomics && !supported.shaderSharedInt64Atomics) return false;
    if (requested.shaderFloat16 && !supported.shaderFloat16) return false;
    if (requested.shaderInt8 && !supported.shaderInt8) return false;
    if (requested.descriptorIndexing && !supported.descriptorIndexing) return false;
    if (requested.shaderInputAttachmentArrayDynamicIndexing && !supported.shaderInputAttachmentArrayDynamicIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayDynamicIndexing && !supported.shaderUniformTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayDynamicIndexing && !supported.shaderStorageTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderUniformBufferArrayNonUniformIndexing && !supported.shaderUniformBufferArrayNonUniformIndexing) return false;
    if (requested.shaderSampledImageArrayNonUniformIndexing && !supported.shaderSampledImageArrayNonUniformIndexing) return false;
    if (requested.shaderStorageBufferArrayNonUniformIndexing && !supported.shaderStorageBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageImageArrayNonUniformIndexing && !supported.shaderStorageImageArrayNonUniformIndexing) return false;
    if (requested.shaderInputAttachmentArrayNonUniformIndexing && !supported.shaderInputAttachmentArrayNonUniformIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayNonUniformIndexing && !supported.shaderUniformTexelBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayNonUniformIndexing && !supported.shaderStorageTexelBufferArrayNonUniformIndexing) return false;
    if (requested.descriptorBindingUniformBufferUpdateAfterBind && !supported.descriptorBindingUniformBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingSampledImageUpdateAfterBind && !supported.descriptorBindingSampledImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageImageUpdateAfterBind && !supported.descriptorBindingStorageImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageBufferUpdateAfterBind && !supported.descriptorBindingStorageBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUniformTexelBufferUpdateAfterBind && !supported.descriptorBindingUniformTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageTexelBufferUpdateAfterBind && !supported.descriptorBindingStorageTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUpdateUnusedWhilePending && !supported.descriptorBindingUpdateUnusedWhilePending) return false;
    if (requested.descriptorBindingPartiallyBound && !supported.descriptorBindingPartiallyBound) return false;
    if (requested.descriptorBindingVariableDescriptorCount && !supported.descriptorBindingVariableDescriptorCount) return false;
    if (requested.runtimeDescriptorArray && !supported.runtimeDescriptorArray) return false;
    if (requested.samplerFilterMinmax && !supported.samplerFilterMinmax) return false;
    if (requested.scalarBlockLayout && !supported.scalarBlockLayout) return false;
    if (requested.imagelessFramebuffer && !supported.imagelessFramebuffer) return false;
    if (requested.uniformBufferStandardLayout && !supported.uniformBufferStandardLayout) return false;
    if (requested.shaderSubgroupExtendedTypes && !supported.shaderSubgroupExtendedTypes) return false;
    if (requested.separateDepthStencilLayouts && !supported.separateDepthStencilLayouts) return false;
    if (requested.hostQueryReset && !supported.hostQueryReset) return false;
    if (requested.timelineSemaphore && !supported.timelineSemaphore) return false;
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    if (requested.vulkanMemoryModel && !supported.vulkanMemoryModel) return false;
    if (requested.vulkanMemoryModelDeviceScope && !supported.vulkanMemoryModelDeviceScope) return false;
    if (requested.vulkanMemoryModelAvailabilityVisibilityChains && !supported.vulkanMemoryModelAvailabilityVisibilityChains) return false;
    if (requested.shaderOutputViewportIndex && !supported.shaderOutputViewportIndex) return false;
    if (requested.shaderOutputLayer && !supported.shaderOutputLayer) return false;
    if (requested.subgroupBroadcastDynamicId && !supported.subgroupBroadcastDynamicId) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVulkan12Features & dest, VkPhysicalDeviceVulkan12Features const& to_add) {
    dest.samplerMirrorClampToEdge = dest.samplerMirrorClampToEdge || to_add.samplerMirrorClampToEdge;
    dest.drawIndirectCount = dest.drawIndirectCount || to_add.drawIndirectCount;
    dest.storageBuffer8BitAccess = dest.storageBuffer8BitAccess || to_add.storageBuffer8BitAccess;
    dest.uniformAndStorageBuffer8BitAccess = dest.uniformAndStorageBuffer8BitAccess || to_add.uniformAndStorageBuffer8BitAccess;
    dest.storagePushConstant8 = dest.storagePushConstant8 || to_add.storagePushConstant8;
    dest.shaderBufferInt64Atomics = dest.shaderBufferInt64Atomics || to_add.shaderBufferInt64Atomics;
    dest.shaderSharedInt64Atomics = dest.shaderSharedInt64Atomics || to_add.shaderSharedInt64Atomics;
    dest.shaderFloat16 = dest.shaderFloat16 || to_add.shaderFloat16;
    dest.shaderInt8 = dest.shaderInt8 || to_add.shaderInt8;
    dest.descriptorIndexing = dest.descriptorIndexing || to_add.descriptorIndexing;
    dest.shaderInputAttachmentArrayDynamicIndexing = dest.shaderInputAttachmentArrayDynamicIndexing || to_add.shaderInputAttachmentArrayDynamicIndexing;
    dest.shaderUniformTexelBufferArrayDynamicIndexing = dest.shaderUniformTexelBufferArrayDynamicIndexing || to_add.shaderUniformTexelBufferArrayDynamicIndexing;
    dest.shaderStorageTexelBufferArrayDynamicIndexing = dest.shaderStorageTexelBufferArrayDynamicIndexing || to_add.shaderStorageTexelBufferArrayDynamicIndexing;
    dest.shaderUniformBufferArrayNonUniformIndexing = dest.shaderUniformBufferArrayNonUniformIndexing || to_add.shaderUniformBufferArrayNonUniformIndexing;
    dest.shaderSampledImageArrayNonUniformIndexing = dest.shaderSampledImageArrayNonUniformIndexing || to_add.shaderSampledImageArrayNonUniformIndexing;
    dest.shaderStorageBufferArrayNonUniformIndexing = dest.shaderStorageBufferArrayNonUniformIndexing || to_add.shaderStorageBufferArrayNonUniformIndexing;
    dest.shaderStorageImageArrayNonUniformIndexing = dest.shaderStorageImageArrayNonUniformIndexing || to_add.shaderStorageImageArrayNonUniformIndexing;
    dest.shaderInputAttachmentArrayNonUniformIndexing = dest.shaderInputAttachmentArrayNonUniformIndexing || to_add.shaderInputAttachmentArrayNonUniformIndexing;
    dest.shaderUniformTexelBufferArrayNonUniformIndexing = dest.shaderUniformTexelBufferArrayNonUniformIndexing || to_add.shaderUniformTexelBufferArrayNonUniformIndexing;
    dest.shaderStorageTexelBufferArrayNonUniformIndexing = dest.shaderStorageTexelBufferArrayNonUniformIndexing || to_add.shaderStorageTexelBufferArrayNonUniformIndexing;
    dest.descriptorBindingUniformBufferUpdateAfterBind = dest.descriptorBindingUniformBufferUpdateAfterBind || to_add.descriptorBindingUniformBufferUpdateAfterBind;
    dest.descriptorBindingSampledImageUpdateAfterBind = dest.descriptorBindingSampledImageUpdateAfterBind || to_add.descriptorBindingSampledImageUpdateAfterBind;
    dest.descriptorBindingStorageImageUpdateAfterBind = dest.descriptorBindingStorageImageUpdateAfterBind || to_add.descriptorBindingStorageImageUpdateAfterBind;
    dest.descriptorBindingStorageBufferUpdateAfterBind = dest.descriptorBindingStorageBufferUpdateAfterBind || to_add.descriptorBindingStorageBufferUpdateAfterBind;
    dest.descriptorBindingUniformTexelBufferUpdateAfterBind = dest.descriptorBindingUniformTexelBufferUpdateAfterBind || to_add.descriptorBindingUniformTexelBufferUpdateAfterBind;
    dest.descriptorBindingStorageTexelBufferUpdateAfterBind = dest.descriptorBindingStorageTexelBufferUpdateAfterBind || to_add.descriptorBindingStorageTexelBufferUpdateAfterBind;
    dest.descriptorBindingUpdateUnusedWhilePending = dest.descriptorBindingUpdateUnusedWhilePending || to_add.descriptorBindingUpdateUnusedWhilePending;
    dest.descriptorBindingPartiallyBound = dest.descriptorBindingPartiallyBound || to_add.descriptorBindingPartiallyBound;
    dest.descriptorBindingVariableDescriptorCount = dest.descriptorBindingVariableDescriptorCount || to_add.descriptorBindingVariableDescriptorCount;
    dest.runtimeDescriptorArray = dest.runtimeDescriptorArray || to_add.runtimeDescriptorArray;
    dest.samplerFilterMinmax = dest.samplerFilterMinmax || to_add.samplerFilterMinmax;
    dest.scalarBlockLayout = dest.scalarBlockLayout || to_add.scalarBlockLayout;
    dest.imagelessFramebuffer = dest.imagelessFramebuffer || to_add.imagelessFramebuffer;
    dest.uniformBufferStandardLayout = dest.uniformBufferStandardLayout || to_add.uniformBufferStandardLayout;
    dest.shaderSubgroupExtendedTypes = dest.shaderSubgroupExtendedTypes || to_add.shaderSubgroupExtendedTypes;
    dest.separateDepthStencilLayouts = dest.separateDepthStencilLayouts || to_add.separateDepthStencilLayouts;
    dest.hostQueryReset = dest.hostQueryReset || to_add.hostQueryReset;
    dest.timelineSemaphore = dest.timelineSemaphore || to_add.timelineSemaphore;
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
    dest.vulkanMemoryModel = dest.vulkanMemoryModel || to_add.vulkanMemoryModel;
    dest.vulkanMemoryModelDeviceScope = dest.vulkanMemoryModelDeviceScope || to_add.vulkanMemoryModelDeviceScope;
    dest.vulkanMemoryModelAvailabilityVisibilityChains = dest.vulkanMemoryModelAvailabilityVisibilityChains || to_add.vulkanMemoryModelAvailabilityVisibilityChains;
    dest.shaderOutputViewportIndex = dest.shaderOutputViewportIndex || to_add.shaderOutputViewportIndex;
    dest.shaderOutputLayer = dest.shaderOutputLayer || to_add.shaderOutputLayer;
    dest.subgroupBroadcastDynamicId = dest.subgroupBroadcastDynamicId || to_add.subgroupBroadcastDynamicId;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceVulkan13Features const& requested, VkPhysicalDeviceVulkan13Features const& supported) {
    if (requested.robustImageAccess && !supported.robustImageAccess) return false;
    if (requested.inlineUniformBlock && !supported.inlineUniformBlock) return false;
    if (requested.descriptorBindingInlineUniformBlockUpdateAfterBind && !supported.descriptorBindingInlineUniformBlockUpdateAfterBind) return false;
    if (requested.pipelineCreationCacheControl && !supported.pipelineCreationCacheControl) return false;
    if (requested.privateData && !supported.privateData) return false;
    if (requested.shaderDemoteToHelperInvocation && !supported.shaderDemoteToHelperInvocation) return false;
    if (requested.shaderTerminateInvocation && !supported.shaderTerminateInvocation) return false;
    if (requested.subgroupSizeControl && !supported.subgroupSizeControl) return false;
    if (requested.computeFullSubgroups && !supported.computeFullSubgroups) return false;
    if (requested.synchronization2 && !supported.synchronization2) return false;
    if (requested.textureCompressionASTC_HDR && !supported.textureCompressionASTC_HDR) return false;
    if (requested.shaderZeroInitializeWorkgroupMemory && !supported.shaderZeroInitializeWorkgroupMemory) return false;
    if (requested.dynamicRendering && !supported.dynamicRendering) return false;
    if (requested.shaderIntegerDotProduct && !supported.shaderIntegerDotProduct) return false;
    if (requested.maintenance4 && !supported.maintenance4) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVulkan13Features & dest, VkPhysicalDeviceVulkan13Features const& to_add) {
    dest.robustImageAccess = dest.robustImageAccess || to_add.robustImageAccess;
    dest.inlineUniformBlock = dest.inlineUniformBlock || to_add.inlineUniformBlock;
    dest.descriptorBindingInlineUniformBlockUpdateAfterBind = dest.descriptorBindingInlineUniformBlockUpdateAfterBind || to_add.descriptorBindingInlineUniformBlockUpdateAfterBind;
    dest.pipelineCreationCacheControl = dest.pipelineCreationCacheControl || to_add.pipelineCreationCacheControl;
    dest.privateData = dest.privateData || to_add.privateData;
    dest.shaderDemoteToHelperInvocation = dest.shaderDemoteToHelperInvocation || to_add.shaderDemoteToHelperInvocation;
    dest.shaderTerminateInvocation = dest.shaderTerminateInvocation || to_add.shaderTerminateInvocation;
    dest.subgroupSizeControl = dest.subgroupSizeControl || to_add.subgroupSizeControl;
    dest.computeFullSubgroups = dest.computeFullSubgroups || to_add.computeFullSubgroups;
    dest.synchronization2 = dest.synchronization2 || to_add.synchronization2;
    dest.textureCompressionASTC_HDR = dest.textureCompressionASTC_HDR || to_add.textureCompressionASTC_HDR;
    dest.shaderZeroInitializeWorkgroupMemory = dest.shaderZeroInitializeWorkgroupMemory || to_add.shaderZeroInitializeWorkgroupMemory;
    dest.dynamicRendering = dest.dynamicRendering || to_add.dynamicRendering;
    dest.shaderIntegerDotProduct = dest.shaderIntegerDotProduct || to_add.shaderIntegerDotProduct;
    dest.maintenance4 = dest.maintenance4 || to_add.maintenance4;
}
#endif
#if (defined(VK_AMD_device_coherent_memory))
inline bool compare_features_struct(VkPhysicalDeviceCoherentMemoryFeaturesAMD const& requested, VkPhysicalDeviceCoherentMemoryFeaturesAMD const& supported) {
    if (requested.deviceCoherentMemory && !supported.deviceCoherentMemory) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCoherentMemoryFeaturesAMD & dest, VkPhysicalDeviceCoherentMemoryFeaturesAMD const& to_add) {
    dest.deviceCoherentMemory = dest.deviceCoherentMemory || to_add.deviceCoherentMemory;
}
#endif
#if (defined(VK_EXT_custom_border_color))
inline bool compare_features_struct(VkPhysicalDeviceCustomBorderColorFeaturesEXT const& requested, VkPhysicalDeviceCustomBorderColorFeaturesEXT const& supported) {
    if (requested.customBorderColors && !supported.customBorderColors) return false;
    if (requested.customBorderColorWithoutFormat && !supported.customBorderColorWithoutFormat) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCustomBorderColorFeaturesEXT & dest, VkPhysicalDeviceCustomBorderColorFeaturesEXT const& to_add) {
    dest.customBorderColors = dest.customBorderColors || to_add.customBorderColors;
    dest.customBorderColorWithoutFormat = dest.customBorderColorWithoutFormat || to_add.customBorderColorWithoutFormat;
}
#endif
#if (defined(VK_EXT_border_color_swizzle))
inline bool compare_features_struct(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& requested, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& supported) {
    if (requested.borderColorSwizzle && !supported.borderColorSwizzle) return false;
    if (requested.borderColorSwizzleFromImage && !supported.borderColorSwizzleFromImage) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT & dest, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& to_add) {
    dest.borderColorSwizzle = dest.borderColorSwizzle || to_add.borderColorSwizzle;
    dest.borderColorSwizzleFromImage = dest.borderColorSwizzleFromImage || to_add.borderColorSwizzleFromImage;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state))
inline bool compare_features_struct(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& supported) {
    if (requested.extendedDynamicState && !supported.extendedDynamicState) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT & dest, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& to_add) {
    dest.extendedDynamicState = dest.extendedDynamicState || to_add.extendedDynamicState;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state2))
inline bool compare_features_struct(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& supported) {
    if (requested.extendedDynamicState2 && !supported.extendedDynamicState2) return false;
    if (requested.extendedDynamicState2LogicOp && !supported.extendedDynamicState2LogicOp) return false;
    if (requested.extendedDynamicState2PatchControlPoints && !supported.extendedDynamicState2PatchControlPoints) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT & dest, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& to_add) {
    dest.extendedDynamicState2 = dest.extendedDynamicState2 || to_add.extendedDynamicState2;
    dest.extendedDynamicState2LogicOp = dest.extendedDynamicState2LogicOp || to_add.extendedDynamicState2LogicOp;
    dest.extendedDynamicState2PatchControlPoints = dest.extendedDynamicState2PatchControlPoints || to_add.extendedDynamicState2PatchControlPoints;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state3))
inline bool compare_features_struct(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& supported) {
    if (requested.extendedDynamicState3TessellationDomainOrigin && !supported.extendedDynamicState3TessellationDomainOrigin) return false;
    if (requested.extendedDynamicState3DepthClampEnable && !supported.extendedDynamicState3DepthClampEnable) return false;
    if (requested.extendedDynamicState3PolygonMode && !supported.extendedDynamicState3PolygonMode) return false;
    if (requested.extendedDynamicState3RasterizationSamples && !supported.extendedDynamicState3RasterizationSamples) return false;
    if (requested.extendedDynamicState3SampleMask && !supported.extendedDynamicState3SampleMask) return false;
    if (requested.extendedDynamicState3AlphaToCoverageEnable && !supported.extendedDynamicState3AlphaToCoverageEnable) return false;
    if (requested.extendedDynamicState3AlphaToOneEnable && !supported.extendedDynamicState3AlphaToOneEnable) return false;
    if (requested.extendedDynamicState3LogicOpEnable && !supported.extendedDynamicState3LogicOpEnable) return false;
    if (requested.extendedDynamicState3ColorBlendEnable && !supported.extendedDynamicState3ColorBlendEnable) return false;
    if (requested.extendedDynamicState3ColorBlendEquation && !supported.extendedDynamicState3ColorBlendEquation) return false;
    if (requested.extendedDynamicState3ColorWriteMask && !supported.extendedDynamicState3ColorWriteMask) return false;
    if (requested.extendedDynamicState3RasterizationStream && !supported.extendedDynamicState3RasterizationStream) return false;
    if (requested.extendedDynamicState3ConservativeRasterizationMode && !supported.extendedDynamicState3ConservativeRasterizationMode) return false;
    if (requested.extendedDynamicState3ExtraPrimitiveOverestimationSize && !supported.extendedDynamicState3ExtraPrimitiveOverestimationSize) return false;
    if (requested.extendedDynamicState3DepthClipEnable && !supported.extendedDynamicState3DepthClipEnable) return false;
    if (requested.extendedDynamicState3SampleLocationsEnable && !supported.extendedDynamicState3SampleLocationsEnable) return false;
    if (requested.extendedDynamicState3ColorBlendAdvanced && !supported.extendedDynamicState3ColorBlendAdvanced) return false;
    if (requested.extendedDynamicState3ProvokingVertexMode && !supported.extendedDynamicState3ProvokingVertexMode) return false;
    if (requested.extendedDynamicState3LineRasterizationMode && !supported.extendedDynamicState3LineRasterizationMode) return false;
    if (requested.extendedDynamicState3LineStippleEnable && !supported.extendedDynamicState3LineStippleEnable) return false;
    if (requested.extendedDynamicState3DepthClipNegativeOneToOne && !supported.extendedDynamicState3DepthClipNegativeOneToOne) return false;
    if (requested.extendedDynamicState3ViewportWScalingEnable && !supported.extendedDynamicState3ViewportWScalingEnable) return false;
    if (requested.extendedDynamicState3ViewportSwizzle && !supported.extendedDynamicState3ViewportSwizzle) return false;
    if (requested.extendedDynamicState3CoverageToColorEnable && !supported.extendedDynamicState3CoverageToColorEnable) return false;
    if (requested.extendedDynamicState3CoverageToColorLocation && !supported.extendedDynamicState3CoverageToColorLocation) return false;
    if (requested.extendedDynamicState3CoverageModulationMode && !supported.extendedDynamicState3CoverageModulationMode) return false;
    if (requested.extendedDynamicState3CoverageModulationTableEnable && !supported.extendedDynamicState3CoverageModulationTableEnable) return false;
    if (requested.extendedDynamicState3CoverageModulationTable && !supported.extendedDynamicState3CoverageModulationTable) return false;
    if (requested.extendedDynamicState3CoverageReductionMode && !supported.extendedDynamicState3CoverageReductionMode) return false;
    if (requested.extendedDynamicState3RepresentativeFragmentTestEnable && !supported.extendedDynamicState3RepresentativeFragmentTestEnable) return false;
    if (requested.extendedDynamicState3ShadingRateImageEnable && !supported.extendedDynamicState3ShadingRateImageEnable) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT & dest, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& to_add) {
    dest.extendedDynamicState3TessellationDomainOrigin = dest.extendedDynamicState3TessellationDomainOrigin || to_add.extendedDynamicState3TessellationDomainOrigin;
    dest.extendedDynamicState3DepthClampEnable = dest.extendedDynamicState3DepthClampEnable || to_add.extendedDynamicState3DepthClampEnable;
    dest.extendedDynamicState3PolygonMode = dest.extendedDynamicState3PolygonMode || to_add.extendedDynamicState3PolygonMode;
    dest.extendedDynamicState3RasterizationSamples = dest.extendedDynamicState3RasterizationSamples || to_add.extendedDynamicState3RasterizationSamples;
    dest.extendedDynamicState3SampleMask = dest.extendedDynamicState3SampleMask || to_add.extendedDynamicState3SampleMask;
    dest.extendedDynamicState3AlphaToCoverageEnable = dest.extendedDynamicState3AlphaToCoverageEnable || to_add.extendedDynamicState3AlphaToCoverageEnable;
    dest.extendedDynamicState3AlphaToOneEnable = dest.extendedDynamicState3AlphaToOneEnable || to_add.extendedDynamicState3AlphaToOneEnable;
    dest.extendedDynamicState3LogicOpEnable = dest.extendedDynamicState3LogicOpEnable || to_add.extendedDynamicState3LogicOpEnable;
    dest.extendedDynamicState3ColorBlendEnable = dest.extendedDynamicState3ColorBlendEnable || to_add.extendedDynamicState3ColorBlendEnable;
    dest.extendedDynamicState3ColorBlendEquation = dest.extendedDynamicState3ColorBlendEquation || to_add.extendedDynamicState3ColorBlendEquation;
    dest.extendedDynamicState3ColorWriteMask = dest.extendedDynamicState3ColorWriteMask || to_add.extendedDynamicState3ColorWriteMask;
    dest.extendedDynamicState3RasterizationStream = dest.extendedDynamicState3RasterizationStream || to_add.extendedDynamicState3RasterizationStream;
    dest.extendedDynamicState3ConservativeRasterizationMode = dest.extendedDynamicState3ConservativeRasterizationMode || to_add.extendedDynamicState3ConservativeRasterizationMode;
    dest.extendedDynamicState3ExtraPrimitiveOverestimationSize = dest.extendedDynamicState3ExtraPrimitiveOverestimationSize || to_add.extendedDynamicState3ExtraPrimitiveOverestimationSize;
    dest.extendedDynamicState3DepthClipEnable = dest.extendedDynamicState3DepthClipEnable || to_add.extendedDynamicState3DepthClipEnable;
    dest.extendedDynamicState3SampleLocationsEnable = dest.extendedDynamicState3SampleLocationsEnable || to_add.extendedDynamicState3SampleLocationsEnable;
    dest.extendedDynamicState3ColorBlendAdvanced = dest.extendedDynamicState3ColorBlendAdvanced || to_add.extendedDynamicState3ColorBlendAdvanced;
    dest.extendedDynamicState3ProvokingVertexMode = dest.extendedDynamicState3ProvokingVertexMode || to_add.extendedDynamicState3ProvokingVertexMode;
    dest.extendedDynamicState3LineRasterizationMode = dest.extendedDynamicState3LineRasterizationMode || to_add.extendedDynamicState3LineRasterizationMode;
    dest.extendedDynamicState3LineStippleEnable = dest.extendedDynamicState3LineStippleEnable || to_add.extendedDynamicState3LineStippleEnable;
    dest.extendedDynamicState3DepthClipNegativeOneToOne = dest.extendedDynamicState3DepthClipNegativeOneToOne || to_add.extendedDynamicState3DepthClipNegativeOneToOne;
    dest.extendedDynamicState3ViewportWScalingEnable = dest.extendedDynamicState3ViewportWScalingEnable || to_add.extendedDynamicState3ViewportWScalingEnable;
    dest.extendedDynamicState3ViewportSwizzle = dest.extendedDynamicState3ViewportSwizzle || to_add.extendedDynamicState3ViewportSwizzle;
    dest.extendedDynamicState3CoverageToColorEnable = dest.extendedDynamicState3CoverageToColorEnable || to_add.extendedDynamicState3CoverageToColorEnable;
    dest.extendedDynamicState3CoverageToColorLocation = dest.extendedDynamicState3CoverageToColorLocation || to_add.extendedDynamicState3CoverageToColorLocation;
    dest.extendedDynamicState3CoverageModulationMode = dest.extendedDynamicState3CoverageModulationMode || to_add.extendedDynamicState3CoverageModulationMode;
    dest.extendedDynamicState3CoverageModulationTableEnable = dest.extendedDynamicState3CoverageModulationTableEnable || to_add.extendedDynamicState3CoverageModulationTableEnable;
    dest.extendedDynamicState3CoverageModulationTable = dest.extendedDynamicState3CoverageModulationTable || to_add.extendedDynamicState3CoverageModulationTable;
    dest.extendedDynamicState3CoverageReductionMode = dest.extendedDynamicState3CoverageReductionMode || to_add.extendedDynamicState3CoverageReductionMode;
    dest.extendedDynamicState3RepresentativeFragmentTestEnable = dest.extendedDynamicState3RepresentativeFragmentTestEnable || to_add.extendedDynamicState3RepresentativeFragmentTestEnable;
    dest.extendedDynamicState3ShadingRateImageEnable = dest.extendedDynamicState3ShadingRateImageEnable || to_add.extendedDynamicState3ShadingRateImageEnable;
}
#endif
#if (defined(VK_NV_device_diagnostics_config))
inline bool compare_features_struct(VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& requested, VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& supported) {
    if (requested.diagnosticsConfig && !supported.diagnosticsConfig) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDiagnosticsConfigFeaturesNV & dest, VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& to_add) {
    dest.diagnosticsConfig = dest.diagnosticsConfig || to_add.diagnosticsConfig;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& requested, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& supported) {
    if (requested.shaderZeroInitializeWorkgroupMemory && !supported.shaderZeroInitializeWorkgroupMemory) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures & dest, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& to_add) {
    dest.shaderZeroInitializeWorkgroupMemory = dest.shaderZeroInitializeWorkgroupMemory || to_add.shaderZeroInitializeWorkgroupMemory;
}
#endif
#if (defined(VK_KHR_shader_subgroup_uniform_control_flow))
inline bool compare_features_struct(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& requested, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& supported) {
    if (requested.shaderSubgroupUniformControlFlow && !supported.shaderSubgroupUniformControlFlow) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR & dest, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& to_add) {
    dest.shaderSubgroupUniformControlFlow = dest.shaderSubgroupUniformControlFlow || to_add.shaderSubgroupUniformControlFlow;
}
#endif
#if (defined(VK_EXT_robustness2))
inline bool compare_features_struct(VkPhysicalDeviceRobustness2FeaturesEXT const& requested, VkPhysicalDeviceRobustness2FeaturesEXT const& supported) {
    if (requested.robustBufferAccess2 && !supported.robustBufferAccess2) return false;
    if (requested.robustImageAccess2 && !supported.robustImageAccess2) return false;
    if (requested.nullDescriptor && !supported.nullDescriptor) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRobustness2FeaturesEXT & dest, VkPhysicalDeviceRobustness2FeaturesEXT const& to_add) {
    dest.robustBufferAccess2 = dest.robustBufferAccess2 || to_add.robustBufferAccess2;
    dest.robustImageAccess2 = dest.robustImageAccess2 || to_add.robustImageAccess2;
    dest.nullDescriptor = dest.nullDescriptor || to_add.nullDescriptor;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceImageRobustnessFeatures const& requested, VkPhysicalDeviceImageRobustnessFeatures const& supported) {
    if (requested.robustImageAccess && !supported.robustImageAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageRobustnessFeatures & dest, VkPhysicalDeviceImageRobustnessFeatures const& to_add) {
    dest.robustImageAccess = dest.robustImageAccess || to_add.robustImageAccess;
}
#endif
#if (defined(VK_KHR_workgroup_memory_explicit_layout))
inline bool compare_features_struct(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& requested, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& supported) {
    if (requested.workgroupMemoryExplicitLayout && !supported.workgroupMemoryExplicitLayout) return false;
    if (requested.workgroupMemoryExplicitLayoutScalarBlockLayout && !supported.workgroupMemoryExplicitLayoutScalarBlockLayout) return false;
    if (requested.workgroupMemoryExplicitLayout8BitAccess && !supported.workgroupMemoryExplicitLayout8BitAccess) return false;
    if (requested.workgroupMemoryExplicitLayout16BitAccess && !supported.workgroupMemoryExplicitLayout16BitAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR & dest, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& to_add) {
    dest.workgroupMemoryExplicitLayout = dest.workgroupMemoryExplicitLayout || to_add.workgroupMemoryExplicitLayout;
    dest.workgroupMemoryExplicitLayoutScalarBlockLayout = dest.workgroupMemoryExplicitLayoutScalarBlockLayout || to_add.workgroupMemoryExplicitLayoutScalarBlockLayout;
    dest.workgroupMemoryExplicitLayout8BitAccess = dest.workgroupMemoryExplicitLayout8BitAccess || to_add.workgroupMemoryExplicitLayout8BitAccess;
    dest.workgroupMemoryExplicitLayout16BitAccess = dest.workgroupMemoryExplicitLayout16BitAccess || to_add.workgroupMemoryExplicitLayout16BitAccess;
}
#endif
#if (defined(VK_KHR_portability_subset))
inline bool compare_features_struct(VkPhysicalDevicePortabilitySubsetFeaturesKHR const& requested, VkPhysicalDevicePortabilitySubsetFeaturesKHR const& supported) {
    if (requested.constantAlphaColorBlendFactors && !supported.constantAlphaColorBlendFactors) return false;
    if (requested.events && !supported.events) return false;
    if (requested.imageViewFormatReinterpretation && !supported.imageViewFormatReinterpretation) return false;
    if (requested.imageViewFormatSwizzle && !supported.imageViewFormatSwizzle) return false;
    if (requested.imageView2DOn3DImage && !supported.imageView2DOn3DImage) return false;
    if (requested.multisampleArrayImage && !supported.multisampleArrayImage) return false;
    if (requested.mutableComparisonSamplers && !supported.mutableComparisonSamplers) return false;
    if (requested.pointPolygons && !supported.pointPolygons) return false;
    if (requested.samplerMipLodBias && !supported.samplerMipLodBias) return false;
    if (requested.separateStencilMaskRef && !supported.separateStencilMaskRef) return false;
    if (requested.shaderSampleRateInterpolationFunctions && !supported.shaderSampleRateInterpolationFunctions) return false;
    if (requested.tessellationIsolines && !supported.tessellationIsolines) return false;
    if (requested.tessellationPointMode && !supported.tessellationPointMode) return false;
    if (requested.triangleFans && !supported.triangleFans) return false;
    if (requested.vertexAttributeAccessBeyondStride && !supported.vertexAttributeAccessBeyondStride) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePortabilitySubsetFeaturesKHR & dest, VkPhysicalDevicePortabilitySubsetFeaturesKHR const& to_add) {
    dest.constantAlphaColorBlendFactors = dest.constantAlphaColorBlendFactors || to_add.constantAlphaColorBlendFactors;
    dest.events = dest.events || to_add.events;
    dest.imageViewFormatReinterpretation = dest.imageViewFormatReinterpretation || to_add.imageViewFormatReinterpretation;
    dest.imageViewFormatSwizzle = dest.imageViewFormatSwizzle || to_add.imageViewFormatSwizzle;
    dest.imageView2DOn3DImage = dest.imageView2DOn3DImage || to_add.imageView2DOn3DImage;
    dest.multisampleArrayImage = dest.multisampleArrayImage || to_add.multisampleArrayImage;
    dest.mutableComparisonSamplers = dest.mutableComparisonSamplers || to_add.mutableComparisonSamplers;
    dest.pointPolygons = dest.pointPolygons || to_add.pointPolygons;
    dest.samplerMipLodBias = dest.samplerMipLodBias || to_add.samplerMipLodBias;
    dest.separateStencilMaskRef = dest.separateStencilMaskRef || to_add.separateStencilMaskRef;
    dest.shaderSampleRateInterpolationFunctions = dest.shaderSampleRateInterpolationFunctions || to_add.shaderSampleRateInterpolationFunctions;
    dest.tessellationIsolines = dest.tessellationIsolines || to_add.tessellationIsolines;
    dest.tessellationPointMode = dest.tessellationPointMode || to_add.tessellationPointMode;
    dest.triangleFans = dest.triangleFans || to_add.triangleFans;
    dest.vertexAttributeAccessBeyondStride = dest.vertexAttributeAccessBeyondStride || to_add.vertexAttributeAccessBeyondStride;
}
#endif
#if (defined(VK_EXT_4444_formats))
inline bool compare_features_struct(VkPhysicalDevice4444FormatsFeaturesEXT const& requested, VkPhysicalDevice4444FormatsFeaturesEXT const& supported) {
    if (requested.formatA4R4G4B4 && !supported.formatA4R4G4B4) return false;
    if (requested.formatA4B4G4R4 && !supported.formatA4B4G4R4) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevice4444FormatsFeaturesEXT & dest, VkPhysicalDevice4444FormatsFeaturesEXT const& to_add) {
    dest.formatA4R4G4B4 = dest.formatA4R4G4B4 || to_add.formatA4R4G4B4;
    dest.formatA4B4G4R4 = dest.formatA4B4G4R4 || to_add.formatA4B4G4R4;
}
#endif
#if (defined(VK_HUAWEI_subpass_shading))
inline bool compare_features_struct(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& requested, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& supported) {
    if (requested.subpassShading && !supported.subpassShading) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI & dest, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& to_add) {
    dest.subpassShading = dest.subpassShading || to_add.subpassShading;
}
#endif
#if (defined(VK_HUAWEI_cluster_culling_shader))
inline bool compare_features_struct(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& requested, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& supported) {
    if (requested.clustercullingShader && !supported.clustercullingShader) return false;
    if (requested.multiviewClusterCullingShader && !supported.multiviewClusterCullingShader) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI & dest, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& to_add) {
    dest.clustercullingShader = dest.clustercullingShader || to_add.clustercullingShader;
    dest.multiviewClusterCullingShader = dest.multiviewClusterCullingShader || to_add.multiviewClusterCullingShader;
}
#endif
#if (defined(VK_EXT_shader_image_atomic_int64))
inline bool compare_features_struct(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& requested, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& supported) {
    if (requested.shaderImageInt64Atomics && !supported.shaderImageInt64Atomics) return false;
    if (requested.sparseImageInt64Atomics && !supported.sparseImageInt64Atomics) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT & dest, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& to_add) {
    dest.shaderImageInt64Atomics = dest.shaderImageInt64Atomics || to_add.shaderImageInt64Atomics;
    dest.sparseImageInt64Atomics = dest.sparseImageInt64Atomics || to_add.sparseImageInt64Atomics;
}
#endif
#if (defined(VK_KHR_fragment_shading_rate))
inline bool compare_features_struct(VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& requested, VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& supported) {
    if (requested.pipelineFragmentShadingRate && !supported.pipelineFragmentShadingRate) return false;
    if (requested.primitiveFragmentShadingRate && !supported.primitiveFragmentShadingRate) return false;
    if (requested.attachmentFragmentShadingRate && !supported.attachmentFragmentShadingRate) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentShadingRateFeaturesKHR & dest, VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& to_add) {
    dest.pipelineFragmentShadingRate = dest.pipelineFragmentShadingRate || to_add.pipelineFragmentShadingRate;
    dest.primitiveFragmentShadingRate = dest.primitiveFragmentShadingRate || to_add.primitiveFragmentShadingRate;
    dest.attachmentFragmentShadingRate = dest.attachmentFragmentShadingRate || to_add.attachmentFragmentShadingRate;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceShaderTerminateInvocationFeatures const& requested, VkPhysicalDeviceShaderTerminateInvocationFeatures const& supported) {
    if (requested.shaderTerminateInvocation && !supported.shaderTerminateInvocation) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderTerminateInvocationFeatures & dest, VkPhysicalDeviceShaderTerminateInvocationFeatures const& to_add) {
    dest.shaderTerminateInvocation = dest.shaderTerminateInvocation || to_add.shaderTerminateInvocation;
}
#endif
#if (defined(VK_NV_fragment_shading_rate_enums))
inline bool compare_features_struct(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& requested, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& supported) {
    if (requested.fragmentShadingRateEnums && !supported.fragmentShadingRateEnums) return false;
    if (requested.supersampleFragmentShadingRates && !supported.supersampleFragmentShadingRates) return false;
    if (requested.noInvocationFragmentShadingRates && !supported.noInvocationFragmentShadingRates) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV & dest, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& to_add) {
    dest.fragmentShadingRateEnums = dest.fragmentShadingRateEnums || to_add.fragmentShadingRateEnums;
    dest.supersampleFragmentShadingRates = dest.supersampleFragmentShadingRates || to_add.supersampleFragmentShadingRates;
    dest.noInvocationFragmentShadingRates = dest.noInvocationFragmentShadingRates || to_add.noInvocationFragmentShadingRates;
}
#endif
#if (defined(VK_EXT_image_2d_view_of_3d))
inline bool compare_features_struct(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& requested, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& supported) {
    if (requested.image2DViewOf3D && !supported.image2DViewOf3D) return false;
    if (requested.sampler2DViewOf3D && !supported.sampler2DViewOf3D) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT & dest, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& to_add) {
    dest.image2DViewOf3D = dest.image2DViewOf3D || to_add.image2DViewOf3D;
    dest.sampler2DViewOf3D = dest.sampler2DViewOf3D || to_add.sampler2DViewOf3D;
}
#endif
#if (defined(VK_EXT_image_sliced_view_of_3d))
inline bool compare_features_struct(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& requested, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& supported) {
    if (requested.imageSlicedViewOf3D && !supported.imageSlicedViewOf3D) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT & dest, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& to_add) {
    dest.imageSlicedViewOf3D = dest.imageSlicedViewOf3D || to_add.imageSlicedViewOf3D;
}
#endif
#if (defined(VK_EXT_attachment_feedback_loop_dynamic_state))
inline bool compare_features_struct(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& supported) {
    if (requested.attachmentFeedbackLoopDynamicState && !supported.attachmentFeedbackLoopDynamicState) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT & dest, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& to_add) {
    dest.attachmentFeedbackLoopDynamicState = dest.attachmentFeedbackLoopDynamicState || to_add.attachmentFeedbackLoopDynamicState;
}
#endif
#if (defined(VK_EXT_legacy_vertex_attributes))
inline bool compare_features_struct(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& requested, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& supported) {
    if (requested.legacyVertexAttributes && !supported.legacyVertexAttributes) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT & dest, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& to_add) {
    dest.legacyVertexAttributes = dest.legacyVertexAttributes || to_add.legacyVertexAttributes;
}
#endif
#if (defined(VK_EXT_mutable_descriptor_type))
inline bool compare_features_struct(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& requested, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& supported) {
    if (requested.mutableDescriptorType && !supported.mutableDescriptorType) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT & dest, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& to_add) {
    dest.mutableDescriptorType = dest.mutableDescriptorType || to_add.mutableDescriptorType;
}
#endif
#if (defined(VK_EXT_depth_clip_control))
inline bool compare_features_struct(VkPhysicalDeviceDepthClipControlFeaturesEXT const& requested, VkPhysicalDeviceDepthClipControlFeaturesEXT const& supported) {
    if (requested.depthClipControl && !supported.depthClipControl) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDepthClipControlFeaturesEXT & dest, VkPhysicalDeviceDepthClipControlFeaturesEXT const& to_add) {
    dest.depthClipControl = dest.depthClipControl || to_add.depthClipControl;
}
#endif
#if (defined(VK_EXT_vertex_input_dynamic_state))
inline bool compare_features_struct(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& supported) {
    if (requested.vertexInputDynamicState && !supported.vertexInputDynamicState) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT & dest, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& to_add) {
    dest.vertexInputDynamicState = dest.vertexInputDynamicState || to_add.vertexInputDynamicState;
}
#endif
#if (defined(VK_NV_external_memory_rdma))
inline bool compare_features_struct(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& requested, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& supported) {
    if (requested.externalMemoryRDMA && !supported.externalMemoryRDMA) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV & dest, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& to_add) {
    dest.externalMemoryRDMA = dest.externalMemoryRDMA || to_add.externalMemoryRDMA;
}
#endif
#if (defined(VK_KHR_shader_relaxed_extended_instruction))
inline bool compare_features_struct(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& requested, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& supported) {
    if (requested.shaderRelaxedExtendedInstruction && !supported.shaderRelaxedExtendedInstruction) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR & dest, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& to_add) {
    dest.shaderRelaxedExtendedInstruction = dest.shaderRelaxedExtendedInstruction || to_add.shaderRelaxedExtendedInstruction;
}
#endif
#if (defined(VK_EXT_color_write_enable))
inline bool compare_features_struct(VkPhysicalDeviceColorWriteEnableFeaturesEXT const& requested, VkPhysicalDeviceColorWriteEnableFeaturesEXT const& supported) {
    if (requested.colorWriteEnable && !supported.colorWriteEnable) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceColorWriteEnableFeaturesEXT & dest, VkPhysicalDeviceColorWriteEnableFeaturesEXT const& to_add) {
    dest.colorWriteEnable = dest.colorWriteEnable || to_add.colorWriteEnable;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceSynchronization2Features const& requested, VkPhysicalDeviceSynchronization2Features const& supported) {
    if (requested.synchronization2 && !supported.synchronization2) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSynchronization2Features & dest, VkPhysicalDeviceSynchronization2Features const& to_add) {
    dest.synchronization2 = dest.synchronization2 || to_add.synchronization2;
}
#endif
#if (defined(VK_EXT_host_image_copy))
inline bool compare_features_struct(VkPhysicalDeviceHostImageCopyFeaturesEXT const& requested, VkPhysicalDeviceHostImageCopyFeaturesEXT const& supported) {
    if (requested.hostImageCopy && !supported.hostImageCopy) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceHostImageCopyFeaturesEXT & dest, VkPhysicalDeviceHostImageCopyFeaturesEXT const& to_add) {
    dest.hostImageCopy = dest.hostImageCopy || to_add.hostImageCopy;
}
#endif
#if (defined(VKSC_VERSION_1_0))
inline bool compare_features_struct(VkPhysicalDeviceVulkanSC10Features const& requested, VkPhysicalDeviceVulkanSC10Features const& supported) {
    if (requested.shaderAtomicInstructions && !supported.shaderAtomicInstructions) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVulkanSC10Features & dest, VkPhysicalDeviceVulkanSC10Features const& to_add) {
    dest.shaderAtomicInstructions = dest.shaderAtomicInstructions || to_add.shaderAtomicInstructions;
}
#endif
#if (defined(VK_EXT_primitives_generated_query))
inline bool compare_features_struct(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& requested, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& supported) {
    if (requested.primitivesGeneratedQuery && !supported.primitivesGeneratedQuery) return false;
    if (requested.primitivesGeneratedQueryWithRasterizerDiscard && !supported.primitivesGeneratedQueryWithRasterizerDiscard) return false;
    if (requested.primitivesGeneratedQueryWithNonZeroStreams && !supported.primitivesGeneratedQueryWithNonZeroStreams) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT & dest, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& to_add) {
    dest.primitivesGeneratedQuery = dest.primitivesGeneratedQuery || to_add.primitivesGeneratedQuery;
    dest.primitivesGeneratedQueryWithRasterizerDiscard = dest.primitivesGeneratedQueryWithRasterizerDiscard || to_add.primitivesGeneratedQueryWithRasterizerDiscard;
    dest.primitivesGeneratedQueryWithNonZeroStreams = dest.primitivesGeneratedQueryWithNonZeroStreams || to_add.primitivesGeneratedQueryWithNonZeroStreams;
}
#endif
#if (defined(VK_EXT_legacy_dithering))
inline bool compare_features_struct(VkPhysicalDeviceLegacyDitheringFeaturesEXT const& requested, VkPhysicalDeviceLegacyDitheringFeaturesEXT const& supported) {
    if (requested.legacyDithering && !supported.legacyDithering) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceLegacyDitheringFeaturesEXT & dest, VkPhysicalDeviceLegacyDitheringFeaturesEXT const& to_add) {
    dest.legacyDithering = dest.legacyDithering || to_add.legacyDithering;
}
#endif
#if (defined(VK_EXT_multisampled_render_to_single_sampled))
inline bool compare_features_struct(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& requested, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& supported) {
    if (requested.multisampledRenderToSingleSampled && !supported.multisampledRenderToSingleSampled) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT & dest, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& to_add) {
    dest.multisampledRenderToSingleSampled = dest.multisampledRenderToSingleSampled || to_add.multisampledRenderToSingleSampled;
}
#endif
#if (defined(VK_EXT_pipeline_protected_access))
inline bool compare_features_struct(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& requested, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& supported) {
    if (requested.pipelineProtectedAccess && !supported.pipelineProtectedAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT & dest, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& to_add) {
    dest.pipelineProtectedAccess = dest.pipelineProtectedAccess || to_add.pipelineProtectedAccess;
}
#endif
#if (defined(VK_KHR_video_maintenance1))
inline bool compare_features_struct(VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& requested, VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& supported) {
    if (requested.videoMaintenance1 && !supported.videoMaintenance1) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceVideoMaintenance1FeaturesKHR & dest, VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& to_add) {
    dest.videoMaintenance1 = dest.videoMaintenance1 || to_add.videoMaintenance1;
}
#endif
#if (defined(VK_NV_inherited_viewport_scissor))
inline bool compare_features_struct(VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& requested, VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& supported) {
    if (requested.inheritedViewportScissor2D && !supported.inheritedViewportScissor2D) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceInheritedViewportScissorFeaturesNV & dest, VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& to_add) {
    dest.inheritedViewportScissor2D = dest.inheritedViewportScissor2D || to_add.inheritedViewportScissor2D;
}
#endif
#if (defined(VK_EXT_ycbcr_2plane_444_formats))
inline bool compare_features_struct(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& requested, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& supported) {
    if (requested.ycbcr2plane444Formats && !supported.ycbcr2plane444Formats) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT & dest, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& to_add) {
    dest.ycbcr2plane444Formats = dest.ycbcr2plane444Formats || to_add.ycbcr2plane444Formats;
}
#endif
#if (defined(VK_EXT_provoking_vertex))
inline bool compare_features_struct(VkPhysicalDeviceProvokingVertexFeaturesEXT const& requested, VkPhysicalDeviceProvokingVertexFeaturesEXT const& supported) {
    if (requested.provokingVertexLast && !supported.provokingVertexLast) return false;
    if (requested.transformFeedbackPreservesProvokingVertex && !supported.transformFeedbackPreservesProvokingVertex) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceProvokingVertexFeaturesEXT & dest, VkPhysicalDeviceProvokingVertexFeaturesEXT const& to_add) {
    dest.provokingVertexLast = dest.provokingVertexLast || to_add.provokingVertexLast;
    dest.transformFeedbackPreservesProvokingVertex = dest.transformFeedbackPreservesProvokingVertex || to_add.transformFeedbackPreservesProvokingVertex;
}
#endif
#if (defined(VK_EXT_descriptor_buffer))
inline bool compare_features_struct(VkPhysicalDeviceDescriptorBufferFeaturesEXT const& requested, VkPhysicalDeviceDescriptorBufferFeaturesEXT const& supported) {
    if (requested.descriptorBuffer && !supported.descriptorBuffer) return false;
    if (requested.descriptorBufferCaptureReplay && !supported.descriptorBufferCaptureReplay) return false;
    if (requested.descriptorBufferImageLayoutIgnored && !supported.descriptorBufferImageLayoutIgnored) return false;
    if (requested.descriptorBufferPushDescriptors && !supported.descriptorBufferPushDescriptors) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDescriptorBufferFeaturesEXT & dest, VkPhysicalDeviceDescriptorBufferFeaturesEXT const& to_add) {
    dest.descriptorBuffer = dest.descriptorBuffer || to_add.descriptorBuffer;
    dest.descriptorBufferCaptureReplay = dest.descriptorBufferCaptureReplay || to_add.descriptorBufferCaptureReplay;
    dest.descriptorBufferImageLayoutIgnored = dest.descriptorBufferImageLayoutIgnored || to_add.descriptorBufferImageLayoutIgnored;
    dest.descriptorBufferPushDescriptors = dest.descriptorBufferPushDescriptors || to_add.descriptorBufferPushDescriptors;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceShaderIntegerDotProductFeatures const& requested, VkPhysicalDeviceShaderIntegerDotProductFeatures const& supported) {
    if (requested.shaderIntegerDotProduct && !supported.shaderIntegerDotProduct) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderIntegerDotProductFeatures & dest, VkPhysicalDeviceShaderIntegerDotProductFeatures const& to_add) {
    dest.shaderIntegerDotProduct = dest.shaderIntegerDotProduct || to_add.shaderIntegerDotProduct;
}
#endif
#if (defined(VK_KHR_fragment_shader_barycentric))
inline bool compare_features_struct(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& requested, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& supported) {
    if (requested.fragmentShaderBarycentric && !supported.fragmentShaderBarycentric) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR & dest, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& to_add) {
    dest.fragmentShaderBarycentric = dest.fragmentShaderBarycentric || to_add.fragmentShaderBarycentric;
}
#endif
#if (defined(VK_NV_ray_tracing_motion_blur))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& requested, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& supported) {
    if (requested.rayTracingMotionBlur && !supported.rayTracingMotionBlur) return false;
    if (requested.rayTracingMotionBlurPipelineTraceRaysIndirect && !supported.rayTracingMotionBlurPipelineTraceRaysIndirect) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV & dest, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& to_add) {
    dest.rayTracingMotionBlur = dest.rayTracingMotionBlur || to_add.rayTracingMotionBlur;
    dest.rayTracingMotionBlurPipelineTraceRaysIndirect = dest.rayTracingMotionBlurPipelineTraceRaysIndirect || to_add.rayTracingMotionBlurPipelineTraceRaysIndirect;
}
#endif
#if (defined(VK_NV_ray_tracing_validation))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingValidationFeaturesNV const& requested, VkPhysicalDeviceRayTracingValidationFeaturesNV const& supported) {
    if (requested.rayTracingValidation && !supported.rayTracingValidation) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingValidationFeaturesNV & dest, VkPhysicalDeviceRayTracingValidationFeaturesNV const& to_add) {
    dest.rayTracingValidation = dest.rayTracingValidation || to_add.rayTracingValidation;
}
#endif
#if (defined(VK_EXT_rgba10x6_formats))
inline bool compare_features_struct(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& requested, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& supported) {
    if (requested.formatRgba10x6WithoutYCbCrSampler && !supported.formatRgba10x6WithoutYCbCrSampler) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT & dest, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& to_add) {
    dest.formatRgba10x6WithoutYCbCrSampler = dest.formatRgba10x6WithoutYCbCrSampler || to_add.formatRgba10x6WithoutYCbCrSampler;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_features_struct(VkPhysicalDeviceDynamicRenderingFeatures const& requested, VkPhysicalDeviceDynamicRenderingFeatures const& supported) {
    if (requested.dynamicRendering && !supported.dynamicRendering) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDynamicRenderingFeatures & dest, VkPhysicalDeviceDynamicRenderingFeatures const& to_add) {
    dest.dynamicRendering = dest.dynamicRendering || to_add.dynamicRendering;
}
#endif
#if (defined(VK_EXT_image_view_min_lod))
inline bool compare_features_struct(VkPhysicalDeviceImageViewMinLodFeaturesEXT const& requested, VkPhysicalDeviceImageViewMinLodFeaturesEXT const& supported) {
    if (requested.minLod && !supported.minLod) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageViewMinLodFeaturesEXT & dest, VkPhysicalDeviceImageViewMinLodFeaturesEXT const& to_add) {
    dest.minLod = dest.minLod || to_add.minLod;
}
#endif
#if (defined(VK_EXT_rasterization_order_attachment_access))
inline bool compare_features_struct(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& requested, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& supported) {
    if (requested.rasterizationOrderColorAttachmentAccess && !supported.rasterizationOrderColorAttachmentAccess) return false;
    if (requested.rasterizationOrderDepthAttachmentAccess && !supported.rasterizationOrderDepthAttachmentAccess) return false;
    if (requested.rasterizationOrderStencilAttachmentAccess && !supported.rasterizationOrderStencilAttachmentAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT & dest, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& to_add) {
    dest.rasterizationOrderColorAttachmentAccess = dest.rasterizationOrderColorAttachmentAccess || to_add.rasterizationOrderColorAttachmentAccess;
    dest.rasterizationOrderDepthAttachmentAccess = dest.rasterizationOrderDepthAttachmentAccess || to_add.rasterizationOrderDepthAttachmentAccess;
    dest.rasterizationOrderStencilAttachmentAccess = dest.rasterizationOrderStencilAttachmentAccess || to_add.rasterizationOrderStencilAttachmentAccess;
}
#endif
#if (defined(VK_NV_linear_color_attachment))
inline bool compare_features_struct(VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& requested, VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& supported) {
    if (requested.linearColorAttachment && !supported.linearColorAttachment) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceLinearColorAttachmentFeaturesNV & dest, VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& to_add) {
    dest.linearColorAttachment = dest.linearColorAttachment || to_add.linearColorAttachment;
}
#endif
#if (defined(VK_EXT_graphics_pipeline_library))
inline bool compare_features_struct(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& requested, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& supported) {
    if (requested.graphicsPipelineLibrary && !supported.graphicsPipelineLibrary) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT & dest, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& to_add) {
    dest.graphicsPipelineLibrary = dest.graphicsPipelineLibrary || to_add.graphicsPipelineLibrary;
}
#endif
#if (defined(VK_VALVE_descriptor_set_host_mapping))
inline bool compare_features_struct(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& requested, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& supported) {
    if (requested.descriptorSetHostMapping && !supported.descriptorSetHostMapping) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE & dest, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& to_add) {
    dest.descriptorSetHostMapping = dest.descriptorSetHostMapping || to_add.descriptorSetHostMapping;
}
#endif
#if (defined(VK_EXT_nested_command_buffer))
inline bool compare_features_struct(VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& requested, VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& supported) {
    if (requested.nestedCommandBuffer && !supported.nestedCommandBuffer) return false;
    if (requested.nestedCommandBufferRendering && !supported.nestedCommandBufferRendering) return false;
    if (requested.nestedCommandBufferSimultaneousUse && !supported.nestedCommandBufferSimultaneousUse) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceNestedCommandBufferFeaturesEXT & dest, VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& to_add) {
    dest.nestedCommandBuffer = dest.nestedCommandBuffer || to_add.nestedCommandBuffer;
    dest.nestedCommandBufferRendering = dest.nestedCommandBufferRendering || to_add.nestedCommandBufferRendering;
    dest.nestedCommandBufferSimultaneousUse = dest.nestedCommandBufferSimultaneousUse || to_add.nestedCommandBufferSimultaneousUse;
}
#endif
#if (defined(VK_EXT_shader_module_identifier))
inline bool compare_features_struct(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& requested, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& supported) {
    if (requested.shaderModuleIdentifier && !supported.shaderModuleIdentifier) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT & dest, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& to_add) {
    dest.shaderModuleIdentifier = dest.shaderModuleIdentifier || to_add.shaderModuleIdentifier;
}
#endif
#if (defined(VK_EXT_image_compression_control))
inline bool compare_features_struct(VkPhysicalDeviceImageCompressionControlFeaturesEXT const& requested, VkPhysicalDeviceImageCompressionControlFeaturesEXT const& supported) {
    if (requested.imageCompressionControl && !supported.imageCompressionControl) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageCompressionControlFeaturesEXT & dest, VkPhysicalDeviceImageCompressionControlFeaturesEXT const& to_add) {
    dest.imageCompressionControl = dest.imageCompressionControl || to_add.imageCompressionControl;
}
#endif
#if (defined(VK_EXT_image_compression_control_swapchain))
inline bool compare_features_struct(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& requested, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& supported) {
    if (requested.imageCompressionControlSwapchain && !supported.imageCompressionControlSwapchain) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT & dest, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& to_add) {
    dest.imageCompressionControlSwapchain = dest.imageCompressionControlSwapchain || to_add.imageCompressionControlSwapchain;
}
#endif
#if (defined(VK_EXT_subpass_merge_feedback))
inline bool compare_features_struct(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& requested, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& supported) {
    if (requested.subpassMergeFeedback && !supported.subpassMergeFeedback) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT & dest, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& to_add) {
    dest.subpassMergeFeedback = dest.subpassMergeFeedback || to_add.subpassMergeFeedback;
}
#endif
#if (defined(VK_EXT_opacity_micromap))
inline bool compare_features_struct(VkPhysicalDeviceOpacityMicromapFeaturesEXT const& requested, VkPhysicalDeviceOpacityMicromapFeaturesEXT const& supported) {
    if (requested.micromap && !supported.micromap) return false;
    if (requested.micromapCaptureReplay && !supported.micromapCaptureReplay) return false;
    if (requested.micromapHostCommands && !supported.micromapHostCommands) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceOpacityMicromapFeaturesEXT & dest, VkPhysicalDeviceOpacityMicromapFeaturesEXT const& to_add) {
    dest.micromap = dest.micromap || to_add.micromap;
    dest.micromapCaptureReplay = dest.micromapCaptureReplay || to_add.micromapCaptureReplay;
    dest.micromapHostCommands = dest.micromapHostCommands || to_add.micromapHostCommands;
}
#endif
#if (defined(VK_NV_displacement_micromap))
inline bool compare_features_struct(VkPhysicalDeviceDisplacementMicromapFeaturesNV const& requested, VkPhysicalDeviceDisplacementMicromapFeaturesNV const& supported) {
    if (requested.displacementMicromap && !supported.displacementMicromap) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDisplacementMicromapFeaturesNV & dest, VkPhysicalDeviceDisplacementMicromapFeaturesNV const& to_add) {
    dest.displacementMicromap = dest.displacementMicromap || to_add.displacementMicromap;
}
#endif
#if (defined(VK_EXT_pipeline_properties))
inline bool compare_features_struct(VkPhysicalDevicePipelinePropertiesFeaturesEXT const& requested, VkPhysicalDevicePipelinePropertiesFeaturesEXT const& supported) {
    if (requested.pipelinePropertiesIdentifier && !supported.pipelinePropertiesIdentifier) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelinePropertiesFeaturesEXT & dest, VkPhysicalDevicePipelinePropertiesFeaturesEXT const& to_add) {
    dest.pipelinePropertiesIdentifier = dest.pipelinePropertiesIdentifier || to_add.pipelinePropertiesIdentifier;
}
#endif
#if (defined(VK_AMD_shader_early_and_late_fragment_tests))
inline bool compare_features_struct(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& requested, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& supported) {
    if (requested.shaderEarlyAndLateFragmentTests && !supported.shaderEarlyAndLateFragmentTests) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD & dest, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& to_add) {
    dest.shaderEarlyAndLateFragmentTests = dest.shaderEarlyAndLateFragmentTests || to_add.shaderEarlyAndLateFragmentTests;
}
#endif
#if (defined(VK_EXT_non_seamless_cube_map))
inline bool compare_features_struct(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& requested, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& supported) {
    if (requested.nonSeamlessCubeMap && !supported.nonSeamlessCubeMap) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT & dest, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& to_add) {
    dest.nonSeamlessCubeMap = dest.nonSeamlessCubeMap || to_add.nonSeamlessCubeMap;
}
#endif
#if (defined(VK_EXT_pipeline_robustness))
inline bool compare_features_struct(VkPhysicalDevicePipelineRobustnessFeaturesEXT const& requested, VkPhysicalDevicePipelineRobustnessFeaturesEXT const& supported) {
    if (requested.pipelineRobustness && !supported.pipelineRobustness) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelineRobustnessFeaturesEXT & dest, VkPhysicalDevicePipelineRobustnessFeaturesEXT const& to_add) {
    dest.pipelineRobustness = dest.pipelineRobustness || to_add.pipelineRobustness;
}
#endif
#if (defined(VK_QCOM_image_processing))
inline bool compare_features_struct(VkPhysicalDeviceImageProcessingFeaturesQCOM const& requested, VkPhysicalDeviceImageProcessingFeaturesQCOM const& supported) {
    if (requested.textureSampleWeighted && !supported.textureSampleWeighted) return false;
    if (requested.textureBoxFilter && !supported.textureBoxFilter) return false;
    if (requested.textureBlockMatch && !supported.textureBlockMatch) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageProcessingFeaturesQCOM & dest, VkPhysicalDeviceImageProcessingFeaturesQCOM const& to_add) {
    dest.textureSampleWeighted = dest.textureSampleWeighted || to_add.textureSampleWeighted;
    dest.textureBoxFilter = dest.textureBoxFilter || to_add.textureBoxFilter;
    dest.textureBlockMatch = dest.textureBlockMatch || to_add.textureBlockMatch;
}
#endif
#if (defined(VK_QCOM_tile_properties))
inline bool compare_features_struct(VkPhysicalDeviceTilePropertiesFeaturesQCOM const& requested, VkPhysicalDeviceTilePropertiesFeaturesQCOM const& supported) {
    if (requested.tileProperties && !supported.tileProperties) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceTilePropertiesFeaturesQCOM & dest, VkPhysicalDeviceTilePropertiesFeaturesQCOM const& to_add) {
    dest.tileProperties = dest.tileProperties || to_add.tileProperties;
}
#endif
#if (defined(VK_SEC_amigo_profiling))
inline bool compare_features_struct(VkPhysicalDeviceAmigoProfilingFeaturesSEC const& requested, VkPhysicalDeviceAmigoProfilingFeaturesSEC const& supported) {
    if (requested.amigoProfiling && !supported.amigoProfiling) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceAmigoProfilingFeaturesSEC & dest, VkPhysicalDeviceAmigoProfilingFeaturesSEC const& to_add) {
    dest.amigoProfiling = dest.amigoProfiling || to_add.amigoProfiling;
}
#endif
#if (defined(VK_EXT_attachment_feedback_loop_layout))
inline bool compare_features_struct(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& requested, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& supported) {
    if (requested.attachmentFeedbackLoopLayout && !supported.attachmentFeedbackLoopLayout) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT & dest, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& to_add) {
    dest.attachmentFeedbackLoopLayout = dest.attachmentFeedbackLoopLayout || to_add.attachmentFeedbackLoopLayout;
}
#endif
#if (defined(VK_EXT_depth_clamp_zero_one))
inline bool compare_features_struct(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& requested, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& supported) {
    if (requested.depthClampZeroOne && !supported.depthClampZeroOne) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT & dest, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& to_add) {
    dest.depthClampZeroOne = dest.depthClampZeroOne || to_add.depthClampZeroOne;
}
#endif
#if (defined(VK_EXT_device_address_binding_report))
inline bool compare_features_struct(VkPhysicalDeviceAddressBindingReportFeaturesEXT const& requested, VkPhysicalDeviceAddressBindingReportFeaturesEXT const& supported) {
    if (requested.reportAddressBinding && !supported.reportAddressBinding) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceAddressBindingReportFeaturesEXT & dest, VkPhysicalDeviceAddressBindingReportFeaturesEXT const& to_add) {
    dest.reportAddressBinding = dest.reportAddressBinding || to_add.reportAddressBinding;
}
#endif
#if (defined(VK_NV_optical_flow))
inline bool compare_features_struct(VkPhysicalDeviceOpticalFlowFeaturesNV const& requested, VkPhysicalDeviceOpticalFlowFeaturesNV const& supported) {
    if (requested.opticalFlow && !supported.opticalFlow) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceOpticalFlowFeaturesNV & dest, VkPhysicalDeviceOpticalFlowFeaturesNV const& to_add) {
    dest.opticalFlow = dest.opticalFlow || to_add.opticalFlow;
}
#endif
#if (defined(VK_EXT_device_fault))
inline bool compare_features_struct(VkPhysicalDeviceFaultFeaturesEXT const& requested, VkPhysicalDeviceFaultFeaturesEXT const& supported) {
    if (requested.deviceFault && !supported.deviceFault) return false;
    if (requested.deviceFaultVendorBinary && !supported.deviceFaultVendorBinary) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFaultFeaturesEXT & dest, VkPhysicalDeviceFaultFeaturesEXT const& to_add) {
    dest.deviceFault = dest.deviceFault || to_add.deviceFault;
    dest.deviceFaultVendorBinary = dest.deviceFaultVendorBinary || to_add.deviceFaultVendorBinary;
}
#endif
#if (defined(VK_EXT_pipeline_library_group_handles))
inline bool compare_features_struct(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& requested, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& supported) {
    if (requested.pipelineLibraryGroupHandles && !supported.pipelineLibraryGroupHandles) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT & dest, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& to_add) {
    dest.pipelineLibraryGroupHandles = dest.pipelineLibraryGroupHandles || to_add.pipelineLibraryGroupHandles;
}
#endif
#if (defined(VK_ARM_shader_core_builtins))
inline bool compare_features_struct(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& requested, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& supported) {
    if (requested.shaderCoreBuiltins && !supported.shaderCoreBuiltins) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM & dest, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& to_add) {
    dest.shaderCoreBuiltins = dest.shaderCoreBuiltins || to_add.shaderCoreBuiltins;
}
#endif
#if (defined(VK_EXT_frame_boundary))
inline bool compare_features_struct(VkPhysicalDeviceFrameBoundaryFeaturesEXT const& requested, VkPhysicalDeviceFrameBoundaryFeaturesEXT const& supported) {
    if (requested.frameBoundary && !supported.frameBoundary) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceFrameBoundaryFeaturesEXT & dest, VkPhysicalDeviceFrameBoundaryFeaturesEXT const& to_add) {
    dest.frameBoundary = dest.frameBoundary || to_add.frameBoundary;
}
#endif
#if (defined(VK_EXT_dynamic_rendering_unused_attachments))
inline bool compare_features_struct(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& requested, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& supported) {
    if (requested.dynamicRenderingUnusedAttachments && !supported.dynamicRenderingUnusedAttachments) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT & dest, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& to_add) {
    dest.dynamicRenderingUnusedAttachments = dest.dynamicRenderingUnusedAttachments || to_add.dynamicRenderingUnusedAttachments;
}
#endif
#if (defined(VK_EXT_swapchain_maintenance1))
inline bool compare_features_struct(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& requested, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& supported) {
    if (requested.swapchainMaintenance1 && !supported.swapchainMaintenance1) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT & dest, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& to_add) {
    dest.swapchainMaintenance1 = dest.swapchainMaintenance1 || to_add.swapchainMaintenance1;
}
#endif
#if (defined(VK_EXT_depth_bias_control))
inline bool compare_features_struct(VkPhysicalDeviceDepthBiasControlFeaturesEXT const& requested, VkPhysicalDeviceDepthBiasControlFeaturesEXT const& supported) {
    if (requested.depthBiasControl && !supported.depthBiasControl) return false;
    if (requested.leastRepresentableValueForceUnormRepresentation && !supported.leastRepresentableValueForceUnormRepresentation) return false;
    if (requested.floatRepresentation && !supported.floatRepresentation) return false;
    if (requested.depthBiasExact && !supported.depthBiasExact) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDepthBiasControlFeaturesEXT & dest, VkPhysicalDeviceDepthBiasControlFeaturesEXT const& to_add) {
    dest.depthBiasControl = dest.depthBiasControl || to_add.depthBiasControl;
    dest.leastRepresentableValueForceUnormRepresentation = dest.leastRepresentableValueForceUnormRepresentation || to_add.leastRepresentableValueForceUnormRepresentation;
    dest.floatRepresentation = dest.floatRepresentation || to_add.floatRepresentation;
    dest.depthBiasExact = dest.depthBiasExact || to_add.depthBiasExact;
}
#endif
#if (defined(VK_NV_ray_tracing_invocation_reorder))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& requested, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& supported) {
    if (requested.rayTracingInvocationReorder && !supported.rayTracingInvocationReorder) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV & dest, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& to_add) {
    dest.rayTracingInvocationReorder = dest.rayTracingInvocationReorder || to_add.rayTracingInvocationReorder;
}
#endif
#if (defined(VK_NV_extended_sparse_address_space))
inline bool compare_features_struct(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& requested, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& supported) {
    if (requested.extendedSparseAddressSpace && !supported.extendedSparseAddressSpace) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV & dest, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& to_add) {
    dest.extendedSparseAddressSpace = dest.extendedSparseAddressSpace || to_add.extendedSparseAddressSpace;
}
#endif
#if (defined(VK_QCOM_multiview_per_view_viewports))
inline bool compare_features_struct(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& requested, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& supported) {
    if (requested.multiviewPerViewViewports && !supported.multiviewPerViewViewports) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM & dest, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& to_add) {
    dest.multiviewPerViewViewports = dest.multiviewPerViewViewports || to_add.multiviewPerViewViewports;
}
#endif
#if (defined(VK_KHR_ray_tracing_position_fetch))
inline bool compare_features_struct(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& requested, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& supported) {
    if (requested.rayTracingPositionFetch && !supported.rayTracingPositionFetch) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR & dest, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& to_add) {
    dest.rayTracingPositionFetch = dest.rayTracingPositionFetch || to_add.rayTracingPositionFetch;
}
#endif
#if (defined(VK_QCOM_multiview_per_view_render_areas))
inline bool compare_features_struct(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& requested, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& supported) {
    if (requested.multiviewPerViewRenderAreas && !supported.multiviewPerViewRenderAreas) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM & dest, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& to_add) {
    dest.multiviewPerViewRenderAreas = dest.multiviewPerViewRenderAreas || to_add.multiviewPerViewRenderAreas;
}
#endif
#if (defined(VK_EXT_shader_object))
inline bool compare_features_struct(VkPhysicalDeviceShaderObjectFeaturesEXT const& requested, VkPhysicalDeviceShaderObjectFeaturesEXT const& supported) {
    if (requested.shaderObject && !supported.shaderObject) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderObjectFeaturesEXT & dest, VkPhysicalDeviceShaderObjectFeaturesEXT const& to_add) {
    dest.shaderObject = dest.shaderObject || to_add.shaderObject;
}
#endif
#if (defined(VK_EXT_shader_tile_image))
inline bool compare_features_struct(VkPhysicalDeviceShaderTileImageFeaturesEXT const& requested, VkPhysicalDeviceShaderTileImageFeaturesEXT const& supported) {
    if (requested.shaderTileImageColorReadAccess && !supported.shaderTileImageColorReadAccess) return false;
    if (requested.shaderTileImageDepthReadAccess && !supported.shaderTileImageDepthReadAccess) return false;
    if (requested.shaderTileImageStencilReadAccess && !supported.shaderTileImageStencilReadAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderTileImageFeaturesEXT & dest, VkPhysicalDeviceShaderTileImageFeaturesEXT const& to_add) {
    dest.shaderTileImageColorReadAccess = dest.shaderTileImageColorReadAccess || to_add.shaderTileImageColorReadAccess;
    dest.shaderTileImageDepthReadAccess = dest.shaderTileImageDepthReadAccess || to_add.shaderTileImageDepthReadAccess;
    dest.shaderTileImageStencilReadAccess = dest.shaderTileImageStencilReadAccess || to_add.shaderTileImageStencilReadAccess;
}
#endif
#if (defined(VK_QNX_external_memory_screen_buffer))
inline bool compare_features_struct(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& requested, VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& supported) {
    if (requested.screenBufferImport && !supported.screenBufferImport) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX & dest, VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& to_add) {
    dest.screenBufferImport = dest.screenBufferImport || to_add.screenBufferImport;
}
#endif
#if (defined(VK_KHR_cooperative_matrix))
inline bool compare_features_struct(VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& requested, VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& supported) {
    if (requested.cooperativeMatrix && !supported.cooperativeMatrix) return false;
    if (requested.cooperativeMatrixRobustBufferAccess && !supported.cooperativeMatrixRobustBufferAccess) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCooperativeMatrixFeaturesKHR & dest, VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& to_add) {
    dest.cooperativeMatrix = dest.cooperativeMatrix || to_add.cooperativeMatrix;
    dest.cooperativeMatrixRobustBufferAccess = dest.cooperativeMatrixRobustBufferAccess || to_add.cooperativeMatrixRobustBufferAccess;
}
#endif
#if (defined(VK_AMDX_shader_enqueue))
inline bool compare_features_struct(VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& requested, VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& supported) {
    if (requested.shaderEnqueue && !supported.shaderEnqueue) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderEnqueueFeaturesAMDX & dest, VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& to_add) {
    dest.shaderEnqueue = dest.shaderEnqueue || to_add.shaderEnqueue;
}
#endif
#if (defined(VK_QCOM_filter_cubic_clamp))
inline bool compare_features_struct(VkPhysicalDeviceCubicClampFeaturesQCOM const& requested, VkPhysicalDeviceCubicClampFeaturesQCOM const& supported) {
    if (requested.cubicRangeClamp && !supported.cubicRangeClamp) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCubicClampFeaturesQCOM & dest, VkPhysicalDeviceCubicClampFeaturesQCOM const& to_add) {
    dest.cubicRangeClamp = dest.cubicRangeClamp || to_add.cubicRangeClamp;
}
#endif
#if (defined(VK_QCOM_ycbcr_degamma))
inline bool compare_features_struct(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& requested, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& supported) {
    if (requested.ycbcrDegamma && !supported.ycbcrDegamma) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM & dest, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& to_add) {
    dest.ycbcrDegamma = dest.ycbcrDegamma || to_add.ycbcrDegamma;
}
#endif
#if (defined(VK_QCOM_filter_cubic_weights))
inline bool compare_features_struct(VkPhysicalDeviceCubicWeightsFeaturesQCOM const& requested, VkPhysicalDeviceCubicWeightsFeaturesQCOM const& supported) {
    if (requested.selectableCubicWeights && !supported.selectableCubicWeights) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCubicWeightsFeaturesQCOM & dest, VkPhysicalDeviceCubicWeightsFeaturesQCOM const& to_add) {
    dest.selectableCubicWeights = dest.selectableCubicWeights || to_add.selectableCubicWeights;
}
#endif
#if (defined(VK_QCOM_image_processing2))
inline bool compare_features_struct(VkPhysicalDeviceImageProcessing2FeaturesQCOM const& requested, VkPhysicalDeviceImageProcessing2FeaturesQCOM const& supported) {
    if (requested.textureBlockMatch2 && !supported.textureBlockMatch2) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageProcessing2FeaturesQCOM & dest, VkPhysicalDeviceImageProcessing2FeaturesQCOM const& to_add) {
    dest.textureBlockMatch2 = dest.textureBlockMatch2 || to_add.textureBlockMatch2;
}
#endif
#if (defined(VK_NV_descriptor_pool_overallocation))
inline bool compare_features_struct(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& requested, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& supported) {
    if (requested.descriptorPoolOverallocation && !supported.descriptorPoolOverallocation) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV & dest, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& to_add) {
    dest.descriptorPoolOverallocation = dest.descriptorPoolOverallocation || to_add.descriptorPoolOverallocation;
}
#endif
#if (defined(VK_NV_per_stage_descriptor_set))
inline bool compare_features_struct(VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& requested, VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& supported) {
    if (requested.perStageDescriptorSet && !supported.perStageDescriptorSet) return false;
    if (requested.dynamicPipelineLayout && !supported.dynamicPipelineLayout) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDevicePerStageDescriptorSetFeaturesNV & dest, VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& to_add) {
    dest.perStageDescriptorSet = dest.perStageDescriptorSet || to_add.perStageDescriptorSet;
    dest.dynamicPipelineLayout = dest.dynamicPipelineLayout || to_add.dynamicPipelineLayout;
}
#endif
#if (defined(VK_ANDROID_external_format_resolve))
inline bool compare_features_struct(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& requested, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& supported) {
    if (requested.externalFormatResolve && !supported.externalFormatResolve) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID & dest, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& to_add) {
    dest.externalFormatResolve = dest.externalFormatResolve || to_add.externalFormatResolve;
}
#endif
#if (defined(VK_NV_cuda_kernel_launch))
inline bool compare_features_struct(VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& requested, VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& supported) {
    if (requested.cudaKernelLaunchFeatures && !supported.cudaKernelLaunchFeatures) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceCudaKernelLaunchFeaturesNV & dest, VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& to_add) {
    dest.cudaKernelLaunchFeatures = dest.cudaKernelLaunchFeatures || to_add.cudaKernelLaunchFeatures;
}
#endif
#if (defined(VK_ARM_scheduling_controls))
inline bool compare_features_struct(VkPhysicalDeviceSchedulingControlsFeaturesARM const& requested, VkPhysicalDeviceSchedulingControlsFeaturesARM const& supported) {
    if (requested.schedulingControls && !supported.schedulingControls) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceSchedulingControlsFeaturesARM & dest, VkPhysicalDeviceSchedulingControlsFeaturesARM const& to_add) {
    dest.schedulingControls = dest.schedulingControls || to_add.schedulingControls;
}
#endif
#if (defined(VK_IMG_relaxed_line_rasterization))
inline bool compare_features_struct(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& requested, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& supported) {
    if (requested.relaxedLineRasterization && !supported.relaxedLineRasterization) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG & dest, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& to_add) {
    dest.relaxedLineRasterization = dest.relaxedLineRasterization || to_add.relaxedLineRasterization;
}
#endif
#if (defined(VK_ARM_render_pass_striped))
inline bool compare_features_struct(VkPhysicalDeviceRenderPassStripedFeaturesARM const& requested, VkPhysicalDeviceRenderPassStripedFeaturesARM const& supported) {
    if (requested.renderPassStriped && !supported.renderPassStriped) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRenderPassStripedFeaturesARM & dest, VkPhysicalDeviceRenderPassStripedFeaturesARM const& to_add) {
    dest.renderPassStriped = dest.renderPassStriped || to_add.renderPassStriped;
}
#endif
#if (defined(VK_KHR_shader_maximal_reconvergence))
inline bool compare_features_struct(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& requested, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& supported) {
    if (requested.shaderMaximalReconvergence && !supported.shaderMaximalReconvergence) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR & dest, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& to_add) {
    dest.shaderMaximalReconvergence = dest.shaderMaximalReconvergence || to_add.shaderMaximalReconvergence;
}
#endif
#if (defined(VK_KHR_shader_subgroup_rotate))
inline bool compare_features_struct(VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& requested, VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& supported) {
    if (requested.shaderSubgroupRotate && !supported.shaderSubgroupRotate) return false;
    if (requested.shaderSubgroupRotateClustered && !supported.shaderSubgroupRotateClustered) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR & dest, VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& to_add) {
    dest.shaderSubgroupRotate = dest.shaderSubgroupRotate || to_add.shaderSubgroupRotate;
    dest.shaderSubgroupRotateClustered = dest.shaderSubgroupRotateClustered || to_add.shaderSubgroupRotateClustered;
}
#endif
#if (defined(VK_KHR_shader_expect_assume))
inline bool compare_features_struct(VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& requested, VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& supported) {
    if (requested.shaderExpectAssume && !supported.shaderExpectAssume) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderExpectAssumeFeaturesKHR & dest, VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& to_add) {
    dest.shaderExpectAssume = dest.shaderExpectAssume || to_add.shaderExpectAssume;
}
#endif
#if (defined(VK_KHR_shader_float_controls2))
inline bool compare_features_struct(VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& requested, VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& supported) {
    if (requested.shaderFloatControls2 && !supported.shaderFloatControls2) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderFloatControls2FeaturesKHR & dest, VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& to_add) {
    dest.shaderFloatControls2 = dest.shaderFloatControls2 || to_add.shaderFloatControls2;
}
#endif
#if (defined(VK_KHR_dynamic_rendering_local_read))
inline bool compare_features_struct(VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& requested, VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& supported) {
    if (requested.dynamicRenderingLocalRead && !supported.dynamicRenderingLocalRead) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR & dest, VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& to_add) {
    dest.dynamicRenderingLocalRead = dest.dynamicRenderingLocalRead || to_add.dynamicRenderingLocalRead;
}
#endif
#if (defined(VK_KHR_shader_quad_control))
inline bool compare_features_struct(VkPhysicalDeviceShaderQuadControlFeaturesKHR const& requested, VkPhysicalDeviceShaderQuadControlFeaturesKHR const& supported) {
    if (requested.shaderQuadControl && !supported.shaderQuadControl) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderQuadControlFeaturesKHR & dest, VkPhysicalDeviceShaderQuadControlFeaturesKHR const& to_add) {
    dest.shaderQuadControl = dest.shaderQuadControl || to_add.shaderQuadControl;
}
#endif
#if (defined(VK_NV_shader_atomic_float16_vector))
inline bool compare_features_struct(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& requested, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& supported) {
    if (requested.shaderFloat16VectorAtomics && !supported.shaderFloat16VectorAtomics) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV & dest, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& to_add) {
    dest.shaderFloat16VectorAtomics = dest.shaderFloat16VectorAtomics || to_add.shaderFloat16VectorAtomics;
}
#endif
#if (defined(VK_EXT_map_memory_placed))
inline bool compare_features_struct(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& requested, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& supported) {
    if (requested.memoryMapPlaced && !supported.memoryMapPlaced) return false;
    if (requested.memoryMapRangePlaced && !supported.memoryMapRangePlaced) return false;
    if (requested.memoryUnmapReserve && !supported.memoryUnmapReserve) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT & dest, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& to_add) {
    dest.memoryMapPlaced = dest.memoryMapPlaced || to_add.memoryMapPlaced;
    dest.memoryMapRangePlaced = dest.memoryMapRangePlaced || to_add.memoryMapRangePlaced;
    dest.memoryUnmapReserve = dest.memoryUnmapReserve || to_add.memoryUnmapReserve;
}
#endif
#if (defined(VK_NV_raw_access_chains))
inline bool compare_features_struct(VkPhysicalDeviceRawAccessChainsFeaturesNV const& requested, VkPhysicalDeviceRawAccessChainsFeaturesNV const& supported) {
    if (requested.shaderRawAccessChains && !supported.shaderRawAccessChains) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceRawAccessChainsFeaturesNV & dest, VkPhysicalDeviceRawAccessChainsFeaturesNV const& to_add) {
    dest.shaderRawAccessChains = dest.shaderRawAccessChains || to_add.shaderRawAccessChains;
}
#endif
#if (defined(VK_MESA_image_alignment_control))
inline bool compare_features_struct(VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& requested, VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& supported) {
    if (requested.imageAlignmentControl && !supported.imageAlignmentControl) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceImageAlignmentControlFeaturesMESA & dest, VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& to_add) {
    dest.imageAlignmentControl = dest.imageAlignmentControl || to_add.imageAlignmentControl;
}
#endif
#if (defined(VK_EXT_shader_replicated_composites))
inline bool compare_features_struct(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& requested, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& supported) {
    if (requested.shaderReplicatedComposites && !supported.shaderReplicatedComposites) return false;
    return true;
}
inline void merge_features_struct(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT & dest, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& to_add) {
    dest.shaderReplicatedComposites = dest.shaderReplicatedComposites || to_add.shaderReplicatedComposites;
}
#endif
inline bool compare_features_struct(const VkStructureType sType, const void* requested, const void* supported) {
    switch (sType){
#if (defined(VK_NV_external_memory_sci_buf))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalMemorySciBufFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExternalMemorySciBufFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_device_generated_commands))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_device_generated_commands_compute))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDevicePrivateDataFeatures*>(requested), *static_cast<const VkPhysicalDevicePrivateDataFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVariablePointersFeatures*>(requested), *static_cast<const VkPhysicalDeviceVariablePointersFeatures*>(supported));
#endif
#if (defined(VK_NV_external_sci_sync))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalSciSyncFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExternalSciSyncFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_external_sci_sync2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalSciSync2FeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExternalSciSync2FeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceMultiviewFeatures*>(requested), *static_cast<const VkPhysicalDeviceMultiviewFeatures*>(supported));
#endif
#if (defined(VK_KHR_present_id))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDevicePresentIdFeaturesKHR*>(requested), *static_cast<const VkPhysicalDevicePresentIdFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_present_wait))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDevicePresentWaitFeaturesKHR*>(requested), *static_cast<const VkPhysicalDevicePresentWaitFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDevice16BitStorageFeatures*>(requested), *static_cast<const VkPhysicalDevice16BitStorageFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(requested), *static_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(requested), *static_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceProtectedMemoryFeatures*>(requested), *static_cast<const VkPhysicalDeviceProtectedMemoryFeatures*>(supported));
#endif
#if (defined(VK_EXT_blend_operation_advanced))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_multi_draw))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceInlineUniformBlockFeatures*>(requested), *static_cast<const VkPhysicalDeviceInlineUniformBlockFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceMaintenance4Features*>(requested), *static_cast<const VkPhysicalDeviceMaintenance4Features*>(supported));
#endif
#if (defined(VK_KHR_maintenance5))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_maintenance6))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceMaintenance6FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceMaintenance6FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_maintenance7))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceMaintenance7FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceMaintenance7FeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderDrawParametersFeatures*>(requested), *static_cast<const VkPhysicalDeviceShaderDrawParametersFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderFloat16Int8Features*>(requested), *static_cast<const VkPhysicalDeviceShaderFloat16Int8Features*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceHostQueryResetFeatures*>(requested), *static_cast<const VkPhysicalDeviceHostQueryResetFeatures*>(supported));
#endif
#if (defined(VK_KHR_global_priority))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_device_memory_report))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceDescriptorIndexingFeatures*>(requested), *static_cast<const VkPhysicalDeviceDescriptorIndexingFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures*>(requested), *static_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDevice8BitStorageFeatures*>(requested), *static_cast<const VkPhysicalDevice8BitStorageFeatures*>(supported));
#endif
#if (defined(VK_EXT_conditional_rendering))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures*>(requested), *static_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderAtomicInt64Features*>(requested), *static_cast<const VkPhysicalDeviceShaderAtomicInt64Features*>(supported));
#endif
#if (defined(VK_EXT_shader_atomic_float))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_atomic_float2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_vertex_attribute_divisor))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_astc_decode_mode))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_transform_feedback))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_representative_fragment_test))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_scissor_exclusive))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_corner_sampled_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_compute_shader_derivatives))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_shader_image_footprint))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_dedicated_allocation_image_aliasing))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_copy_memory_indirect))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_memory_decompression))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_shading_rate_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV*>(supported));
#endif
#if (defined(VK_HUAWEI_invocation_mask))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI): return compare_features_struct(*static_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*>(requested), *static_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_NV_mesh_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceMeshShaderFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceMeshShaderFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_mesh_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_acceleration_structure))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_pipeline))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayQueryFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceRayQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_fragment_density_map))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_fragment_density_map2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*>(supported));
#endif
#if (defined(VK_QCOM_fragment_density_map_offset))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures*>(requested), *static_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(requested), *static_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(supported));
#endif
#if (defined(VK_EXT_depth_clip_enable))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_memory_priority))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pageable_device_local_memory))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures*>(requested), *static_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures*>(supported));
#endif
#if (defined(VK_EXT_buffer_device_address))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceImagelessFramebufferFeatures*>(requested), *static_cast<const VkPhysicalDeviceImagelessFramebufferFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(requested), *static_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(supported));
#endif
#if (defined(VK_NV_cooperative_matrix))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_ycbcr_image_arrays))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_present_barrier))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDevicePresentBarrierFeaturesNV*>(requested), *static_cast<const VkPhysicalDevicePresentBarrierFeaturesNV*>(supported));
#endif
#if (defined(VK_KHR_performance_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR*>(requested), *static_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_coverage_reduction_mode))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV*>(supported));
#endif
#if (defined(VK_INTEL_shader_integer_functions2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*>(requested), *static_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*>(supported));
#endif
#if (defined(VK_KHR_shader_clock))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderClockFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderClockFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_index_type_uint8))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_shader_sm_builtins))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_fragment_shader_interlock))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(requested), *static_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(supported));
#endif
#if (defined(VK_EXT_primitive_topology_list_restart))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_pipeline_executable_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*>(requested), *static_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(requested), *static_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(supported));
#endif
#if (defined(VK_EXT_texel_buffer_alignment))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures*>(requested), *static_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures*>(supported));
#endif
#if (defined(VK_KHR_line_rasterization))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceLineRasterizationFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceLineRasterizationFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures*>(requested), *static_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVulkan11Features*>(requested), *static_cast<const VkPhysicalDeviceVulkan11Features*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVulkan12Features*>(requested), *static_cast<const VkPhysicalDeviceVulkan12Features*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVulkan13Features*>(requested), *static_cast<const VkPhysicalDeviceVulkan13Features*>(supported));
#endif
#if (defined(VK_AMD_device_coherent_memory))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD): return compare_features_struct(*static_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD*>(requested), *static_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD*>(supported));
#endif
#if (defined(VK_EXT_custom_border_color))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_border_color_swizzle))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_device_diagnostics_config))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*>(requested), *static_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*>(supported));
#endif
#if (defined(VK_KHR_shader_subgroup_uniform_control_flow))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_robustness2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceRobustness2FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceRobustness2FeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageRobustnessFeatures*>(requested), *static_cast<const VkPhysicalDeviceImageRobustnessFeatures*>(supported));
#endif
#if (defined(VK_KHR_workgroup_memory_explicit_layout))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_portability_subset))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(requested), *static_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_4444_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevice4444FormatsFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevice4444FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_HUAWEI_subpass_shading))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI): return compare_features_struct(*static_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*>(requested), *static_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_HUAWEI_cluster_culling_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI): return compare_features_struct(*static_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*>(requested), *static_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_EXT_shader_image_atomic_int64))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_fragment_shading_rate))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures*>(requested), *static_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures*>(supported));
#endif
#if (defined(VK_NV_fragment_shading_rate_enums))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_image_2d_view_of_3d))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_sliced_view_of_3d))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_attachment_feedback_loop_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_legacy_vertex_attributes))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_mutable_descriptor_type))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_clip_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_vertex_input_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_external_memory_rdma))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*>(supported));
#endif
#if (defined(VK_KHR_shader_relaxed_extended_instruction))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_color_write_enable))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceSynchronization2Features*>(requested), *static_cast<const VkPhysicalDeviceSynchronization2Features*>(supported));
#endif
#if (defined(VK_EXT_host_image_copy))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT*>(supported));
#endif
#if (defined(VKSC_VERSION_1_0))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceVulkanSC10Features*>(requested), *static_cast<const VkPhysicalDeviceVulkanSC10Features*>(supported));
#endif
#if (defined(VK_EXT_primitives_generated_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_legacy_dithering))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_multisampled_render_to_single_sampled))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_protected_access))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_video_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceVideoMaintenance1FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceVideoMaintenance1FeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_inherited_viewport_scissor))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_ycbcr_2plane_444_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_provoking_vertex))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_descriptor_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures*>(requested), *static_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures*>(supported));
#endif
#if (defined(VK_KHR_fragment_shader_barycentric))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_motion_blur))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_validation))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingValidationFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceRayTracingValidationFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_rgba10x6_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES): return compare_features_struct(*static_cast<const VkPhysicalDeviceDynamicRenderingFeatures*>(requested), *static_cast<const VkPhysicalDeviceDynamicRenderingFeatures*>(supported));
#endif
#if (defined(VK_EXT_image_view_min_lod))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_rasterization_order_attachment_access))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_linear_color_attachment))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_graphics_pipeline_library))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*>(supported));
#endif
#if (defined(VK_VALVE_descriptor_set_host_mapping))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE): return compare_features_struct(*static_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*>(requested), *static_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*>(supported));
#endif
#if (defined(VK_EXT_nested_command_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_module_identifier))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_compression_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_compression_control_swapchain))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_subpass_merge_feedback))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_opacity_micromap))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_displacement_micromap))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDisplacementMicromapFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDisplacementMicromapFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_pipeline_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT*>(supported));
#endif
#if (defined(VK_AMD_shader_early_and_late_fragment_tests))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*>(requested), *static_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*>(supported));
#endif
#if (defined(VK_EXT_non_seamless_cube_map))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_robustness))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT*>(supported));
#endif
#if (defined(VK_QCOM_image_processing))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_tile_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM*>(supported));
#endif
#if (defined(VK_SEC_amigo_profiling))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC): return compare_features_struct(*static_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC*>(requested), *static_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC*>(supported));
#endif
#if (defined(VK_EXT_attachment_feedback_loop_layout))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_clamp_zero_one))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_device_address_binding_report))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_optical_flow))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_device_fault))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceFaultFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceFaultFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_library_group_handles))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*>(requested), *static_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*>(supported));
#endif
#if (defined(VK_ARM_shader_core_builtins))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*>(requested), *static_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*>(supported));
#endif
#if (defined(VK_EXT_frame_boundary))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_dynamic_rendering_unused_attachments))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_swapchain_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_bias_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_invocation_reorder))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_extended_sparse_address_space))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV*>(supported));
#endif
#if (defined(VK_QCOM_multiview_per_view_viewports))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_position_fetch))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*>(supported));
#endif
#if (defined(VK_QCOM_multiview_per_view_render_areas))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*>(supported));
#endif
#if (defined(VK_EXT_shader_object))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_tile_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT*>(supported));
#endif
#if (defined(VK_QNX_external_memory_screen_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX*>(requested), *static_cast<const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX*>(supported));
#endif
#if (defined(VK_KHR_cooperative_matrix))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR*>(supported));
#endif
#if (defined(VK_AMDX_shader_enqueue))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderEnqueueFeaturesAMDX*>(requested), *static_cast<const VkPhysicalDeviceShaderEnqueueFeaturesAMDX*>(supported));
#endif
#if (defined(VK_QCOM_filter_cubic_clamp))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_ycbcr_degamma))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_filter_cubic_weights))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_image_processing2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM*>(requested), *static_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM*>(supported));
#endif
#if (defined(VK_NV_descriptor_pool_overallocation))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_per_stage_descriptor_set))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDevicePerStageDescriptorSetFeaturesNV*>(requested), *static_cast<const VkPhysicalDevicePerStageDescriptorSetFeaturesNV*>(supported));
#endif
#if (defined(VK_ANDROID_external_format_resolve))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID): return compare_features_struct(*static_cast<const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID*>(requested), *static_cast<const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID*>(supported));
#endif
#if (defined(VK_NV_cuda_kernel_launch))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceCudaKernelLaunchFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceCudaKernelLaunchFeaturesNV*>(supported));
#endif
#if (defined(VK_ARM_scheduling_controls))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM): return compare_features_struct(*static_cast<const VkPhysicalDeviceSchedulingControlsFeaturesARM*>(requested), *static_cast<const VkPhysicalDeviceSchedulingControlsFeaturesARM*>(supported));
#endif
#if (defined(VK_IMG_relaxed_line_rasterization))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG): return compare_features_struct(*static_cast<const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG*>(requested), *static_cast<const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG*>(supported));
#endif
#if (defined(VK_ARM_render_pass_striped))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM): return compare_features_struct(*static_cast<const VkPhysicalDeviceRenderPassStripedFeaturesARM*>(requested), *static_cast<const VkPhysicalDeviceRenderPassStripedFeaturesARM*>(supported));
#endif
#if (defined(VK_KHR_shader_maximal_reconvergence))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_subgroup_rotate))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_expect_assume))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_float_controls2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderFloatControls2FeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderFloatControls2FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_dynamic_rendering_local_read))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_quad_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderQuadControlFeaturesKHR*>(requested), *static_cast<const VkPhysicalDeviceShaderQuadControlFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_shader_atomic_float16_vector))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_map_memory_placed))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_raw_access_chains))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV): return compare_features_struct(*static_cast<const VkPhysicalDeviceRawAccessChainsFeaturesNV*>(requested), *static_cast<const VkPhysicalDeviceRawAccessChainsFeaturesNV*>(supported));
#endif
#if (defined(VK_MESA_image_alignment_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA): return compare_features_struct(*static_cast<const VkPhysicalDeviceImageAlignmentControlFeaturesMESA*>(requested), *static_cast<const VkPhysicalDeviceImageAlignmentControlFeaturesMESA*>(supported));
#endif
#if (defined(VK_EXT_shader_replicated_composites))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT): return compare_features_struct(*static_cast<const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT*>(requested), *static_cast<const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT*>(supported));
#endif
    default: return false;
    }
}
inline void merge_features_struct(const VkStructureType sType, void* requested, void* supported) {
    switch (sType){
#if (defined(VK_NV_external_memory_sci_buf))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExternalMemorySciBufFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExternalMemorySciBufFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_device_generated_commands))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_device_generated_commands_compute))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES): merge_features_struct(*static_cast<VkPhysicalDevicePrivateDataFeatures*>(requested), *static_cast<VkPhysicalDevicePrivateDataFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVariablePointersFeatures*>(requested), *static_cast<VkPhysicalDeviceVariablePointersFeatures*>(supported));
#endif
#if (defined(VK_NV_external_sci_sync))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExternalSciSyncFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExternalSciSyncFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_external_sci_sync2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExternalSciSync2FeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExternalSciSync2FeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceMultiviewFeatures*>(requested), *static_cast<VkPhysicalDeviceMultiviewFeatures*>(supported));
#endif
#if (defined(VK_KHR_present_id))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDevicePresentIdFeaturesKHR*>(requested), *static_cast<VkPhysicalDevicePresentIdFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_present_wait))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDevicePresentWaitFeaturesKHR*>(requested), *static_cast<VkPhysicalDevicePresentWaitFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES): merge_features_struct(*static_cast<VkPhysicalDevice16BitStorageFeatures*>(requested), *static_cast<VkPhysicalDevice16BitStorageFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(requested), *static_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(requested), *static_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(requested), *static_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(supported));
#endif
#if (defined(VK_EXT_blend_operation_advanced))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_multi_draw))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMultiDrawFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMultiDrawFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceInlineUniformBlockFeatures*>(requested), *static_cast<VkPhysicalDeviceInlineUniformBlockFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceMaintenance4Features*>(requested), *static_cast<VkPhysicalDeviceMaintenance4Features*>(supported));
#endif
#if (defined(VK_KHR_maintenance5))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceMaintenance5FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceMaintenance5FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_maintenance6))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceMaintenance6FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceMaintenance6FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_maintenance7))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceMaintenance7FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceMaintenance7FeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderDrawParametersFeatures*>(requested), *static_cast<VkPhysicalDeviceShaderDrawParametersFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderFloat16Int8Features*>(requested), *static_cast<VkPhysicalDeviceShaderFloat16Int8Features*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceHostQueryResetFeatures*>(requested), *static_cast<VkPhysicalDeviceHostQueryResetFeatures*>(supported));
#endif
#if (defined(VK_KHR_global_priority))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_device_memory_report))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceDescriptorIndexingFeatures*>(requested), *static_cast<VkPhysicalDeviceDescriptorIndexingFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceTimelineSemaphoreFeatures*>(requested), *static_cast<VkPhysicalDeviceTimelineSemaphoreFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES): merge_features_struct(*static_cast<VkPhysicalDevice8BitStorageFeatures*>(requested), *static_cast<VkPhysicalDevice8BitStorageFeatures*>(supported));
#endif
#if (defined(VK_EXT_conditional_rendering))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVulkanMemoryModelFeatures*>(requested), *static_cast<VkPhysicalDeviceVulkanMemoryModelFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderAtomicInt64Features*>(requested), *static_cast<VkPhysicalDeviceShaderAtomicInt64Features*>(supported));
#endif
#if (defined(VK_EXT_shader_atomic_float))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_atomic_float2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_vertex_attribute_divisor))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_astc_decode_mode))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_transform_feedback))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceTransformFeedbackFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceTransformFeedbackFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_representative_fragment_test))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_scissor_exclusive))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_corner_sampled_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_compute_shader_derivatives))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_shader_image_footprint))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_dedicated_allocation_image_aliasing))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_copy_memory_indirect))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_memory_decompression))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceMemoryDecompressionFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceMemoryDecompressionFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_shading_rate_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceShadingRateImageFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceShadingRateImageFeaturesNV*>(supported));
#endif
#if (defined(VK_HUAWEI_invocation_mask))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI): merge_features_struct(*static_cast<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*>(requested), *static_cast<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_NV_mesh_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceMeshShaderFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceMeshShaderFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_mesh_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMeshShaderFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMeshShaderFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_acceleration_structure))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceAccelerationStructureFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceAccelerationStructureFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_pipeline))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingPipelineFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceRayTracingPipelineFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceRayQueryFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceRayQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_fragment_density_map))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_fragment_density_map2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*>(supported));
#endif
#if (defined(VK_QCOM_fragment_density_map_offset))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceScalarBlockLayoutFeatures*>(requested), *static_cast<VkPhysicalDeviceScalarBlockLayoutFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(requested), *static_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(supported));
#endif
#if (defined(VK_EXT_depth_clip_enable))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_memory_priority))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMemoryPriorityFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMemoryPriorityFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pageable_device_local_memory))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceBufferDeviceAddressFeatures*>(requested), *static_cast<VkPhysicalDeviceBufferDeviceAddressFeatures*>(supported));
#endif
#if (defined(VK_EXT_buffer_device_address))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceImagelessFramebufferFeatures*>(requested), *static_cast<VkPhysicalDeviceImagelessFramebufferFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(requested), *static_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(supported));
#endif
#if (defined(VK_NV_cooperative_matrix))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceCooperativeMatrixFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceCooperativeMatrixFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_ycbcr_image_arrays))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_present_barrier))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDevicePresentBarrierFeaturesNV*>(requested), *static_cast<VkPhysicalDevicePresentBarrierFeaturesNV*>(supported));
#endif
#if (defined(VK_KHR_performance_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR*>(requested), *static_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_coverage_reduction_mode))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceCoverageReductionModeFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceCoverageReductionModeFeaturesNV*>(supported));
#endif
#if (defined(VK_INTEL_shader_integer_functions2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL): merge_features_struct(*static_cast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*>(requested), *static_cast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*>(supported));
#endif
#if (defined(VK_KHR_shader_clock))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderClockFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderClockFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_index_type_uint8))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceIndexTypeUint8FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceIndexTypeUint8FeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_shader_sm_builtins))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_fragment_shader_interlock))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(requested), *static_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(supported));
#endif
#if (defined(VK_EXT_primitive_topology_list_restart))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_pipeline_executable_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*>(requested), *static_cast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(requested), *static_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(supported));
#endif
#if (defined(VK_EXT_texel_buffer_alignment))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceSubgroupSizeControlFeatures*>(requested), *static_cast<VkPhysicalDeviceSubgroupSizeControlFeatures*>(supported));
#endif
#if (defined(VK_KHR_line_rasterization))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceLineRasterizationFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceLineRasterizationFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES): merge_features_struct(*static_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures*>(requested), *static_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVulkan11Features*>(requested), *static_cast<VkPhysicalDeviceVulkan11Features*>(supported));
#endif
#if (defined(VK_VERSION_1_2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVulkan12Features*>(requested), *static_cast<VkPhysicalDeviceVulkan12Features*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVulkan13Features*>(requested), *static_cast<VkPhysicalDeviceVulkan13Features*>(supported));
#endif
#if (defined(VK_AMD_device_coherent_memory))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD): merge_features_struct(*static_cast<VkPhysicalDeviceCoherentMemoryFeaturesAMD*>(requested), *static_cast<VkPhysicalDeviceCoherentMemoryFeaturesAMD*>(supported));
#endif
#if (defined(VK_EXT_custom_border_color))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_border_color_swizzle))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_extended_dynamic_state3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_device_diagnostics_config))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDiagnosticsConfigFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDiagnosticsConfigFeaturesNV*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*>(requested), *static_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*>(supported));
#endif
#if (defined(VK_KHR_shader_subgroup_uniform_control_flow))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_robustness2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceRobustness2FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceRobustness2FeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceImageRobustnessFeatures*>(requested), *static_cast<VkPhysicalDeviceImageRobustnessFeatures*>(supported));
#endif
#if (defined(VK_KHR_workgroup_memory_explicit_layout))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_portability_subset))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(requested), *static_cast<VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_4444_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevice4444FormatsFeaturesEXT*>(requested), *static_cast<VkPhysicalDevice4444FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_HUAWEI_subpass_shading))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI): merge_features_struct(*static_cast<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*>(requested), *static_cast<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_HUAWEI_cluster_culling_shader))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI): merge_features_struct(*static_cast<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*>(requested), *static_cast<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*>(supported));
#endif
#if (defined(VK_EXT_shader_image_atomic_int64))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_fragment_shading_rate))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures*>(requested), *static_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures*>(supported));
#endif
#if (defined(VK_NV_fragment_shading_rate_enums))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_image_2d_view_of_3d))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_sliced_view_of_3d))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_attachment_feedback_loop_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_legacy_vertex_attributes))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_mutable_descriptor_type))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_clip_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDepthClipControlFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDepthClipControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_vertex_input_dynamic_state))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_external_memory_rdma))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*>(supported));
#endif
#if (defined(VK_KHR_shader_relaxed_extended_instruction))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR*>(supported));
#endif
#if (defined(VK_EXT_color_write_enable))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceSynchronization2Features*>(requested), *static_cast<VkPhysicalDeviceSynchronization2Features*>(supported));
#endif
#if (defined(VK_EXT_host_image_copy))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceHostImageCopyFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceHostImageCopyFeaturesEXT*>(supported));
#endif
#if (defined(VKSC_VERSION_1_0))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceVulkanSC10Features*>(requested), *static_cast<VkPhysicalDeviceVulkanSC10Features*>(supported));
#endif
#if (defined(VK_EXT_primitives_generated_query))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_legacy_dithering))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceLegacyDitheringFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceLegacyDitheringFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_multisampled_render_to_single_sampled))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_protected_access))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*>(supported));
#endif
#if (defined(VK_KHR_video_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceVideoMaintenance1FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceVideoMaintenance1FeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_inherited_viewport_scissor))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceInheritedViewportScissorFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceInheritedViewportScissorFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_ycbcr_2plane_444_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_provoking_vertex))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceProvokingVertexFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceProvokingVertexFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_descriptor_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDescriptorBufferFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDescriptorBufferFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures*>(requested), *static_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures*>(supported));
#endif
#if (defined(VK_KHR_fragment_shader_barycentric))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_motion_blur))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_validation))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingValidationFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceRayTracingValidationFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_rgba10x6_formats))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*>(supported));
#endif
#if (defined(VK_VERSION_1_3))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES): merge_features_struct(*static_cast<VkPhysicalDeviceDynamicRenderingFeatures*>(requested), *static_cast<VkPhysicalDeviceDynamicRenderingFeatures*>(supported));
#endif
#if (defined(VK_EXT_image_view_min_lod))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceImageViewMinLodFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceImageViewMinLodFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_rasterization_order_attachment_access))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_linear_color_attachment))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceLinearColorAttachmentFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceLinearColorAttachmentFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_graphics_pipeline_library))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*>(supported));
#endif
#if (defined(VK_VALVE_descriptor_set_host_mapping))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE): merge_features_struct(*static_cast<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*>(requested), *static_cast<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*>(supported));
#endif
#if (defined(VK_EXT_nested_command_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceNestedCommandBufferFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceNestedCommandBufferFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_module_identifier))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_compression_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceImageCompressionControlFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceImageCompressionControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_image_compression_control_swapchain))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_subpass_merge_feedback))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_opacity_micromap))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceOpacityMicromapFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceOpacityMicromapFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_displacement_micromap))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDisplacementMicromapFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDisplacementMicromapFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_pipeline_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePipelinePropertiesFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePipelinePropertiesFeaturesEXT*>(supported));
#endif
#if (defined(VK_AMD_shader_early_and_late_fragment_tests))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD): merge_features_struct(*static_cast<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*>(requested), *static_cast<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*>(supported));
#endif
#if (defined(VK_EXT_non_seamless_cube_map))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_robustness))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePipelineRobustnessFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePipelineRobustnessFeaturesEXT*>(supported));
#endif
#if (defined(VK_QCOM_image_processing))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceImageProcessingFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceImageProcessingFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_tile_properties))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceTilePropertiesFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceTilePropertiesFeaturesQCOM*>(supported));
#endif
#if (defined(VK_SEC_amigo_profiling))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC): merge_features_struct(*static_cast<VkPhysicalDeviceAmigoProfilingFeaturesSEC*>(requested), *static_cast<VkPhysicalDeviceAmigoProfilingFeaturesSEC*>(supported));
#endif
#if (defined(VK_EXT_attachment_feedback_loop_layout))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_clamp_zero_one))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_device_address_binding_report))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceAddressBindingReportFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceAddressBindingReportFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_optical_flow))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceOpticalFlowFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceOpticalFlowFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_device_fault))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceFaultFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceFaultFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_pipeline_library_group_handles))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*>(requested), *static_cast<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*>(supported));
#endif
#if (defined(VK_ARM_shader_core_builtins))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM): merge_features_struct(*static_cast<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*>(requested), *static_cast<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*>(supported));
#endif
#if (defined(VK_EXT_frame_boundary))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceFrameBoundaryFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceFrameBoundaryFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_dynamic_rendering_unused_attachments))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_swapchain_maintenance1))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_depth_bias_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceDepthBiasControlFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceDepthBiasControlFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_ray_tracing_invocation_reorder))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_extended_sparse_address_space))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV*>(supported));
#endif
#if (defined(VK_QCOM_multiview_per_view_viewports))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*>(supported));
#endif
#if (defined(VK_KHR_ray_tracing_position_fetch))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*>(supported));
#endif
#if (defined(VK_QCOM_multiview_per_view_render_areas))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*>(supported));
#endif
#if (defined(VK_EXT_shader_object))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderObjectFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderObjectFeaturesEXT*>(supported));
#endif
#if (defined(VK_EXT_shader_tile_image))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderTileImageFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderTileImageFeaturesEXT*>(supported));
#endif
#if (defined(VK_QNX_external_memory_screen_buffer))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX): merge_features_struct(*static_cast<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX*>(requested), *static_cast<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX*>(supported));
#endif
#if (defined(VK_KHR_cooperative_matrix))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceCooperativeMatrixFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceCooperativeMatrixFeaturesKHR*>(supported));
#endif
#if (defined(VK_AMDX_shader_enqueue))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX): merge_features_struct(*static_cast<VkPhysicalDeviceShaderEnqueueFeaturesAMDX*>(requested), *static_cast<VkPhysicalDeviceShaderEnqueueFeaturesAMDX*>(supported));
#endif
#if (defined(VK_QCOM_filter_cubic_clamp))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceCubicClampFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceCubicClampFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_ycbcr_degamma))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_filter_cubic_weights))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceCubicWeightsFeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceCubicWeightsFeaturesQCOM*>(supported));
#endif
#if (defined(VK_QCOM_image_processing2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM): merge_features_struct(*static_cast<VkPhysicalDeviceImageProcessing2FeaturesQCOM*>(requested), *static_cast<VkPhysicalDeviceImageProcessing2FeaturesQCOM*>(supported));
#endif
#if (defined(VK_NV_descriptor_pool_overallocation))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*>(supported));
#endif
#if (defined(VK_NV_per_stage_descriptor_set))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDevicePerStageDescriptorSetFeaturesNV*>(requested), *static_cast<VkPhysicalDevicePerStageDescriptorSetFeaturesNV*>(supported));
#endif
#if (defined(VK_ANDROID_external_format_resolve))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID): merge_features_struct(*static_cast<VkPhysicalDeviceExternalFormatResolveFeaturesANDROID*>(requested), *static_cast<VkPhysicalDeviceExternalFormatResolveFeaturesANDROID*>(supported));
#endif
#if (defined(VK_NV_cuda_kernel_launch))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceCudaKernelLaunchFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceCudaKernelLaunchFeaturesNV*>(supported));
#endif
#if (defined(VK_ARM_scheduling_controls))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM): merge_features_struct(*static_cast<VkPhysicalDeviceSchedulingControlsFeaturesARM*>(requested), *static_cast<VkPhysicalDeviceSchedulingControlsFeaturesARM*>(supported));
#endif
#if (defined(VK_IMG_relaxed_line_rasterization))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG): merge_features_struct(*static_cast<VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG*>(requested), *static_cast<VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG*>(supported));
#endif
#if (defined(VK_ARM_render_pass_striped))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM): merge_features_struct(*static_cast<VkPhysicalDeviceRenderPassStripedFeaturesARM*>(requested), *static_cast<VkPhysicalDeviceRenderPassStripedFeaturesARM*>(supported));
#endif
#if (defined(VK_KHR_shader_maximal_reconvergence))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_subgroup_rotate))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_expect_assume))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderExpectAssumeFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderExpectAssumeFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_float_controls2))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderFloatControls2FeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderFloatControls2FeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_dynamic_rendering_local_read))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR*>(supported));
#endif
#if (defined(VK_KHR_shader_quad_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR): merge_features_struct(*static_cast<VkPhysicalDeviceShaderQuadControlFeaturesKHR*>(requested), *static_cast<VkPhysicalDeviceShaderQuadControlFeaturesKHR*>(supported));
#endif
#if (defined(VK_NV_shader_atomic_float16_vector))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV*>(supported));
#endif
#if (defined(VK_EXT_map_memory_placed))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceMapMemoryPlacedFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceMapMemoryPlacedFeaturesEXT*>(supported));
#endif
#if (defined(VK_NV_raw_access_chains))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV): merge_features_struct(*static_cast<VkPhysicalDeviceRawAccessChainsFeaturesNV*>(requested), *static_cast<VkPhysicalDeviceRawAccessChainsFeaturesNV*>(supported));
#endif
#if (defined(VK_MESA_image_alignment_control))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA): merge_features_struct(*static_cast<VkPhysicalDeviceImageAlignmentControlFeaturesMESA*>(requested), *static_cast<VkPhysicalDeviceImageAlignmentControlFeaturesMESA*>(supported));
#endif
#if (defined(VK_EXT_shader_replicated_composites))
        case(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT): merge_features_struct(*static_cast<VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT*>(requested), *static_cast<VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT*>(supported));
#endif
    default: return; // unknown struct, do nothing
    }
}
} // namespace vkb