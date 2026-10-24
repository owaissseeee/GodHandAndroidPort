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

// Function: func_00181C20
// Address: 0x181c20 - 0x181c98
void func_00181C20_0x181c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181C20_0x181c20");
#endif

    switch (ctx->pc) {
        case 0x181c38u: goto label_181c38;
        default: break;
    }

    ctx->pc = 0x181c20u;

    // 0x181c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c30: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x181C30u;
    SET_GPR_U32(ctx, 31, 0x181C38u);
    ctx->pc = 0x181C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C30u;
    // 0x181c34: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x181C30u, 0x181C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C38u;
label_181c38:
    // 0x181c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c40: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x181C40u;
    {
        const bool branch_taken_0x181c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181c40) {
            ctx->pc = 0x181C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C40u;
            // 0x181c44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C88u;
            goto label_181c88;
        }
    }
    ctx->pc = 0x181C48u;
    // 0x181c48: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x181c4c: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x181C4Cu;
    {
        const bool branch_taken_0x181c4c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x181c4c) {
            ctx->pc = 0x181C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C4Cu;
            // 0x181c50: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C78u;
            goto label_181c78;
        }
    }
    ctx->pc = 0x181C54u;
    // 0x181c54: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x181c58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181c5c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x181c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x181c60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x181c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x181c64: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x181c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x181c68: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x181c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x181c6c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x181c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x181c70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x181C70u;
    {
        const bool branch_taken_0x181c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C70u;
        // 0x181c74: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c70) {
            ctx->pc = 0x181C84u;
            goto label_181c84;
        }
    }
    ctx->pc = 0x181C78u;
label_181c78:
    // 0x181c78: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x181c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181c7c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x181c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x181c80: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x181c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_181c84:
    // 0x181c84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181c88:
    // 0x181c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x181C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C8Cu;
        // 0x181c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181C94u;
    // 0x181c94: 0x0  nop
    ctx->pc = 0x181c94u;
    // NOP
    ctx->pc = 0x181c98u;
}
