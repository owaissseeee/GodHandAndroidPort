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

// Function: func_002B2B08
// Address: 0x2b2b08 - 0x2b2b78
void func_002B2B08_0x2b2b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2B08_0x2b2b08");
#endif

    ctx->pc = 0x2b2b08u;

    // 0x2b2b08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b2b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2b10: 0xa0a20070  sb          $v0, 0x70($a1)
    ctx->pc = 0x2b2b10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2b18: 0xa0a300a4  sb          $v1, 0xA4($a1)
    ctx->pc = 0x2b2b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2b1c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2b2b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b2b20: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2b2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2b2b24: 0xa0a0003c  sb          $zero, 0x3C($a1)
    ctx->pc = 0x2b2b24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2b28: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2b2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2b2b2c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b2b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b2b30: 0x50440002  beql        $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2B30u;
    {
        const bool branch_taken_0x2b2b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b2b30) {
            ctx->pc = 0x2B2B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B30u;
            // 0x2b2b34: 0xa4a00062  sh          $zero, 0x62($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B3Cu;
            goto label_2b2b3c;
        }
    }
    ctx->pc = 0x2B2B38u;
    // 0x2b2b38: 0xa4a20062  sh          $v0, 0x62($a1)
    ctx->pc = 0x2b2b38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 2));
label_2b2b3c:
    // 0x2b2b3c: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2b2b40: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b2b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b2b44: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2b2b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2b48: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2B48u;
    {
        const bool branch_taken_0x2b2b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2b48) {
            ctx->pc = 0x2B2B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B48u;
            // 0x2b2b4c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B2B50u;
label_2b2b50:
    // 0x2b2b50: 0xa4a200a6  sh          $v0, 0xA6($a1)
    ctx->pc = 0x2b2b50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 166), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b2b54: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2b2b58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b2b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b2b5c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b2b60: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2B60u;
    {
        const bool branch_taken_0x2b2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2b60) {
            ctx->pc = 0x2B2B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2B60u;
            // 0x2b2b64: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2B68u;
            goto label_2b2b68;
        }
    }
    ctx->pc = 0x2B2B68u;
label_2b2b68:
    // 0x2b2b68: 0xa4a200a8  sh          $v0, 0xA8($a1)
    ctx->pc = 0x2b2b68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 168), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b2b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B6Cu;
        // 0x2b2b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B74u;
    // 0x2b2b74: 0x0  nop
    ctx->pc = 0x2b2b74u;
    // NOP
    ctx->pc = 0x2b2b78u;
}
