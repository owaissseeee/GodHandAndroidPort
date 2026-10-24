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

// Function: GetSingleton786578_2F9CE0
// Address: 0x2f9ce0 - 0x2f9d30
void GetSingleton786578_2F9CE0_0x2f9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786578_2F9CE0_0x2f9ce0");
#endif

    switch (ctx->pc) {
        case 0x2f9d04u: goto label_2f9d04;
        case 0x2f9d1cu: goto label_2f9d1c;
        default: break;
    }

    ctx->pc = 0x2f9ce0u;

    // 0x2f9ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9ce4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f9ce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f9cec: 0x8c626578  lw          $v0, 0x6578($v1)
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786578u));
    // 0x2f9cf0: 0x24706578  addiu       $s0, $v1, 0x6578
    ctx->pc = 0x2f9cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25976));
    // 0x2f9cf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9CF4u;
    {
        const bool branch_taken_0x2f9cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CF4u;
        // 0x2f9cf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cf4) {
            ctx->pc = 0x2F9D1Cu;
            goto label_2f9d1c;
        }
    }
    ctx->pc = 0x2F9CFCu;
    // 0x2f9cfc: 0xc0bbe98  jal         func_2EFA60
    ctx->pc = 0x2F9CFCu;
    SET_GPR_U32(ctx, 31, 0x2F9D04u);
    ctx->pc = 0x2EFA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA60u, 0x2F9CFCu, 0x2F9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D04u;
label_2f9d04:
    // 0x2f9d04: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f9d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f9d08: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f9d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f9d0c: 0x24a5f868  addiu       $a1, $a1, -0x798
    ctx->pc = 0x2f9d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965352));
    // 0x2f9d10: 0x24c663f8  addiu       $a2, $a2, 0x63F8
    ctx->pc = 0x2f9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25592));
    // 0x2f9d14: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F9D14u;
    SET_GPR_U32(ctx, 31, 0x2F9D1Cu);
    ctx->pc = 0x2F9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D14u;
    // 0x2f9d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F9D14u, 0x2F9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D1Cu;
label_2f9d1c:
    // 0x2f9d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f9d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9d24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f9d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D28u;
        // 0x2f9d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9D30u;
}
