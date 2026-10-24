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

// Function: func_0019C050
// Address: 0x19c050 - 0x19c0c8
void func_0019C050_0x19c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C050_0x19c050");
#endif

    switch (ctx->pc) {
        case 0x19c090u: goto label_19c090;
        case 0x19c0b4u: goto label_19c0b4;
        default: break;
    }

    ctx->pc = 0x19c050u;

    // 0x19c050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c054: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c05c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c064: 0x860605f6  lh          $a2, 0x5F6($s0)
    ctx->pc = 0x19c064u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1526)));
    // 0x19c068: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C068u;
    {
        const bool branch_taken_0x19c068 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x19C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C068u;
        // 0x19c06c: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c068) {
            ctx->pc = 0x19C090u;
            goto label_19c090;
        }
    }
    ctx->pc = 0x19C070u;
    // 0x19c070: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x19c074: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c078: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19c078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19c080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c084: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19c084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c088: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x19C088u;
    SET_GPR_U32(ctx, 31, 0x19C090u);
    ctx->pc = 0x19C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C088u;
    // 0x19c08c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x19C088u, 0x19C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C090u;
label_19c090:
    // 0x19c090: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x19c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x19c094: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19c094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c098: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c09c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x19c09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19c0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19c0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19c0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0ac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x19C0ACu;
    SET_GPR_U32(ctx, 31, 0x19C0B4u);
    ctx->pc = 0x19C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0ACu;
    // 0x19c0b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x19C0ACu, 0x19C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0B4u;
label_19c0b4:
    // 0x19c0b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0C0u;
        // 0x19c0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0C8u;
}
