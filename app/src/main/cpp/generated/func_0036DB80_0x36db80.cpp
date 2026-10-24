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

// Function: func_0036DB80
// Address: 0x36db80 - 0x36dbe0
void func_0036DB80_0x36db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DB80_0x36db80");
#endif

    switch (ctx->pc) {
        case 0x36db9cu: goto label_36db9c;
        default: break;
    }

    ctx->pc = 0x36db80u;

    // 0x36db80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36db84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36db88: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x36db88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36db8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36db90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36db94: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DB94u;
    SET_GPR_U32(ctx, 31, 0x36DB9Cu);
    ctx->pc = 0x36DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB94u;
    // 0x36db98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DB94u, 0x36DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB9Cu;
label_36db9c:
    // 0x36db9c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36dba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36DBA0u;
    {
        const bool branch_taken_0x36dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBA0u;
        // 0x36dba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dba0) {
            ctx->pc = 0x36DBC0u;
            goto label_36dbc0;
        }
    }
    ctx->pc = 0x36DBA8u;
    // 0x36dba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dbac: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x36dbacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x36dbb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dbb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36dbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dbb8: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DBB8u;
    ctx->pc = 0x36DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBB8u;
    // 0x36dbbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DBB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DBC0u;
label_36dbc0:
    // 0x36dbc0: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x36dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x36dbc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36dbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dbc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36dbcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dbd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dbd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBD4u;
        // 0x36dbd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBDCu;
    // 0x36dbdc: 0x0  nop
    ctx->pc = 0x36dbdcu;
    // NOP
    ctx->pc = 0x36dbe0u;
}
