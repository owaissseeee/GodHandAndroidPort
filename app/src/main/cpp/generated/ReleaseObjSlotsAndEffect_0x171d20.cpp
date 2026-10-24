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

// Function: ReleaseObjSlotsAndEffect
// Address: 0x171d20 - 0x171de8
void ReleaseObjSlotsAndEffect_0x171d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseObjSlotsAndEffect_0x171d20");
#endif

    switch (ctx->pc) {
        case 0x171d60u: goto label_171d60;
        case 0x171d74u: goto label_171d74;
        case 0x171d9cu: goto label_171d9c;
        case 0x171db4u: goto label_171db4;
        case 0x171dc4u: goto label_171dc4;
        default: break;
    }

    ctx->pc = 0x171d20u;

    // 0x171d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x171d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x171d24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171d28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x171d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x171d2c: 0x24420ef0  addiu       $v0, $v0, 0xEF0
    ctx->pc = 0x171d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
    // 0x171d30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x171d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x171d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x171d3c: 0x26300600  addiu       $s0, $s1, 0x600
    ctx->pc = 0x171d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x171d40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x171d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x171d44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x171d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x171d4c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x171d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x171d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171d54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x171d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d58: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x171d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x171d5c: 0x0  nop
    ctx->pc = 0x171d5cu;
    // NOP
label_171d60:
    // 0x171d60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x171d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171d64: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x171D64u;
    {
        const bool branch_taken_0x171d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d64) {
            ctx->pc = 0x171D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171D64u;
            // 0x171d68: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171D7Cu;
            goto label_171d7c;
        }
    }
    ctx->pc = 0x171D6Cu;
    // 0x171d6c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x171D6Cu;
    SET_GPR_U32(ctx, 31, 0x171D74u);
    ctx->pc = 0x171D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D6Cu;
    // 0x171d70: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x171D6Cu, 0x171D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D74u;
label_171d74:
    // 0x171d74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x171d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x171d78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x171d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_171d7c:
    // 0x171d7c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x171D7Cu;
    {
        const bool branch_taken_0x171d7c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x171D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D7Cu;
        // 0x171d80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d7c) {
            ctx->pc = 0x171D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171d60;
        }
    }
    ctx->pc = 0x171D84u;
    // 0x171d84: 0x8e250604  lw          $a1, 0x604($s1)
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x171d88: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x171D88u;
    {
        const bool branch_taken_0x171d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d88) {
            ctx->pc = 0x171D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171D88u;
            // 0x171d8c: 0x8e250da8  lw          $a1, 0xDA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171DA4u;
            goto label_171da4;
        }
    }
    ctx->pc = 0x171D90u;
    // 0x171d90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x171d94: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x171D94u;
    SET_GPR_U32(ctx, 31, 0x171D9Cu);
    ctx->pc = 0x171D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D94u;
    // 0x171d98: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x171D94u, 0x171D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D9Cu;
label_171d9c:
    // 0x171d9c: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x171d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x171da0: 0x8e250da8  lw          $a1, 0xDA8($s1)
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3496)));
label_171da4:
    // 0x171da4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x171DA4u;
    {
        const bool branch_taken_0x171da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DA4u;
        // 0x171da8: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171da4) {
            ctx->pc = 0x171DB8u;
            goto label_171db8;
        }
    }
    ctx->pc = 0x171DACu;
    // 0x171dac: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x171DACu;
    SET_GPR_U32(ctx, 31, 0x171DB4u);
    ctx->pc = 0x171DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DACu;
    // 0x171db0: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x171DACu, 0x171DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DB4u;
label_171db4:
    // 0x171db4: 0xae200da8  sw          $zero, 0xDA8($s1)
    ctx->pc = 0x171db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3496), GPR_U32(ctx, 0));
label_171db8:
    // 0x171db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dbc: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x171DBCu;
    SET_GPR_U32(ctx, 31, 0x171DC4u);
    ctx->pc = 0x171DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DBCu;
    // 0x171dc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x171DBCu, 0x171DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DC4u;
label_171dc4:
    // 0x171dc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x171dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171dc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x171dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171dcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171dd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x171dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171dd4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x171dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x171DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DDCu;
        // 0x171de0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171DE4u;
    // 0x171de4: 0x0  nop
    ctx->pc = 0x171de4u;
    // NOP
    ctx->pc = 0x171de8u;
}
