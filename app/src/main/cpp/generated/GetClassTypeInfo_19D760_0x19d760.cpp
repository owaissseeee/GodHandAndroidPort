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

// Function: GetClassTypeInfo_19D760
// Address: 0x19d760 - 0x19d7b0
void GetClassTypeInfo_19D760_0x19d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetClassTypeInfo_19D760_0x19d760");
#endif

    switch (ctx->pc) {
        case 0x19d784u: goto label_19d784;
        case 0x19d79cu: goto label_19d79c;
        default: break;
    }

    ctx->pc = 0x19d760u;

    // 0x19d760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d764: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19d764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19d768: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d76c: 0x8c625e08  lw          $v0, 0x5E08($v1)
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E08u));
    // 0x19d770: 0x24705e08  addiu       $s0, $v1, 0x5E08
    ctx->pc = 0x19d770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24072));
    // 0x19d774: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D774u;
    {
        const bool branch_taken_0x19d774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D774u;
        // 0x19d778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d774) {
            ctx->pc = 0x19D79Cu;
            goto label_19d79c;
        }
    }
    ctx->pc = 0x19D77Cu;
    // 0x19d77c: 0xc070006  jal         func_1C0018
    ctx->pc = 0x19D77Cu;
    SET_GPR_U32(ctx, 31, 0x19D784u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x19D77Cu, 0x19D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D784u;
label_19d784:
    // 0x19d784: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19d784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19d788: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19d788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19d78c: 0x24a55ec8  addiu       $a1, $a1, 0x5EC8
    ctx->pc = 0x19d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24264));
    // 0x19d790: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x19d790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x19d794: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19D794u;
    SET_GPR_U32(ctx, 31, 0x19D79Cu);
    ctx->pc = 0x19D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D794u;
    // 0x19d798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19D794u, 0x19D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D79Cu;
label_19d79c:
    // 0x19d79c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d7a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7A8u;
        // 0x19d7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D7B0u;
}
