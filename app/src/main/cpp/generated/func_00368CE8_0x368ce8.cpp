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

// Function: func_00368CE8
// Address: 0x368ce8 - 0x368d60
void func_00368CE8_0x368ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368CE8_0x368ce8");
#endif

    switch (ctx->pc) {
        case 0x368ce8u: goto label_368ce8;
        case 0x368cecu: goto label_368cec;
        case 0x368cf0u: goto label_368cf0;
        case 0x368cf4u: goto label_368cf4;
        case 0x368cf8u: goto label_368cf8;
        case 0x368cfcu: goto label_368cfc;
        case 0x368d00u: goto label_368d00;
        case 0x368d04u: goto label_368d04;
        case 0x368d08u: goto label_368d08;
        case 0x368d0cu: goto label_368d0c;
        case 0x368d10u: goto label_368d10;
        case 0x368d14u: goto label_368d14;
        case 0x368d18u: goto label_368d18;
        case 0x368d1cu: goto label_368d1c;
        case 0x368d20u: goto label_368d20;
        case 0x368d24u: goto label_368d24;
        case 0x368d28u: goto label_368d28;
        case 0x368d2cu: goto label_368d2c;
        case 0x368d30u: goto label_368d30;
        case 0x368d34u: goto label_368d34;
        case 0x368d38u: goto label_368d38;
        case 0x368d3cu: goto label_368d3c;
        case 0x368d40u: goto label_368d40;
        case 0x368d44u: goto label_368d44;
        case 0x368d48u: goto label_368d48;
        case 0x368d4cu: goto label_368d4c;
        case 0x368d50u: goto label_368d50;
        case 0x368d54u: goto label_368d54;
        case 0x368d58u: goto label_368d58;
        case 0x368d5cu: goto label_368d5c;
        default: break;
    }

    ctx->pc = 0x368ce8u;

label_368ce8:
    // 0x368ce8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_368cec:
    // 0x368cec: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_368cf0:
    // 0x368cf0: 0x90c7a370  lbu         $a3, -0x5C90($a2)
    ctx->pc = 0x368cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294943600)));
label_368cf4:
    // 0x368cf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x368cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_368cf8:
    // 0x368cf8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x368cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_368cfc:
    // 0x368cfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_368d00:
    // 0x368d00: 0x24636cd4  addiu       $v1, $v1, 0x6CD4
    ctx->pc = 0x368d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27860));
label_368d04:
    // 0x368d04: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x368d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
label_368d08:
    // 0x368d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_368d0c:
    // 0x368d0c: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
label_368d10:
    if (ctx->pc == 0x368D10u) {
        ctx->pc = 0x368D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D0Cu;
        // 0x368d10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368D14u;
        goto label_368d14;
    }
    ctx->pc = 0x368D0Cu;
    {
        const bool branch_taken_0x368d0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x368D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D0Cu;
        // 0x368d10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d0c) {
            ctx->pc = 0x368D30u;
            goto label_368d30;
        }
    }
    ctx->pc = 0x368D14u;
label_368d14:
    // 0x368d14: 0x0  nop
    ctx->pc = 0x368d14u;
    // NOP
label_368d18:
    // 0x368d18: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x368d18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_368d1c:
    // 0x368d1c: 0x20f809  jalr        $at
label_368d20:
    if (ctx->pc == 0x368D20u) {
        ctx->pc = 0x368D24u;
        goto label_368d24;
    }
    ctx->pc = 0x368D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x368D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368D1Cu, 0x368D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x368D24u;
label_368d24:
    // 0x368d24: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_368d28:
    if (ctx->pc == 0x368D28u) {
        ctx->pc = 0x368D2Cu;
        goto label_368d2c;
    }
    ctx->pc = 0x368D24u;
    {
        const bool branch_taken_0x368d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368d24) {
            ctx->pc = 0x368D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368d18;
        }
    }
    ctx->pc = 0x368D2Cu;
label_368d2c:
    // 0x368d2c: 0x0  nop
    ctx->pc = 0x368d2cu;
    // NOP
label_368d30:
    // 0x368d30: 0xc0da358  jal         func_368D60
label_368d34:
    if (ctx->pc == 0x368D34u) {
        ctx->pc = 0x368D38u;
        goto label_368d38;
    }
    ctx->pc = 0x368D30u;
    SET_GPR_U32(ctx, 31, 0x368D38u);
    ctx->pc = 0x368D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368D60u, 0x368D30u, 0x368D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D38u;
label_368d38:
    // 0x368d38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_368d3c:
    if (ctx->pc == 0x368D3Cu) {
        ctx->pc = 0x368D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D38u;
        // 0x368d3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368D40u;
        goto label_368d40;
    }
    ctx->pc = 0x368D38u;
    {
        const bool branch_taken_0x368d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D38u;
        // 0x368d3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d38) {
            ctx->pc = 0x368D58u;
            goto label_368d58;
        }
    }
    ctx->pc = 0x368D40u;
label_368d40:
    // 0x368d40: 0xc0d9b46  jal         func_366D18
label_368d44:
    if (ctx->pc == 0x368D44u) {
        ctx->pc = 0x368D48u;
        goto label_368d48;
    }
    ctx->pc = 0x368D40u;
    SET_GPR_U32(ctx, 31, 0x368D48u);
    ctx->pc = 0x366D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D18u, 0x368D40u, 0x368D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D48u;
label_368d48:
    // 0x368d48: 0xc0da2a8  jal         func_368AA0
label_368d4c:
    if (ctx->pc == 0x368D4Cu) {
        ctx->pc = 0x368D50u;
        goto label_368d50;
    }
    ctx->pc = 0x368D48u;
    SET_GPR_U32(ctx, 31, 0x368D50u);
    ctx->pc = 0x368AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368AA0u, 0x368D48u, 0x368D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D50u;
label_368d50:
    // 0x368d50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_368d54:
    // 0x368d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368d58:
    // 0x368d58: 0x3e00008  jr          $ra
label_368d5c:
    if (ctx->pc == 0x368D5Cu) {
        ctx->pc = 0x368D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D58u;
        // 0x368d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368D60u;
        goto label_fallthrough_0x368d58;
    }
    ctx->pc = 0x368D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D58u;
        // 0x368d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x368d58:
    ctx->pc = 0x368D60u;
}
