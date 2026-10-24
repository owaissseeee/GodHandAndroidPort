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

// Function: func_00358090
// Address: 0x358090 - 0x3580e8
void func_00358090_0x358090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358090_0x358090");
#endif

    switch (ctx->pc) {
        case 0x3580d8u: goto label_3580d8;
        default: break;
    }

    ctx->pc = 0x358090u;

    // 0x358090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x358094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35809c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3580a0: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x3580a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x3580a4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3580A4u;
    {
        const bool branch_taken_0x3580a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3580A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580A4u;
        // 0x3580a8: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580a4) {
            ctx->pc = 0x3580C8u;
            goto label_3580c8;
        }
    }
    ctx->pc = 0x3580ACu;
    // 0x3580ac: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x3580acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3580b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3580b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3580b4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3580B4u;
    {
        const bool branch_taken_0x3580b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3580B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580B4u;
        // 0x3580b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580b4) {
            ctx->pc = 0x3580DCu;
            goto label_3580dc;
        }
    }
    ctx->pc = 0x3580BCu;
    // 0x3580bc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3580c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3580C0u;
    {
        const bool branch_taken_0x3580c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3580c0) {
            ctx->pc = 0x3580D0u;
            goto label_3580d0;
        }
    }
    ctx->pc = 0x3580C8u;
label_3580c8:
    // 0x3580c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3580C8u;
    {
        const bool branch_taken_0x3580c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3580CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580C8u;
        // 0x3580cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580c8) {
            ctx->pc = 0x3580DCu;
            goto label_3580dc;
        }
    }
    ctx->pc = 0x3580D0u;
label_3580d0:
    // 0x3580d0: 0xc0d6a2a  jal         func_35A8A8
    ctx->pc = 0x3580D0u;
    SET_GPR_U32(ctx, 31, 0x3580D8u);
    ctx->pc = 0x35A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A8A8u, 0x3580D0u, 0x3580D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580D8u;
label_3580d8:
    // 0x3580d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3580d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3580dc:
    // 0x3580dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3580dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3580e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3580E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3580E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580E0u;
        // 0x3580e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3580E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3580E8u;
}
