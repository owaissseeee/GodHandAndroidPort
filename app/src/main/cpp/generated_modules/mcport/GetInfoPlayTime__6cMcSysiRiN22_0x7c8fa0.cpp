#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetInfoPlayTime__6cMcSysiRiN22
// Address: 0x7c8fa0 - 0x7c9000
void GetInfoPlayTime__6cMcSysiRiN22_0x7c8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoPlayTime__6cMcSysiRiN22_0x7c8fa0");
#endif

    switch (ctx->pc) {
        case 0x7c8fccu: goto label_7c8fcc;
        case 0x7c8fe4u: goto label_7c8fe4;
        default: break;
    }

    ctx->pc = 0x7c8fa0u;

    // 0x7c8fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c8fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c8fa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c8fa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c8fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c8facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c8fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c8fb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7c8fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7c8fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7c8fbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x7c8fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8fc4: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8FC4u;
    SET_GPR_U32(ctx, 31, 0x7C8FCCu);
    ctx->pc = 0x7C8FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8FC4u;
    // 0x7c8fc8: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8FC4u, 0x7C8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8FCCu;
label_7c8fcc:
    // 0x7c8fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7c8fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fd4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x7c8fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fd8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x7c8fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8fdc: 0xc1f2400  jal         func_7C9000
    ctx->pc = 0x7C8FDCu;
    SET_GPR_U32(ctx, 31, 0x7C8FE4u);
    ctx->pc = 0x7C8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8FDCu;
    // 0x7c8fe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9000u, 0x7C8FDCu, 0x7C8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8FE4u;
label_7c8fe4:
    // 0x7c8fe4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c8fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c8fe8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c8fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8fec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c8fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8ff0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7c8ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8FF8u;
        // 0x7c8ffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9000u;
}
} // namespace gh_mcport
