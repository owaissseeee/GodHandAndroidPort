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

// Function: func_0036DE00
// Address: 0x36de00 - 0x36de80
void func_0036DE00_0x36de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DE00_0x36de00");
#endif

    switch (ctx->pc) {
        case 0x36de1cu: goto label_36de1c;
        case 0x36de50u: goto label_36de50;
        case 0x36de64u: goto label_36de64;
        default: break;
    }

    ctx->pc = 0x36de00u;

    // 0x36de00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36de04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36de08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36de08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36de10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36de14: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36DE14u;
    SET_GPR_U32(ctx, 31, 0x36DE1Cu);
    ctx->pc = 0x36DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE14u;
    // 0x36de18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36DE14u, 0x36DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE1Cu;
label_36de1c:
    // 0x36de1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36de1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36DE20u;
    {
        const bool branch_taken_0x36de20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE20u;
        // 0x36de24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de20) {
            ctx->pc = 0x36DE48u;
            goto label_36de48;
        }
    }
    ctx->pc = 0x36DE28u;
    // 0x36de28: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36de28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36de2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36de2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36de30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36de34: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x36de34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x36de38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36de3c: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DE3Cu;
    ctx->pc = 0x36DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE3Cu;
    // 0x36de40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DE3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DE44u;
    // 0x36de44: 0x0  nop
    ctx->pc = 0x36de44u;
    // NOP
label_36de48:
    // 0x36de48: 0xc0db7fc  jal         func_36DFF0
    ctx->pc = 0x36DE48u;
    SET_GPR_U32(ctx, 31, 0x36DE50u);
    ctx->pc = 0x36DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE48u;
    // 0x36de4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DFF0u, 0x36DE48u, 0x36DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE50u;
label_36de50:
    // 0x36de50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36de50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de54: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36DE54u;
    {
        const bool branch_taken_0x36de54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE54u;
        // 0x36de58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de54) {
            ctx->pc = 0x36DE64u;
            goto label_36de64;
        }
    }
    ctx->pc = 0x36DE5Cu;
    // 0x36de5c: 0xc0db7a0  jal         func_36DE80
    ctx->pc = 0x36DE5Cu;
    SET_GPR_U32(ctx, 31, 0x36DE64u);
    ctx->pc = 0x36DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DE80u, 0x36DE5Cu, 0x36DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE64u;
label_36de64:
    // 0x36de64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36de64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36de68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36de6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36de70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36de74: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE74u;
        // 0x36de78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE7Cu;
    // 0x36de7c: 0x0  nop
    ctx->pc = 0x36de7cu;
    // NOP
    ctx->pc = 0x36de80u;
}
