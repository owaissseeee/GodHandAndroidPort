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

// Function: IsSequenceFlagSet_3737C8
// Address: 0x3737c8 - 0x373810
void IsSequenceFlagSet_3737C8_0x3737c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSequenceFlagSet_3737C8_0x3737c8");
#endif

    switch (ctx->pc) {
        case 0x3737e4u: goto label_3737e4;
        default: break;
    }

    ctx->pc = 0x3737c8u;

    // 0x3737c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3737c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3737cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3737ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3737d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3737d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3737d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3737d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3737d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3737dc: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3737DCu;
    SET_GPR_U32(ctx, 31, 0x3737E4u);
    ctx->pc = 0x3737E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737DCu;
    // 0x3737e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3737DCu, 0x3737E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737E4u;
label_3737e4:
    // 0x3737e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3737E4u;
    {
        const bool branch_taken_0x3737e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3737e4) {
            ctx->pc = 0x3737E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3737E4u;
            // 0x3737e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3737F8u;
            goto label_3737f8;
        }
    }
    ctx->pc = 0x3737ECu;
    // 0x3737ec: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3737f0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x3737f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x3737f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3737f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3737f8:
    // 0x3737f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3737f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3737fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3737fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373804: 0x3e00008  jr          $ra
    ctx->pc = 0x373804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373804u;
        // 0x373808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37380Cu;
    // 0x37380c: 0x0  nop
    ctx->pc = 0x37380cu;
    // NOP
    ctx->pc = 0x373810u;
}
