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

// Function: KeyStop
// Address: 0x31afa0 - 0x31afe0
void KeyStop_0x31afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStop_0x31afa0");
#endif

    switch (ctx->pc) {
        case 0x31afd0u: goto label_31afd0;
        default: break;
    }

    ctx->pc = 0x31afa0u;

    // 0x31afa0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x31afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x31afa4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x31afa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x31afa8: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x31afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x31afac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31afacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31afb0: 0x24657a78  addiu       $a1, $v1, 0x7A78
    ctx->pc = 0x31afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
    // 0x31afb4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x31afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x31afb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31afbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31afc0: 0x24a5fba0  addiu       $a1, $a1, -0x460
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966176));
    // 0x31afc4: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x31afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x31afc8: 0xc0c6d04  jal         func_31B410
    ctx->pc = 0x31AFC8u;
    SET_GPR_U32(ctx, 31, 0x31AFD0u);
    ctx->pc = 0x31AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFC8u;
    // 0x31afcc: 0xac627a78  sw          $v0, 0x7A78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B410u, 0x31AFC8u, 0x31AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFD0u;
label_31afd0:
    // 0x31afd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31afd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD4u;
        // 0x31afd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AFDCu;
    // 0x31afdc: 0x0  nop
    ctx->pc = 0x31afdcu;
    // NOP
    ctx->pc = 0x31afe0u;
}
