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

// Function: func_00380F80
// Address: 0x380f80 - 0x381010
void func_00380F80_0x380f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380F80_0x380f80");
#endif

    switch (ctx->pc) {
        case 0x380fb4u: goto label_380fb4;
        case 0x380fc8u: goto label_380fc8;
        case 0x380fd8u: goto label_380fd8;
        default: break;
    }

    ctx->pc = 0x380f80u;

    // 0x380f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x380f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x380f84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x380f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x380f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x380f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x380f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x380f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x380f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x380f94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x380f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x380f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x380f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380fa0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380fa4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x380FA4u;
    {
        const bool branch_taken_0x380fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380FA4u;
        // 0x380fa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380fa4) {
            ctx->pc = 0x380FECu;
            goto label_380fec;
        }
    }
    ctx->pc = 0x380FACu;
    // 0x380fac: 0xc0cac2c  jal         func_32B0B0
    ctx->pc = 0x380FACu;
    SET_GPR_U32(ctx, 31, 0x380FB4u);
    ctx->pc = 0x32B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B0B0u, 0x380FACu, 0x380FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380FB4u;
label_380fb4:
    // 0x380fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x380fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fb8: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x380FB8u;
    {
        const bool branch_taken_0x380fb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x380fb8) {
            ctx->pc = 0x380FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380FB8u;
            // 0x380fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380FF0u;
            goto label_380ff0;
        }
    }
    ctx->pc = 0x380FC0u;
    // 0x380fc0: 0xc0cac46  jal         func_32B118
    ctx->pc = 0x380FC0u;
    SET_GPR_U32(ctx, 31, 0x380FC8u);
    ctx->pc = 0x380FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380FC0u;
    // 0x380fc4: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B118u, 0x380FC0u, 0x380FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380FC8u;
label_380fc8:
    // 0x380fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x380fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380fd0: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x380FD0u;
    SET_GPR_U32(ctx, 31, 0x380FD8u);
    ctx->pc = 0x380FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380FD0u;
    // 0x380fd4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x380FD0u, 0x380FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380FD8u;
label_380fd8:
    // 0x380fd8: 0x112027  nor         $a0, $zero, $s1
    ctx->pc = 0x380fd8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x380fdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x380fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380fe0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x380fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x380fe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x380FE4u;
    {
        const bool branch_taken_0x380fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380FE4u;
        // 0x380fe8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380fe4) {
            ctx->pc = 0x380FF0u;
            goto label_380ff0;
        }
    }
    ctx->pc = 0x380FECu;
label_380fec:
    // 0x380fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x380fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380ff0:
    // 0x380ff0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x380ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380ff4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x380ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x380ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380ffc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x380ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381004: 0x3e00008  jr          $ra
    ctx->pc = 0x381004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381004u;
        // 0x381008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38100Cu;
    // 0x38100c: 0x0  nop
    ctx->pc = 0x38100cu;
    // NOP
    ctx->pc = 0x381010u;
}
