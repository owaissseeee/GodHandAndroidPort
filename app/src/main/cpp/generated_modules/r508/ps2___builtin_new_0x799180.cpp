#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: __builtin_new
// Address: 0x799180 - 0x7991a8
void ps2___builtin_new_0x799180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_new_0x799180");
#endif

    switch (ctx->pc) {
        case 0x799198u: goto label_799198;
        default: break;
    }

    ctx->pc = 0x799180u;

    // 0x799180: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799184: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799188: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x799188u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x79918c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799190: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x799190u;
    SET_GPR_U32(ctx, 31, 0x799198u);
    ctx->pc = 0x799194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799190u;
    // 0x799194: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x799190u, 0x799198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799198u;
label_799198:
    // 0x799198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79919c: 0x3e00008  jr          $ra
    ctx->pc = 0x79919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7991A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79919Cu;
        // 0x7991a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7991A4u;
    // 0x7991a4: 0x0  nop
    ctx->pc = 0x7991a4u;
    // NOP
    ctx->pc = 0x7991a8u;
}
} // namespace gh_r508
