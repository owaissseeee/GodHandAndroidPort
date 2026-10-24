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

// Function: func_001B8140
// Address: 0x1b8140 - 0x1b81a8
void func_001B8140_0x1b8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8140_0x1b8140");
#endif

    switch (ctx->pc) {
        case 0x1b8170u: goto label_1b8170;
        case 0x1b8184u: goto label_1b8184;
        case 0x1b8194u: goto label_1b8194;
        default: break;
    }

    ctx->pc = 0x1b8140u;

    // 0x1b8140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8144: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b8144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b8148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b814c: 0x24428b58  addiu       $v0, $v0, -0x74A8
    ctx->pc = 0x1b814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937432));
    // 0x1b8150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b815c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b815cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8164: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b8164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b8168: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B8168u;
    SET_GPR_U32(ctx, 31, 0x1B8170u);
    ctx->pc = 0x1B816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8168u;
    // 0x1b816c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B8168u, 0x1B8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8170u;
label_1b8170:
    // 0x1b8170: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b8174: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8174u;
    {
        const bool branch_taken_0x1b8174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8174u;
        // 0x1b8178: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8174) {
            ctx->pc = 0x1B8184u;
            goto label_1b8184;
        }
    }
    ctx->pc = 0x1B817Cu;
    // 0x1b817c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B817Cu;
    SET_GPR_U32(ctx, 31, 0x1B8184u);
    ctx->pc = 0x1B8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B817Cu;
    // 0x1b8180: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B817Cu, 0x1B8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8184u;
label_1b8184:
    // 0x1b8184: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1b8184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
    // 0x1b8188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b818c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B818Cu;
    SET_GPR_U32(ctx, 31, 0x1B8194u);
    ctx->pc = 0x1B8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B818Cu;
    // 0x1b8190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B818Cu, 0x1B8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8194u;
label_1b8194:
    // 0x1b8194: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b819c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b819cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b81a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B81A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81A0u;
        // 0x1b81a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B81A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B81A8u;
}
