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

// Function: func_002B8928
// Address: 0x2b8928 - 0x2b8978
void func_002B8928_0x2b8928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8928_0x2b8928");
#endif

    switch (ctx->pc) {
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8964u: goto label_2b8964;
        default: break;
    }

    ctx->pc = 0x2b8928u;

    // 0x2b8928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b892c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2b8930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8934: 0x8c6262f8  lw          $v0, 0x62F8($v1)
    ctx->pc = 0x2b8934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7862F8u));
    // 0x2b8938: 0x247062f8  addiu       $s0, $v1, 0x62F8
    ctx->pc = 0x2b8938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25336));
    // 0x2b893c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B893Cu;
    {
        const bool branch_taken_0x2b893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B893Cu;
        // 0x2b8940: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b893c) {
            ctx->pc = 0x2B8964u;
            goto label_2b8964;
        }
    }
    ctx->pc = 0x2B8944u;
    // 0x2b8944: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x2B8944u;
    SET_GPR_U32(ctx, 31, 0x2B894Cu);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x2B8944u, 0x2B894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B894Cu;
label_2b894c:
    // 0x2b894c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b894cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8950: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2b8950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2b8954: 0x24a5b8b0  addiu       $a1, $a1, -0x4750
    ctx->pc = 0x2b8954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949040));
    // 0x2b8958: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x2b8958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x2b895c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2B895Cu;
    SET_GPR_U32(ctx, 31, 0x2B8964u);
    ctx->pc = 0x2B8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B895Cu;
    // 0x2b8960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2B895Cu, 0x2B8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8964u;
label_2b8964:
    // 0x2b8964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b8964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b896c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b896cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8970: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8970u;
        // 0x2b8974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8978u;
}
