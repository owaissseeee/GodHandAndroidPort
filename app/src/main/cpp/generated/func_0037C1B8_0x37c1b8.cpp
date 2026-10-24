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

// Function: func_0037C1B8
// Address: 0x37c1b8 - 0x37c228
void func_0037C1B8_0x37c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C1B8_0x37c1b8");
#endif

    ctx->pc = 0x37c1b8u;

    // 0x37c1b8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x37c1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37c1bc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x37c1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c1c0: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x37c1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x37c1c4: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x37c1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c1c8: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x37c1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x37c1cc: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x37c1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c1d0: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x37c1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c1d4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x37c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x37c1d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x37c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37c1dc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x37c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x37c1e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x37c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37c1e4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x37c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x37c1e8: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x37c1e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x37c1ec: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x37c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c1f0: 0x94a30014  lhu         $v1, 0x14($a1)
    ctx->pc = 0x37c1f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x37c1f4: 0xa483001a  sh          $v1, 0x1A($a0)
    ctx->pc = 0x37c1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c1f8: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x37c1f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x37c1fc: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x37c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c200: 0x94a30022  lhu         $v1, 0x22($a1)
    ctx->pc = 0x37c200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x37c204: 0xa483001e  sh          $v1, 0x1E($a0)
    ctx->pc = 0x37c204u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c208: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x37c208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x37c20c: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x37c20cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c210: 0x94a3002c  lhu         $v1, 0x2C($a1)
    ctx->pc = 0x37c210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x37c214: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x37c214u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c218: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x37c218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x37c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x37C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C21Cu;
        // 0x37c220: 0xa4820024  sh          $v0, 0x24($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C224u;
    // 0x37c224: 0x0  nop
    ctx->pc = 0x37c224u;
    // NOP
    ctx->pc = 0x37c228u;
}
