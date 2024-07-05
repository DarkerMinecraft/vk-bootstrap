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

namespace detail {
inline uint32_t get_features_struct_bool_count(VkStructureType sType){
    switch(sType){
#if (defined(VK_NV_external_memory_sci_buf))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV: return 2;
#endif
#if (defined(VK_NV_device_generated_commands))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_device_generated_commands_compute))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: return 3;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: return 2;
#endif
#if (defined(VK_NV_external_sci_sync))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV: return 4;
#endif
#if (defined(VK_NV_external_sci_sync2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV: return 4;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: return 3;
#endif
#if (defined(VK_KHR_present_id))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_present_wait))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: return 1;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: return 4;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: return 1;
#endif
#if (defined(VK_EXT_blend_operation_advanced))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_multi_draw))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: return 2;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: return 1;
#endif
#if (defined(VK_KHR_maintenance5))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_maintenance6))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_maintenance7))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR: return 1;
#endif
#if (defined(VK_VERSION_1_1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: return 2;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: return 1;
#endif
#if (defined(VK_KHR_global_priority))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR: return 1;
#endif
#if (defined(VK_EXT_device_memory_report))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: return 20;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: return 3;
#endif
#if (defined(VK_EXT_conditional_rendering))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: return 2;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: return 3;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: return 2;
#endif
#if (defined(VK_EXT_shader_atomic_float))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: return 12;
#endif
#if (defined(VK_EXT_shader_atomic_float2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: return 12;
#endif
#if (defined(VK_KHR_vertex_attribute_divisor))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR: return 2;
#endif
#if (defined(VK_EXT_astc_decode_mode))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_transform_feedback))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: return 2;
#endif
#if (defined(VK_NV_representative_fragment_test))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_scissor_exclusive))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_corner_sampled_image))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_compute_shader_derivatives))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: return 2;
#endif
#if (defined(VK_NV_shader_image_footprint))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_dedicated_allocation_image_aliasing))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_copy_memory_indirect))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_memory_decompression))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_shading_rate_image))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: return 2;
#endif
#if (defined(VK_HUAWEI_invocation_mask))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: return 1;
#endif
#if (defined(VK_NV_mesh_shader))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: return 2;
#endif
#if (defined(VK_EXT_mesh_shader))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: return 5;
#endif
#if (defined(VK_KHR_acceleration_structure))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: return 5;
#endif
#if (defined(VK_KHR_ray_tracing_pipeline))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: return 5;
#endif
#if (defined(VK_KHR_ray_query))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_ray_tracing_maintenance1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: return 2;
#endif
#if (defined(VK_EXT_fragment_density_map))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: return 3;
#endif
#if (defined(VK_EXT_fragment_density_map2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: return 1;
#endif
#if (defined(VK_QCOM_fragment_density_map_offset))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: return 1;
#endif
#if (defined(VK_EXT_depth_clip_enable))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_memory_priority))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_pageable_device_local_memory))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: return 3;
#endif
#if (defined(VK_EXT_buffer_device_address))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: return 3;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: return 1;
#endif
#if (defined(VK_NV_cooperative_matrix))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: return 2;
#endif
#if (defined(VK_EXT_ycbcr_image_arrays))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_NV_present_barrier))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: return 1;
#endif
#if (defined(VK_KHR_performance_query))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: return 2;
#endif
#if (defined(VK_NV_coverage_reduction_mode))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: return 1;
#endif
#if (defined(VK_INTEL_shader_integer_functions2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: return 1;
#endif
#if (defined(VK_KHR_shader_clock))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: return 2;
#endif
#if (defined(VK_KHR_index_type_uint8))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR: return 1;
#endif
#if (defined(VK_NV_shader_sm_builtins))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_fragment_shader_interlock))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: return 3;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: return 1;
#endif
#if (defined(VK_EXT_primitive_topology_list_restart))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: return 2;
#endif
#if (defined(VK_KHR_pipeline_executable_properties))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: return 1;
#endif
#if (defined(VK_EXT_texel_buffer_alignment))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: return 2;
#endif
#if (defined(VK_KHR_line_rasterization))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR: return 6;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: return 1;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: return 12;
#endif
#if (defined(VK_VERSION_1_2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: return 47;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: return 15;
#endif
#if (defined(VK_AMD_device_coherent_memory))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: return 1;
#endif
#if (defined(VK_EXT_custom_border_color))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: return 2;
#endif
#if (defined(VK_EXT_border_color_swizzle))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: return 2;
#endif
#if (defined(VK_EXT_extended_dynamic_state))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_extended_dynamic_state2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: return 3;
#endif
#if (defined(VK_EXT_extended_dynamic_state3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: return 31;
#endif
#if (defined(VK_NV_device_diagnostics_config))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: return 1;
#endif
#if (defined(VK_KHR_shader_subgroup_uniform_control_flow))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: return 1;
#endif
#if (defined(VK_EXT_robustness2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: return 3;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: return 1;
#endif
#if (defined(VK_KHR_workgroup_memory_explicit_layout))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: return 4;
#endif
#if (defined(VK_KHR_portability_subset))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: return 15;
#endif
#if (defined(VK_EXT_4444_formats))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: return 2;
#endif
#if (defined(VK_HUAWEI_subpass_shading))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: return 1;
#endif
#if (defined(VK_HUAWEI_cluster_culling_shader))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: return 2;
#endif
#if (defined(VK_EXT_shader_image_atomic_int64))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: return 2;
#endif
#if (defined(VK_KHR_fragment_shading_rate))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: return 3;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: return 1;
#endif
#if (defined(VK_NV_fragment_shading_rate_enums))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: return 3;
#endif
#if (defined(VK_EXT_image_2d_view_of_3d))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: return 2;
#endif
#if (defined(VK_EXT_image_sliced_view_of_3d))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_attachment_feedback_loop_dynamic_state))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_legacy_vertex_attributes))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_mutable_descriptor_type))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_depth_clip_control))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_vertex_input_dynamic_state))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_NV_external_memory_rdma))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: return 1;
#endif
#if (defined(VK_KHR_shader_relaxed_extended_instruction))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR: return 1;
#endif
#if (defined(VK_EXT_color_write_enable))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: return 1;
#endif
#if (defined(VK_EXT_host_image_copy))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT: return 1;
#endif
#if (defined(VKSC_VERSION_1_0))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES: return 1;
#endif
#if (defined(VK_EXT_primitives_generated_query))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: return 3;
#endif
#if (defined(VK_EXT_legacy_dithering))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_multisampled_render_to_single_sampled))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_pipeline_protected_access))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_KHR_video_maintenance1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR: return 1;
#endif
#if (defined(VK_NV_inherited_viewport_scissor))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_ycbcr_2plane_444_formats))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_provoking_vertex))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: return 2;
#endif
#if (defined(VK_EXT_descriptor_buffer))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: return 4;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: return 1;
#endif
#if (defined(VK_KHR_fragment_shader_barycentric))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: return 1;
#endif
#if (defined(VK_NV_ray_tracing_motion_blur))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: return 2;
#endif
#if (defined(VK_NV_ray_tracing_validation))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_rgba10x6_formats))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VERSION_1_3))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: return 1;
#endif
#if (defined(VK_EXT_image_view_min_lod))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_rasterization_order_attachment_access))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: return 3;
#endif
#if (defined(VK_NV_linear_color_attachment))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_graphics_pipeline_library))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: return 1;
#endif
#if (defined(VK_VALVE_descriptor_set_host_mapping))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: return 1;
#endif
#if (defined(VK_EXT_nested_command_buffer))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT: return 3;
#endif
#if (defined(VK_EXT_shader_module_identifier))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_image_compression_control))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_image_compression_control_swapchain))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_subpass_merge_feedback))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_opacity_micromap))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: return 3;
#endif
#if (defined(VK_NV_displacement_micromap))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_pipeline_properties))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: return 1;
#endif
#if (defined(VK_AMD_shader_early_and_late_fragment_tests))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: return 1;
#endif
#if (defined(VK_EXT_non_seamless_cube_map))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_pipeline_robustness))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_QCOM_image_processing))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: return 3;
#endif
#if (defined(VK_QCOM_tile_properties))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_SEC_amigo_profiling))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: return 1;
#endif
#if (defined(VK_EXT_attachment_feedback_loop_layout))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_depth_clamp_zero_one))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_device_address_binding_report))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: return 1;
#endif
#if (defined(VK_NV_optical_flow))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_device_fault))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: return 2;
#endif
#if (defined(VK_EXT_pipeline_library_group_handles))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT: return 1;
#endif
#if (defined(VK_ARM_shader_core_builtins))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: return 1;
#endif
#if (defined(VK_EXT_frame_boundary))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_dynamic_rendering_unused_attachments))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_swapchain_maintenance1))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_depth_bias_control))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: return 4;
#endif
#if (defined(VK_NV_ray_tracing_invocation_reorder))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_extended_sparse_address_space))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV: return 1;
#endif
#if (defined(VK_QCOM_multiview_per_view_viewports))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_KHR_ray_tracing_position_fetch))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: return 1;
#endif
#if (defined(VK_QCOM_multiview_per_view_render_areas))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_EXT_shader_object))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: return 1;
#endif
#if (defined(VK_EXT_shader_tile_image))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: return 3;
#endif
#if (defined(VK_QNX_external_memory_screen_buffer))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: return 1;
#endif
#if (defined(VK_KHR_cooperative_matrix))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: return 2;
#endif
#if (defined(VK_AMDX_shader_enqueue))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX: return 1;
#endif
#if (defined(VK_QCOM_filter_cubic_clamp))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_QCOM_ycbcr_degamma))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_QCOM_filter_cubic_weights))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_QCOM_image_processing2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: return 1;
#endif
#if (defined(VK_NV_descriptor_pool_overallocation))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: return 1;
#endif
#if (defined(VK_NV_per_stage_descriptor_set))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV: return 2;
#endif
#if (defined(VK_ANDROID_external_format_resolve))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID: return 1;
#endif
#if (defined(VK_NV_cuda_kernel_launch))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV: return 1;
#endif
#if (defined(VK_ARM_scheduling_controls))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM: return 1;
#endif
#if (defined(VK_IMG_relaxed_line_rasterization))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG: return 1;
#endif
#if (defined(VK_ARM_render_pass_striped))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM: return 1;
#endif
#if (defined(VK_KHR_shader_maximal_reconvergence))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_shader_subgroup_rotate))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR: return 2;
#endif
#if (defined(VK_KHR_shader_expect_assume))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_shader_float_controls2))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_dynamic_rendering_local_read))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR: return 1;
#endif
#if (defined(VK_KHR_shader_quad_control))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR: return 1;
#endif
#if (defined(VK_NV_shader_atomic_float16_vector))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV: return 1;
#endif
#if (defined(VK_EXT_map_memory_placed))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT: return 3;
#endif
#if (defined(VK_NV_raw_access_chains))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV: return 1;
#endif
#if (defined(VK_MESA_image_alignment_control))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA: return 1;
#endif
#if (defined(VK_EXT_shader_replicated_composites))
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT: return 1;
#endif
        default: return 0;// Unknown sType
    }
}
} // namespace detail
} // namespace vkb