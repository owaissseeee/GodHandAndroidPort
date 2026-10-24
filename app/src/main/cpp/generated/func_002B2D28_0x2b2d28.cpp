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

// Function: func_002B2D28
// Address: 0x2b2d28 - 0x2b2d88
void func_002B2D28_0x2b2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2D28_0x2b2d28");
#endif

    ctx->pc = 0x2b2d28u;

    // 0x2b2d28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b2d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d2c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2b2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2b2d30: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2b2d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2b2d34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2D34u;
    {
        const bool branch_taken_0x2b2d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d34) {
            ctx->pc = 0x2B2D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2D34u;
            // 0x2b2d38: 0x94a3003a  lhu         $v1, 0x3A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D54u;
            goto label_2b2d54;
        }
    }
    ctx->pc = 0x2B2D3Cu;
    // 0x2b2d3c: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x2b2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2b2d40: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b2d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b2d44: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2b2d44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b2d48: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2b2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2b2d4c: 0xa4a4003a  sh          $a0, 0x3A($a1)
    ctx->pc = 0x2b2d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b2d50: 0x94a3003a  lhu         $v1, 0x3A($a1)
    ctx->pc = 0x2b2d50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
label_2b2d54:
    // 0x2b2d54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2D54u;
    {
        const bool branch_taken_0x2b2d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D54u;
        // 0x2b2d58: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d54) {
            ctx->pc = 0x2B2D78u;
            goto label_2b2d78;
        }
    }
    ctx->pc = 0x2B2D5Cu;
    // 0x2b2d5c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2b2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2b2d60: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2d64: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2b2d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2b2d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d6c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2b2d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2b2d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D70u;
        // 0x2b2d74: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D78u;
label_2b2d78:
    // 0x2b2d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D7Cu;
        // 0x2b2d80: 0xa4a3003a  sh          $v1, 0x3A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D84u;
    // 0x2b2d84: 0x0  nop
    ctx->pc = 0x2b2d84u;
    // NOP
    ctx->pc = 0x2b2d88u;
}
