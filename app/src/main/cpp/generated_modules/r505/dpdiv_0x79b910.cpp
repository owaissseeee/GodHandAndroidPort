#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: dpdiv
// Address: 0x79b910 - 0x79ba78
void dpdiv_0x79b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x79b910");
#endif

    switch (ctx->pc) {
        case 0x79b930u: goto label_79b930;
        case 0x79b940u: goto label_79b940;
        case 0x79ba10u: goto label_79ba10;
        case 0x79ba68u: goto label_79ba68;
        default: break;
    }

    ctx->pc = 0x79b910u;

    // 0x79b910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79b914: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79b918: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79b91c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b920: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79b924: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79b928: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B928u;
    SET_GPR_U32(ctx, 31, 0x79B930u);
    ctx->pc = 0x79B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B928u;
    // 0x79b92c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B928u, 0x79B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B930u;
label_79b930:
    // 0x79b930: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b934: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79b934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79b938: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B938u;
    SET_GPR_U32(ctx, 31, 0x79B940u);
    ctx->pc = 0x79B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B938u;
    // 0x79b93c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B938u, 0x79B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B940u;
label_79b940:
    // 0x79b940: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b944: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79b944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B948u;
    {
        const bool branch_taken_0x79b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B948u;
        // 0x79b94c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b948) {
            ctx->pc = 0x79B958u;
            goto label_79b958;
        }
    }
    ctx->pc = 0x79B950u;
    // 0x79b950: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79B950u;
    {
        const bool branch_taken_0x79b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B950u;
        // 0x79b954: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b950) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B958u;
label_79b958:
    // 0x79b958: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x79b958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b95c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79b95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b960: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79B960u;
    {
        const bool branch_taken_0x79b960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B960u;
        // 0x79b964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b960) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B968u;
    // 0x79b968: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b96c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79b96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79b970: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79b974: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b978: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B978u;
    {
        const bool branch_taken_0x79b978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B978u;
        // 0x79b97c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b978) {
            ctx->pc = 0x79B98Cu;
            goto label_79b98c;
        }
    }
    ctx->pc = 0x79B980u;
    // 0x79b980: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79b984: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B984u;
    {
        const bool branch_taken_0x79b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B984u;
        // 0x79b988: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b984) {
            ctx->pc = 0x79B9A0u;
            goto label_79b9a0;
        }
    }
    ctx->pc = 0x79B98Cu;
label_79b98c:
    // 0x79b98c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x79B98Cu;
    {
        const bool branch_taken_0x79b98c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B98Cu;
        // 0x79b990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b98c) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B994u;
    // 0x79b994: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b998: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x79B998u;
    {
        const bool branch_taken_0x79b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B998u;
        // 0x79b99c: 0x2444c298  addiu       $a0, $v0, -0x3D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b998) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B9A0u;
label_79b9a0:
    // 0x79b9a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9A0u;
    {
        const bool branch_taken_0x79b9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9A0u;
        // 0x79b9a4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9a0) {
            ctx->pc = 0x79B9B8u;
            goto label_79b9b8;
        }
    }
    ctx->pc = 0x79B9A8u;
    // 0x79b9a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x79b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x79b9ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x79B9B0u;
    {
        const bool branch_taken_0x79b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9B0u;
        // 0x79b9b4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9b0) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B9B8u;
label_79b9b8:
    // 0x79b9b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9B8u;
    {
        const bool branch_taken_0x79b9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9B8u;
        // 0x79b9bc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9b8) {
            ctx->pc = 0x79B9D0u;
            goto label_79b9d0;
        }
    }
    ctx->pc = 0x79B9C0u;
    // 0x79b9c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b9c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9c8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x79B9C8u;
    {
        const bool branch_taken_0x79b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9C8u;
        // 0x79b9cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9c8) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79B9D0u;
label_79b9d0:
    // 0x79b9d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x79b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79b9d4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x79b9d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b9d8: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x79b9d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b9dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b9e0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79b9e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79b9e4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9E4u;
    {
        const bool branch_taken_0x79b9e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E4u;
        // 0x79b9e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9e4) {
            ctx->pc = 0x79B9FCu;
            goto label_79b9fc;
        }
    }
    ctx->pc = 0x79B9ECu;
    // 0x79b9ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79b9f0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x79b9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x79b9f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79b9f8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79b9f8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79b9fc:
    // 0x79b9fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79ba00: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79ba04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79BA04u;
    {
        const bool branch_taken_0x79ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA04u;
        // 0x79ba08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba04) {
            ctx->pc = 0x79BA14u;
            goto label_79ba14;
        }
    }
    ctx->pc = 0x79BA0Cu;
    // 0x79ba0c: 0x0  nop
    ctx->pc = 0x79ba0cu;
    // NOP
label_79ba10:
    // 0x79ba10: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79ba10u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79ba14:
    // 0x79ba14: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BA14u;
    {
        const bool branch_taken_0x79ba14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba14) {
            ctx->pc = 0x79BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA14u;
            // 0x79ba18: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA28u;
            goto label_79ba28;
        }
    }
    ctx->pc = 0x79BA1Cu;
    // 0x79ba1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79ba1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79ba20: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x79ba20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x79ba24: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x79ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_79ba28:
    // 0x79ba28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79BA28u;
    {
        const bool branch_taken_0x79ba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA28u;
        // 0x79ba2c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba28) {
            ctx->pc = 0x79BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba10;
        }
    }
    ctx->pc = 0x79BA30u;
    // 0x79ba30: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x79ba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79ba34: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79ba38: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79BA38u;
    {
        const bool branch_taken_0x79ba38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79ba38) {
            ctx->pc = 0x79BA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA38u;
            // 0x79ba3c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA5Cu;
            goto label_79ba5c;
        }
    }
    ctx->pc = 0x79BA40u;
    // 0x79ba40: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x79ba40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x79ba44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BA44u;
    {
        const bool branch_taken_0x79ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA44u;
        // 0x79ba48: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba44) {
            ctx->pc = 0x79BA54u;
            goto label_79ba54;
        }
    }
    ctx->pc = 0x79BA4Cu;
    // 0x79ba4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79BA4Cu;
    {
        const bool branch_taken_0x79ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA4Cu;
        // 0x79ba50: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba4c) {
            ctx->pc = 0x79BA58u;
            goto label_79ba58;
        }
    }
    ctx->pc = 0x79BA54u;
label_79ba54:
    // 0x79ba54: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79ba54u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79ba58:
    // 0x79ba58: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x79ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_79ba5c:
    // 0x79ba5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79ba60:
    // 0x79ba60: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79BA60u;
    SET_GPR_U32(ctx, 31, 0x79BA68u);
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79BA60u, 0x79BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA68u;
label_79ba68:
    // 0x79ba68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79ba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ba6c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79ba6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ba70: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA70u;
        // 0x79ba74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA78u;
}
} // namespace gh_r505
