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

// Function: Slot2_Initialize
// Address: 0x1e47c0 - 0x1e48e0
void Slot2_Initialize_0x1e47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_Initialize_0x1e47c0");
#endif

    switch (ctx->pc) {
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e4898u: goto label_1e4898;
        default: break;
    }

    ctx->pc = 0x1e47c0u;

    // 0x1e47c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e47c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e47c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e47c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e47c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e47cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e47ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1e47d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e47d8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1e47d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e47e0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1e47e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47e4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e47e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1e47e8: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1e47e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47ec: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1e47f0: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1e47f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47f4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e47f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1e47f8: 0x30b6ffff  andi        $s6, $a1, 0xFFFF
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e47fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4800: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x1e4800u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e4804: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E4804u;
    {
        const bool branch_taken_0x1e4804 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4804u;
        // 0x1e4808: 0x97b10090  lhu         $s1, 0x90($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4804) {
            ctx->pc = 0x1E48B0u;
            goto label_1e48b0;
        }
    }
    ctx->pc = 0x1E480Cu;
    // 0x1e480c: 0x52400029  beql        $s2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E480Cu;
    {
        const bool branch_taken_0x1e480c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e480c) {
            ctx->pc = 0x1E4810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E480Cu;
            // 0x1e4810: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E48B4u;
            goto label_1e48b4;
        }
    }
    ctx->pc = 0x1E4814u;
    // 0x1e4814: 0x52a00027  beql        $s5, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E4814u;
    {
        const bool branch_taken_0x1e4814 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4814) {
            ctx->pc = 0x1E4818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4814u;
            // 0x1e4818: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E48B4u;
            goto label_1e48b4;
        }
    }
    ctx->pc = 0x1E481Cu;
    // 0x1e481c: 0x50e00025  beql        $a3, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E481Cu;
    {
        const bool branch_taken_0x1e481c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e481c) {
            ctx->pc = 0x1E4820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E481Cu;
            // 0x1e4820: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E48B4u;
            goto label_1e48b4;
        }
    }
    ctx->pc = 0x1E4824u;
    // 0x1e4824: 0x52600023  beql        $s3, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E4824u;
    {
        const bool branch_taken_0x1e4824 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4824) {
            ctx->pc = 0x1E4828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4824u;
            // 0x1e4828: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E48B4u;
            goto label_1e48b4;
        }
    }
    ctx->pc = 0x1E482Cu;
    // 0x1e482c: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E482Cu;
    {
        const bool branch_taken_0x1e482c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e482c) {
            ctx->pc = 0x1E4830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E482Cu;
            // 0x1e4830: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E48B4u;
            goto label_1e48b4;
        }
    }
    ctx->pc = 0x1E4834u;
    // 0x1e4834: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E4834u;
    {
        const bool branch_taken_0x1e4834 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4834u;
        // 0x1e4838: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4834) {
            ctx->pc = 0x1E48B0u;
            goto label_1e48b0;
        }
    }
    ctx->pc = 0x1E483Cu;
    // 0x1e483c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E483Cu;
        // 0x1e4840: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E48B0u;
            goto label_1e48b0;
        }
    }
    ctx->pc = 0x1E4844u;
    // 0x1e4844: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e4844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4848: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e484c: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x1E484Cu;
    SET_GPR_U32(ctx, 31, 0x1E4854u);
    ctx->pc = 0x1E4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E484Cu;
    // 0x1e4850: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E87E0u, 0x1E484Cu, 0x1E4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4858: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e485c: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1e485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1e4860: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x1E4860u;
    SET_GPR_U32(ctx, 31, 0x1E4868u);
    ctx->pc = 0x1E4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4860u;
    // 0x1e4864: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E87E0u, 0x1E4860u, 0x1E4868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1e4868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e486c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4870: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e4870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4874: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x1E4874u;
    SET_GPR_U32(ctx, 31, 0x1E487Cu);
    ctx->pc = 0x1E4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4874u;
    // 0x1e4878: 0x26040228  addiu       $a0, $s0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E87E0u, 0x1E4874u, 0x1E487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E487Cu;
label_1e487c:
    // 0x1e487c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4880: 0xc079e6a  jal         func_1E79A8
    ctx->pc = 0x1E4880u;
    SET_GPR_U32(ctx, 31, 0x1E4888u);
    ctx->pc = 0x1E4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4880u;
    // 0x1e4884: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E79A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E79A8u, 0x1E4880u, 0x1E4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4888u;
label_1e4888:
    // 0x1e4888: 0xa61603d0  sh          $s6, 0x3D0($s0)
    ctx->pc = 0x1e4888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 976), (uint16_t)GPR_U32(ctx, 22));
    // 0x1e488c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4890: 0xc0799ea  jal         func_1E67A8
    ctx->pc = 0x1E4890u;
    SET_GPR_U32(ctx, 31, 0x1E4898u);
    ctx->pc = 0x1E4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4890u;
    // 0x1e4894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67A8u, 0x1E4890u, 0x1E4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4898u;
label_1e4898:
    // 0x1e4898: 0xa20003d8  sb          $zero, 0x3D8($s0)
    ctx->pc = 0x1e4898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e489c: 0xa60003e0  sh          $zero, 0x3E0($s0)
    ctx->pc = 0x1e489cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e48a0: 0xa60003e2  sh          $zero, 0x3E2($s0)
    ctx->pc = 0x1e48a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 994), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e48a4: 0xa60003e4  sh          $zero, 0x3E4($s0)
    ctx->pc = 0x1e48a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 996), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e48a8: 0xa60003e6  sh          $zero, 0x3E6($s0)
    ctx->pc = 0x1e48a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 998), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e48ac: 0xa60003e8  sh          $zero, 0x3E8($s0)
    ctx->pc = 0x1e48acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1000), (uint16_t)GPR_U32(ctx, 0));
label_1e48b0:
    // 0x1e48b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e48b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e48b4:
    // 0x1e48b4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e48b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e48b8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e48b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e48bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e48bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e48c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e48c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e48c4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e48c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e48c8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e48c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e48cc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e48ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e48d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e48d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e48d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E48D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D4u;
        // 0x1e48d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E48D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E48DCu;
    // 0x1e48dc: 0x0  nop
    ctx->pc = 0x1e48dcu;
    // NOP
    ctx->pc = 0x1e48e0u;
}
