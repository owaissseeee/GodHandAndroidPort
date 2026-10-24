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

// Function: func_0036DC70
// Address: 0x36dc70 - 0x36dce8
void func_0036DC70_0x36dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DC70_0x36dc70");
#endif

    switch (ctx->pc) {
        case 0x36dc94u: goto label_36dc94;
        default: break;
    }

    ctx->pc = 0x36dc70u;

    // 0x36dc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36dc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36dc78: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x36dc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36dc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36dc80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36dc88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36dc8c: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DC8Cu;
    SET_GPR_U32(ctx, 31, 0x36DC94u);
    ctx->pc = 0x36DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC8Cu;
    // 0x36dc90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DC8Cu, 0x36DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC94u;
label_36dc94:
    // 0x36dc94: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36dc98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36DC9Cu;
    {
        const bool branch_taken_0x36dc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC9Cu;
        // 0x36dca0: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc9c) {
            ctx->pc = 0x36DCC0u;
            goto label_36dcc0;
        }
    }
    ctx->pc = 0x36DCA4u;
    // 0x36dca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dcac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36dcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dcb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dcb4: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DCB4u;
    ctx->pc = 0x36DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCB4u;
    // 0x36dcb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DCB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DCBCu;
    // 0x36dcbc: 0x0  nop
    ctx->pc = 0x36dcbcu;
    // NOP
label_36dcc0:
    // 0x36dcc0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x36dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x36dcc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36dcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dcc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36dccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dcd0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x36dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x36dcd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dcd8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x36dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x36dcdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36dcdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dce0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DCE0u;
        // 0x36dce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DCE8u;
}
