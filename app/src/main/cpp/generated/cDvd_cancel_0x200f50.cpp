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

// Function: cDvd_cancel
// Address: 0x200f50 - 0x201018
void cDvd_cancel_0x200f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_cancel_0x200f50");
#endif

    switch (ctx->pc) {
        case 0x200fa4u: goto label_200fa4;
        case 0x200facu: goto label_200fac;
        case 0x200fb8u: goto label_200fb8;
        case 0x200fc8u: goto label_200fc8;
        case 0x200fe0u: goto label_200fe0;
        default: break;
    }

    ctx->pc = 0x200f50u;

    // 0x200f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x200f54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x200f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x200f5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x200f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x200f60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x200f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x200f68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x200f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x200f70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x200f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x200f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200f78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200f7c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x200F7Cu;
    {
        const bool branch_taken_0x200f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F7Cu;
        // 0x200f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f7c) {
            ctx->pc = 0x200FF8u;
            goto label_200ff8;
        }
    }
    ctx->pc = 0x200F84u;
    // 0x200f84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x200f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200f88: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x200F88u;
    {
        const bool branch_taken_0x200f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x200F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F88u;
        // 0x200f8c: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f88) {
            ctx->pc = 0x200FC0u;
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200F90u;
    // 0x200f90: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x200f94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x200F94u;
    {
        const bool branch_taken_0x200f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200f94) {
            ctx->pc = 0x200F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F94u;
            // 0x200f98: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200FB0u;
            goto label_200fb0;
        }
    }
    ctx->pc = 0x200F9Cu;
    // 0x200f9c: 0xc0c9002  jal         func_324008
    ctx->pc = 0x200F9Cu;
    SET_GPR_U32(ctx, 31, 0x200FA4u);
    ctx->pc = 0x324008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324008u, 0x200F9Cu, 0x200FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FA4u;
label_200fa4:
    // 0x200fa4: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x200FA4u;
    SET_GPR_U32(ctx, 31, 0x200FACu);
    ctx->pc = 0x200FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FA4u;
    // 0x200fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018F0u, 0x200FA4u, 0x200FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FACu;
label_200fac:
    // 0x200fac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x200facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_200fb0:
    // 0x200fb0: 0xc0804a4  jal         func_201290
    ctx->pc = 0x200FB0u;
    SET_GPR_U32(ctx, 31, 0x200FB8u);
    ctx->pc = 0x200FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FB0u;
    // 0x200fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x200FB0u, 0x200FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FB8u;
label_200fb8:
    // 0x200fb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x200FB8u;
    {
        const bool branch_taken_0x200fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FB8u;
        // 0x200fbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fb8) {
            ctx->pc = 0x200FF4u;
            goto label_200ff4;
        }
    }
    ctx->pc = 0x200FC0u;
label_200fc0:
    // 0x200fc0: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x200fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x200fc4: 0x26541108  addiu       $s4, $s2, 0x1108
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4360));
label_200fc8:
    // 0x200fc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200fcc: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x200FCCu;
    {
        const bool branch_taken_0x200fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x200fcc) {
            ctx->pc = 0x200FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FCCu;
            // 0x200fd0: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200FE8u;
            goto label_200fe8;
        }
    }
    ctx->pc = 0x200FD4u;
    // 0x200fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fd8: 0xc08048a  jal         func_201228
    ctx->pc = 0x200FD8u;
    SET_GPR_U32(ctx, 31, 0x200FE0u);
    ctx->pc = 0x200FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FD8u;
    // 0x200fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x200FD8u, 0x200FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FE0u;
label_200fe0:
    // 0x200fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200fe4: 0x26100088  addiu       $s0, $s0, 0x88
    ctx->pc = 0x200fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_200fe8:
    // 0x200fe8: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x200fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x200fec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x200FECu;
    {
        const bool branch_taken_0x200fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FECu;
        // 0x200ff0: 0x26310088  addiu       $s1, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fec) {
            ctx->pc = 0x200FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200fc8;
        }
    }
    ctx->pc = 0x200FF4u;
label_200ff4:
    // 0x200ff4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x200ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_200ff8:
    // 0x200ff8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x200ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200ffc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x200ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201000: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x201000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201004: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x201004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201008: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x201008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20100c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201010: 0x3e00008  jr          $ra
    ctx->pc = 0x201010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201018u;
}
