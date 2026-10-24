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

// Function: func_0018A988
// Address: 0x18a988 - 0x18aa00
void func_0018A988_0x18a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A988_0x18a988");
#endif

    switch (ctx->pc) {
        case 0x18a9a0u: goto label_18a9a0;
        default: break;
    }

    ctx->pc = 0x18a988u;

    // 0x18a988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18a990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a998: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18A998u;
    SET_GPR_U32(ctx, 31, 0x18A9A0u);
    ctx->pc = 0x18A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A998u;
    // 0x18a99c: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18A998u, 0x18A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9A0u;
label_18a9a0:
    // 0x18a9a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18a9a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a9a8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18A9A8u;
    {
        const bool branch_taken_0x18a9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a9a8) {
            ctx->pc = 0x18A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9A8u;
            // 0x18a9ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9F0u;
            goto label_18a9f0;
        }
    }
    ctx->pc = 0x18A9B0u;
    // 0x18a9b0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x18a9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x18a9b4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A9B4u;
    {
        const bool branch_taken_0x18a9b4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x18a9b4) {
            ctx->pc = 0x18A9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9B4u;
            // 0x18a9b8: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A9BCu;
    // 0x18a9bc: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x18a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18a9c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a9c4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x18a9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a9c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18a9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18a9cc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a9d0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x18a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x18a9d4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a9d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A9D8u;
    {
        const bool branch_taken_0x18a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9D8u;
        // 0x18a9dc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d8) {
            ctx->pc = 0x18A9ECu;
            goto label_18a9ec;
        }
    }
    ctx->pc = 0x18A9E0u;
label_18a9e0:
    // 0x18a9e0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18a9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a9e4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18a9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a9e8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18a9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18a9ec:
    // 0x18a9ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a9f0:
    // 0x18a9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F4u;
        // 0x18a9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A9FCu;
    // 0x18a9fc: 0x0  nop
    ctx->pc = 0x18a9fcu;
    // NOP
    ctx->pc = 0x18aa00u;
}
