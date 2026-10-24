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

// Function: StoreMotionParamsBoth_2609A8
// Address: 0x2609a8 - 0x2609e0
void StoreMotionParamsBoth_2609A8_0x2609a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreMotionParamsBoth_2609A8_0x2609a8");
#endif

    ctx->pc = 0x2609a8u;

    // 0x2609a8: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2609ac: 0xac851888  sw          $a1, 0x1888($a0)
    ctx->pc = 0x2609acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6280), GPR_U32(ctx, 5));
    // 0x2609b0: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x2609b0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2609b4: 0xac861884  sw          $a2, 0x1884($a0)
    ctx->pc = 0x2609b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6276), GPR_U32(ctx, 6));
    // 0x2609b8: 0xa4891894  sh          $t1, 0x1894($a0)
    ctx->pc = 0x2609b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6292), (uint16_t)GPR_U32(ctx, 9));
    // 0x2609bc: 0xac87188c  sw          $a3, 0x188C($a0)
    ctx->pc = 0x2609bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6284), GPR_U32(ctx, 7));
    // 0x2609c0: 0xac881890  sw          $t0, 0x1890($a0)
    ctx->pc = 0x2609c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6288), GPR_U32(ctx, 8));
    // 0x2609c4: 0xac851874  sw          $a1, 0x1874($a0)
    ctx->pc = 0x2609c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6260), GPR_U32(ctx, 5));
    // 0x2609c8: 0xac861870  sw          $a2, 0x1870($a0)
    ctx->pc = 0x2609c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6256), GPR_U32(ctx, 6));
    // 0x2609cc: 0xac871878  sw          $a3, 0x1878($a0)
    ctx->pc = 0x2609ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6264), GPR_U32(ctx, 7));
    // 0x2609d0: 0xac88187c  sw          $t0, 0x187C($a0)
    ctx->pc = 0x2609d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6268), GPR_U32(ctx, 8));
    // 0x2609d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2609D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2609D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609D4u;
        // 0x2609d8: 0xa4891880  sh          $t1, 0x1880($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6272), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2609DCu;
    // 0x2609dc: 0x0  nop
    ctx->pc = 0x2609dcu;
    // NOP
    ctx->pc = 0x2609e0u;
}
