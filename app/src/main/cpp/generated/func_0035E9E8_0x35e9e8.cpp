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

// Function: func_0035E9E8
// Address: 0x35e9e8 - 0x35ea30
void func_0035E9E8_0x35e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E9E8_0x35e9e8");
#endif

    ctx->pc = 0x35e9e8u;

    // 0x35e9e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35e9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e9ec: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x35e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e9f0: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x35e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x35e9f4: 0x24a4ff20  addiu       $a0, $a1, -0xE0
    ctx->pc = 0x35e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x35e9f8: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x35e9f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x35e9fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E9FCu;
    {
        const bool branch_taken_0x35e9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9FCu;
        // 0x35ea00: 0x2c840010  sltiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9fc) {
            ctx->pc = 0x35EA24u;
            goto label_35ea24;
        }
    }
    ctx->pc = 0x35EA04u;
    // 0x35ea04: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EA04u;
    {
        const bool branch_taken_0x35ea04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA04u;
        // 0x35ea08: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea04) {
            ctx->pc = 0x35EA24u;
            goto label_35ea24;
        }
    }
    ctx->pc = 0x35EA0Cu;
    // 0x35ea0c: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x35ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x35ea10: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35EA10u;
    {
        const bool branch_taken_0x35ea10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA10u;
        // 0x35ea14: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea10) {
            ctx->pc = 0x35EA24u;
            goto label_35ea24;
        }
    }
    ctx->pc = 0x35EA18u;
    // 0x35ea18: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35EA18u;
    {
        const bool branch_taken_0x35ea18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x35EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA18u;
        // 0x35ea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea18) {
            ctx->pc = 0x35EA24u;
            goto label_35ea24;
        }
    }
    ctx->pc = 0x35EA20u;
    // 0x35ea20: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x35ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_35ea24:
    // 0x35ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x35EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EA2Cu;
    // 0x35ea2c: 0x0  nop
    ctx->pc = 0x35ea2cu;
    // NOP
    ctx->pc = 0x35ea30u;
}
