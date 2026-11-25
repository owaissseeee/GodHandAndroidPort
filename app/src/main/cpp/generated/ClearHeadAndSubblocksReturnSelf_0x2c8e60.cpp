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

// Function: ClearHeadAndSubblocksReturnSelf
// Address: 0x2c8e60 - 0x2c8eb0
void ClearHeadAndSubblocksReturnSelf_0x2c8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearHeadAndSubblocksReturnSelf_0x2c8e60");
#endif

    if (__builtin_expect(ctx->pc != 0x2c8e60u, 0)) {
        switch (ctx->pc) {
            case 0x2c8e84u: goto label_2c8e84;
            case 0x2c8e94u: goto label_2c8e94;
            default: break;
        }
    }


    // 0x2c8e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8e64: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8e6c: 0x2406000c  addiu       $a2, $zero, 0xC
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c8e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8e74: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c8e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c8e7c: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x2C8E84u);
    ctx->pc = 0x2C8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E7Cu;
    // 0x2c8e80: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x2c8e84u)) {
        return;
    }
    ctx->pc = 0x2C8E84u;
label_2c8e84:
    // 0x2c8e84: 0x26040014  addiu       $a0, $s0, 0x14
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2c8e88: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e8c: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x2C8E94u);
    ctx->pc = 0x2C8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E8Cu;
    // 0x2c8e90: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x2c8e94u)) {
        return;
    }
    ctx->pc = 0x2C8E94u;
label_2c8e94:
    // 0x2c8e94: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EA0u;
        // 0x2c8ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2c8ea8: 0x27bd0030  addiu       $sp, $sp, 0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8eac: 0x0  nop
    // NOP
    ctx->pc = 0x2c8eb0u;
}