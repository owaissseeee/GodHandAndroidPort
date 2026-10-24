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

// Function: func_001ABE08
// Address: 0x1abe08 - 0x1abe80
void func_001ABE08_0x1abe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABE08_0x1abe08");
#endif

    switch (ctx->pc) {
        case 0x1abe44u: goto label_1abe44;
        case 0x1abe5cu: goto label_1abe5c;
        case 0x1abe6cu: goto label_1abe6c;
        default: break;
    }

    ctx->pc = 0x1abe08u;

    // 0x1abe08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abe0c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1abe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1abe10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1abe14: 0x24427e60  addiu       $v0, $v0, 0x7E60
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32352));
    // 0x1abe18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abe1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abe24: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1abe24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1abe28: 0x8e030624  lw          $v1, 0x624($s0)
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1abe2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABE2Cu;
    {
        const bool branch_taken_0x1abe2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE2Cu;
        // 0x1abe30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe2c) {
            ctx->pc = 0x1ABE48u;
            goto label_1abe48;
        }
    }
    ctx->pc = 0x1ABE34u;
    // 0x1abe34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1abe34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1abe38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1abe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe3c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1ABE3Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE44u);
    ctx->pc = 0x1ABE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE3Cu;
    // 0x1abe40: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1ABE3Cu, 0x1ABE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE44u;
label_1abe44:
    // 0x1abe44: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1abe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
label_1abe48:
    // 0x1abe48: 0x8e050628  lw          $a1, 0x628($s0)
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1576)));
    // 0x1abe4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABE4Cu;
    {
        const bool branch_taken_0x1abe4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE4Cu;
        // 0x1abe50: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe4c) {
            ctx->pc = 0x1ABE60u;
            goto label_1abe60;
        }
    }
    ctx->pc = 0x1ABE54u;
    // 0x1abe54: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1ABE54u;
    SET_GPR_U32(ctx, 31, 0x1ABE5Cu);
    ctx->pc = 0x1ABE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE54u;
    // 0x1abe58: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1ABE54u, 0x1ABE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE5Cu;
label_1abe5c:
    // 0x1abe5c: 0xae000628  sw          $zero, 0x628($s0)
    ctx->pc = 0x1abe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 0));
label_1abe60:
    // 0x1abe60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe64: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1ABE64u;
    SET_GPR_U32(ctx, 31, 0x1ABE6Cu);
    ctx->pc = 0x1ABE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE64u;
    // 0x1abe68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1ABE64u, 0x1ABE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE6Cu;
label_1abe6c:
    // 0x1abe6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abe70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abe70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abe74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE78u;
        // 0x1abe7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE80u;
}
