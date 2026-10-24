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

// Function: func_002DBFB0
// Address: 0x2dbfb0 - 0x2dc078
void func_002DBFB0_0x2dbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBFB0_0x2dbfb0");
#endif

    switch (ctx->pc) {
        case 0x2dbfc4u: goto label_2dbfc4;
        case 0x2dbfdcu: goto label_2dbfdc;
        case 0x2dc000u: goto label_2dc000;
        case 0x2dc010u: goto label_2dc010;
        case 0x2dc03cu: goto label_2dc03c;
        case 0x2dc068u: goto label_2dc068;
        default: break;
    }

    ctx->pc = 0x2dbfb0u;

    // 0x2dbfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbfb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbfbc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBFBCu;
    SET_GPR_U32(ctx, 31, 0x2DBFC4u);
    ctx->pc = 0x2DBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFBCu;
    // 0x2dbfc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBFBCu, 0x2DBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFC4u;
label_2dbfc4:
    // 0x2dbfc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfc8: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dbfcc: 0x58400027  blezl       $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DBFCCu;
    {
        const bool branch_taken_0x2dbfcc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbfcc) {
            ctx->pc = 0x2DBFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFCCu;
            // 0x2dbfd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DBFD4u;
    // 0x2dbfd4: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBFD4u;
    SET_GPR_U32(ctx, 31, 0x2DBFDCu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBFD4u, 0x2DBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFDCu;
label_2dbfdc:
    // 0x2dbfdc: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DBFDCu;
    {
        const bool branch_taken_0x2dbfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfdc) {
            ctx->pc = 0x2DBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFDCu;
            // 0x2dbfe0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DBFE4u;
    // 0x2dbfe4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbfe8: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbfec: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbff0: 0x5c60001e  bgtzl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DBFF0u;
    {
        const bool branch_taken_0x2dbff0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbff0) {
            ctx->pc = 0x2DBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFF0u;
            // 0x2dbff4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DBFF8u;
    // 0x2dbff8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBFF8u;
    SET_GPR_U32(ctx, 31, 0x2DC000u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBFF8u, 0x2DC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC000u;
label_2dc000:
    // 0x2dc000: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC000u;
    {
        const bool branch_taken_0x2dc000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc000) {
            ctx->pc = 0x2DC004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC000u;
            // 0x2dc004: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DC008u;
    // 0x2dc008: 0xc0b6df8  jal         func_2DB7E0
    ctx->pc = 0x2DC008u;
    SET_GPR_U32(ctx, 31, 0x2DC010u);
    ctx->pc = 0x2DC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC008u;
    // 0x2dc00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7E0u, 0x2DC008u, 0x2DC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC010u;
label_2dc010:
    // 0x2dc010: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC010u;
    {
        const bool branch_taken_0x2dc010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC010u;
        // 0x2dc014: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc010) {
            ctx->pc = 0x2DC044u;
            goto label_2dc044;
        }
    }
    ctx->pc = 0x2DC018u;
    // 0x2dc018: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc018u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc01c: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc020: 0x2508c078  addiu       $t0, $t0, -0x3F88
    ctx->pc = 0x2dc020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951032));
    // 0x2dc024: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dc024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dc028: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2dc028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dc02c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc030: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc034: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC034u;
    SET_GPR_U32(ctx, 31, 0x2DC03Cu);
    ctx->pc = 0x2DC038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC034u;
    // 0x2dc038: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC034u, 0x2DC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC03Cu;
label_2dc03c:
    // 0x2dc03c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC03Cu;
    {
        const bool branch_taken_0x2dc03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC03Cu;
        // 0x2dc040: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc03c) {
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DC044u;
label_2dc044:
    // 0x2dc044: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc048: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc04c: 0x2508c078  addiu       $t0, $t0, -0x3F88
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951032));
    // 0x2dc050: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dc050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc054: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2dc054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dc058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc05c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc060: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC060u;
    SET_GPR_U32(ctx, 31, 0x2DC068u);
    ctx->pc = 0x2DC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC060u;
    // 0x2dc064: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC060u, 0x2DC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC068u;
label_2dc068:
    // 0x2dc068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc06c:
    // 0x2dc06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc070: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC070u;
        // 0x2dc074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC078u;
}
