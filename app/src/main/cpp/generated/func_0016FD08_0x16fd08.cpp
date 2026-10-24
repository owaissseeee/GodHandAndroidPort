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

// Function: func_0016FD08
// Address: 0x16fd08 - 0x16fd68
void func_0016FD08_0x16fd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016FD08_0x16fd08");
#endif

    switch (ctx->pc) {
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd54u: goto label_16fd54;
        default: break;
    }

    ctx->pc = 0x16fd08u;

    // 0x16fd08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fd0c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16fd10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16fd14: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x16fd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16fd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fd24: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x16fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x16fd28: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x16fd2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16FD2Cu;
    {
        const bool branch_taken_0x16fd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD2Cu;
        // 0x16fd30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd2c) {
            ctx->pc = 0x16FD48u;
            goto label_16fd48;
        }
    }
    ctx->pc = 0x16FD34u;
    // 0x16fd34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16fd38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd3c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x16FD3Cu;
    SET_GPR_U32(ctx, 31, 0x16FD44u);
    ctx->pc = 0x16FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD3Cu;
    // 0x16fd40: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x16FD3Cu, 0x16FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD44u;
label_16fd44:
    // 0x16fd44: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x16fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_16fd48:
    // 0x16fd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd4c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x16FD4Cu;
    SET_GPR_U32(ctx, 31, 0x16FD54u);
    ctx->pc = 0x16FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD4Cu;
    // 0x16fd50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x16FD4Cu, 0x16FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD54u;
label_16fd54:
    // 0x16fd54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16fd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fd58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fd5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD60u;
        // 0x16fd64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD68u;
}
