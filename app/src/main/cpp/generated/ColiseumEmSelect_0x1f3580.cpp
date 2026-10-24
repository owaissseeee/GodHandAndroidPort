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

// Function: ColiseumEmSelect
// Address: 0x1f3580 - 0x1f35c8
void ColiseumEmSelect_0x1f3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumEmSelect_0x1f3580");
#endif

    switch (ctx->pc) {
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35a8u: goto label_1f35a8;
        default: break;
    }

    ctx->pc = 0x1f3580u;

    // 0x1f3580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3588: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f358c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f3590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3594: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1F3594u;
    SET_GPR_U32(ctx, 31, 0x1F359Cu);
    ctx->pc = 0x1F3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3594u;
    // 0x1f3598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1F3594u, 0x1F359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F359Cu;
label_1f359c:
    // 0x1f359c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1f359cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1f35a0: 0xc07d176  jal         func_1F45D8
    ctx->pc = 0x1F35A0u;
    SET_GPR_U32(ctx, 31, 0x1F35A8u);
    ctx->pc = 0x1F35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35A0u;
    // 0x1f35a4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45D8u, 0x1F35A0u, 0x1F35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35A8u;
label_1f35a8:
    // 0x1f35a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f35a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f35acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f35b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f35b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f35b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F35B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35B4u;
        // 0x1f35b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F35B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F35BCu;
    // 0x1f35bc: 0x0  nop
    ctx->pc = 0x1f35bcu;
    // NOP
    // 0x1f35c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f35c4: 0x0  nop
    ctx->pc = 0x1f35c4u;
    // NOP
    ctx->pc = 0x1f35c8u;
}
