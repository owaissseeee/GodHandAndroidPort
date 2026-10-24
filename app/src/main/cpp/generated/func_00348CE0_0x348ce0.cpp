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

// Function: func_00348CE0
// Address: 0x348ce0 - 0x348d58
void func_00348CE0_0x348ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348CE0_0x348ce0");
#endif

    switch (ctx->pc) {
        case 0x348d08u: goto label_348d08;
        case 0x348d1cu: goto label_348d1c;
        case 0x348d24u: goto label_348d24;
        case 0x348d30u: goto label_348d30;
        default: break;
    }

    ctx->pc = 0x348ce0u;

    // 0x348ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348ce4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x348ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x348ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x348cf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x348cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348cf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x348cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x348cfc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x348cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d00: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x348d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x348d04: 0x0  nop
    ctx->pc = 0x348d04u;
    // NOP
label_348d08:
    // 0x348d08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x348D08u;
    {
        const bool branch_taken_0x348d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D08u;
        // 0x348d0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d08) {
            ctx->pc = 0x348D3Cu;
            goto label_348d3c;
        }
    }
    ctx->pc = 0x348D10u;
    // 0x348d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d14: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x348D14u;
    SET_GPR_U32(ctx, 31, 0x348D1Cu);
    ctx->pc = 0x348D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D14u;
    // 0x348d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x348D14u, 0x348D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D1Cu;
label_348d1c:
    // 0x348d1c: 0xc0c97c8  jal         func_325F20
    ctx->pc = 0x348D1Cu;
    SET_GPR_U32(ctx, 31, 0x348D24u);
    ctx->pc = 0x325F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F20u, 0x348D1Cu, 0x348D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D24u;
label_348d24:
    // 0x348d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d28: 0xc0d25ce  jal         func_349738
    ctx->pc = 0x348D28u;
    SET_GPR_U32(ctx, 31, 0x348D30u);
    ctx->pc = 0x348D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D28u;
    // 0x348d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349738u, 0x348D28u, 0x348D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D30u;
label_348d30:
    // 0x348d30: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x348d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x348d34: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x348D34u;
    {
        const bool branch_taken_0x348d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x348D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D34u;
        // 0x348d38: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d34) {
            ctx->pc = 0x348D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348d08;
        }
    }
    ctx->pc = 0x348D3Cu;
label_348d3c:
    // 0x348d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348d48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x348d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x348D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D4Cu;
        // 0x348d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D54u;
    // 0x348d54: 0x0  nop
    ctx->pc = 0x348d54u;
    // NOP
    ctx->pc = 0x348d58u;
}
