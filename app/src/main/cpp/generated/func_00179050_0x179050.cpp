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

// Function: func_00179050
// Address: 0x179050 - 0x1790b0
void func_00179050_0x179050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179050_0x179050");
#endif

    switch (ctx->pc) {
        case 0x17908cu: goto label_17908c;
        case 0x17909cu: goto label_17909c;
        default: break;
    }

    ctx->pc = 0x179050u;

    // 0x179050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179054: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x179054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x179058: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x179058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17905c: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x17905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
    // 0x179060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17906c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17906cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x179070: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x179070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x179074: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x179074u;
    {
        const bool branch_taken_0x179074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179074u;
        // 0x179078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179074) {
            ctx->pc = 0x179090u;
            goto label_179090;
        }
    }
    ctx->pc = 0x17907Cu;
    // 0x17907c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17907cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x179080: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x179080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179084: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x179084u;
    SET_GPR_U32(ctx, 31, 0x17908Cu);
    ctx->pc = 0x179088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179084u;
    // 0x179088: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x179084u, 0x17908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17908Cu;
label_17908c:
    // 0x17908c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x17908cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_179090:
    // 0x179090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179094: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x179094u;
    SET_GPR_U32(ctx, 31, 0x17909Cu);
    ctx->pc = 0x179098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179094u;
    // 0x179098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x179094u, 0x17909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17909Cu;
label_17909c:
    // 0x17909c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17909cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1790a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1790a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1790a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1790a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1790a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1790A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790A8u;
        // 0x1790ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790B0u;
}
