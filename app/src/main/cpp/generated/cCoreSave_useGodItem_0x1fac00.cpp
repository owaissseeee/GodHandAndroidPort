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

// Function: cCoreSave_useGodItem
// Address: 0x1fac00 - 0x1fac58
void cCoreSave_useGodItem_0x1fac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_useGodItem_0x1fac00");
#endif

    switch (ctx->pc) {
        case 0x1fac20u: goto label_1fac20;
        default: break;
    }

    ctx->pc = 0x1fac00u;

    // 0x1fac00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fac04: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1fac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1fac08: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1fac0c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1fac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1fac10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAC10u;
    {
        const bool branch_taken_0x1fac10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC10u;
        // 0x1fac14: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac10) {
            ctx->pc = 0x1FAC50u;
            goto label_1fac50;
        }
    }
    ctx->pc = 0x1FAC18u;
    // 0x1fac18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fac18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac1c: 0x0  nop
    ctx->pc = 0x1fac1cu;
    // NOP
label_1fac20:
    // 0x1fac20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fac24: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fac28: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1fac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1fac2c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1fac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fac30: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fac34: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1fac34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fac38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fac38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac3c: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x1fac3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fac40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FAC40u;
    {
        const bool branch_taken_0x1fac40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC40u;
        // 0x1fac44: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac40) {
            ctx->pc = 0x1FAC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fac20;
        }
    }
    ctx->pc = 0x1FAC48u;
    // 0x1fac48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fac4c: 0xa04000ad  sb          $zero, 0xAD($v0)
    ctx->pc = 0x1fac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 173), (uint8_t)GPR_U32(ctx, 0));
label_1fac50:
    // 0x1fac50: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC58u;
}
