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

// Function: cSceAtManager_AtDataSetExec
// Address: 0x2c2750 - 0x2c2790
void cSceAtManager_AtDataSetExec_0x2c2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtDataSetExec_0x2c2750");
#endif

    ctx->pc = 0x2c2750u;

    // 0x2c2750: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2750u;
    {
        const bool branch_taken_0x2c2750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2750) {
            ctx->pc = 0x2C2784u;
            goto label_2c2784;
        }
    }
    ctx->pc = 0x2C2758u;
    // 0x2c2758: 0x51200008  beql        $t1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2758u;
    {
        const bool branch_taken_0x2c2758 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2758) {
            ctx->pc = 0x2C275Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2758u;
            // 0x2c275c: 0xaca80040  sw          $t0, 0x40($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C277Cu;
            goto label_2c277c;
        }
    }
    ctx->pc = 0x2C2760u;
    // 0x2c2760: 0x90a2004e  lbu         $v0, 0x4E($a1)
    ctx->pc = 0x2c2760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 78)));
    // 0x2c2764: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2764u;
    {
        const bool branch_taken_0x2c2764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2764) {
            ctx->pc = 0x2C2768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2764u;
            // 0x2c2768: 0xa0a9003b  sb          $t1, 0x3B($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2778u;
            goto label_2c2778;
        }
    }
    ctx->pc = 0x2C276Cu;
    // 0x2c276c: 0x90a2003b  lbu         $v0, 0x3B($a1)
    ctx->pc = 0x2c276cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
    // 0x2c2770: 0xa0a2004e  sb          $v0, 0x4E($a1)
    ctx->pc = 0x2c2770u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2774: 0xa0a9003b  sb          $t1, 0x3B($a1)
    ctx->pc = 0x2c2774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 9));
label_2c2778:
    // 0x2c2778: 0xaca80040  sw          $t0, 0x40($a1)
    ctx->pc = 0x2c2778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 8));
label_2c277c:
    // 0x2c277c: 0xa0a60044  sb          $a2, 0x44($a1)
    ctx->pc = 0x2c277cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2780: 0xaca7003c  sw          $a3, 0x3C($a1)
    ctx->pc = 0x2c2780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 7));
label_2c2784:
    // 0x2c2784: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C278Cu;
    // 0x2c278c: 0x0  nop
    ctx->pc = 0x2c278cu;
    // NOP
    ctx->pc = 0x2c2790u;
}
