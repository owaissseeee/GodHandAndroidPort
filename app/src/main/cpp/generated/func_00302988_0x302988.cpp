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

// Function: func_00302988
// Address: 0x302988 - 0x3029c0
void func_00302988_0x302988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302988_0x302988");
#endif

    ctx->pc = 0x302988u;

    // 0x302988: 0xac850100  sw          $a1, 0x100($a0)
    ctx->pc = 0x302988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
    // 0x30298c: 0x908301ed  lbu         $v1, 0x1ED($a0)
    ctx->pc = 0x30298cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 493)));
    // 0x302990: 0x94a200c0  lhu         $v0, 0xC0($a1)
    ctx->pc = 0x302990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x302994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x302998: 0xa4820186  sh          $v0, 0x186($a0)
    ctx->pc = 0x302998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 390), (uint16_t)GPR_U32(ctx, 2));
    // 0x30299c: 0x94a300c2  lhu         $v1, 0xC2($a1)
    ctx->pc = 0x30299cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x3029a0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3029a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3029a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3029A4u;
    {
        const bool branch_taken_0x3029a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029A4u;
        // 0x3029a8: 0xa4830188  sh          $v1, 0x188($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 392), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029a4) {
            ctx->pc = 0x3029B8u;
            goto label_3029b8;
        }
    }
    ctx->pc = 0x3029ACu;
    // 0x3029ac: 0x908201ed  lbu         $v0, 0x1ED($a0)
    ctx->pc = 0x3029acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 493)));
    // 0x3029b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3029b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3029b4: 0xa4820188  sh          $v0, 0x188($a0)
    ctx->pc = 0x3029b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 392), (uint16_t)GPR_U32(ctx, 2));
label_3029b8:
    // 0x3029b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3029B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3029B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3029C0u;
}
