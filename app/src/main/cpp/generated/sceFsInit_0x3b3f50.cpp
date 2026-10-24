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

// Function: sceFsInit
// Address: 0x3b3f50 - 0x3b4158
void sceFsInit_0x3b3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceFsInit_0x3b3f50");
#endif

    switch (ctx->pc) {
        case 0x3b3f7cu: goto label_3b3f7c;
        case 0x3b3f88u: goto label_3b3f88;
        case 0x3b3fa8u: goto label_3b3fa8;
        case 0x3b3fc0u: goto label_3b3fc0;
        case 0x3b3fd0u: goto label_3b3fd0;
        case 0x3b3fd8u: goto label_3b3fd8;
        case 0x3b3fe0u: goto label_3b3fe0;
        case 0x3b4014u: goto label_3b4014;
        case 0x3b4030u: goto label_3b4030;
        case 0x3b4038u: goto label_3b4038;
        case 0x3b4058u: goto label_3b4058;
        case 0x3b4090u: goto label_3b4090;
        case 0x3b40ccu: goto label_3b40cc;
        default: break;
    }

    ctx->pc = 0x3b3f50u;

    // 0x3b3f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b3f54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b3f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b3f5c: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b3f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b3f60: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b3f64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b3f68: 0x26111740  addiu       $s1, $s0, 0x1740
    ctx->pc = 0x3b3f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x3b3f6c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3b3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3b3f70: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3b3f74: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x3B3F74u;
    SET_GPR_U32(ctx, 31, 0x3B3F7Cu);
    ctx->pc = 0x3B3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F74u;
    // 0x3b3f78: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x3B3F74u, 0x3B3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F7Cu;
label_3b3f7c:
    // 0x3b3f7c: 0xae001740  sw          $zero, 0x1740($s0)
    ctx->pc = 0x3b3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5952), GPR_U32(ctx, 0));
    // 0x3b3f80: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B3F80u;
    SET_GPR_U32(ctx, 31, 0x3B3F88u);
    ctx->pc = 0x3B3F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F80u;
    // 0x3b3f84: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B3F80u, 0x3B3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F88u;
label_3b3f88:
    // 0x3b3f88: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b3f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b3f8c: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x3b3f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x3b3f90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b3f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f98: 0x24a53ab8  addiu       $a1, $a1, 0x3AB8
    ctx->pc = 0x3b3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15032));
    // 0x3b3f9c: 0x24c61700  addiu       $a2, $a2, 0x1700
    ctx->pc = 0x3b3f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5888));
    // 0x3b3fa0: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B3FA0u;
    SET_GPR_U32(ctx, 31, 0x3B3FA8u);
    ctx->pc = 0x3B3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FA0u;
    // 0x3b3fa4: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B3FA0u, 0x3B3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FA8u;
label_3b3fa8:
    // 0x3b3fa8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b3fac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b3facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3fb0: 0x24a53f08  addiu       $a1, $a1, 0x3F08
    ctx->pc = 0x3b3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16136));
    // 0x3b3fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b3fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3fb8: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B3FB8u;
    SET_GPR_U32(ctx, 31, 0x3B3FC0u);
    ctx->pc = 0x3B3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FB8u;
    // 0x3b3fbc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B3FB8u, 0x3B3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FC0u;
label_3b3fc0:
    // 0x3b3fc0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B3FC0u;
    {
        const bool branch_taken_0x3b3fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FC0u;
        // 0x3b3fc4: 0x3c130078  lui         $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fc0) {
            ctx->pc = 0x3B3FFCu;
            goto label_3b3ffc;
        }
    }
    ctx->pc = 0x3B3FC8u;
    // 0x3b3fc8: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B3FC8u;
    SET_GPR_U32(ctx, 31, 0x3B3FD0u);
    ctx->pc = 0x3B3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FC8u;
    // 0x3b3fcc: 0x267016c0  addiu       $s0, $s3, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B3FC8u, 0x3B3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FD0u;
