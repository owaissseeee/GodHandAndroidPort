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

// Function: SetCostumeFlagIfMatch_2982A0
// Address: 0x2982a0 - 0x298310
void SetCostumeFlagIfMatch_2982A0_0x2982a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCostumeFlagIfMatch_2982A0_0x2982a0");
#endif

    switch (ctx->pc) {
        case 0x2982c8u: goto label_2982c8;
        default: break;
    }

    ctx->pc = 0x2982a0u;

    // 0x2982a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2982a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2982a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2982a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2982a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2982ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2982acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982b0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2982B0u;
    {
        const bool branch_taken_0x2982b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982B0u;
        // 0x2982b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982b0) {
            ctx->pc = 0x2982F8u;
            goto label_2982f8;
        }
    }
    ctx->pc = 0x2982B8u;
    // 0x2982b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2982bc: 0x963002fe  lhu         $s0, 0x2FE($s1)
    ctx->pc = 0x2982bcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x2982c0: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x2982C0u;
    SET_GPR_U32(ctx, 31, 0x2982C8u);
    ctx->pc = 0x2982C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982C0u;
    // 0x2982c4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x2982C0u, 0x2982C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982C8u;
label_2982c8:
    // 0x2982c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2982c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982cc: 0x24020603  addiu       $v0, $zero, 0x603
    ctx->pc = 0x2982ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
    // 0x2982d0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2982D0u;
    {
        const bool branch_taken_0x2982d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2982D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982D0u;
        // 0x2982d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982d0) {
            ctx->pc = 0x2982FCu;
            goto label_2982fc;
        }
    }
    ctx->pc = 0x2982D8u;
    // 0x2982d8: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x2982d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2982dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2982dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2982e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2982e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2982e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2982E4u;
    {
        const bool branch_taken_0x2982e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982e4) {
            ctx->pc = 0x2982E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2982E4u;
            // 0x2982e8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298300u;
            goto label_298300;
        }
    }
    ctx->pc = 0x2982ECu;
    // 0x2982ec: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x2982ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x2982f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2982f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2982f4: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2982f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_2982f8:
    // 0x2982f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2982f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2982fc:
    // 0x2982fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2982fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_298300:
    // 0x298300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298304: 0x3e00008  jr          $ra
    ctx->pc = 0x298304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298304u;
        // 0x298308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29830Cu;
    // 0x29830c: 0x0  nop
    ctx->pc = 0x29830cu;
    // NOP
    ctx->pc = 0x298310u;
}
