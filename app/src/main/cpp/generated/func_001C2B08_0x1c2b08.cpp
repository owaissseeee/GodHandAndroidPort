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

// Function: func_001C2B08
// Address: 0x1c2b08 - 0x1c2b80
void func_001C2B08_0x1c2b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2B08_0x1c2b08");
#endif

    switch (ctx->pc) {
        case 0x1c2b20u: goto label_1c2b20;
        default: break;
    }

    ctx->pc = 0x1c2b08u;

    // 0x1c2b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2b0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b18: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1C2B18u;
    SET_GPR_U32(ctx, 31, 0x1C2B20u);
    ctx->pc = 0x1C2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B18u;
    // 0x1c2b1c: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1C2B18u, 0x1C2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B20u;
label_1c2b20:
    // 0x1c2b20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2b28: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2B28u;
    {
        const bool branch_taken_0x1c2b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2b28) {
            ctx->pc = 0x1C2B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2B28u;
            // 0x1c2b2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B70u;
            goto label_1c2b70;
        }
    }
    ctx->pc = 0x1C2B30u;
    // 0x1c2b30: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1c2b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1c2b34: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2B34u;
    {
        const bool branch_taken_0x1c2b34 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1c2b34) {
            ctx->pc = 0x1C2B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2B34u;
            // 0x1c2b38: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B60u;
            goto label_1c2b60;
        }
    }
    ctx->pc = 0x1C2B3Cu;
    // 0x1c2b3c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1c2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1c2b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2b44: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1c2b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2b48: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1c2b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1c2b4c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1c2b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b50: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1c2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x1c2b54: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c2b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B58u;
    {
        const bool branch_taken_0x1c2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B58u;
        // 0x1c2b5c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b58) {
            ctx->pc = 0x1C2B6Cu;
            goto label_1c2b6c;
        }
    }
    ctx->pc = 0x1C2B60u;
label_1c2b60:
    // 0x1c2b60: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1c2b60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b64: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1c2b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b68: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c2b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2b6c:
    // 0x1c2b6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2b70:
    // 0x1c2b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B74u;
        // 0x1c2b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B7Cu;
    // 0x1c2b7c: 0x0  nop
    ctx->pc = 0x1c2b7cu;
    // NOP
    ctx->pc = 0x1c2b80u;
}
