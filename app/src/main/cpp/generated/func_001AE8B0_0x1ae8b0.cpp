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

// Function: func_001AE8B0
// Address: 0x1ae8b0 - 0x1ae928
void func_001AE8B0_0x1ae8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE8B0_0x1ae8b0");
#endif

    switch (ctx->pc) {
        case 0x1ae8ecu: goto label_1ae8ec;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae914u: goto label_1ae914;
        default: break;
    }

    ctx->pc = 0x1ae8b0u;

    // 0x1ae8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae8b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ae8b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae8bc: 0x24428090  addiu       $v0, $v0, -0x7F70
    ctx->pc = 0x1ae8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934672));
    // 0x1ae8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae8cc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1ae8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1ae8d0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1ae8d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE8D4u;
    {
        const bool branch_taken_0x1ae8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8D4u;
        // 0x1ae8d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8d4) {
            ctx->pc = 0x1AE8F0u;
            goto label_1ae8f0;
        }
    }
    ctx->pc = 0x1AE8DCu;
    // 0x1ae8dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ae8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ae8e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8e4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1AE8E4u;
    SET_GPR_U32(ctx, 31, 0x1AE8ECu);
    ctx->pc = 0x1AE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8E4u;
    // 0x1ae8e8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1AE8E4u, 0x1AE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8ECu;
label_1ae8ec:
    // 0x1ae8ec: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1ae8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1ae8f0:
    // 0x1ae8f0: 0x8e050604  lw          $a1, 0x604($s0)
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1ae8f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE8F4u;
    {
        const bool branch_taken_0x1ae8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8F4u;
        // 0x1ae8f8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8f4) {
            ctx->pc = 0x1AE908u;
            goto label_1ae908;
        }
    }
    ctx->pc = 0x1AE8FCu;
    // 0x1ae8fc: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1AE8FCu;
    SET_GPR_U32(ctx, 31, 0x1AE904u);
    ctx->pc = 0x1AE900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8FCu;
    // 0x1ae900: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1AE8FCu, 0x1AE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE904u;
label_1ae904:
    // 0x1ae904: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x1ae904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_1ae908:
    // 0x1ae908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae90c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1AE90Cu;
    SET_GPR_U32(ctx, 31, 0x1AE914u);
    ctx->pc = 0x1AE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE90Cu;
    // 0x1ae910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1AE90Cu, 0x1AE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE914u;
label_1ae914:
    // 0x1ae914: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae920: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE920u;
        // 0x1ae924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE928u;
}
