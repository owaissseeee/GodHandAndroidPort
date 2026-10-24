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

// Function: func_00176CB8
// Address: 0x176cb8 - 0x176d60
void func_00176CB8_0x176cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176CB8_0x176cb8");
#endif

    switch (ctx->pc) {
        case 0x176cf8u: goto label_176cf8;
        case 0x176d0cu: goto label_176d0c;
        case 0x176d30u: goto label_176d30;
        case 0x176d40u: goto label_176d40;
        default: break;
    }

    ctx->pc = 0x176cb8u;

    // 0x176cb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x176cbc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x176cc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x176cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x176cc4: 0x244212e8  addiu       $v0, $v0, 0x12E8
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4840));
    // 0x176cc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x176cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x176ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x176cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x176cd4: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x176cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x176cd8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x176cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x176cdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176ce0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x176ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x176ce4: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x176ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176cec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x176cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cf0: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x176cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x176cf4: 0x0  nop
    ctx->pc = 0x176cf4u;
    // NOP
label_176cf8:
    // 0x176cf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176cfc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x176CFCu;
    {
        const bool branch_taken_0x176cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x176cfc) {
            ctx->pc = 0x176D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176CFCu;
            // 0x176d00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176D14u;
            goto label_176d14;
        }
    }
    ctx->pc = 0x176D04u;
    // 0x176d04: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x176D04u;
    SET_GPR_U32(ctx, 31, 0x176D0Cu);
    ctx->pc = 0x176D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D04u;
    // 0x176d08: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x176D04u, 0x176D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D0Cu;
label_176d0c:
    // 0x176d0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x176d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x176d10: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x176d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_176d14:
    // 0x176d14: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x176D14u;
    {
        const bool branch_taken_0x176d14 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x176D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D14u;
        // 0x176d18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d14) {
            ctx->pc = 0x176CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cf8;
        }
    }
    ctx->pc = 0x176D1Cu;
    // 0x176d1c: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x176d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x176d20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176D20u;
    {
        const bool branch_taken_0x176d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D20u;
        // 0x176d24: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d20) {
            ctx->pc = 0x176D34u;
            goto label_176d34;
        }
    }
    ctx->pc = 0x176D28u;
    // 0x176d28: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x176D28u;
    SET_GPR_U32(ctx, 31, 0x176D30u);
    ctx->pc = 0x176D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D28u;
    // 0x176d2c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x176D28u, 0x176D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D30u;
label_176d30:
    // 0x176d30: 0xae400608  sw          $zero, 0x608($s2)
    ctx->pc = 0x176d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
label_176d34:
    // 0x176d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d38: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x176D38u;
    SET_GPR_U32(ctx, 31, 0x176D40u);
    ctx->pc = 0x176D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D38u;
    // 0x176d3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x176D38u, 0x176D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D40u;
label_176d40:
    // 0x176d40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x176d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176d44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x176d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176d48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x176d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176d4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x176d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x176d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d58: 0x3e00008  jr          $ra
    ctx->pc = 0x176D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D58u;
        // 0x176d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D60u;
}
