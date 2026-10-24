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

// Function: sceSifBindRpc
// Address: 0x3b2f48 - 0x3b3098
void sceSifBindRpc_0x3b2f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifBindRpc_0x3b2f48");
#endif

    switch (ctx->pc) {
        case 0x3b2f80u: goto label_3b2f80;
        case 0x3b2fccu: goto label_3b2fcc;
        case 0x3b2fdcu: goto label_3b2fdc;
        case 0x3b3004u: goto label_3b3004;
        case 0x3b3014u: goto label_3b3014;
        case 0x3b301cu: goto label_3b301c;
        case 0x3b302cu: goto label_3b302c;
        case 0x3b3034u: goto label_3b3034;
        case 0x3b3064u: goto label_3b3064;
        case 0x3b3074u: goto label_3b3074;
        default: break;
    }

    ctx->pc = 0x3b2f48u;

    // 0x3b2f48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b2f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b2f4c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b2f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b2f50: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b2f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3b2f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b2f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b2f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b2f5c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b2f60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b2f64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b2f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b2f6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b2f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f70: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3b2f74: 0x2484ff40  addiu       $a0, $a0, -0xC0
    ctx->pc = 0x3b2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x3b2f78: 0xc0ecab2  jal         func_3B2AC8
    ctx->pc = 0x3B2F78u;
    SET_GPR_U32(ctx, 31, 0x3B2F80u);
    ctx->pc = 0x3B2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F78u;
    // 0x3b2f7c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2AC8u, 0x3B2F78u, 0x3B2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F80u;
label_3b2f80:
    // 0x3b2f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b2f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f84: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3B2F84u;
    {
        const bool branch_taken_0x3b2f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F84u;
        // 0x3b2f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f84) {
            ctx->pc = 0x3B3078u;
            goto label_3b3078;
        }
    }
    ctx->pc = 0x3B2F8Cu;
    // 0x3b2f8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b2f90: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3b2f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3b2f94: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3b2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3b2f98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3b2f9c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x3b2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x3b2fa0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x3b2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x3b2fa4: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B2FA4u;
    {
        const bool branch_taken_0x3b2fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FA4u;
        // 0x3b2fa8: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2fa4) {
            ctx->pc = 0x3B303Cu;
            goto label_3b303c;
        }
    }
    ctx->pc = 0x3B2FACu;
    // 0x3b2fac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b2facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b2fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2fb4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3b2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3b2fb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b2fbc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b2fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b2fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2fc4: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B2FC4u;
    SET_GPR_U32(ctx, 31, 0x3B2FCCu);
    ctx->pc = 0x3B2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FC4u;
    // 0x3b2fc8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B2FC4u, 0x3B2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FCCu;
label_3b2fcc:
    // 0x3b2fcc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2FCCu;
    {
        const bool branch_taken_0x3b2fcc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FCCu;
        // 0x3b2fd0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2fcc) {
            ctx->pc = 0x3B2FE4u;
            goto label_3b2fe4;
        }
    }
    ctx->pc = 0x3B2FD4u;
    // 0x3b2fd4: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3B2FD4u;
    SET_GPR_U32(ctx, 31, 0x3B2FDCu);
    ctx->pc = 0x3B2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FD4u;
    // 0x3b2fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B2FD4u, 0x3B2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FDCu;
label_3b2fdc:
    // 0x3b2fdc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B2FDCu;
    {
        const bool branch_taken_0x3b2fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FDCu;
        // 0x3b2fe0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2fdc) {
            ctx->pc = 0x3B3078u;
            goto label_3b3078;
        }
    }
    ctx->pc = 0x3B2FE4u;
label_3b2fe4:
    // 0x3b2fe4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b2fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2fec: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x3b2fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x3b2ff0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b2ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b2ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ffc: 0xc0ec9a2  jal         func_3B2688
    ctx->pc = 0x3B2FFCu;
    SET_GPR_U32(ctx, 31, 0x3B3004u);
    ctx->pc = 0x3B3000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FFCu;
    // 0x3b3000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B2FFCu, 0x3B3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3004u;
label_3b3004:
    // 0x3b3004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3004u;
    {
        const bool branch_taken_0x3b3004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3004) {
            ctx->pc = 0x3B3024u;
            goto label_3b3024;
        }
    }
    ctx->pc = 0x3B300Cu;
    // 0x3b300c: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3B300Cu;
    SET_GPR_U32(ctx, 31, 0x3B3014u);
    ctx->pc = 0x3B3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B300Cu;
    // 0x3b3010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B300Cu, 0x3B3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3014u;
label_3b3014:
    // 0x3b3014: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B3014u;
    SET_GPR_U32(ctx, 31, 0x3B301Cu);
    ctx->pc = 0x3B3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3014u;
    // 0x3b3018: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B3014u, 0x3B301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B301Cu;
label_3b301c:
    // 0x3b301c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3B301Cu;
    {
        const bool branch_taken_0x3b301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B301Cu;
        // 0x3b3020: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b301c) {
            ctx->pc = 0x3B3078u;
            goto label_3b3078;
        }
    }
    ctx->pc = 0x3B3024u;
label_3b3024:
    // 0x3b3024: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B3024u;
    SET_GPR_U32(ctx, 31, 0x3B302Cu);
    ctx->pc = 0x3B3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3024u;
    // 0x3b3028: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B3024u, 0x3B302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B302Cu;
label_3b302c:
    // 0x3b302c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B302Cu;
    SET_GPR_U32(ctx, 31, 0x3B3034u);
    ctx->pc = 0x3B3030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B302Cu;
    // 0x3b3030: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B302Cu, 0x3B3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3034u;
label_3b3034:
    // 0x3b3034: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B3034u;
    {
        const bool branch_taken_0x3b3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3034u;
        // 0x3b3038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3034) {
            ctx->pc = 0x3B3078u;
            goto label_3b3078;
        }
    }
    ctx->pc = 0x3B303Cu;
label_3b303c:
    // 0x3b303c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3040: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b3040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3044: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3b3044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3b3048: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x3b3048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x3b304c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b304cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3050: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b3050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b3054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b3058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b305c: 0xc0ec9a2  jal         func_3B2688
    ctx->pc = 0x3B305Cu;
    SET_GPR_U32(ctx, 31, 0x3B3064u);
    ctx->pc = 0x3B3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B305Cu;
    // 0x3b3060: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B305Cu, 0x3B3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3064u;
label_3b3064:
    // 0x3b3064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3064u;
    {
        const bool branch_taken_0x3b3064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3064u;
        // 0x3b3068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3064) {
            ctx->pc = 0x3B3078u;
            goto label_3b3078;
        }
    }
    ctx->pc = 0x3B306Cu;
    // 0x3b306c: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3B306Cu;
    SET_GPR_U32(ctx, 31, 0x3B3074u);
    ctx->pc = 0x3B3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B306Cu;
    // 0x3b3070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B306Cu, 0x3B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3074u;
label_3b3074:
    // 0x3b3074: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3b3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b3078:
    // 0x3b3078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b307c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b307cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b3080: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b3080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b3084: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b3084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b3088: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b3088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b308c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B308Cu;
        // 0x3b3090: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B308Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3094u;
    // 0x3b3094: 0x0  nop
    ctx->pc = 0x3b3094u;
    // NOP
    ctx->pc = 0x3b3098u;
}
