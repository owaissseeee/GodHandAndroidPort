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

// Function: ClearSlotResources_1937A0
// Address: 0x1937a0 - 0x193800
void ClearSlotResources_1937A0_0x1937a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearSlotResources_1937A0_0x1937a0");
#endif

    switch (ctx->pc) {
        case 0x1937dcu: goto label_1937dc;
        case 0x1937ecu: goto label_1937ec;
        default: break;
    }

    ctx->pc = 0x1937a0u;

    // 0x1937a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1937a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1937a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1937a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1937a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1937ac: 0x24424878  addiu       $v0, $v0, 0x4878
    ctx->pc = 0x1937acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18552));
    // 0x1937b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1937b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1937b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1937b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1937b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1937bc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1937bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1937c0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1937c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1937c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1937C4u;
    {
        const bool branch_taken_0x1937c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937C4u;
        // 0x1937c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937c4) {
            ctx->pc = 0x1937E0u;
            goto label_1937e0;
        }
    }
    ctx->pc = 0x1937CCu;
    // 0x1937cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1937ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1937d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1937d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937d4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1937D4u;
    SET_GPR_U32(ctx, 31, 0x1937DCu);
    ctx->pc = 0x1937D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1937D4u;
    // 0x1937d8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1937D4u, 0x1937DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1937DCu;
label_1937dc:
    // 0x1937dc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1937dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1937e0:
    // 0x1937e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1937e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937e4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1937E4u;
    SET_GPR_U32(ctx, 31, 0x1937ECu);
    ctx->pc = 0x1937E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1937E4u;
    // 0x1937e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1937E4u, 0x1937ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1937ECu;
label_1937ec:
    // 0x1937ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1937ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1937f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1937f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1937f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1937f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1937F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F8u;
        // 0x1937fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193800u;
}
