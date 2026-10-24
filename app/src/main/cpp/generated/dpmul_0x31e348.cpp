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

// Function: dpmul
// Address: 0x31e348 - 0x31e5f0
void dpmul_0x31e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x31e348");
#endif

    switch (ctx->pc) {
        case 0x31e384u: goto label_31e384;
        case 0x31e394u: goto label_31e394;
        case 0x31e460u: goto label_31e460;
        case 0x31e470u: goto label_31e470;
        case 0x31e480u: goto label_31e480;
        case 0x31e490u: goto label_31e490;
        case 0x31e508u: goto label_31e508;
        case 0x31e560u: goto label_31e560;
        case 0x31e5c4u: goto label_31e5c4;
        default: break;
    }

    ctx->pc = 0x31e348u;

    // 0x31e348: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x31e348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x31e34c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x31e34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x31e350: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x31e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x31e354: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31e358: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x31e358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x31e35c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31e35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e360: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x31e360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x31e364: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x31e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x31e368: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x31e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x31e36c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x31e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x31e370: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x31e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x31e374: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x31e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x31e378: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x31e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x31e37c: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E37Cu;
    SET_GPR_U32(ctx, 31, 0x31E384u);
    ctx->pc = 0x31E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E37Cu;
    // 0x31e380: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E37Cu, 0x31E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E384u;
label_31e384:
    // 0x31e384: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31e384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e388: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31e38c: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E38Cu;
    SET_GPR_U32(ctx, 31, 0x31E394u);
    ctx->pc = 0x31E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E38Cu;
    // 0x31e390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E38Cu, 0x31E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E394u;
label_31e394:
    // 0x31e394: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e398: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x31e398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e39c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31E39Cu;
    {
        const bool branch_taken_0x31e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E39Cu;
        // 0x31e3a0: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e39c) {
            ctx->pc = 0x31E3F8u;
            goto label_31e3f8;
        }
    }
    ctx->pc = 0x31E3A4u;
    // 0x31e3a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e3a8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x31e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e3ac: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x31E3ACu;
    {
        const bool branch_taken_0x31e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e3ac) {
            ctx->pc = 0x31E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E3ACu;
            // 0x31e3b0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E420u;
            goto label_31e420;
        }
    }
    ctx->pc = 0x31E3B4u;
    // 0x31e3b4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x31e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x31e3b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E3B8u;
    {
        const bool branch_taken_0x31e3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3B8u;
        // 0x31e3bc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3b8) {
            ctx->pc = 0x31E3D4u;
            goto label_31e3d4;
        }
    }
    ctx->pc = 0x31E3C0u;
    // 0x31e3c0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31e3c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E3C4u;
    {
        const bool branch_taken_0x31e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3C4u;
        // 0x31e3c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3c4) {
            ctx->pc = 0x31E3E4u;
            goto label_31e3e4;
        }
    }
    ctx->pc = 0x31E3CCu;
    // 0x31e3cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31E3CCu;
    {
        const bool branch_taken_0x31e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3CCu;
        // 0x31e3d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3cc) {
            ctx->pc = 0x31E400u;
            goto label_31e400;
        }
    }
    ctx->pc = 0x31E3D4u;
label_31e3d4:
    // 0x31e3d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E3D4u;
    {
        const bool branch_taken_0x31e3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3D4u;
        // 0x31e3d8: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3d4) {
            ctx->pc = 0x31E3F0u;
            goto label_31e3f0;
        }
    }
    ctx->pc = 0x31E3DCu;
    // 0x31e3dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31E3DCu;
    {
        const bool branch_taken_0x31e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3DCu;
        // 0x31e3e0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3dc) {
            ctx->pc = 0x31E420u;
            goto label_31e420;
        }
    }
    ctx->pc = 0x31E3E4u;
label_31e3e4:
    // 0x31e3e4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31e3e8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x31E3E8u;
    {
        const bool branch_taken_0x31e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3E8u;
        // 0x31e3ec: 0x24445bd0  addiu       $a0, $v0, 0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3e8) {
            ctx->pc = 0x31E5BCu;
            goto label_31e5bc;
        }
    }
    ctx->pc = 0x31E3F0u;
label_31e3f0:
    // 0x31e3f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E3F0u;
    {
        const bool branch_taken_0x31e3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3F0u;
        // 0x31e3f4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3f0) {
            ctx->pc = 0x31E414u;
            goto label_31e414;
        }
    }
    ctx->pc = 0x31E3F8u;
label_31e3f8:
    // 0x31e3f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e3fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31e400:
    // 0x31e400: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x31e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x31e404: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x31e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x31e408: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31e408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31e40c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31E40Cu;
    {
        const bool branch_taken_0x31e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E40Cu;
        // 0x31e410: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e40c) {
            ctx->pc = 0x31E5BCu;
            goto label_31e5bc;
        }
    }
    ctx->pc = 0x31E414u;
label_31e414:
    // 0x31e414: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E414u;
    {
        const bool branch_taken_0x31e414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E414u;
        // 0x31e418: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e414) {
            ctx->pc = 0x31E438u;
            goto label_31e438;
        }
    }
    ctx->pc = 0x31E41Cu;
    // 0x31e41c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x31e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_31e420:
    // 0x31e420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e424: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e428: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x31e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x31e42c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31e42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31e430: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x31E430u;
    {
        const bool branch_taken_0x31e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E430u;
        // 0x31e434: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e430) {
            ctx->pc = 0x31E5BCu;
            goto label_31e5bc;
        }
    }
    ctx->pc = 0x31E438u;
