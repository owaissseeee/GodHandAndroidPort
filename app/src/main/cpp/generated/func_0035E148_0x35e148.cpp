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

// Function: func_0035E148
// Address: 0x35e148 - 0x35e1b8
void func_0035E148_0x35e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E148_0x35e148");
#endif

    switch (ctx->pc) {
        case 0x35e174u: goto label_35e174;
        case 0x35e188u: goto label_35e188;
        default: break;
    }

    ctx->pc = 0x35e148u;

    // 0x35e148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e14c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e154: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e15c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e15cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e160: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35e160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35e164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e168: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e16c: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E16Cu;
    SET_GPR_U32(ctx, 31, 0x35E174u);
    ctx->pc = 0x35E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E16Cu;
    // 0x35e170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E16Cu, 0x35E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E174u;
label_35e174:
    // 0x35e174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e178: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E178u;
    {
        const bool branch_taken_0x35e178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E178u;
        // 0x35e17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e178) {
            ctx->pc = 0x35E1A0u;
            goto label_35e1a0;
        }
    }
    ctx->pc = 0x35E180u;
    // 0x35e180: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E180u;
    SET_GPR_U32(ctx, 31, 0x35E188u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E180u, 0x35E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E188u;
label_35e188:
    // 0x35e188: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x35e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e18c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E18Cu;
    {
        const bool branch_taken_0x35e18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E18Cu;
        // 0x35e190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e18c) {
            ctx->pc = 0x35E1A0u;
            goto label_35e1a0;
        }
    }
    ctx->pc = 0x35E194u;
    // 0x35e194: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x35e194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x35e198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e19c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e1a0:
    // 0x35e1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e1a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e1a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e1ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1B0u;
        // 0x35e1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E1B8u;
}
