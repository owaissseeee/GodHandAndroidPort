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

// Function: func_0019C980
// Address: 0x19c980 - 0x19c9f8
void func_0019C980_0x19c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C980_0x19c980");
#endif

    switch (ctx->pc) {
        case 0x19c998u: goto label_19c998;
        default: break;
    }

    ctx->pc = 0x19c980u;

    // 0x19c980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c984: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c990: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x19C990u;
    SET_GPR_U32(ctx, 31, 0x19C998u);
    ctx->pc = 0x19C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C990u;
    // 0x19c994: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x19C990u, 0x19C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C998u;
label_19c998:
    // 0x19c998: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19c998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c9a0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19C9A0u;
    {
        const bool branch_taken_0x19c9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c9a0) {
            ctx->pc = 0x19C9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C9A0u;
            // 0x19c9a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C9A8u;
    // 0x19c9a8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x19c9ac: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C9ACu;
    {
        const bool branch_taken_0x19c9ac = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x19c9ac) {
            ctx->pc = 0x19C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C9ACu;
            // 0x19c9b0: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C9D8u;
            goto label_19c9d8;
        }
    }
    ctx->pc = 0x19C9B4u;
    // 0x19c9b4: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x19c9b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c9bc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x19c9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c9c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19c9c4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c9c8: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x19c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x19c9cc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19c9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c9d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C9D0u;
    {
        const bool branch_taken_0x19c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D0u;
        // 0x19c9d4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9d0) {
            ctx->pc = 0x19C9E4u;
            goto label_19c9e4;
        }
    }
    ctx->pc = 0x19C9D8u;
label_19c9d8:
    // 0x19c9d8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c9dc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19c9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c9e0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19c9e4:
    // 0x19c9e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c9e8:
    // 0x19c9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9ECu;
        // 0x19c9f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C9F4u;
    // 0x19c9f4: 0x0  nop
    ctx->pc = 0x19c9f4u;
    // NOP
    ctx->pc = 0x19c9f8u;
}
