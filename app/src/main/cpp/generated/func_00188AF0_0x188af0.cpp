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

// Function: func_00188AF0
// Address: 0x188af0 - 0x188b50
void func_00188AF0_0x188af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188AF0_0x188af0");
#endif

    switch (ctx->pc) {
        case 0x188b2cu: goto label_188b2c;
        case 0x188b3cu: goto label_188b3c;
        default: break;
    }

    ctx->pc = 0x188af0u;

    // 0x188af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188af4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x188af8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188afc: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x188b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188b0c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x188b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x188b10: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x188b14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188B14u;
    {
        const bool branch_taken_0x188b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B14u;
        // 0x188b18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b14) {
            ctx->pc = 0x188B30u;
            goto label_188b30;
        }
    }
    ctx->pc = 0x188B1Cu;
    // 0x188b1c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x188b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x188b20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x188b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b24: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x188B24u;
    SET_GPR_U32(ctx, 31, 0x188B2Cu);
    ctx->pc = 0x188B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B24u;
    // 0x188b28: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x188B24u, 0x188B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B2Cu;
label_188b2c:
    // 0x188b2c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x188b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_188b30:
    // 0x188b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b34: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x188B34u;
    SET_GPR_U32(ctx, 31, 0x188B3Cu);
    ctx->pc = 0x188B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B34u;
    // 0x188b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x188B34u, 0x188B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B3Cu;
label_188b3c:
    // 0x188b3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188b48: 0x3e00008  jr          $ra
    ctx->pc = 0x188B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B48u;
        // 0x188b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188B50u;
}