label_3b3fd0:
    // 0x3b3fd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B3FD0u;
    {
        const bool branch_taken_0x3b3fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3fd0) {
            ctx->pc = 0x3B4000u;
            goto label_3b4000;
        }
    }
    ctx->pc = 0x3B3FD8u;
label_3b3fd8:
    // 0x3b3fd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3fdc: 0x0  nop
    ctx->pc = 0x3b3fdcu;
    // NOP
label_3b3fe0:
    // 0x3b3fe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b3fe4: 0x0  nop
    ctx->pc = 0x3b3fe4u;
    // NOP
    // 0x3b3fe8: 0x0  nop
    ctx->pc = 0x3b3fe8u;
    // NOP
    // 0x3b3fec: 0x0  nop
    ctx->pc = 0x3b3fecu;
    // NOP
    // 0x3b3ff0: 0x0  nop
    ctx->pc = 0x3b3ff0u;
    // NOP
    // 0x3b3ff4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B3FF4u;
    {
        const bool branch_taken_0x3b3ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b3ff4) {
            ctx->pc = 0x3B3FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3fe0;
        }
    }
    ctx->pc = 0x3B3FFCu;
label_3b3ffc:
    // 0x3b3ffc: 0x267016c0  addiu       $s0, $s3, 0x16C0
    ctx->pc = 0x3b3ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
label_3b4000:
    // 0x3b4000: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b4000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b4004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4008: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x3b4008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3b400c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3B400Cu;
    SET_GPR_U32(ctx, 31, 0x3B4014u);
    ctx->pc = 0x3B4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B400Cu;
    // 0x3b4010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3B400Cu, 0x3B4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4014u;
label_3b4014:
    // 0x3b4014: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B4014u;
    {
        const bool branch_taken_0x3b4014 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4014u;
        // 0x3b4018: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4014) {
            ctx->pc = 0x3B4138u;
            goto label_3b4138;
        }
    }
    ctx->pc = 0x3B401Cu;
    // 0x3b401c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3b401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3b4020: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3B4020u;
    {
        const bool branch_taken_0x3b4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4020u;
        // 0x3b4024: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4020) {
            ctx->pc = 0x3B3FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3fd8;
        }
    }
    ctx->pc = 0x3B4028u;
    // 0x3b4028: 0xc0ece16  jal         func_3B3858
    ctx->pc = 0x3B4028u;
    SET_GPR_U32(ctx, 31, 0x3B4030u);
    ctx->pc = 0x3B402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4028u;
    // 0x3b402c: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3858u, 0x3B4028u, 0x3B4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4030u;
label_3b4030:
    // 0x3b4030: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4030u;
    SET_GPR_U32(ctx, 31, 0x3B4038u);
    ctx->pc = 0x3B4034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4030u;
    // 0x3b4034: 0x8e84aee8  lw          $a0, -0x5118($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4030u, 0x3B4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4038u;
label_3b4038:
    // 0x3b4038: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b4038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b403c: 0x246314c0  addiu       $v1, $v1, 0x14C0
    ctx->pc = 0x3b403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x3b4040: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x3b4040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x3b4044: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3b4044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b4048: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B4048u;
    {
        const bool branch_taken_0x3b4048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4048u;
        // 0x3b404c: 0x3c120078  lui         $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4048) {
            ctx->pc = 0x3B407Cu;
            goto label_3b407c;
        }
    }
    ctx->pc = 0x3B4050u;
    // 0x3b4050: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b4050u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3b4054: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
label_3b4058:
    // 0x3b4058: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3b4058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3b405c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3b405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3b4060: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3b4060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b4064: 0x0  nop
    ctx->pc = 0x3b4064u;
    // NOP
    // 0x3b4068: 0x0  nop
    ctx->pc = 0x3b4068u;
    // NOP
    // 0x3b406c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B406Cu;
    {
        const bool branch_taken_0x3b406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b406c) {
            ctx->pc = 0x3B4058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4058;
        }
    }
    ctx->pc = 0x3B4074u;
    // 0x3b4074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4074u;
    {
        const bool branch_taken_0x3b4074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4074u;
        // 0x3b4078: 0x8e84aee8  lw          $a0, -0x5118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4074) {
            ctx->pc = 0x3B4088u;
            goto label_3b4088;
        }
    }
    ctx->pc = 0x3B407Cu;
