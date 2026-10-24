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

// Function: GetTypeInstance_19D970
// Address: 0x19d970 - 0x19d9c0
void GetTypeInstance_19D970_0x19d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeInstance_19D970_0x19d970");
#endif

    switch (ctx->pc) {
        case 0x19d994u: goto label_19d994;
        case 0x19d9acu: goto label_19d9ac;
        default: break;
    }

    ctx->pc = 0x19d970u;

    // 0x19d970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d974: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19d978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d97c: 0x8c625e18  lw          $v0, 0x5E18($v1)
    ctx->pc = 0x19d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E18u));
    // 0x19d980: 0x24705e18  addiu       $s0, $v1, 0x5E18
    ctx->pc = 0x19d980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24088));
    // 0x19d984: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D984u;
    {
        const bool branch_taken_0x19d984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D984u;
        // 0x19d988: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d984) {
            ctx->pc = 0x19D9ACu;
            goto label_19d9ac;
        }
    }
    ctx->pc = 0x19D98Cu;
    // 0x19d98c: 0xc070006  jal         func_1C0018
    ctx->pc = 0x19D98Cu;
    SET_GPR_U32(ctx, 31, 0x19D994u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x19D98Cu, 0x19D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D994u;
label_19d994:
    // 0x19d994: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19d994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19d998: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19d99c: 0x24a55f98  addiu       $a1, $a1, 0x5F98
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
    // 0x19d9a0: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x19d9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x19d9a4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19D9A4u;
    SET_GPR_U32(ctx, 31, 0x19D9ACu);
    ctx->pc = 0x19D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9A4u;
    // 0x19d9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19D9A4u, 0x19D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9ACu;
label_19d9ac:
    // 0x19d9ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d9b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9B8u;
        // 0x19d9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9C0u;
}
