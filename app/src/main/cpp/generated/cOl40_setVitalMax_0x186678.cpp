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

// Function: cOl40_setVitalMax
// Address: 0x186678 - 0x1866a0
void cOl40_setVitalMax_0x186678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl40_setVitalMax_0x186678");
#endif

    ctx->pc = 0x186678u;

    // 0x186678: 0xa4850624  sh          $a1, 0x624($a0)
    ctx->pc = 0x186678u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1572), (uint16_t)GPR_U32(ctx, 5));
    // 0x18667c: 0xa485062c  sh          $a1, 0x62C($a0)
    ctx->pc = 0x18667cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1580), (uint16_t)GPR_U32(ctx, 5));
    // 0x186680: 0xa485061e  sh          $a1, 0x61E($a0)
    ctx->pc = 0x186680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1566), (uint16_t)GPR_U32(ctx, 5));
    // 0x186684: 0xa485062e  sh          $a1, 0x62E($a0)
    ctx->pc = 0x186684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1582), (uint16_t)GPR_U32(ctx, 5));
    // 0x186688: 0xa4850620  sh          $a1, 0x620($a0)
    ctx->pc = 0x186688u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1568), (uint16_t)GPR_U32(ctx, 5));
    // 0x18668c: 0xa4850630  sh          $a1, 0x630($a0)
    ctx->pc = 0x18668cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1584), (uint16_t)GPR_U32(ctx, 5));
    // 0x186690: 0xa4850622  sh          $a1, 0x622($a0)
    ctx->pc = 0x186690u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1570), (uint16_t)GPR_U32(ctx, 5));
    // 0x186694: 0x3e00008  jr          $ra
    ctx->pc = 0x186694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186694u;
        // 0x186698: 0xa4850632  sh          $a1, 0x632($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1586), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18669Cu;
    // 0x18669c: 0x0  nop
    ctx->pc = 0x18669cu;
    // NOP
    ctx->pc = 0x1866a0u;
}
