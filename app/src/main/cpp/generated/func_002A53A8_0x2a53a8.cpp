#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002A53A8
// Address: 0x2a53a8 - 0x2a58a0
void func_002A53A8_0x2a53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A53A8_0x2a53a8");
#endif

    switch (ctx->pc) {
        case 0x2a5410u: goto label_2a5410;
        case 0x2a541cu: goto label_2a541c;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a56f8u: goto label_2a56f8;
        case 0x2a5704u: goto label_2a5704;
        default: break;
    }

    ctx->pc = 0x2a53a8u;

    // 0x2a53a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2a53ac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a53b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a53b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a53b8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2a53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2a53bc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a53bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53c0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2a53c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2a53c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2a53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2a53c8: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x2a53c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a53cc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2a53ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a53d0: 0x30b4ffff  andi        $s4, $a1, 0xFFFF
    ctx->pc = 0x2a53d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a53d4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2a53d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a53d8: 0x148302  srl         $s0, $s4, 12
    ctx->pc = 0x2a53d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 20), 12));
    // 0x2a53dc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a53dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a53e0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2a53e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2a53e4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2a53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2a53e8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2a53e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2a53ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2a53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2a53f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2a53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2a53f4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2a53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2a53f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a53f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a53fc: 0x8e22205c  lw          $v0, 0x205C($s1)
    ctx->pc = 0x2a53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8284)));
    // 0x2a5400: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5400u;
    {
        const bool branch_taken_0x2a5400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5400u;
        // 0x2a5404: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5400) {
            ctx->pc = 0x2A5410u;
            goto label_2a5410;
        }
    }
    ctx->pc = 0x2A5408u;
    // 0x2a5408: 0xc0a93f6  jal         func_2A4FD8
    ctx->pc = 0x2A5408u;
    SET_GPR_U32(ctx, 31, 0x2A5410u);
    ctx->pc = 0x2A540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5408u;
    // 0x2a540c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4FD8u, 0x2A5408u, 0x2A5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5410u;
label_2a5410:
    // 0x2a5410: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a5410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5414: 0xc0a93cc  jal         func_2A4F30
    ctx->pc = 0x2A5414u;
    SET_GPR_U32(ctx, 31, 0x2A541Cu);
    ctx->pc = 0x2A5418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5414u;
    // 0x2a5418: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F30u, 0x2A5414u, 0x2A541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A541Cu;
