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

// Function: SetStateEntry0x25A_16FA10
// Address: 0x16fa10 - 0x16fa80
void SetStateEntry0x25A_16FA10_0x16fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStateEntry0x25A_16FA10_0x16fa10");
#endif

    switch (ctx->pc) {
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa6cu: goto label_16fa6c;
        default: break;
    }

    ctx->pc = 0x16fa10u;

    // 0x16fa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fa14: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16fa18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16fa1c: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x16fa20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16fa24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fa2c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x16fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x16fa30: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x16fa34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16FA34u;
    {
        const bool branch_taken_0x16fa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA34u;
        // 0x16fa38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa34) {
            ctx->pc = 0x16FA50u;
            goto label_16fa50;
        }
    }
    ctx->pc = 0x16FA3Cu;
    // 0x16fa3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16fa40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16fa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa44: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x16FA44u;
    SET_GPR_U32(ctx, 31, 0x16FA4Cu);
    ctx->pc = 0x16FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA44u;
    // 0x16fa48: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x16FA44u, 0x16FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA4Cu;
label_16fa4c:
    // 0x16fa4c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x16fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_16fa50:
    // 0x16fa50: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16fa54: 0x2405025a  addiu       $a1, $zero, 0x25A
    ctx->pc = 0x16fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x16fa58: 0xc0c15de  jal         func_305778
    ctx->pc = 0x16FA58u;
    SET_GPR_U32(ctx, 31, 0x16FA60u);
    ctx->pc = 0x16FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA58u;
    // 0x16fa5c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x16FA58u, 0x16FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA60u;
label_16fa60:
    // 0x16fa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa64: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x16FA64u;
    SET_GPR_U32(ctx, 31, 0x16FA6Cu);
    ctx->pc = 0x16FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA64u;
    // 0x16fa68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x16FA64u, 0x16FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA6Cu;
label_16fa6c:
    // 0x16fa6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fa70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fa70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fa74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fa78: 0x3e00008  jr          $ra
    ctx->pc = 0x16FA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA78u;
        // 0x16fa7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FA80u;
}