label_3b407c:
    // 0x3b407c: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b407cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3b4080: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4080u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b4084: 0x8e84aee8  lw          $a0, -0x5118($s4)
    ctx->pc = 0x3b4084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946536)));
label_3b4088:
    // 0x3b4088: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4088u;
    SET_GPR_U32(ctx, 31, 0x3B4090u);
    ctx->pc = 0x3B408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4088u;
    // 0x3b408c: 0x26100c00  addiu       $s0, $s0, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4088u, 0x3B4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4090u;
label_3b4090:
    // 0x3b4090: 0x26230c40  addiu       $v1, $s1, 0xC40
    ctx->pc = 0x3b4090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3136));
    // 0x3b4094: 0x2647ff80  addiu       $a3, $s2, -0x80
    ctx->pc = 0x3b4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967168));
    // 0x3b4098: 0xae43ff80  sw          $v1, -0x80($s2)
    ctx->pc = 0x3b4098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967168), GPR_U32(ctx, 3));
    // 0x3b409c: 0x266416c0  addiu       $a0, $s3, 0x16C0
    ctx->pc = 0x3b409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
    // 0x3b40a0: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x3b40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x3b40a4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3b40a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b40a8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3b40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3b40ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b40acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b40b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b40b4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3b40b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b40b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b40bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b40bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b40c0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3b40c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b40c4: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B40C4u;
    SET_GPR_U32(ctx, 31, 0x3B40CCu);
    ctx->pc = 0x3B40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40C4u;
    // 0x3b40c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B40C4u, 0x3B40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40CCu;
label_3b40cc:
    // 0x3b40cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B40CCu;
    {
        const bool branch_taken_0x3b40cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40CCu;
        // 0x3b40d0: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40cc) {
            ctx->pc = 0x3B40E0u;
            goto label_3b40e0;
        }
    }
    ctx->pc = 0x3B40D4u;
    // 0x3b40d4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b40d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B40D8u;
    {
        const bool branch_taken_0x3b40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40D8u;
        // 0x3b40dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40d8) {
            ctx->pc = 0x3B4138u;
            goto label_3b4138;
        }
    }
    ctx->pc = 0x3B40E0u;
label_3b40e0:
    // 0x3b40e0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x3b40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3b40e4: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x3b40e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3b40e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b40e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b40ec: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3b40f0: 0x24a816e8  addiu       $t0, $a1, 0x16E8
    ctx->pc = 0x3b40f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 5864));
    // 0x3b40f4: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x3b40f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3b40f8: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x3b40f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3b40fc: 0xa9040003  swl         $a0, 0x3($t0)
    ctx->pc = 0x3b40fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b4100: 0xb9040000  swr         $a0, 0x0($t0)
    ctx->pc = 0x3b4100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b4104: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x3b4104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3b4108: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x3b4108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3b410c: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x3b410cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b4110: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x3b4110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b4114: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3b4114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3b4118: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b4118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b411c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4124: 0xaca4aedc  sw          $a0, -0x5124($a1)
    ctx->pc = 0x3b4124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FAEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAEDCu, _value); } while (0);
    // 0x3b4128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b412c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3b412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3b4130: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3b4130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3b4134: 0xacc3aee0  sw          $v1, -0x5120($a2)
    ctx->pc = 0x3b4134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294946528), GPR_U32(ctx, 3));
label_3b4138:
    // 0x3b4138: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b413c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3b413cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4140: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b4140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4144: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b4144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4148: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b4148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b414c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b414cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4150: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4150u;
        // 0x3b4154: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4158u;
}
