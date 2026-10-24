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

// Function: func_00358688
// Address: 0x358688 - 0x358700
void func_00358688_0x358688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358688_0x358688");
#endif

    switch (ctx->pc) {
        case 0x3586b0u: goto label_3586b0;
        case 0x3586b8u: goto label_3586b8;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586d4u: goto label_3586d4;
        default: break;
    }

    ctx->pc = 0x358688u;

    // 0x358688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35868c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358698: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x35869c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3586a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3586a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3586a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3586a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3586a8: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x3586A8u;
    SET_GPR_U32(ctx, 31, 0x3586B0u);
    ctx->pc = 0x3586ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586A8u;
    // 0x3586ac: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x3586A8u, 0x3586B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586B0u;
label_3586b0:
    // 0x3586b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3586b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3586b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3586b8:
    // 0x3586b8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3586b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3586bc: 0xc0d6ed0  jal         func_35BB40
    ctx->pc = 0x3586BCu;
    SET_GPR_U32(ctx, 31, 0x3586C4u);
    ctx->pc = 0x3586C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586BCu;
    // 0x3586c0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB40u, 0x3586BCu, 0x3586C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586C4u;
label_3586c4:
    // 0x3586c4: 0x643fffc  bgezl       $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3586C4u;
    {
        const bool branch_taken_0x3586c4 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x3586c4) {
            ctx->pc = 0x3586C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3586C4u;
            // 0x3586c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3586B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3586b8;
        }
    }
    ctx->pc = 0x3586CCu;
    // 0x3586cc: 0xc0d6ed0  jal         func_35BB40
    ctx->pc = 0x3586CCu;
    SET_GPR_U32(ctx, 31, 0x3586D4u);
    ctx->pc = 0x3586D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586CCu;
    // 0x3586d0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB40u, 0x3586CCu, 0x3586D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586D4u;
label_3586d4:
    // 0x3586d4: 0xfe2000c0  sd          $zero, 0xC0($s1)
    ctx->pc = 0x3586d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 0));
    // 0x3586d8: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x3586d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x3586dc: 0xfe2000c8  sd          $zero, 0xC8($s1)
    ctx->pc = 0x3586dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 0));
    // 0x3586e0: 0xfe2000d0  sd          $zero, 0xD0($s1)
    ctx->pc = 0x3586e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 0));
    // 0x3586e4: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x3586e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x3586e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3586e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3586ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3586ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3586f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3586f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3586f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3586f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3586f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3586F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3586FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586F8u;
        // 0x3586fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3586F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358700u;
}
