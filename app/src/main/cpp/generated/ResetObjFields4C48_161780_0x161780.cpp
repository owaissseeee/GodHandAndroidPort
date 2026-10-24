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

// Function: ResetObjFields4C48_161780
// Address: 0x161780 - 0x1617c8
void ResetObjFields4C48_161780_0x161780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjFields4C48_161780_0x161780");
#endif

    switch (ctx->pc) {
        case 0x161794u: goto label_161794;
        case 0x16179cu: goto label_16179c;
        case 0x1617b8u: goto label_1617b8;
        default: break;
    }

    ctx->pc = 0x161780u;

    // 0x161780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16178c: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x16178Cu;
    SET_GPR_U32(ctx, 31, 0x161794u);
    ctx->pc = 0x161790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16178Cu;
    // 0x161790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x16178Cu, 0x161794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161794u;
label_161794:
    // 0x161794: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x161794u;
    SET_GPR_U32(ctx, 31, 0x16179Cu);
    ctx->pc = 0x161798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161794u;
    // 0x161798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x161794u, 0x16179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16179Cu;
label_16179c:
    // 0x16179c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x16179cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1617a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1617a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617a4: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x1617a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1617a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1617a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1617ac: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1617acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1617b0: 0xc058564  jal         func_161590
    ctx->pc = 0x1617B0u;
    SET_GPR_U32(ctx, 31, 0x1617B8u);
    ctx->pc = 0x1617B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617B0u;
    // 0x1617b4: 0xac60004c  sw          $zero, 0x4C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x1617B0u, 0x1617B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617B8u;
label_1617b8:
    // 0x1617b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1617b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1617bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1617bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1617c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1617C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1617C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617C0u;
        // 0x1617c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1617C8u;
}
