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

// Function: func_003498E8
// Address: 0x3498e8 - 0x349960
void func_003498E8_0x3498e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003498E8_0x3498e8");
#endif

    switch (ctx->pc) {
        case 0x34990cu: goto label_34990c;
        case 0x349934u: goto label_349934;
        case 0x349944u: goto label_349944;
        default: break;
    }

    ctx->pc = 0x3498e8u;

    // 0x3498e8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3498e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3498ec: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x3498ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x3498f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3498f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498f4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x3498f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3498f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3498f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498fc: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x3498fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x349900: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x349900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x349904: 0xc0d1b16  jal         func_346C58
    ctx->pc = 0x349904u;
    SET_GPR_U32(ctx, 31, 0x34990Cu);
    ctx->pc = 0x349908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349904u;
    // 0x349908: 0x8c9100a8  lw          $s1, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C58u, 0x349904u, 0x34990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34990Cu;
label_34990c:
    // 0x34990c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x34990cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x349910: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x349910u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x349914: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x349914u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34991c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x34991cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x349920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x349928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34992c: 0xc0d7d5e  jal         func_35F578
    ctx->pc = 0x34992Cu;
    SET_GPR_U32(ctx, 31, 0x349934u);
    ctx->pc = 0x349930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34992Cu;
    // 0x349930: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F578u, 0x34992Cu, 0x349934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349934u;
label_349934:
    // 0x349934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349938: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x349938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34993c: 0xc0d7da6  jal         func_35F698
    ctx->pc = 0x34993Cu;
    SET_GPR_U32(ctx, 31, 0x349944u);
    ctx->pc = 0x349940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34993Cu;
    // 0x349940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F698u, 0x34993Cu, 0x349944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349944u;
label_349944:
    // 0x349944: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x349944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x349948: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x349948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34994c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x34994cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x349950: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x349950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x349954: 0x3e00008  jr          $ra
    ctx->pc = 0x349954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349954u;
        // 0x349958: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34995Cu;
    // 0x34995c: 0x0  nop
    ctx->pc = 0x34995cu;
    // NOP
    ctx->pc = 0x349960u;
}
