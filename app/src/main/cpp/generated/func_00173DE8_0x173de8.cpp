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

// Function: func_00173DE8
// Address: 0x173de8 - 0x173e60
void func_00173DE8_0x173de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173DE8_0x173de8");
#endif

    switch (ctx->pc) {
        case 0x173e00u: goto label_173e00;
        default: break;
    }

    ctx->pc = 0x173de8u;

    // 0x173de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173df8: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x173DF8u;
    SET_GPR_U32(ctx, 31, 0x173E00u);
    ctx->pc = 0x173DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DF8u;
    // 0x173dfc: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x173DF8u, 0x173E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E00u;
label_173e00:
    // 0x173e00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e08: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x173E08u;
    {
        const bool branch_taken_0x173e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x173e08) {
            ctx->pc = 0x173E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E08u;
            // 0x173e0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E50u;
            goto label_173e50;
        }
    }
    ctx->pc = 0x173E10u;
    // 0x173e10: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x173e14: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x173E14u;
    {
        const bool branch_taken_0x173e14 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x173e14) {
            ctx->pc = 0x173E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E14u;
            // 0x173e18: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E40u;
            goto label_173e40;
        }
    }
    ctx->pc = 0x173E1Cu;
    // 0x173e1c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x173e20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173e24: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x173e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x173e28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x173e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x173e2c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x173e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e30: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x173e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x173e34: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x173e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173E38u;
    {
        const bool branch_taken_0x173e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E38u;
        // 0x173e3c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e38) {
            ctx->pc = 0x173E4Cu;
            goto label_173e4c;
        }
    }
    ctx->pc = 0x173E40u;
label_173e40:
    // 0x173e40: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x173e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e44: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x173e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e48: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x173e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_173e4c:
    // 0x173e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173e50:
    // 0x173e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e54: 0x3e00008  jr          $ra
    ctx->pc = 0x173E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E54u;
        // 0x173e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173E5Cu;
    // 0x173e5c: 0x0  nop
    ctx->pc = 0x173e5cu;
    // NOP
    ctx->pc = 0x173e60u;
}
