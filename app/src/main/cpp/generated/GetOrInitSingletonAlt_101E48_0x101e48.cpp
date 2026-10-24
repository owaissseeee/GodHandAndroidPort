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

// Function: GetOrInitSingletonAlt_101E48
// Address: 0x101e48 - 0x101e98
void GetOrInitSingletonAlt_101E48_0x101e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingletonAlt_101E48_0x101e48");
#endif

    switch (ctx->pc) {
        case 0x101e6cu: goto label_101e6c;
        case 0x101e84u: goto label_101e84;
        default: break;
    }

    ctx->pc = 0x101e48u;

    // 0x101e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101e4c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x101e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x101e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x101e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x101e54: 0x8c6254e8  lw          $v0, 0x54E8($v1)
    ctx->pc = 0x101e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7854E8u));
    // 0x101e58: 0x247054e8  addiu       $s0, $v1, 0x54E8
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21736));
    // 0x101e5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101E5Cu;
    {
        const bool branch_taken_0x101e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E5Cu;
        // 0x101e60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e5c) {
            ctx->pc = 0x101E84u;
            goto label_101e84;
        }
    }
    ctx->pc = 0x101E64u;
    // 0x101e64: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x101E64u;
    SET_GPR_U32(ctx, 31, 0x101E6Cu);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x101E64u, 0x101E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E6Cu;
label_101e6c:
    // 0x101e6c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x101e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x101e70: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x101e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x101e74: 0x24a5b710  addiu       $a1, $a1, -0x48F0
    ctx->pc = 0x101e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948624));
    // 0x101e78: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x101e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x101e7c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x101E7Cu;
    SET_GPR_U32(ctx, 31, 0x101E84u);
    ctx->pc = 0x101E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E7Cu;
    // 0x101e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x101E7Cu, 0x101E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E84u;
label_101e84:
    // 0x101e84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101e8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101e90: 0x3e00008  jr          $ra
    ctx->pc = 0x101E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E90u;
        // 0x101e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101E98u;
}
