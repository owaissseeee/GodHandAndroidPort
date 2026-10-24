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

// Function: ResetObjVtableAndFree_19F130
// Address: 0x19f130 - 0x19f190
void ResetObjVtableAndFree_19F130_0x19f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjVtableAndFree_19F130_0x19f130");
#endif

    switch (ctx->pc) {
        case 0x19f16cu: goto label_19f16c;
        case 0x19f17cu: goto label_19f17c;
        default: break;
    }

    ctx->pc = 0x19f130u;

    // 0x19f130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f134: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19f138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19f13c: 0x244267f8  addiu       $v0, $v0, 0x67F8
    ctx->pc = 0x19f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26616));
    // 0x19f140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f14c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19f150: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x19f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x19f154: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F154u;
    {
        const bool branch_taken_0x19f154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f154) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F15Cu;
    // 0x19f15c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19f160: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19f160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f164: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F164u;
    // 0x19f168: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19F164u, 0x19F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x19f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_19f170:
    // 0x19f170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f174: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x19F174u;
    SET_GPR_U32(ctx, 31, 0x19F17Cu);
    ctx->pc = 0x19F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F174u;
    // 0x19f178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x19F174u, 0x19F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F17Cu;
label_19f17c:
    // 0x19f17c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19f17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f188: 0x3e00008  jr          $ra
    ctx->pc = 0x19F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F188u;
        // 0x19f18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F190u;
}
