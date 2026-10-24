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

// Function: cBgmData_UpdateLoad
// Address: 0x2d0068 - 0x2d0128
void cBgmData_UpdateLoad_0x2d0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_UpdateLoad_0x2d0068");
#endif

    switch (ctx->pc) {
        case 0x2d0084u: goto label_2d0084;
        case 0x2d0094u: goto label_2d0094;
        case 0x2d00a4u: goto label_2d00a4;
        case 0x2d00b4u: goto label_2d00b4;
        case 0x2d00c4u: goto label_2d00c4;
        case 0x2d00ccu: goto label_2d00cc;
        case 0x2d00dcu: goto label_2d00dc;
        case 0x2d00ecu: goto label_2d00ec;
        case 0x2d00fcu: goto label_2d00fc;
        case 0x2d0114u: goto label_2d0114;
        default: break;
    }

    ctx->pc = 0x2d0068u;

    // 0x2d0068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d006c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d0070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d0074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d007c: 0xc0b40f4  jal         func_2D03D0
    ctx->pc = 0x2D007Cu;
    SET_GPR_U32(ctx, 31, 0x2D0084u);
    ctx->pc = 0x2D0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D007Cu;
    // 0x2d0080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03D0u, 0x2D007Cu, 0x2D0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0084u;
label_2d0084:
    // 0x2d0084: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0084u;
    {
        const bool branch_taken_0x2d0084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0084u;
        // 0x2d0088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0084) {
            ctx->pc = 0x2D0114u;
            goto label_2d0114;
        }
    }
    ctx->pc = 0x2D008Cu;
    // 0x2d008c: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D008Cu;
    SET_GPR_U32(ctx, 31, 0x2D0094u);
    ctx->pc = 0x2D0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D008Cu;
    // 0x2d0090: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D008Cu, 0x2D0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0094u;
label_2d0094:
    // 0x2d0094: 0x1051001f  beq         $v0, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0094u;
    {
        const bool branch_taken_0x2d0094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0094u;
        // 0x2d0098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0094) {
            ctx->pc = 0x2D0114u;
            goto label_2d0114;
        }
    }
    ctx->pc = 0x2D009Cu;
    // 0x2d009c: 0xc0b40f4  jal         func_2D03D0
    ctx->pc = 0x2D009Cu;
    SET_GPR_U32(ctx, 31, 0x2D00A4u);
    ctx->pc = 0x2D00A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D009Cu;
    // 0x2d00a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03D0u, 0x2D009Cu, 0x2D00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00A4u;
label_2d00a4:
    // 0x2d00a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D00A4u;
    {
        const bool branch_taken_0x2d00a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00A4u;
        // 0x2d00a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00a4) {
            ctx->pc = 0x2D00E4u;
            goto label_2d00e4;
        }
    }
    ctx->pc = 0x2D00ACu;
    // 0x2d00ac: 0xc0b40c6  jal         func_2D0318
    ctx->pc = 0x2D00ACu;
    SET_GPR_U32(ctx, 31, 0x2D00B4u);
    ctx->pc = 0x2D00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00ACu;
    // 0x2d00b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0318u, 0x2D00ACu, 0x2D00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00B4u;
label_2d00b4:
    // 0x2d00b4: 0x54510018  bnel        $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D00B4u;
    {
        const bool branch_taken_0x2d00b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d00b4) {
            ctx->pc = 0x2D00B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D00B4u;
            // 0x2d00b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0118u;
            goto label_2d0118;
        }
    }
    ctx->pc = 0x2D00BCu;
    // 0x2d00bc: 0xc0b40d8  jal         func_2D0360
    ctx->pc = 0x2D00BCu;
    SET_GPR_U32(ctx, 31, 0x2D00C4u);
    ctx->pc = 0x2D00C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00BCu;
    // 0x2d00c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0360u, 0x2D00BCu, 0x2D00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00C4u;
label_2d00c4:
    // 0x2d00c4: 0xc0b40fa  jal         func_2D03E8
    ctx->pc = 0x2D00C4u;
    SET_GPR_U32(ctx, 31, 0x2D00CCu);
    ctx->pc = 0x2D00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00C4u;
    // 0x2d00c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03E8u, 0x2D00C4u, 0x2D00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00CCu;
label_2d00cc:
    // 0x2d00cc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D00CCu;
    {
        const bool branch_taken_0x2d00cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d00cc) {
            ctx->pc = 0x2D00D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D00CCu;
            // 0x2d00d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0118u;
            goto label_2d0118;
        }
    }
    ctx->pc = 0x2D00D4u;
    // 0x2d00d4: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2D00D4u;
    SET_GPR_U32(ctx, 31, 0x2D00DCu);
    ctx->pc = 0x2D00D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00D4u;
    // 0x2d00d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2D00D4u, 0x2D00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00DCu;
label_2d00dc:
    // 0x2d00dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D00DCu;
    {
        const bool branch_taken_0x2d00dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00DCu;
        // 0x2d00e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00dc) {
            ctx->pc = 0x2D0118u;
            goto label_2d0118;
        }
    }
    ctx->pc = 0x2D00E4u;
label_2d00e4:
    // 0x2d00e4: 0xc0b40f4  jal         func_2D03D0
    ctx->pc = 0x2D00E4u;
    SET_GPR_U32(ctx, 31, 0x2D00ECu);
    ctx->pc = 0x2D00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00E4u;
    // 0x2d00e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03D0u, 0x2D00E4u, 0x2D00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00ECu;
label_2d00ec:
    // 0x2d00ec: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D00ECu;
    {
        const bool branch_taken_0x2d00ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d00ec) {
            ctx->pc = 0x2D00F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D00ECu;
            // 0x2d00f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0118u;
            goto label_2d0118;
        }
    }
    ctx->pc = 0x2D00F4u;
    // 0x2d00f4: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x2D00F4u;
    SET_GPR_U32(ctx, 31, 0x2D00FCu);
    ctx->pc = 0x2D00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00F4u;
    // 0x2d00f8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x2D00F4u, 0x2D00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00FCu;
label_2d00fc:
    // 0x2d00fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0100: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0100u;
    {
        const bool branch_taken_0x2d0100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d0100) {
            ctx->pc = 0x2D0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0100u;
            // 0x2d0104: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0118u;
            goto label_2d0118;
        }
    }
    ctx->pc = 0x2D0108u;
    // 0x2d0108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d010c: 0xc0b40d4  jal         func_2D0350
    ctx->pc = 0x2D010Cu;
    SET_GPR_U32(ctx, 31, 0x2D0114u);
    ctx->pc = 0x2D0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D010Cu;
    // 0x2d0110: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0350u, 0x2D010Cu, 0x2D0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0114u;
label_2d0114:
    // 0x2d0114: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d0114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0118:
    // 0x2d0118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d011c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d011cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0120: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0120u;
        // 0x2d0124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0128u;
}
