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

// Function: func_00337D20
// Address: 0x337d20 - 0x337de0
void func_00337D20_0x337d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337D20_0x337d20");
#endif

    switch (ctx->pc) {
        case 0x337d80u: goto label_337d80;
        case 0x337d94u: goto label_337d94;
        case 0x337da0u: goto label_337da0;
        case 0x337da8u: goto label_337da8;
        case 0x337db0u: goto label_337db0;
        case 0x337db8u: goto label_337db8;
        case 0x337dc0u: goto label_337dc0;
        case 0x337dc8u: goto label_337dc8;
        default: break;
    }

    ctx->pc = 0x337d20u;

    // 0x337d20: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337d24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337d28: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337d28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337d38: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337D38u;
    {
        const bool branch_taken_0x337d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x337D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D38u;
        // 0x337d3c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d38) {
            ctx->pc = 0x337D50u;
            goto label_337d50;
        }
    }
    ctx->pc = 0x337D40u;
    // 0x337d40: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337d44: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337d44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337d48: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x337D48u;
    {
        const bool branch_taken_0x337d48 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x337D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D48u;
        // 0x337d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d48) {
            ctx->pc = 0x337DCCu;
            goto label_337dcc;
        }
    }
    ctx->pc = 0x337D50u;
label_337d50:
    // 0x337d50: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337d54: 0x24630754  addiu       $v1, $v1, 0x754
    ctx->pc = 0x337d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1876));
    // 0x337d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x337d58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E0754u));
    // 0x337d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x337d60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x337D60u;
    {
        const bool branch_taken_0x337d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D60u;
        // 0x337d64: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d60) {
            ctx->pc = 0x337DC8u;
            goto label_337dc8;
        }
    }
    ctx->pc = 0x337D68u;
    // 0x337d68: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x337d6c: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x337d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    // 0x337d70: 0x26100724  addiu       $s0, $s0, 0x724
    ctx->pc = 0x337d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1828));
    // 0x337d74: 0x263131a8  addiu       $s1, $s1, 0x31A8
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12712));
    // 0x337d78: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x337D78u;
    SET_GPR_U32(ctx, 31, 0x337D80u);
    ctx->pc = 0x337D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D78u;
    // 0x337d7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x337D78u, 0x337D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D80u;
label_337d80:
    // 0x337d80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x337d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x337d84: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x337d84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x337d88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x337d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x337d8c: 0xc0cc8c4  jal         func_332310
    ctx->pc = 0x337D8Cu;
    SET_GPR_U32(ctx, 31, 0x337D94u);
    ctx->pc = 0x337D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D8Cu;
    // 0x337d90: 0x2610075c  addiu       $s0, $s0, 0x75C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332310u, 0x337D8Cu, 0x337D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D94u;
label_337d94:
    // 0x337d94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x337d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x337d98: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x337D98u;
    SET_GPR_U32(ctx, 31, 0x337DA0u);
    ctx->pc = 0x337D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D98u;
    // 0x337d9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x337D98u, 0x337DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DA0u;
label_337da0:
    // 0x337da0: 0xc0cdc90  jal         func_337240
    ctx->pc = 0x337DA0u;
    SET_GPR_U32(ctx, 31, 0x337DA8u);
    ctx->pc = 0x337DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DA0u;
    // 0x337da4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337240u, 0x337DA0u, 0x337DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DA8u;
label_337da8:
    // 0x337da8: 0xc0cdeb2  jal         func_337AC8
    ctx->pc = 0x337DA8u;
    SET_GPR_U32(ctx, 31, 0x337DB0u);
    ctx->pc = 0x337AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AC8u, 0x337DA8u, 0x337DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DB0u;
label_337db0:
    // 0x337db0: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x337DB0u;
    SET_GPR_U32(ctx, 31, 0x337DB8u);
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x337DB0u, 0x337DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DB8u;
label_337db8:
    // 0x337db8: 0xc0cecec  jal         func_33B3B0
    ctx->pc = 0x337DB8u;
    SET_GPR_U32(ctx, 31, 0x337DC0u);
    ctx->pc = 0x33B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B3B0u, 0x337DB8u, 0x337DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DC0u;
label_337dc0:
    // 0x337dc0: 0xc0cec04  jal         func_33B010
    ctx->pc = 0x337DC0u;
    SET_GPR_U32(ctx, 31, 0x337DC8u);
    ctx->pc = 0x33B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B010u, 0x337DC0u, 0x337DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DC8u;
label_337dc8:
    // 0x337dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337dcc:
    // 0x337dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x337DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DD4u;
        // 0x337dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337DDCu;
    // 0x337ddc: 0x0  nop
    ctx->pc = 0x337ddcu;
    // NOP
    ctx->pc = 0x337de0u;
}
