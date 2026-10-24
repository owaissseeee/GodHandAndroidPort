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

// Function: func_00355260
// Address: 0x355260 - 0x3552d0
void func_00355260_0x355260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355260_0x355260");
#endif

    switch (ctx->pc) {
        case 0x355284u: goto label_355284;
        case 0x3552a8u: goto label_3552a8;
        default: break;
    }

    ctx->pc = 0x355260u;

    // 0x355260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355264: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x355264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x355268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35526c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x355270: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x355270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x355274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x355278: 0x8e301fc0  lw          $s0, 0x1FC0($s1)
    ctx->pc = 0x355278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x35527c: 0xc0d54b4  jal         func_3552D0
    ctx->pc = 0x35527Cu;
    SET_GPR_U32(ctx, 31, 0x355284u);
    ctx->pc = 0x355280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35527Cu;
    // 0x355280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3552D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3552D0u, 0x35527Cu, 0x355284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355284u;
label_355284:
    // 0x355284: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x355284u;
    {
        const bool branch_taken_0x355284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355284) {
            ctx->pc = 0x355288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355284u;
            // 0x355288: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3552C0u;
            goto label_3552c0;
        }
    }
    ctx->pc = 0x35528Cu;
    // 0x35528c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x355294u;
    {
        const bool branch_taken_0x355294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355294u;
        // 0x355298: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355294) {
            ctx->pc = 0x3552B0u;
            goto label_3552b0;
        }
    }
    ctx->pc = 0x35529Cu;
    // 0x35529c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552a0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3552A0u;
    SET_GPR_U32(ctx, 31, 0x3552A8u);
    ctx->pc = 0x3552A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3552A0u;
    // 0x3552a4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3552A0u, 0x3552A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3552A8u;
label_3552a8:
    // 0x3552a8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3552A8u;
    {
        const bool branch_taken_0x3552a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3552a8) {
            ctx->pc = 0x3552ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3552A8u;
            // 0x3552ac: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3552B4u;
            goto label_3552b4;
        }
    }
    ctx->pc = 0x3552B0u;
label_3552b0:
    // 0x3552b0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x3552b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3552b4:
    // 0x3552b4: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x3552b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x3552b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3552b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3552bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3552c0:
    // 0x3552c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3552c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3552c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3552c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3552c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3552C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3552CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3552C8u;
        // 0x3552cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3552C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3552D0u;
}