label_2a541c:
    // 0x2a541c: 0x32970fff  andi        $s7, $s4, 0xFFF
    ctx->pc = 0x2a541cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4095);
    // 0x2a5420: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a5420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5424: 0x12600110  beqz        $s3, . + 4 + (0x110 << 2)
    ctx->pc = 0x2A5424u;
    {
        const bool branch_taken_0x2a5424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5424u;
        // 0x2a5428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5424) {
            ctx->pc = 0x2A5868u;
            goto label_2a5868;
        }
    }
    ctx->pc = 0x2A542Cu;
    // 0x2a542c: 0x8e22205c  lw          $v0, 0x205C($s1)
    ctx->pc = 0x2a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8284)));
    // 0x2a5430: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x2a5430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2a5434: 0x2408c000  addiu       $t0, $zero, -0x4000
    ctx->pc = 0x2a5434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x2a5438: 0x32e40001  andi        $a0, $s7, 0x1
    ctx->pc = 0x2a5438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2a543c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a5440: 0x340bfff8  ori         $t3, $zero, 0xFFF8
    ctx->pc = 0x2a5440u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x2a5444: 0xb5ef8  dsll        $t3, $t3, 27
    ctx->pc = 0x2a5444u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 27);
    // 0x2a5448: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2a5448u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2a544c: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x2a544cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2a5450: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2a5450u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2a5454: 0xb5978  dsll        $t3, $t3, 5
    ctx->pc = 0x2a5454u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 5);
    // 0x2a5458: 0x356b001f  ori         $t3, $t3, 0x1F
    ctx->pc = 0x2a5458u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)31);
    // 0x2a545c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a5460: 0x34841cf0  ori         $a0, $a0, 0x1CF0
    ctx->pc = 0x2a5460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7408);
    // 0x2a5464: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a5464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5468: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x2a5468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x2a546c: 0x2c71021  addu        $v0, $s6, $a3
    ctx->pc = 0x2a546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2a5470: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x2a5470u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a5474: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x2a5474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x2a5478: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x2a5478u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a547c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x2a547cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x2a5480: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2a5480u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a5484: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a5484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a5488: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2a5488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2a548c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x2a5490: 0x64423b00  daddiu      $v0, $v0, 0x3B00
    ctx->pc = 0x2a5490u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)15104);
    // 0x2a5494: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2a5494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2a5498: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2a5498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2a549c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x2a549cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x2a54a0: 0x35080008  ori         $t0, $t0, 0x8
    ctx->pc = 0x2a54a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x2a54a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a54a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a54a8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2a54a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a54ac: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x2a54acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x2a54b0: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x2a54b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x2a54b4: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x2a54b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x2a54b8: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x2a54b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a54bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a54bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a54c0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2a54c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a54c4: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x2a54c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x2a54c8: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x2a54c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a54cc: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x2a54ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a54d0: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x2a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x2a54d4: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x2a54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x2a54d8: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x2a54d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2a54dc: 0xfe680000  sd          $t0, 0x0($s3)
    ctx->pc = 0x2a54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 8));
    // 0x2a54e0: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2a54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2a54e4: 0xae66000c  sw          $a2, 0xC($s3)
    ctx->pc = 0x2a54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
    // 0x2a54e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a54ec: 0xfe690010  sd          $t1, 0x10($s3)
    ctx->pc = 0x2a54ecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 9));
    // 0x2a54f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a54f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54f4: 0xfe6a0018  sd          $t2, 0x18($s3)
    ctx->pc = 0x2a54f4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 10));
    // 0x2a54f8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2a54f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a54fc: 0xfe6b0028  sd          $t3, 0x28($s3)
    ctx->pc = 0x2a54fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 11));
    // 0x2a5500: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5504: 0xfe6c0030  sd          $t4, 0x30($s3)
    ctx->pc = 0x2a5504u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 12));
    // 0x2a5508: 0xfe6d0038  sd          $t5, 0x38($s3)
    ctx->pc = 0x2a5508u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 13));
    // 0x2a550c: 0x84f1000c  lh          $s1, 0xC($a3)
    ctx->pc = 0x2a550cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a5510: 0x84f00008  lh          $s0, 0x8($a3)
    ctx->pc = 0x2a5510u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a5514: 0x84f4000e  lh          $s4, 0xE($a3)
    ctx->pc = 0x2a5514u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x2a5518: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5518u;
    {
        const bool branch_taken_0x2a5518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5518) {
            ctx->pc = 0x2A551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5518u;
            // 0x2a551c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5520u;
            goto label_2a5520;
        }
    }
    ctx->pc = 0x2A5520u;
label_2a5520:
    // 0x2a5520: 0x211001b  divu        $zero, $s0, $s1
    ctx->pc = 0x2a5520u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2a5524: 0x8012  mflo        $s0
    ctx->pc = 0x2a5524u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2a5528: 0xc0a92c8  jal         func_2A4B20
    ctx->pc = 0x2A5528u;
    SET_GPR_U32(ctx, 31, 0x2A5530u);
    ctx->pc = 0x2A4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B20u, 0x2A5528u, 0x2A5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5530u;
label_2a5530:
    // 0x2a5530: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x2a5530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x2a5534: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5534u;
    {
        const bool branch_taken_0x2a5534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5534) {
            ctx->pc = 0x2A5538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5534u;
            // 0x2a5538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A553Cu;
            goto label_2a553c;
        }
    }
    ctx->pc = 0x2A553Cu;
