/*
 * Copyright 2011-2016 Blender Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __UTIL_TEXTURE_H__
#define __UTIL_TEXTURE_H__

CCL_NAMESPACE_BEGIN

/* Texture limits on various devices. */

/* CPU */
#define TEX_NUM_BYTE4_IMAGES_CPU	1024
#define TEX_NUM_FLOAT4_IMAGES_CPU	1024
#define TEX_NUM_FLOAT_IMAGES_CPU	1024
#define TEX_NUM_BYTE_IMAGES_CPU		1024
#define TEX_IMAGE_BYTE4_START_CPU	TEX_NUM_FLOAT4_IMAGES_CPU
#define TEX_IMAGE_FLOAT_START_CPU	(TEX_NUM_FLOAT4_IMAGES_CPU + TEX_NUM_BYTE4_IMAGES_CPU)
#define TEX_IMAGE_BYTE_START_CPU	(TEX_NUM_FLOAT4_IMAGES_CPU + TEX_NUM_BYTE4_IMAGES_CPU + TEX_NUM_BYTE_IMAGES_CPU)

/* CUDA (Fermi) */
#define TEX_NUM_BYTE4_IMAGES_CUDA	88
#define TEX_NUM_FLOAT4_IMAGES_CUDA	5
#define TEX_NUM_FLOAT_IMAGES_CUDA	0
#define TEX_NUM_BYTE_IMAGES_CUDA	0
#define TEX_IMAGE_BYTE4_START_CUDA	TEX_NUM_FLOAT4_IMAGES_CUDA
#define TEX_IMAGE_FLOAT_START_CUDA	(TEX_NUM_FLOAT4_IMAGES_CUDA + TEX_NUM_BYTE4_IMAGES_CUDA)
#define TEX_IMAGE_BYTE_START_CUDA	(TEX_NUM_FLOAT4_IMAGES_CUDA + TEX_NUM_BYTE4_IMAGES_CUDA + TEX_NUM_BYTE_IMAGES_CUDA)

/* CUDA (KEPLER and above) */
#define TEX_NUM_BYTE4_IMAGES_CUDA_KEPLER	88
#define TEX_NUM_FLOAT4_IMAGES_CUDA_KEPLER	5
#define TEX_NUM_FLOAT_IMAGES_CUDA_KEPLER	0
#define TEX_NUM_BYTE_IMAGES_CUDA_KEPLER		0
#define TEX_IMAGE_BYTE4_START_CUDA_KEPLER	TEX_NUM_FLOAT4_IMAGES_CUDA_KEPLER
#define TEX_IMAGE_FLOAT_START_CUDA_KEPLER	(TEX_NUM_FLOAT4_IMAGES_CUDA_KEPLER + TEX_NUM_BYTE4_IMAGES_CUDA_KEPLER)
#define TEX_IMAGE_BYTE_START_CUDA_KEPLER	(TEX_NUM_FLOAT4_IMAGES_CUDA_KEPLER + TEX_NUM_BYTE4_IMAGES_CUDA_KEPLER + TEX_NUM_BYTE_IMAGES_CUDA_KEPLER)

/* OpenCL */
#define TEX_NUM_BYTE4_IMAGES_OPENCL		1024
#define TEX_NUM_FLOAT4_IMAGES_OPENCL	1024
#define TEX_NUM_FLOAT_IMAGES_OPENCL		0
#define TEX_NUM_BYTE_IMAGES_OPENCL		0
#define TEX_IMAGE_BYTE4_START_OPENCL	TEX_NUM_FLOAT4_IMAGES_OPENCL
#define TEX_IMAGE_FLOAT_START_OPENCL	(TEX_NUM_FLOAT4_IMAGES_OPENCL + TEX_NUM_BYTE4_IMAGES_OPENCL)
#define TEX_IMAGE_BYTE_START_OPENCL		(TEX_NUM_FLOAT4_IMAGES_OPENCL + TEX_NUM_BYTE4_IMAGES_OPENCL + TEX_NUM_BYTE_IMAGES_OPENCL)


/* Color to use when textures are not found. */
#define TEX_IMAGE_MISSING_R 1
#define TEX_IMAGE_MISSING_G 0
#define TEX_IMAGE_MISSING_B 1
#define TEX_IMAGE_MISSING_A 1

CCL_NAMESPACE_END

#endif /* __UTIL_TEXTURE_H__ */
