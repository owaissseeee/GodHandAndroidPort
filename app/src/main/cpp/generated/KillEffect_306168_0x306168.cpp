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

// Function: KillEffect_306168
// Address: 0x306168 - 0x306200
void KillEffect_306168_0x306168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KillEffect_306168_0x306168");
#endif

    switch (ctx->pc) {
        case 0x3061bcu: goto label_3061bc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061ecu: goto label_3061ec;
        default: break;
    }

    ctx->pc = 0x306168u;

    // 0x306168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30616c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x306174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30617c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306180: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x306180u;
    {
        const bool branch_taken_0x306180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x306184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306180u;
        // 0x306184: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306180) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x306188u;
    // 0x306188: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x306188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30618c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30618Cu;
    {
        const bool branch_taken_0x30618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30618c) {
            ctx->pc = 0x306190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30618Cu;
            // 0x306190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061A4u;
            goto label_3061a4;
        }
    }
    ctx->pc = 0x306194u;
    // 0x306194: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x306194u;
    {
        const bool branch_taken_0x306194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x306198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306194u;
        // 0x306198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306194) {
            ctx->pc = 0x3061B4u;
            goto label_3061b4;
        }
    }
    ctx->pc = 0x30619Cu;
    // 0x30619c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30619Cu;
    {
        const bool branch_taken_0x30619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30619Cu;
        // 0x3061a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30619c) {
            ctx->pc = 0x3061F0u;
            goto label_3061f0;
        }
    }
    ctx->pc = 0x3061A4u;
label_3061a4:
    // 0x3061a4: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3061A4u;
    {
        const bool branch_taken_0x3061a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3061A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061A4u;
        // 0x3061a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061a4) {
            ctx->pc = 0x3061D8u;
            goto label_3061d8;
        }
    }
    ctx->pc = 0x3061ACu;
    // 0x3061ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3061ACu;
    {
        const bool branch_taken_0x3061ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061ACu;
        // 0x3061b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061ac) {
            ctx->pc = 0x3061F0u;
            goto label_3061f0;
        }
    }
    ctx->pc = 0x3061B4u;
label_3061b4:
    // 0x3061b4: 0xc0c0348  jal         func_300D20
    ctx->pc = 0x3061B4u;
    SET_GPR_U32(ctx, 31, 0x3061BCu);
    ctx->pc = 0x3061B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061B4u;
    // 0x3061b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300D20u, 0x3061B4u, 0x3061BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061BCu;
label_3061bc:
    // 0x3061bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3061BCu;
    {
        const bool branch_taken_0x3061bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061BCu;
        // 0x3061c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061bc) {
            ctx->pc = 0x3061F0u;
            goto label_3061f0;
        }
    }
    ctx->pc = 0x3061C4u;
label_3061c4:
    // 0x3061c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3061c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061c8: 0xc0bee26  jal         func_2FB898
    ctx->pc = 0x3061C8u;
    SET_GPR_U32(ctx, 31, 0x3061D0u);
    ctx->pc = 0x3061CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061C8u;
    // 0x3061cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB898u, 0x3061C8u, 0x3061D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061D0u;
label_3061d0:
    // 0x3061d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3061D0u;
    {
        const bool branch_taken_0x3061d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D0u;
        // 0x3061d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061d0) {
            ctx->pc = 0x3061F0u;
            goto label_3061f0;
        }
    }
    ctx->pc = 0x3061D8u;
label_3061d8:
    // 0x3061d8: 0xc0bee26  jal         func_2FB898
    ctx->pc = 0x3061D8u;
    SET_GPR_U32(ctx, 31, 0x3061E0u);
    ctx->pc = 0x3061DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061D8u;
    // 0x3061dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB898u, 0x3061D8u, 0x3061E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061E0u;
label_3061e0:
    // 0x3061e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3061e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061e4: 0xc0c0348  jal         func_300D20
    ctx->pc = 0x3061E4u;
    SET_GPR_U32(ctx, 31, 0x3061ECu);
    ctx->pc = 0x3061E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061E4u;
    // 0x3061e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300D20u, 0x3061E4u, 0x3061ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061ECu;
label_3061ec:
    // 0x3061ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3061ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3061f0:
    // 0x3061f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3061f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3061f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3061f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3061f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3061F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F8u;
        // 0x3061fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3061F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306200u;
}