label_2a553c:
    // 0x2a553c: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x2a553cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2a5540: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a5540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5544: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a5544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5548: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2a5548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a554c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2a554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5550: 0x1812  mflo        $v1
    ctx->pc = 0x2a5550u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2a5554: 0x2010  mfhi        $a0
    ctx->pc = 0x2a5554u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a5558: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x2a5558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a555c: 0x749018  mult        $s2, $v1, $s4
    ctx->pc = 0x2a555cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2a5560: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2a5560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a5564: 0x254b821  addu        $s7, $s2, $s4
    ctx->pc = 0x2a5564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2a5568: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5568u;
    {
        const bool branch_taken_0x2a5568 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x2A556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5568u;
        // 0x2a556c: 0x2158821  addu        $s1, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5568) {
            ctx->pc = 0x2A5584u;
            goto label_2a5584;
        }
    }
    ctx->pc = 0x2A5570u;
    // 0x2a5570: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x2a5570u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5574: 0x0  nop
    ctx->pc = 0x2a5574u;
    // NOP
    // 0x2a5578: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a5578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a557c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A557Cu;
    {
        const bool branch_taken_0x2a557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A557Cu;
        // 0x2a5580: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a557c) {
            ctx->pc = 0x2A55A4u;
            goto label_2a55a4;
        }
    }
    ctx->pc = 0x2A5584u;
label_2a5584:
    // 0x2a5584: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2a5584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2a5588: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2a5588u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2a558c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a5590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5594: 0x0  nop
    ctx->pc = 0x2a5594u;
    // NOP
    // 0x2a5598: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a5598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a559c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a559cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a55a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a55a4:
    // 0x2a55a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a55a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a55a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a55ac: 0xc4402068  lwc1        $f0, 0x2068($v0)
    ctx->pc = 0x2a55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a55b0: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A55B0u;
    {
        const bool branch_taken_0x2a55b0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x2A55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55B0u;
        // 0x2a55b4: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55b0) {
            ctx->pc = 0x2A55CCu;
            goto label_2a55cc;
        }
    }
    ctx->pc = 0x2A55B8u;
    // 0x2a55b8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x2a55b8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a55bc: 0x0  nop
    ctx->pc = 0x2a55bcu;
    // NOP
    // 0x2a55c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a55c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A55C4u;
    {
        const bool branch_taken_0x2a55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55C4u;
        // 0x2a55c8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55c4) {
            ctx->pc = 0x2A55ECu;
            goto label_2a55ec;
        }
    }
    ctx->pc = 0x2A55CCu;
label_2a55cc:
    // 0x2a55cc: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x2a55d0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2a55d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2a55d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a55d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a55d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a55dc: 0x0  nop
    ctx->pc = 0x2a55dcu;
    // NOP
    // 0x2a55e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a55e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a55e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a55e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a55e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a55ec:
    // 0x2a55ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a55ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a55f0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a55f4: 0x8c442070  lw          $a0, 0x2070($v0)
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8304)));
    // 0x2a55f8: 0xc440206c  lwc1        $f0, 0x206C($v0)
    ctx->pc = 0x2a55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a55fc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2a55fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a5600: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A5600u;
    {
        const bool branch_taken_0x2a5600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5600u;
        // 0x2a5604: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5600) {
            ctx->pc = 0x2A5634u;
            goto label_2a5634;
        }
    }
    ctx->pc = 0x2A5608u;
    // 0x2a5608: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2a5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2a560c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A560Cu;
    {
        const bool branch_taken_0x2a560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A560Cu;
        // 0x2a5610: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a560c) {
            ctx->pc = 0x2A562Cu;
            goto label_2a562c;
        }
    }
    ctx->pc = 0x2A5614u;
    // 0x2a5614: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a5614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a5618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a561c: 0x0  nop
    ctx->pc = 0x2a561cu;
    // NOP
    // 0x2a5620: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a5620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a5624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5624u;
    {
        const bool branch_taken_0x2a5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5624u;
        // 0x2a5628: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5624) {
            ctx->pc = 0x2A5634u;
            goto label_2a5634;
        }
    }
    ctx->pc = 0x2A562Cu;
