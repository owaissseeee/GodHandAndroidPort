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

// Function: FreeActorResources_19FF30
// Address: 0x19ff30 - 0x19ff90
void FreeActorResources_19FF30_0x19ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeActorResources_19FF30_0x19ff30");
#endif

    switch (ctx->pc) {
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff7cu: goto label_19ff7c;
        default: break;
    }

    ctx->pc = 0x19ff30u;

    // 0x19ff30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ff34: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19ff38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ff3c: 0x244268c8  addiu       $v0, $v0, 0x68C8
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26824));
    // 0x19ff40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ff44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ff4c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19ff50: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19ff54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FF54u;
    {
        const bool branch_taken_0x19ff54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF54u;
        // 0x19ff58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff54) {
            ctx->pc = 0x19FF70u;
            goto label_19ff70;
        }
    }
    ctx->pc = 0x19FF5Cu;
    // 0x19ff5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ff60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19ff60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff64: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19FF64u;
    SET_GPR_U32(ctx, 31, 0x19FF6Cu);
    ctx->pc = 0x19FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF64u;
    // 0x19ff68: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19FF64u, 0x19FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF6Cu;
label_19ff6c:
    // 0x19ff6c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19ff70:
    // 0x19ff70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff74: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19FF74u;
    SET_GPR_U32(ctx, 31, 0x19FF7Cu);
    ctx->pc = 0x19FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF74u;
    // 0x19ff78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19FF74u, 0x19FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF7Cu;
label_19ff7c:
    // 0x19ff7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ff7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ff80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ff80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ff84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ff88: 0x3e00008  jr          $ra
    ctx->pc = 0x19FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF88u;
        // 0x19ff8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF90u;
}
