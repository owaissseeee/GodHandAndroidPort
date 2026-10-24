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

// Function: func_002ABD30
// Address: 0x2abd30 - 0x2abd78
void func_002ABD30_0x2abd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABD30_0x2abd30");
#endif

    ctx->pc = 0x2abd30u;

    // 0x2abd30: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2abd34: 0x84640214  lh          $a0, 0x214($v1)
    ctx->pc = 0x2abd34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 532)));
    // 0x2abd38: 0xa4a000a6  sh          $zero, 0xA6($a1)
    ctx->pc = 0x2abd38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abd3c: 0x8062005f  lb          $v0, 0x5F($v1)
    ctx->pc = 0x2abd3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x2abd40: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABD40u;
    {
        const bool branch_taken_0x2abd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD40u;
        // 0x2abd44: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd40) {
            ctx->pc = 0x2ABD6Cu;
            goto label_2abd6c;
        }
    }
    ctx->pc = 0x2ABD48u;
    // 0x2abd48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2abd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2abd4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABD4Cu;
    {
        const bool branch_taken_0x2abd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD4Cu;
        // 0x2abd50: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd4c) {
            ctx->pc = 0x2ABD60u;
            goto label_2abd60;
        }
    }
    ctx->pc = 0x2ABD54u;
    // 0x2abd54: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2abd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2abd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD58u;
        // 0x2abd5c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD60u;
label_2abd60:
    // 0x2abd60: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2abd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2abd64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2abd68: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2abd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_2abd6c:
    // 0x2abd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD74u;
    // 0x2abd74: 0x0  nop
    ctx->pc = 0x2abd74u;
    // NOP
    ctx->pc = 0x2abd78u;
}
