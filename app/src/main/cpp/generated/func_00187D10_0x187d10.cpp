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

// Function: func_00187D10
// Address: 0x187d10 - 0x187d88
void func_00187D10_0x187d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187D10_0x187d10");
#endif

    switch (ctx->pc) {
        case 0x187d4cu: goto label_187d4c;
        case 0x187d64u: goto label_187d64;
        case 0x187d74u: goto label_187d74;
        default: break;
    }

    ctx->pc = 0x187d10u;

    // 0x187d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187d14: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x187d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x187d18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x187d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x187d1c: 0x24423338  addiu       $v0, $v0, 0x3338
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13112));
    // 0x187d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187d2c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x187d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x187d30: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x187d34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187D34u;
    {
        const bool branch_taken_0x187d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D34u;
        // 0x187d38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d34) {
            ctx->pc = 0x187D50u;
            goto label_187d50;
        }
    }
    ctx->pc = 0x187D3Cu;
    // 0x187d3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x187d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x187d40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d44: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x187D44u;
    SET_GPR_U32(ctx, 31, 0x187D4Cu);
    ctx->pc = 0x187D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D44u;
    // 0x187d48: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x187D44u, 0x187D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D4Cu;
label_187d4c:
    // 0x187d4c: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x187d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_187d50:
    // 0x187d50: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x187d54: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187D54u;
    {
        const bool branch_taken_0x187d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D54u;
        // 0x187d58: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d54) {
            ctx->pc = 0x187D68u;
            goto label_187d68;
        }
    }
    ctx->pc = 0x187D5Cu;
    // 0x187d5c: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x187D5Cu;
    SET_GPR_U32(ctx, 31, 0x187D64u);
    ctx->pc = 0x187D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D5Cu;
    // 0x187d60: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x187D5Cu, 0x187D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D64u;
label_187d64:
    // 0x187d64: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x187d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_187d68:
    // 0x187d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d6c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x187D6Cu;
    SET_GPR_U32(ctx, 31, 0x187D74u);
    ctx->pc = 0x187D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D6Cu;
    // 0x187d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x187D6Cu, 0x187D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D74u;
label_187d74:
    // 0x187d74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187d80: 0x3e00008  jr          $ra
    ctx->pc = 0x187D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D80u;
        // 0x187d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D88u;
}
