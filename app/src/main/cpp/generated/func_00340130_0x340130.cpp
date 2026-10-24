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

// Function: func_00340130
// Address: 0x340130 - 0x3401f0
void func_00340130_0x340130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340130_0x340130");
#endif

    switch (ctx->pc) {
        case 0x340158u: goto label_340158;
        case 0x340178u: goto label_340178;
        case 0x3401a0u: goto label_3401a0;
        case 0x3401b4u: goto label_3401b4;
        default: break;
    }

    ctx->pc = 0x340130u;

    // 0x340130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340134: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x340138: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x340138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34013c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340140: 0x2450bc20  addiu       $s0, $v0, -0x43E0
    ctx->pc = 0x340140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x340144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x340148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34014c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340150: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x340150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340154: 0x0  nop
    ctx->pc = 0x340154u;
    // NOP
label_340158:
    // 0x340158: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x340158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x34015c: 0x54720009  bnel        $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x34015Cu;
    {
        const bool branch_taken_0x34015c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x34015c) {
            ctx->pc = 0x340160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34015Cu;
            // 0x340160: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340184u;
            goto label_340184;
        }
    }
    ctx->pc = 0x340164u;
    // 0x340164: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x340164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x340168: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x340168u;
    {
        const bool branch_taken_0x340168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x340168) {
            ctx->pc = 0x34016Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340168u;
            // 0x34016c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340184u;
            goto label_340184;
        }
    }
    ctx->pc = 0x340170u;
    // 0x340170: 0xc0ec010  jal         func_3B0040
    ctx->pc = 0x340170u;
    SET_GPR_U32(ctx, 31, 0x340178u);
    ctx->pc = 0x340174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340170u;
    // 0x340174: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x340170u, 0x340178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340178u;
label_340178:
    // 0x340178: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x340178u;
    {
        const bool branch_taken_0x340178 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x340178) {
            ctx->pc = 0x34017Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340178u;
            // 0x34017c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3401D8u;
            goto label_3401d8;
        }
    }
    ctx->pc = 0x340180u;
    // 0x340180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x340180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_340184:
    // 0x340184: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x340184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x340188: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x340188u;
    {
        const bool branch_taken_0x340188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340188u;
        // 0x34018c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340188) {
            ctx->pc = 0x340158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340158;
        }
    }
    ctx->pc = 0x340190u;
    // 0x340190: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x340194: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x340194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340198: 0x2450bc20  addiu       $s0, $v0, -0x43E0
    ctx->pc = 0x340198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x34019c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x34019cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3401a0:
    // 0x3401a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3401a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3401a4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3401A4u;
    {
        const bool branch_taken_0x3401a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3401a4) {
            ctx->pc = 0x3401A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401A4u;
            // 0x3401a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3401B8u;
            goto label_3401b8;
        }
    }
    ctx->pc = 0x3401ACu;
    // 0x3401ac: 0xc0cff70  jal         func_33FDC0
    ctx->pc = 0x3401ACu;
    SET_GPR_U32(ctx, 31, 0x3401B4u);
    ctx->pc = 0x3401B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401ACu;
    // 0x3401b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FDC0u, 0x3401ACu, 0x3401B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401B4u;
label_3401b4:
    // 0x3401b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3401b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3401b8:
    // 0x3401b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3401B8u;
    {
        const bool branch_taken_0x3401b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3401BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401B8u;
        // 0x3401bc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401b8) {
            ctx->pc = 0x3401A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3401a0;
        }
    }
    ctx->pc = 0x3401C0u;
    // 0x3401c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3401c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3401c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3401c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3401c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3401c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3401ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3401d0: 0x80cc9de  j           func_332778
    ctx->pc = 0x3401D0u;
    ctx->pc = 0x3401D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401D0u;
    // 0x3401d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332778u, 0x3401D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3401D8u;
label_3401d8:
    // 0x3401d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3401d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3401dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3401dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3401e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3401e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3401E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3401E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401E4u;
        // 0x3401e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3401E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3401ECu;
    // 0x3401ec: 0x0  nop
    ctx->pc = 0x3401ecu;
    // NOP
    ctx->pc = 0x3401f0u;
}
