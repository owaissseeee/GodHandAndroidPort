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

// Function: InitNodePool_1FE2B8
// Address: 0x1fe2b8 - 0x1fe310
void InitNodePool_1FE2B8_0x1fe2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitNodePool_1FE2B8_0x1fe2b8");
#endif

    switch (ctx->pc) {
        case 0x1fe2d8u: goto label_1fe2d8;
        case 0x1fe2e4u: goto label_1fe2e4;
        default: break;
    }

    ctx->pc = 0x1fe2b8u;

    // 0x1fe2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe2bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe2c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe2cc: 0x26303c00  addiu       $s0, $s1, 0x3C00
    ctx->pc = 0x1fe2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 15360));
    // 0x1fe2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe2d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2d8:
    // 0x1fe2d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2dc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1FE2DCu;
    SET_GPR_U32(ctx, 31, 0x1FE2E4u);
    ctx->pc = 0x1FE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2DCu;
    // 0x1fe2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1FE2DCu, 0x1FE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2E4u;
label_1fe2e4:
    // 0x1fe2e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fe2e8: 0x2e420100  sltiu       $v0, $s2, 0x100
    ctx->pc = 0x1fe2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe2ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE2ECu;
    {
        const bool branch_taken_0x1fe2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2ECu;
        // 0x1fe2f0: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2ec) {
            ctx->pc = 0x1FE2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe2d8;
        }
    }
    ctx->pc = 0x1FE2F4u;
    // 0x1fe2f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe2f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe2fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe304: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE304u;
        // 0x1fe308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE30Cu;
    // 0x1fe30c: 0x0  nop
    ctx->pc = 0x1fe30cu;
    // NOP
    ctx->pc = 0x1fe310u;
}
