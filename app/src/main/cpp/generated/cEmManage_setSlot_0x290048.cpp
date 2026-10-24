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

// Function: cEmManage_setSlot
// Address: 0x290048 - 0x290090
void cEmManage_setSlot_0x290048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_setSlot_0x290048");
#endif

    ctx->pc = 0x290048u;

    // 0x290048: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x290048u;
    {
        const bool branch_taken_0x290048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290048u;
        // 0x29004c: 0x28c2ffff  slti        $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290048) {
            ctx->pc = 0x290088u;
            goto label_290088;
        }
    }
    ctx->pc = 0x290050u;
    // 0x290050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290050u;
    {
        const bool branch_taken_0x290050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290050) {
            ctx->pc = 0x290088u;
            goto label_290088;
        }
    }
    ctx->pc = 0x290058u;
    // 0x290058: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x290058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29005c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29005Cu;
    {
        const bool branch_taken_0x29005c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29005Cu;
        // 0x290060: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29005c) {
            ctx->pc = 0x290088u;
            goto label_290088;
        }
    }
    ctx->pc = 0x290064u;
    // 0x290064: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x290064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x290068: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290068u;
    {
        const bool branch_taken_0x290068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290068u;
        // 0x29006c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290068) {
            ctx->pc = 0x290088u;
            goto label_290088;
        }
    }
    ctx->pc = 0x290070u;
    // 0x290070: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x290070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x290074: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290074u;
    {
        const bool branch_taken_0x290074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x290074) {
            ctx->pc = 0x290088u;
            goto label_290088;
        }
    }
    ctx->pc = 0x29007Cu;
    // 0x29007c: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x29007cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x290080: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x290080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x290084: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x290084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_290088:
    // 0x290088: 0x3e00008  jr          $ra
    ctx->pc = 0x290088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290090u;
}
