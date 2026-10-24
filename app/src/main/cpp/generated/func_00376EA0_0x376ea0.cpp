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

// Function: func_00376EA0
// Address: 0x376ea0 - 0x376f18
void func_00376EA0_0x376ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376EA0_0x376ea0");
#endif

    switch (ctx->pc) {
        case 0x376ec0u: goto label_376ec0;
        case 0x376ee0u: goto label_376ee0;
        case 0x376ef0u: goto label_376ef0;
        default: break;
    }

    ctx->pc = 0x376ea0u;

    // 0x376ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376ea4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376ea8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x376ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376eb0: 0x2450e590  addiu       $s0, $v0, -0x1A70
    ctx->pc = 0x376eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960528));
    // 0x376eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376eb8: 0x26110380  addiu       $s1, $s0, 0x380
    ctx->pc = 0x376eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x376ebc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x376ebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76E590u));
label_376ec0:
    // 0x376ec0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x376EC0u;
    {
        const bool branch_taken_0x376ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376ec0) {
            ctx->pc = 0x376EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376EC0u;
            // 0x376ec4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376EF8u;
            goto label_376ef8;
        }
    }
    ctx->pc = 0x376EC8u;
    // 0x376ec8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x376ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x376ecc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x376eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x376ed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376ED0u;
    {
        const bool branch_taken_0x376ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376ed0) {
            ctx->pc = 0x376EE8u;
            goto label_376ee8;
        }
    }
    ctx->pc = 0x376ED8u;
    // 0x376ed8: 0xc0ddcb6  jal         func_3772D8
    ctx->pc = 0x376ED8u;
    SET_GPR_U32(ctx, 31, 0x376EE0u);
    ctx->pc = 0x376EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376ED8u;
    // 0x376edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3772D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3772D8u, 0x376ED8u, 0x376EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EE0u;
label_376ee0:
    // 0x376ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376EE0u;
    {
        const bool branch_taken_0x376ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376EE0u;
        // 0x376ee4: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ee0) {
            ctx->pc = 0x376EF4u;
            goto label_376ef4;
        }
    }
    ctx->pc = 0x376EE8u;
label_376ee8:
    // 0x376ee8: 0xc0ddbc6  jal         func_376F18
    ctx->pc = 0x376EE8u;
    SET_GPR_U32(ctx, 31, 0x376EF0u);
    ctx->pc = 0x376EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EE8u;
    // 0x376eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376F18u, 0x376EE8u, 0x376EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EF0u;
label_376ef0:
    // 0x376ef0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x376ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_376ef4:
    // 0x376ef4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x376ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_376ef8:
    // 0x376ef8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x376ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x376efc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x376EFCu;
    {
        const bool branch_taken_0x376efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376efc) {
            ctx->pc = 0x376F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376EFCu;
            // 0x376f00: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ec0;
        }
    }
    ctx->pc = 0x376F04u;
    // 0x376f04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376f10: 0x3e00008  jr          $ra
    ctx->pc = 0x376F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F10u;
        // 0x376f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376F18u;
}