label_2a562c:
    // 0x2a562c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A562Cu;
    {
        const bool branch_taken_0x2a562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a562c) {
            ctx->pc = 0x2A5630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A562Cu;
            // 0x2a5630: 0x4603ad41  sub.s       $f21, $f21, $f3 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5634u;
            goto label_2a5634;
        }
    }
    ctx->pc = 0x2A5634u;
label_2a5634:
    // 0x2a5634: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a5638: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a563c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a5640: 0x8c442070  lw          $a0, 0x2070($v0)
    ctx->pc = 0x2a5640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8304)));
    // 0x2a5644: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x2a5644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2a5648: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A5648u;
    {
        const bool branch_taken_0x2a5648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5648u;
        // 0x2a564c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5648) {
            ctx->pc = 0x2A5680u;
            goto label_2a5680;
        }
    }
    ctx->pc = 0x2A5650u;
    // 0x2a5650: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x2a5650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2a5654: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5654u;
    {
        const bool branch_taken_0x2a5654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5654u;
        // 0x2a5658: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5654) {
            ctx->pc = 0x2A5674u;
            goto label_2a5674;
        }
    }
    ctx->pc = 0x2A565Cu;
    // 0x2a565c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a565cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a5660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5664: 0x0  nop
    ctx->pc = 0x2a5664u;
    // NOP
    // 0x2a5668: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a5668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a566c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A566Cu;
    {
        const bool branch_taken_0x2a566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A566Cu;
        // 0x2a5670: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a566c) {
            ctx->pc = 0x2A567Cu;
            goto label_2a567c;
        }
    }
    ctx->pc = 0x2A5674u;
label_2a5674:
    // 0x2a5674: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5674u;
    {
        const bool branch_taken_0x2a5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5674) {
            ctx->pc = 0x2A5678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5674u;
            // 0x2a5678: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A567Cu;
            goto label_2a567c;
        }
    }
    ctx->pc = 0x2A567Cu;
label_2a567c:
    // 0x2a567c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2a5680:
    // 0x2a5680: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2a5684: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a5684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a5688: 0xc440118c  lwc1        $f0, 0x118C($v0)
    ctx->pc = 0x2a5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a568c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a568cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a5690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5694: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a5694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a5698: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x2a5698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a569c: 0x3403855a  ori         $v1, $zero, 0x855A
    ctx->pc = 0x2a569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34138);
    // 0x2a56a0: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2a56a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2a56a4: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x2a56a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
    // 0x2a56a8: 0x4603a8c0  add.s       $f3, $f21, $f3
    ctx->pc = 0x2a56a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x2a56ac: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2a56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a56b0: 0x0  nop
    ctx->pc = 0x2a56b0u;
    // NOP
    // 0x2a56b4: 0x0  nop
    ctx->pc = 0x2a56b4u;
    // NOP
    // 0x2a56b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a56b8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2a56bc: 0xfe630040  sd          $v1, 0x40($s3)
    ctx->pc = 0x2a56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 3));
    // 0x2a56c0: 0xfe620048  sd          $v0, 0x48($s3)
    ctx->pc = 0x2a56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 2));
    // 0x2a56c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a56c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a56c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a56c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a56cc: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x2a56ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a56d0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2a56d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a56d4: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x2a56d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a56d8: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2a56d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a56dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a56dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a56e0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a56e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a56e4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a56e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a56e8: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2a56e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a56ec: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2a56ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a56f0: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2A56F0u;
    SET_GPR_U32(ctx, 31, 0x2A56F8u);
    ctx->pc = 0x2A56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56F0u;
    // 0x2a56f4: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2A56F0u, 0x2A56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56F8u;
label_2a56f8:
    // 0x2a56f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a56fc: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2A56FCu;
    SET_GPR_U32(ctx, 31, 0x2A5704u);
    ctx->pc = 0x2A5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56FCu;
    // 0x2a5700: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2A56FCu, 0x2A5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5704u;
