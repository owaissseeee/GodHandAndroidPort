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

// Function: func_00327370
// Address: 0x327370 - 0x327418
void func_00327370_0x327370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327370_0x327370");
#endif

    switch (ctx->pc) {
        case 0x327394u: goto label_327394;
        case 0x32739cu: goto label_32739c;
        case 0x3273a4u: goto label_3273a4;
        case 0x3273bcu: goto label_3273bc;
        case 0x3273d8u: goto label_3273d8;
        case 0x3273ecu: goto label_3273ec;
        case 0x3273f4u: goto label_3273f4;
        default: break;
    }

    ctx->pc = 0x327370u;

    // 0x327370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32737c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327380: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x327380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x327384: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x327384u;
    {
        const bool branch_taken_0x327384 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x327384) {
            ctx->pc = 0x327388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327384u;
            // 0x327388: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273A8u;
            goto label_3273a8;
        }
    }
    ctx->pc = 0x32738Cu;
    // 0x32738c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32738Cu;
    SET_GPR_U32(ctx, 31, 0x327394u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32738Cu, 0x327394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327394u;
label_327394:
    // 0x327394: 0xc0c9d06  jal         func_327418
    ctx->pc = 0x327394u;
    SET_GPR_U32(ctx, 31, 0x32739Cu);
    ctx->pc = 0x327398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327394u;
    // 0x327398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327418u, 0x327394u, 0x32739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32739Cu;
label_32739c:
    // 0x32739c: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x32739Cu;
    SET_GPR_U32(ctx, 31, 0x3273A4u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32739Cu, 0x3273A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273A4u;
label_3273a4:
    // 0x3273a4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3273a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3273a8:
    // 0x3273a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3273ac: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3273ACu;
    {
        const bool branch_taken_0x3273ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3273ac) {
            ctx->pc = 0x3273B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273ACu;
            // 0x3273b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273C8u;
            goto label_3273c8;
        }
    }
    ctx->pc = 0x3273B4u;
    // 0x3273b4: 0xc0c9cb0  jal         func_3272C0
    ctx->pc = 0x3273B4u;
    SET_GPR_U32(ctx, 31, 0x3273BCu);
    ctx->pc = 0x3273B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273B4u;
    // 0x3273b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3272C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3272C0u, 0x3273B4u, 0x3273BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273BCu;
label_3273bc:
    // 0x3273bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3273BCu;
    {
        const bool branch_taken_0x3273bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3273C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273BCu;
        // 0x3273c0: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273bc) {
            ctx->pc = 0x3273DCu;
            goto label_3273dc;
        }
    }
    ctx->pc = 0x3273C4u;
    // 0x3273c4: 0x0  nop
    ctx->pc = 0x3273c4u;
    // NOP
label_3273c8:
    // 0x3273c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3273C8u;
    {
        const bool branch_taken_0x3273c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3273c8) {
            ctx->pc = 0x3273CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273C8u;
            // 0x3273cc: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273DCu;
            goto label_3273dc;
        }
    }
    ctx->pc = 0x3273D0u;
    // 0x3273d0: 0xc0c9a24  jal         func_326890
    ctx->pc = 0x3273D0u;
    SET_GPR_U32(ctx, 31, 0x3273D8u);
    ctx->pc = 0x3273D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273D0u;
    // 0x3273d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326890u, 0x3273D0u, 0x3273D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273D8u;
label_3273d8:
    // 0x3273d8: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_3273dc:
    // 0x3273dc: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3273DCu;
    {
        const bool branch_taken_0x3273dc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3273dc) {
            ctx->pc = 0x3273E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273DCu;
            // 0x3273e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327408u;
            goto label_327408;
        }
    }
    ctx->pc = 0x3273E4u;
    // 0x3273e4: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x3273E4u;
    SET_GPR_U32(ctx, 31, 0x3273ECu);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x3273E4u, 0x3273ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273ECu;
label_3273ec:
    // 0x3273ec: 0xc0c9d5a  jal         func_327568
    ctx->pc = 0x3273ECu;
    SET_GPR_U32(ctx, 31, 0x3273F4u);
    ctx->pc = 0x3273F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273ECu;
    // 0x3273f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327568u, 0x3273ECu, 0x3273F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273F4u;
label_3273f4:
    // 0x3273f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3273f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3273f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3273f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3273fc: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x3273FCu;
    ctx->pc = 0x327400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273FCu;
    // 0x327400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x3273FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327404u;
    // 0x327404: 0x0  nop
    ctx->pc = 0x327404u;
    // NOP
label_327408:
    // 0x327408: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32740c: 0x3e00008  jr          $ra
    ctx->pc = 0x32740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32740Cu;
        // 0x327410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327414u;
    // 0x327414: 0x0  nop
    ctx->pc = 0x327414u;
    // NOP
    ctx->pc = 0x327418u;
}
