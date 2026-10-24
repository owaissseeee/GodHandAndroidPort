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

// Function: func_001A43B8
// Address: 0x1a43b8 - 0x1a4430
void func_001A43B8_0x1a43b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A43B8_0x1a43b8");
#endif

    switch (ctx->pc) {
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a441cu: goto label_1a441c;
        default: break;
    }

    ctx->pc = 0x1a43b8u;

    // 0x1a43b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a43bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a43c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a43c4: 0x24427230  addiu       $v0, $v0, 0x7230
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
    // 0x1a43c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a43cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a43ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a43d4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a43d8: 0x8e030764  lw          $v1, 0x764($s0)
    ctx->pc = 0x1a43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
    // 0x1a43dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A43DCu;
    {
        const bool branch_taken_0x1a43dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43DCu;
        // 0x1a43e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43dc) {
            ctx->pc = 0x1A43F8u;
            goto label_1a43f8;
        }
    }
    ctx->pc = 0x1A43E4u;
    // 0x1a43e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a43e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a43e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a43e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43ec: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A43ECu;
    SET_GPR_U32(ctx, 31, 0x1A43F4u);
    ctx->pc = 0x1A43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43ECu;
    // 0x1a43f0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A43ECu, 0x1A43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F4u;
label_1a43f4:
    // 0x1a43f4: 0xae000764  sw          $zero, 0x764($s0)
    ctx->pc = 0x1a43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 0));
label_1a43f8:
    // 0x1a43f8: 0x8e050768  lw          $a1, 0x768($s0)
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
    // 0x1a43fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A43FCu;
    {
        const bool branch_taken_0x1a43fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43FCu;
        // 0x1a4400: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43fc) {
            ctx->pc = 0x1A4410u;
            goto label_1a4410;
        }
    }
    ctx->pc = 0x1A4404u;
    // 0x1a4404: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1A4404u;
    SET_GPR_U32(ctx, 31, 0x1A440Cu);
    ctx->pc = 0x1A4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4404u;
    // 0x1a4408: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1A4404u, 0x1A440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A440Cu;
label_1a440c:
    // 0x1a440c: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x1a440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
label_1a4410:
    // 0x1a4410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4414: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A4414u;
    SET_GPR_U32(ctx, 31, 0x1A441Cu);
    ctx->pc = 0x1A4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4414u;
    // 0x1a4418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A4414u, 0x1A441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A441Cu;
label_1a441c:
    // 0x1a441c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a441cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4428: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4428u;
        // 0x1a442c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4430u;
}