label_2a5704:
    // 0x2a5704: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a5704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a5708: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a570c: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2a570cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a5710: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a5714: 0x8c896b80  lw          $t1, 0x6B80($a0)
    ctx->pc = 0x2a5714u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x586B80u));
    // 0x2a5718: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2a5718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2a571c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2a571cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a5720: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x2a5720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a5724: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a5728: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x2a5728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2a572c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a572cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a5730: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5734: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a5738: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x2a5738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2a573c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5740: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2a5740u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2a5744: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a5744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a5748: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a5748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a574c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a574cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a5750: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2a5750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2a5754: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a5754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a5758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a5758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a575c: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x2a575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x2a5760: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a5764: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a5768: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x2a5768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x2a576c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2a576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2a5770: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a5770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a5774: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a5774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a5778: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a5778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a577c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a5780: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a5780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5784: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x2a5784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x2a5788: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x2a5788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2a578c: 0xfe660050  sd          $a2, 0x50($s3)
    ctx->pc = 0x2a578cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 6));
    // 0x2a5790: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2a5794: 0xfe680058  sd          $t0, 0x58($s3)
    ctx->pc = 0x2a5794u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 8));
    // 0x2a5798: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2a579c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a57a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a57a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a57a4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2a57a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a57a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a57ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2a57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a57b0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x2a57b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x2a57b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a57b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a57b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a57bc: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2a57bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2a57c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a57c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2a57c4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2a57c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a57c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a57cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a57ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a57d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2a57d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2a57d4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2a57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a57d8: 0xfe640060  sd          $a0, 0x60($s3)
    ctx->pc = 0x2a57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 4));
    // 0x2a57dc: 0xfe630068  sd          $v1, 0x68($s3)
    ctx->pc = 0x2a57dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 3));
    // 0x2a57e0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a57e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a57e4: 0xfe650070  sd          $a1, 0x70($s3)
    ctx->pc = 0x2a57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 5));
    // 0x2a57e8: 0xfe680078  sd          $t0, 0x78($s3)
    ctx->pc = 0x2a57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 120), GPR_U64(ctx, 8));
    // 0x2a57ec: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2a57f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a57f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a57f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2a57f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2a57fc: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2a57fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2a5800: 0xfe660088  sd          $a2, 0x88($s3)
    ctx->pc = 0x2a5800u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 136), GPR_U64(ctx, 6));
    // 0x2a5804: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a5804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a5808: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a5808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a580c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a5810: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5810u;
    {
        const bool branch_taken_0x2a5810 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x2A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5810u;
        // 0x2a5814: 0xfe630080  sd          $v1, 0x80($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5810) {
            ctx->pc = 0x2A582Cu;
            goto label_2a582c;
        }
    }
    ctx->pc = 0x2A5818u;
    // 0x2a5818: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x2a5818u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a581c: 0x0  nop
    ctx->pc = 0x2a581cu;
    // NOP
    // 0x2a5820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a5820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a5824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5824u;
    {
        const bool branch_taken_0x2a5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5824u;
        // 0x2a5828: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5824) {
            ctx->pc = 0x2A584Cu;
            goto label_2a584c;
        }
    }
    ctx->pc = 0x2A582Cu;
label_2a582c:
    // 0x2a582c: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2a5830: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2a5830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2a5834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a5838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a583c: 0x0  nop
    ctx->pc = 0x2a583cu;
    // NOP
    // 0x2a5840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a5840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a5844: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a5844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a5848: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a5848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a584c:
    // 0x2a584c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a5850: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a5854: 0xc4402068  lwc1        $f0, 0x2068($v0)
    ctx->pc = 0x2a5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a5858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a585c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a585cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a5860: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a5860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a5864: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a5864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a5868:
    // 0x2a5868: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2a5868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a586c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2a586cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a5870: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2a5870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a5874: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2a5874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a5878: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2a5878u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a587c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2a587cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5880: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a5880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5884: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2a5884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a588c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2a588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a5890: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2a5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a5894: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a5898: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5898u;
        // 0x2a589c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A58A0u;
}
