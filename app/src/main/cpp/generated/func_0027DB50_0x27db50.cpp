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

// Function: func_0027DB50
// Address: 0x27db50 - 0x27dbf8
void func_0027DB50_0x27db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DB50_0x27db50");
#endif

    switch (ctx->pc) {
        case 0x27db84u: goto label_27db84;
        case 0x27db98u: goto label_27db98;
        default: break;
    }

    ctx->pc = 0x27db50u;

    // 0x27db50: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x27db50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27db54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27DB54u;
    {
        const bool branch_taken_0x27db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB54u;
        // 0x27db58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db54) {
            ctx->pc = 0x27DB78u;
            goto label_27db78;
        }
    }
    ctx->pc = 0x27DB5Cu;
    // 0x27db5c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27db60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27db64: 0x24428190  addiu       $v0, $v0, -0x7E70
    ctx->pc = 0x27db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934928));
    // 0x27db68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27db68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27db6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27db70: 0x800008  jr          $a0
    ctx->pc = 0x27DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DB78u: goto label_27db78;
            case 0x27DB90u: goto label_27db90;
            case 0x27DBACu: goto label_27dbac;
            case 0x27DBB8u: goto label_27dbb8;
            case 0x27DBCCu: goto label_27dbcc;
            case 0x27DBD8u: goto label_27dbd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27DB78u;
label_27db78:
    // 0x27db78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27db7c: 0xa0c002f7  sb          $zero, 0x2F7($a2)
    ctx->pc = 0x27db7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27db80: 0xa0c202f5  sb          $v0, 0x2F5($a2)
    ctx->pc = 0x27db80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 2));
label_27db84:
    // 0x27db84: 0xa0c002f4  sb          $zero, 0x2F4($a2)
    ctx->pc = 0x27db84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27db88: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB88u;
        // 0x27db8c: 0xa0c002f6  sb          $zero, 0x2F6($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DB90u;
label_27db90:
    // 0x27db90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27db94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27db98:
    // 0x27db98: 0xa0c202f5  sb          $v0, 0x2F5($a2)
    ctx->pc = 0x27db98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27db9c: 0xa0c302f6  sb          $v1, 0x2F6($a2)
    ctx->pc = 0x27db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x27dba0: 0xa0c002f7  sb          $zero, 0x2F7($a2)
    ctx->pc = 0x27dba0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dba4: 0x3e00008  jr          $ra
    ctx->pc = 0x27DBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBA4u;
        // 0x27dba8: 0xa0c002f4  sb          $zero, 0x2F4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DBACu;
label_27dbac:
    // 0x27dbac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27dbb0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x27DBB0u;
    {
        const bool branch_taken_0x27dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBB0u;
        // 0x27dbb4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbb0) {
            ctx->pc = 0x27DB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db98;
        }
    }
    ctx->pc = 0x27DBB8u;
label_27dbb8:
    // 0x27dbb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27dbbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dbc0: 0xa0c202f7  sb          $v0, 0x2F7($a2)
    ctx->pc = 0x27dbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dbc4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x27DBC4u;
    {
        const bool branch_taken_0x27dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBC4u;
        // 0x27dbc8: 0xa0c302f5  sb          $v1, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbc4) {
            ctx->pc = 0x27DB84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db84;
        }
    }
    ctx->pc = 0x27DBCCu;
label_27dbcc:
    // 0x27dbcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27dbd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DBD0u;
    {
        const bool branch_taken_0x27dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBD0u;
        // 0x27dbd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbd0) {
            ctx->pc = 0x27DBE0u;
            goto label_27dbe0;
        }
    }
    ctx->pc = 0x27DBD8u;
label_27dbd8:
    // 0x27dbd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27dbdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27dbe0:
    // 0x27dbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dbe4: 0xa0c202f5  sb          $v0, 0x2F5($a2)
    ctx->pc = 0x27dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dbe8: 0xa0c302f7  sb          $v1, 0x2F7($a2)
    ctx->pc = 0x27dbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x27dbec: 0xa0c402f6  sb          $a0, 0x2F6($a2)
    ctx->pc = 0x27dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x27dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x27DBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBF0u;
        // 0x27dbf4: 0xa0c002f4  sb          $zero, 0x2F4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DBF8u;
}
