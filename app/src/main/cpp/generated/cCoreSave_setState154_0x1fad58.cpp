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

// Function: cCoreSave_setState154
// Address: 0x1fad58 - 0x1fad88
void cCoreSave_setState154_0x1fad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setState154_0x1fad58");
#endif

    ctx->pc = 0x1fad58u;

    // 0x1fad58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAD5Cu;
    {
        const bool branch_taken_0x1fad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD5Cu;
        // 0x1fad60: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad5c) {
            ctx->pc = 0x1FAD80u;
            goto label_1fad80;
        }
    }
    ctx->pc = 0x1FAD64u;
    // 0x1fad64: 0xa0450154  sb          $a1, 0x154($v0)
    ctx->pc = 0x1fad64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 340), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fad68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad6c: 0x90820154  lbu         $v0, 0x154($a0)
    ctx->pc = 0x1fad6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1fad70: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x1fad70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x1fad74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAD74u;
    {
        const bool branch_taken_0x1fad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD74u;
        // 0x1fad78: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad74) {
            ctx->pc = 0x1FAD80u;
            goto label_1fad80;
        }
    }
    ctx->pc = 0x1FAD7Cu;
    // 0x1fad7c: 0xa0820154  sb          $v0, 0x154($a0)
    ctx->pc = 0x1fad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 340), (uint8_t)GPR_U32(ctx, 2));
label_1fad80:
    // 0x1fad80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD88u;
}
