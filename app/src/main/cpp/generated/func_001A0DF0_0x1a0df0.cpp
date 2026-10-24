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

// Function: func_001A0DF0
// Address: 0x1a0df0 - 0x1a0e98
void func_001A0DF0_0x1a0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0DF0_0x1a0df0");
#endif

    switch (ctx->pc) {
        case 0x1a0e30u: goto label_1a0e30;
        case 0x1a0e44u: goto label_1a0e44;
        case 0x1a0e68u: goto label_1a0e68;
        case 0x1a0e78u: goto label_1a0e78;
        default: break;
    }

    ctx->pc = 0x1a0df0u;

    // 0x1a0df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a0df4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a0dfc: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x1a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
    // 0x1a0e00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a0e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a0e0c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x1a0e10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a0e14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0e18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a0e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a0e1c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x1a0e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0e24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a0e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e28: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x1a0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x1a0e2c: 0x0  nop
    ctx->pc = 0x1a0e2cu;
    // NOP
label_1a0e30:
    // 0x1a0e30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0e34: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0E34u;
    {
        const bool branch_taken_0x1a0e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e34) {
            ctx->pc = 0x1A0E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0E34u;
            // 0x1a0e38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0E4Cu;
            goto label_1a0e4c;
        }
    }
    ctx->pc = 0x1A0E3Cu;
    // 0x1a0e3c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E44u);
    ctx->pc = 0x1A0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E3Cu;
    // 0x1a0e40: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A0E3Cu, 0x1A0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E44u;
label_1a0e44:
    // 0x1a0e44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a0e48: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a0e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a0e4c:
    // 0x1a0e4c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0E4Cu;
    {
        const bool branch_taken_0x1a0e4c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1A0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E4Cu;
        // 0x1a0e50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e4c) {
            ctx->pc = 0x1A0E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e30;
        }
    }
    ctx->pc = 0x1A0E54u;
    // 0x1a0e54: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x1a0e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x1a0e58: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0E58u;
    {
        const bool branch_taken_0x1a0e58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E58u;
        // 0x1a0e5c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e58) {
            ctx->pc = 0x1A0E6Cu;
            goto label_1a0e6c;
        }
    }
    ctx->pc = 0x1A0E60u;
    // 0x1a0e60: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1A0E60u;
    SET_GPR_U32(ctx, 31, 0x1A0E68u);
    ctx->pc = 0x1A0E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E60u;
    // 0x1a0e64: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1A0E60u, 0x1A0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E68u;
label_1a0e68:
    // 0x1a0e68: 0xae400608  sw          $zero, 0x608($s2)
    ctx->pc = 0x1a0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
label_1a0e6c:
    // 0x1a0e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e70: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A0E70u;
    SET_GPR_U32(ctx, 31, 0x1A0E78u);
    ctx->pc = 0x1A0E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E70u;
    // 0x1a0e74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A0E70u, 0x1A0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E78u;
label_1a0e78:
    // 0x1a0e78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a0e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0e7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a0e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a0e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a0e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e88: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a0e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E90u;
        // 0x1a0e94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E98u;
}
