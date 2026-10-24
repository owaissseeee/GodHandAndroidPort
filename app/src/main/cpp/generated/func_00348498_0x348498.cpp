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

// Function: func_00348498
// Address: 0x348498 - 0x3484f0
void func_00348498_0x348498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348498_0x348498");
#endif

    switch (ctx->pc) {
        case 0x348498u: goto label_348498;
        case 0x34849cu: goto label_34849c;
        case 0x3484a0u: goto label_3484a0;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484a8u: goto label_3484a8;
        case 0x3484acu: goto label_3484ac;
        case 0x3484b0u: goto label_3484b0;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484b8u: goto label_3484b8;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484c0u: goto label_3484c0;
        case 0x3484c4u: goto label_3484c4;
        case 0x3484c8u: goto label_3484c8;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484d4u: goto label_3484d4;
        case 0x3484d8u: goto label_3484d8;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484e0u: goto label_3484e0;
        case 0x3484e4u: goto label_3484e4;
        case 0x3484e8u: goto label_3484e8;
        case 0x3484ecu: goto label_3484ec;
        default: break;
    }

    ctx->pc = 0x348498u;

label_348498:
    // 0x348498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34849c:
    // 0x34849c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3484a0:
    // 0x3484a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3484a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3484a4:
    // 0x3484a4: 0xc0d225a  jal         func_348968
label_3484a8:
    if (ctx->pc == 0x3484A8u) {
        ctx->pc = 0x3484A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484A4u;
        // 0x3484a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484ACu;
        goto label_3484ac;
    }
    ctx->pc = 0x3484A4u;
    SET_GPR_U32(ctx, 31, 0x3484ACu);
    ctx->pc = 0x3484A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484A4u;
    // 0x3484a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x3484A4u, 0x3484ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484ACu;
label_3484ac:
    // 0x3484ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3484acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3484b0:
    // 0x3484b0: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_3484b4:
    if (ctx->pc == 0x3484B4u) {
        ctx->pc = 0x3484B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484B0u;
        // 0x3484b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484B8u;
        goto label_3484b8;
    }
    ctx->pc = 0x3484B0u;
    {
        const bool branch_taken_0x3484b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3484b0) {
            ctx->pc = 0x3484B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3484B0u;
            // 0x3484b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3484E4u;
            goto label_3484e4;
        }
    }
    ctx->pc = 0x3484B8u;
label_3484b8:
    // 0x3484b8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3484b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3484bc:
    // 0x3484bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3484c0:
    if (ctx->pc == 0x3484C0u) {
        ctx->pc = 0x3484C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484BCu;
        // 0x3484c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484C4u;
        goto label_3484c4;
    }
    ctx->pc = 0x3484BCu;
    {
        const bool branch_taken_0x3484bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484BCu;
        // 0x3484c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484bc) {
            ctx->pc = 0x3484E0u;
            goto label_3484e0;
        }
    }
    ctx->pc = 0x3484C4u;
label_3484c4:
    // 0x3484c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3484c8:
    if (ctx->pc == 0x3484C8u) {
        ctx->pc = 0x3484C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484C4u;
        // 0x3484c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484CCu;
        goto label_3484cc;
    }
    ctx->pc = 0x3484C4u;
    {
        const bool branch_taken_0x3484c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484c4) {
            ctx->pc = 0x3484C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3484C4u;
            // 0x3484c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3484E4u;
            goto label_3484e4;
        }
    }
    ctx->pc = 0x3484CCu;
label_3484cc:
    // 0x3484cc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3484ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3484d0:
    // 0x3484d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3484d4:
    if (ctx->pc == 0x3484D4u) {
        ctx->pc = 0x3484D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484D0u;
        // 0x3484d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484D8u;
        goto label_3484d8;
    }
    ctx->pc = 0x3484D0u;
    {
        const bool branch_taken_0x3484d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484d0) {
            ctx->pc = 0x3484D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3484D0u;
            // 0x3484d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3484E4u;
            goto label_3484e4;
        }
    }
    ctx->pc = 0x3484D8u;
label_3484d8:
    // 0x3484d8: 0x40f809  jalr        $v0
label_3484dc:
    if (ctx->pc == 0x3484DCu) {
        ctx->pc = 0x3484DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484D8u;
        // 0x3484dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484E0u;
        goto label_3484e0;
    }
    ctx->pc = 0x3484D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3484E0u);
        ctx->pc = 0x3484DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484D8u;
        // 0x3484dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3484D8u, 0x3484E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3484E0u;
label_3484e0:
    // 0x3484e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3484e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3484e4:
    // 0x3484e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3484e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3484e8:
    // 0x3484e8: 0x3e00008  jr          $ra
label_3484ec:
    if (ctx->pc == 0x3484ECu) {
        ctx->pc = 0x3484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484E8u;
        // 0x3484ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3484F0u;
        goto label_fallthrough_0x3484e8;
    }
    ctx->pc = 0x3484E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484E8u;
        // 0x3484ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3484E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3484e8:
    ctx->pc = 0x3484F0u;
}
