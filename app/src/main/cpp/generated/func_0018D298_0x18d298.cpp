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

// Function: func_0018D298
// Address: 0x18d298 - 0x18d310
void func_0018D298_0x18d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D298_0x18d298");
#endif

    switch (ctx->pc) {
        case 0x18d2b0u: goto label_18d2b0;
        default: break;
    }

    ctx->pc = 0x18d298u;

    // 0x18d298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d29c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18d2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d2a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2a8: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18D2A8u;
    SET_GPR_U32(ctx, 31, 0x18D2B0u);
    ctx->pc = 0x18D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2A8u;
    // 0x18d2ac: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18D2A8u, 0x18D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2B0u;
label_18d2b0:
    // 0x18d2b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18d2b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d2b8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D2B8u;
    {
        const bool branch_taken_0x18d2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d2b8) {
            ctx->pc = 0x18D2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2B8u;
            // 0x18d2bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D300u;
            goto label_18d300;
        }
    }
    ctx->pc = 0x18D2C0u;
    // 0x18d2c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x18d2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x18d2c4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D2C4u;
    {
        const bool branch_taken_0x18d2c4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x18d2c4) {
            ctx->pc = 0x18D2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D2C4u;
            // 0x18d2c8: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18D2CCu;
    // 0x18d2cc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18d2d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d2d4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x18d2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d2d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18d2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18d2dc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d2e0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x18d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x18d2e4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18d2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d2e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E8u;
        // 0x18d2ec: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18D2FCu;
            goto label_18d2fc;
        }
    }
    ctx->pc = 0x18D2F0u;
label_18d2f0:
    // 0x18d2f0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18d2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d2f4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18d2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d2f8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18d2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18d2fc:
    // 0x18d2fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18d300:
    // 0x18d300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d304: 0x3e00008  jr          $ra
    ctx->pc = 0x18D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D304u;
        // 0x18d308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D30Cu;
    // 0x18d30c: 0x0  nop
    ctx->pc = 0x18d30cu;
    // NOP
    ctx->pc = 0x18d310u;
}
