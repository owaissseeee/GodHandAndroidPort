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

// Function: func_0012E990
// Address: 0x12e990 - 0x12ead8
void func_0012E990_0x12e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012E990_0x12e990");
#endif

    switch (ctx->pc) {
        case 0x12ea00u: goto label_12ea00;
        case 0x12ea20u: goto label_12ea20;
        case 0x12ea44u: goto label_12ea44;
        case 0x12ea68u: goto label_12ea68;
        case 0x12ea8cu: goto label_12ea8c;
        default: break;
    }

    ctx->pc = 0x12e990u;

    // 0x12e990: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12e994: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12e994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12e998: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12e998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x12e99c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12e9a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x12e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x12e9ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12e9acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x12e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x12e9b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12e9b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9b8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x12e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x12e9bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x12e9bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12e9c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12e9c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x12e9c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12e9c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12e9cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x12e9ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x12e9d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12e9d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12e9d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12e9d8: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x12E9D8u;
    {
        const bool branch_taken_0x12e9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9D8u;
        // 0x12e9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9d8) {
            ctx->pc = 0x12EAA4u;
            goto label_12eaa4;
        }
    }
    ctx->pc = 0x12E9E0u;
    // 0x12e9e0: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x12e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x12e9e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12E9E4u;
    {
        const bool branch_taken_0x12e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9E4u;
        // 0x12e9e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9e4) {
            ctx->pc = 0x12EA60u;
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12E9ECu;
    // 0x12e9ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e9f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E9F0u;
    {
        const bool branch_taken_0x12e9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e9f0) {
            ctx->pc = 0x12EA18u;
            goto label_12ea18;
        }
    }
    ctx->pc = 0x12E9F8u;
    // 0x12e9f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e9fc: 0x0  nop
    ctx->pc = 0x12e9fcu;
    // NOP
label_12ea00:
    // 0x12ea00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ea04: 0x0  nop
    ctx->pc = 0x12ea04u;
    // NOP
    // 0x12ea08: 0x0  nop
    ctx->pc = 0x12ea08u;
    // NOP
    // 0x12ea0c: 0x0  nop
    ctx->pc = 0x12ea0cu;
    // NOP
    // 0x12ea10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12EA10u;
    {
        const bool branch_taken_0x12ea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ea10) {
            ctx->pc = 0x12EA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA10u;
            // 0x12ea14: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea00;
        }
    }
    ctx->pc = 0x12EA18u;
label_12ea18:
    // 0x12ea18: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x12EA18u;
    SET_GPR_U32(ctx, 31, 0x12EA20u);
    ctx->pc = 0x12EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA18u;
    // 0x12ea1c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x12EA18u, 0x12EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA20u;
label_12ea20:
    // 0x12ea20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12ea28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12ea2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea30: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12ea30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12ea34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12ea38: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12ea38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x12ea3c: 0xc04b3dc  jal         func_12CF70
    ctx->pc = 0x12EA3Cu;
    SET_GPR_U32(ctx, 31, 0x12EA44u);
    ctx->pc = 0x12EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA3Cu;
    // 0x12ea40: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CF70u, 0x12EA3Cu, 0x12EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA44u;
label_12ea44:
    // 0x12ea44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EA44u;
    {
        const bool branch_taken_0x12ea44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA44u;
        // 0x12ea48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea44) {
            ctx->pc = 0x12EAA4u;
            goto label_12eaa4;
        }
    }
    ctx->pc = 0x12EA4Cu;
    // 0x12ea4c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x12ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x12ea50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ea54: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x12ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    // 0x12ea58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12EA58u;
    {
        const bool branch_taken_0x12ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA58u;
        // 0x12ea5c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea58) {
            ctx->pc = 0x12EAA8u;
            goto label_12eaa8;
        }
    }
    ctx->pc = 0x12EA60u;
label_12ea60:
    // 0x12ea60: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x12EA60u;
    SET_GPR_U32(ctx, 31, 0x12EA68u);
    ctx->pc = 0x12EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA60u;
    // 0x12ea64: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x12EA60u, 0x12EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA68u;
label_12ea68:
    // 0x12ea68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12ea74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea78: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12ea78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12ea7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12ea80: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12ea80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x12ea84: 0xc04b3dc  jal         func_12CF70
    ctx->pc = 0x12EA84u;
    SET_GPR_U32(ctx, 31, 0x12EA8Cu);
    ctx->pc = 0x12EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA84u;
    // 0x12ea88: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CF70u, 0x12EA84u, 0x12EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA8Cu;
label_12ea8c:
    // 0x12ea8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EA8Cu;
    {
        const bool branch_taken_0x12ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA8Cu;
        // 0x12ea90: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea8c) {
            ctx->pc = 0x12EAA4u;
            goto label_12eaa4;
        }
    }
    ctx->pc = 0x12EA94u;
    // 0x12ea94: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x12ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x12ea98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ea9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12EA9Cu;
    {
        const bool branch_taken_0x12ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA9Cu;
        // 0x12eaa0: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea9c) {
            ctx->pc = 0x12EAA8u;
            goto label_12eaa8;
        }
    }
    ctx->pc = 0x12EAA4u;
label_12eaa4:
    // 0x12eaa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12eaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eaa8:
    // 0x12eaa8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12eaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12eaac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12eaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12eab0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12eab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12eab4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12eab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eab8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x12eab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12eabc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x12eabcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eac0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x12eac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12eac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eac8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12eacc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12ead0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAD0u;
        // 0x12ead4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EAD8u;
}
