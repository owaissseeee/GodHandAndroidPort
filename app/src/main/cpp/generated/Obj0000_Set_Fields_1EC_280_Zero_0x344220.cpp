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

// Function: Obj0000_Set_Fields_1EC_280_Zero
// Address: 0x344220 - 0x344278
void Obj0000_Set_Fields_1EC_280_Zero_0x344220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Fields_1EC_280_Zero_0x344220");
#endif

    switch (ctx->pc) {
        case 0x344250u: goto label_344250;
        default: break;
    }

    ctx->pc = 0x344220u;

    // 0x344220: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x344220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x344224: 0x248201ec  addiu       $v0, $a0, 0x1EC
    ctx->pc = 0x344224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x344228: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x344228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x34422c: 0x24870280  addiu       $a3, $a0, 0x280
    ctx->pc = 0x34422cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x344230: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x344230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x344234: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x344234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x344238: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x344238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x34423c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x34423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x344240: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x344240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x344244: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x344244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x344248: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x344248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x34424c: 0x0  nop
    ctx->pc = 0x34424cu;
    // NOP
label_344250:
    // 0x344250: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x344250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x344254: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x344254u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x344258: 0x0  nop
    ctx->pc = 0x344258u;
    // NOP
    // 0x34425c: 0x0  nop
    ctx->pc = 0x34425cu;
    // NOP
    // 0x344260: 0x0  nop
    ctx->pc = 0x344260u;
    // NOP
    // 0x344264: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x344264u;
    {
        const bool branch_taken_0x344264 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x344268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344264u;
        // 0x344268: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344264) {
            ctx->pc = 0x344250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344250;
        }
    }
    ctx->pc = 0x34426Cu;
    // 0x34426c: 0x3e00008  jr          $ra
    ctx->pc = 0x34426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344274u;
    // 0x344274: 0x0  nop
    ctx->pc = 0x344274u;
    // NOP
    ctx->pc = 0x344278u;
}