label_31e438:
    // 0x31e438: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x31e438u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x31e43c: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x31e43cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x31e440: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31e440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e444: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x31e444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x31e448: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x31e448u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x31e44c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x31e44cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x31e450: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x31e450u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x31e454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e458: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x31E458u;
    SET_GPR_U32(ctx, 31, 0x31E460u);
    ctx->pc = 0x31E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E458u;
    // 0x31e45c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x31E458u, 0x31E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E460u;
label_31e460:
    // 0x31e460: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31e460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e468: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x31E468u;
    SET_GPR_U32(ctx, 31, 0x31E470u);
    ctx->pc = 0x31E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E468u;
    // 0x31e46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x31E468u, 0x31E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E470u;
label_31e470:
    // 0x31e470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e474: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e478: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x31E478u;
    SET_GPR_U32(ctx, 31, 0x31E480u);
    ctx->pc = 0x31E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E478u;
    // 0x31e47c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x31E478u, 0x31E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E480u;
label_31e480:
    // 0x31e480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e488: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x31E488u;
    SET_GPR_U32(ctx, 31, 0x31E490u);
    ctx->pc = 0x31E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E488u;
    // 0x31e48c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x31E488u, 0x31E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E490u;
label_31e490:
    // 0x31e490: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x31e490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x31e494: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x31e494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e498: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x31e498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31e49c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x31e49cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e4a0: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x31e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x31e4a4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x31e4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x31e4a8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x31e4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e4ac: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x31e4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x31e4b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e4b4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x31e4b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x31e4b8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x31e4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x31e4bc: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x31e4bcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31e4c0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x31e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x31e4c4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x31e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x31e4c8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x31e4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x31e4cc: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x31e4ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x31e4d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31e4d4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x31e4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x31e4d8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x31e4d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e4dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e4e0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x31e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x31e4e4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x31e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x31e4e8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31e4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e4ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E4ECu;
    {
        const bool branch_taken_0x31e4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4ECu;
        // 0x31e4f0: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4ec) {
            ctx->pc = 0x31E534u;
            goto label_31e534;
        }
    }
    ctx->pc = 0x31E4F4u;
    // 0x31e4f4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x31e4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31e4f8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x31e4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x31e4fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e500: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x31e500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x31e504: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31e508:
    // 0x31e508: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e50c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31e50cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E510u;
    {
        const bool branch_taken_0x31e510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E510u;
        // 0x31e514: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e510) {
            ctx->pc = 0x31E520u;
            goto label_31e520;
        }
    }
    ctx->pc = 0x31E518u;
    // 0x31e518: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x31e518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x31e51c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x31e51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_31e520:
    // 0x31e520: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x31e520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x31e524: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x31e524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e528: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31E528u;
    {
        const bool branch_taken_0x31e528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E528u;
        // 0x31e52c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e528) {
            ctx->pc = 0x31E508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e508;
        }
    }
    ctx->pc = 0x31E530u;
    // 0x31e530: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x31e530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_31e534:
    // 0x31e534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e538: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x31e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x31e53c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31e53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e540: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E540u;
    {
        const bool branch_taken_0x31e540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E540u;
        // 0x31e544: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e540) {
            ctx->pc = 0x31E588u;
            goto label_31e588;
        }
    }
    ctx->pc = 0x31E548u;
    // 0x31e548: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31e548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31e54c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x31e54cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31e550: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x31e550u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x31e554: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31e554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e558: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e55c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x31e55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_31e560:
    // 0x31e560: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x31e560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x31e564: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x31e564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x31e568: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x31e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x31e56c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31e570: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x31e570u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x31e574: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x31e574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e578: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31E578u;
    {
        const bool branch_taken_0x31e578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E578u;
        // 0x31e57c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e578) {
            ctx->pc = 0x31E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e560;
        }
    }
    ctx->pc = 0x31E580u;
    // 0x31e580: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x31e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x31e584: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x31e584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_31e588:
    // 0x31e588: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e58c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E58Cu;
    {
        const bool branch_taken_0x31e58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e58c) {
            ctx->pc = 0x31E590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E58Cu;
            // 0x31e590: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E5B0u;
            goto label_31e5b0;
        }
    }
    ctx->pc = 0x31E594u;
    // 0x31e594: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x31e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x31e598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E598u;
    {
        const bool branch_taken_0x31e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E598u;
        // 0x31e59c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e598) {
            ctx->pc = 0x31E5A8u;
            goto label_31e5a8;
        }
    }
    ctx->pc = 0x31E5A0u;
    // 0x31e5a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E5A0u;
    {
        const bool branch_taken_0x31e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a0) {
            ctx->pc = 0x31E5ACu;
            goto label_31e5ac;
        }
    }
    ctx->pc = 0x31E5A8u;
label_31e5a8:
    // 0x31e5a8: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x31e5a8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_31e5ac:
    // 0x31e5ac: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x31e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_31e5b0:
    // 0x31e5b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31e5b4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x31e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x31e5b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31e5bc:
    // 0x31e5bc: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31E5BCu;
    SET_GPR_U32(ctx, 31, 0x31E5C4u);
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31E5BCu, 0x31E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E5C4u;
label_31e5c4:
    // 0x31e5c4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x31e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31e5c8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x31e5c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31e5cc: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x31e5ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31e5d0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x31e5d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31e5d4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x31e5d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31e5d8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x31e5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31e5dc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x31e5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31e5e0: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x31e5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e5e4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x31e5e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5E8u;
        // 0x31e5ec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E5F0u;
}
