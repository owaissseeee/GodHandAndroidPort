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

// Function: func_00359DF0
// Address: 0x359df0 - 0x359e80
void func_00359DF0_0x359df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359DF0_0x359df0");
#endif

    switch (ctx->pc) {
        case 0x359e60u: goto label_359e60;
        default: break;
    }

    ctx->pc = 0x359df0u;

    // 0x359df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359dfc: 0x8c9036b0  lw          $s0, 0x36B0($a0)
    ctx->pc = 0x359dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x359e00: 0x8e020dd0  lw          $v0, 0xDD0($s0)
    ctx->pc = 0x359e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3536)));
    // 0x359e04: 0x5c400017  bgtzl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x359E04u;
    {
        const bool branch_taken_0x359e04 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x359e04) {
            ctx->pc = 0x359E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359E04u;
            // 0x359e08: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E64u;
            goto label_359e64;
        }
    }
    ctx->pc = 0x359E0Cu;
    // 0x359e0c: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x359e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x359e10: 0x8e060dc8  lw          $a2, 0xDC8($s0)
    ctx->pc = 0x359e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3528)));
    // 0x359e14: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359E14u;
    {
        const bool branch_taken_0x359e14 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x359E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E14u;
        // 0x359e18: 0x8e050dcc  lw          $a1, 0xDCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e14) {
            ctx->pc = 0x359E24u;
            goto label_359e24;
        }
    }
    ctx->pc = 0x359E1Cu;
    // 0x359e1c: 0x1cc0000e  bgtz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x359E1Cu;
    {
        const bool branch_taken_0x359e1c = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x359e1c) {
            ctx->pc = 0x359E58u;
            goto label_359e58;
        }
    }
    ctx->pc = 0x359E24u;
label_359e24:
    // 0x359e24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x359e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x359e28: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x359E28u;
    {
        const bool branch_taken_0x359e28 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x359e28) {
            ctx->pc = 0x359E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359E28u;
            // 0x359e2c: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E64u;
            goto label_359e64;
        }
    }
    ctx->pc = 0x359E30u;
    // 0x359e30: 0x58800001  blezl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x359E30u;
    {
        const bool branch_taken_0x359e30 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x359e30) {
            ctx->pc = 0x359E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359E30u;
            // 0x359e34: 0x8e040dac  lw          $a0, 0xDAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E38u;
            goto label_359e38;
        }
    }
    ctx->pc = 0x359E38u;
label_359e38:
    // 0x359e38: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x359E38u;
    {
        const bool branch_taken_0x359e38 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x359e38) {
            ctx->pc = 0x359E48u;
            goto label_359e48;
        }
    }
    ctx->pc = 0x359E40u;
    // 0x359e40: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x359e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x359e44: 0x8e050db4  lw          $a1, 0xDB4($s0)
    ctx->pc = 0x359e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_359e48:
    // 0x359e48: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x359E48u;
    {
        const bool branch_taken_0x359e48 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x359e48) {
            ctx->pc = 0x359E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359E48u;
            // 0x359e4c: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E64u;
            goto label_359e64;
        }
    }
    ctx->pc = 0x359E50u;
    // 0x359e50: 0x58c00004  blezl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x359E50u;
    {
        const bool branch_taken_0x359e50 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x359e50) {
            ctx->pc = 0x359E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359E50u;
            // 0x359e54: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E64u;
            goto label_359e64;
        }
    }
    ctx->pc = 0x359E58u;
label_359e58:
    // 0x359e58: 0xc0db248  jal         func_36C920
    ctx->pc = 0x359E58u;
    SET_GPR_U32(ctx, 31, 0x359E60u);
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x359E58u, 0x359E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E60u;
label_359e60:
    // 0x359e60: 0xae020da8  sw          $v0, 0xDA8($s0)
    ctx->pc = 0x359e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
label_359e64:
    // 0x359e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x359E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E6Cu;
        // 0x359e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359E74u;
    // 0x359e74: 0x0  nop
    ctx->pc = 0x359e74u;
    // NOP
    // 0x359e78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x359e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359e7c: 0x0  nop
    ctx->pc = 0x359e7cu;
    // NOP
    ctx->pc = 0x359e80u;
}
