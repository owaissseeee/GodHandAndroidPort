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

// Function: func_0036DBE0
// Address: 0x36dbe0 - 0x36dc70
void func_0036DBE0_0x36dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DBE0_0x36dbe0");
#endif

    switch (ctx->pc) {
        case 0x36dc0cu: goto label_36dc0c;
        default: break;
    }

    ctx->pc = 0x36dbe0u;

    // 0x36dbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36dbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36dbe8: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x36dbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36dbec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36dbf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36dbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dbf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36dbf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36dbf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dbfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36dc00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36dc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36dc04: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DC04u;
    SET_GPR_U32(ctx, 31, 0x36DC0Cu);
    ctx->pc = 0x36DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC04u;
    // 0x36dc08: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DC04u, 0x36DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC0Cu;
label_36dc0c:
    // 0x36dc0c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36dc10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36DC14u;
    {
        const bool branch_taken_0x36dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC14u;
        // 0x36dc18: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc14) {
            ctx->pc = 0x36DC38u;
            goto label_36dc38;
        }
    }
    ctx->pc = 0x36DC1Cu;
    // 0x36dc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dc24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36dc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dc28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36dc28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dc2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dc30: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DC30u;
    ctx->pc = 0x36DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC30u;
    // 0x36dc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DC30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DC38u;
label_36dc38:
    // 0x36dc38: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x36dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x36dc3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36dc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dc40: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x36dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x36dc44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36dc48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36dc4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dc4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dc50: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x36dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x36dc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc58: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x36dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x36dc5c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x36dc60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36dc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dc64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36dc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dc68: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC68u;
        // 0x36dc6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC70u;
}
