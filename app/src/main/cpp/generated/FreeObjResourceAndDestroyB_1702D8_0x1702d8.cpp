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

// Function: FreeObjResourceAndDestroyB_1702D8
// Address: 0x1702d8 - 0x170338
void FreeObjResourceAndDestroyB_1702D8_0x1702d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjResourceAndDestroyB_1702D8_0x1702d8");
#endif

    switch (ctx->pc) {
        case 0x170314u: goto label_170314;
        case 0x170324u: goto label_170324;
        default: break;
    }

    ctx->pc = 0x1702d8u;

    // 0x1702d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1702dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1702dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1702e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1702e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1702e4: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
    // 0x1702e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1702e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1702ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1702ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1702f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1702f4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1702f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1702f8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1702fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1702FCu;
    {
        const bool branch_taken_0x1702fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702FCu;
        // 0x170300: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702fc) {
            ctx->pc = 0x170318u;
            goto label_170318;
        }
    }
    ctx->pc = 0x170304u;
    // 0x170304: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170308: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x170308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17030c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x17030Cu;
    SET_GPR_U32(ctx, 31, 0x170314u);
    ctx->pc = 0x170310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17030Cu;
    // 0x170310: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x17030Cu, 0x170314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170314u;
label_170314:
    // 0x170314: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x170314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_170318:
    // 0x170318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17031c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x17031Cu;
    SET_GPR_U32(ctx, 31, 0x170324u);
    ctx->pc = 0x170320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17031Cu;
    // 0x170320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x17031Cu, 0x170324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170324u;
label_170324:
    // 0x170324: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17032c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170330: 0x3e00008  jr          $ra
    ctx->pc = 0x170330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170330u;
        // 0x170334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170338u;
}
