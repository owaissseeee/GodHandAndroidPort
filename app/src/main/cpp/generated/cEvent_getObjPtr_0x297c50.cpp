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

// Function: cEvent_getObjPtr
// Address: 0x297c50 - 0x297c80
void cEvent_getObjPtr_0x297c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_getObjPtr_0x297c50");
#endif

    switch (ctx->pc) {
        case 0x297c6cu: goto label_297c6c;
        default: break;
    }

    ctx->pc = 0x297c50u;

    // 0x297c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297c54: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297c54u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297C54u) & 0xFFFFu)) << 16));
    // 0x297c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297c5c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x297c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x297c60: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297c60u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297C60u) & 0xFFFFu))));
    // 0x297c64: 0xc000000  jal         func_000000
    ctx->pc = 0x297C64u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297C64u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297C6Cu);
        ctx->pc = 0x297C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C64u;
        // 0x297c68: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C64u, 0x297C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297C6Cu;
label_297c6c:
    // 0x297c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297c70: 0x3e00008  jr          $ra
    ctx->pc = 0x297C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C70u;
        // 0x297c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C78u;
    // 0x297c78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x297c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x297c7c: 0x0  nop
    ctx->pc = 0x297c7cu;
    // NOP
    ctx->pc = 0x297c80u;
}
