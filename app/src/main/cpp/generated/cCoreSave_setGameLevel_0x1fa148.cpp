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

// Function: cCoreSave_setGameLevel
// Address: 0x1fa148 - 0x1fa1a0
void cCoreSave_setGameLevel_0x1fa148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGameLevel_0x1fa148");
#endif

    ctx->pc = 0x1fa148u;

    // 0x1fa148: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1fa148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa14c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa150: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA150u;
    {
        const bool branch_taken_0x1fa150 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA150u;
        // 0x1fa154: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa150) {
            ctx->pc = 0x1FA198u;
            goto label_1fa198;
        }
    }
    ctx->pc = 0x1FA158u;
    // 0x1fa158: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fa15c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa160: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fa160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa164: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fa164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa168: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x1fa168u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x1fa16c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1fa170: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1fa170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa174: 0x2484f178  addiu       $a0, $a0, -0xE88
    ctx->pc = 0x1fa174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963576));
    // 0x1fa178: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x1fa178u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1fa17c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fa17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa180: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fa180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa184: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fa184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa188: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1fa188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa18c: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x1fa18cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa190: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fa190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa194: 0xa045001e  sb          $a1, 0x1E($v0)
    ctx->pc = 0x1fa194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30), (uint8_t)GPR_U32(ctx, 5));
label_1fa198:
    // 0x1fa198: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA1A0u;
}
