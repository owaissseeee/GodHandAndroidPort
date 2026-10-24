#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799EF0
// Address: 0x799ef0 - 0x799f28
void func_00799EF0_0x799ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799EF0_0x799ef0");
#endif

    switch (ctx->pc) {
        case 0x799f10u: goto label_799f10;
        case 0x799f1cu: goto label_799f1c;
        default: break;
    }

    ctx->pc = 0x799ef0u;

    // 0x799ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799efc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f00: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799f04: 0x240503d9  addiu       $a1, $zero, 0x3D9
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x799f08: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799f14: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799f20: 0x3e00008  jr          $ra
    ctx->pc = 0x799F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F28u;
}
} // namespace gh_r205
