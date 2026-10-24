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

// Function: func_002DBD40
// Address: 0x2dbd40 - 0x2dbe08
void func_002DBD40_0x2dbd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBD40_0x2dbd40");
#endif

    switch (ctx->pc) {
        case 0x2dbd54u: goto label_2dbd54;
        case 0x2dbd6cu: goto label_2dbd6c;
        case 0x2dbd90u: goto label_2dbd90;
        case 0x2dbda0u: goto label_2dbda0;
        case 0x2dbdccu: goto label_2dbdcc;
        case 0x2dbdf8u: goto label_2dbdf8;
        default: break;
    }

    ctx->pc = 0x2dbd40u;

    // 0x2dbd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbd44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbd4c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD54u);
    ctx->pc = 0x2DBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD4Cu;
    // 0x2dbd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBD4Cu, 0x2DBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD54u;
label_2dbd54:
    // 0x2dbd54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd58: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dbd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dbd5c: 0x58400027  blezl       $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DBD5Cu;
    {
        const bool branch_taken_0x2dbd5c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbd5c) {
            ctx->pc = 0x2DBD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD5Cu;
            // 0x2dbd60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBDFCu;
            goto label_2dbdfc;
        }
    }
    ctx->pc = 0x2DBD64u;
    // 0x2dbd64: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBD64u;
    SET_GPR_U32(ctx, 31, 0x2DBD6Cu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBD64u, 0x2DBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD6Cu;
label_2dbd6c:
    // 0x2dbd6c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DBD6Cu;
    {
        const bool branch_taken_0x2dbd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd6c) {
            ctx->pc = 0x2DBD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD6Cu;
            // 0x2dbd70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBDFCu;
            goto label_2dbdfc;
        }
    }
    ctx->pc = 0x2DBD74u;
    // 0x2dbd74: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbd78: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbd7c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbd80: 0x5c60001e  bgtzl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DBD80u;
    {
        const bool branch_taken_0x2dbd80 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbd80) {
            ctx->pc = 0x2DBD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD80u;
            // 0x2dbd84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBDFCu;
            goto label_2dbdfc;
        }
    }
    ctx->pc = 0x2DBD88u;
    // 0x2dbd88: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBD88u;
    SET_GPR_U32(ctx, 31, 0x2DBD90u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBD88u, 0x2DBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD90u;
label_2dbd90:
    // 0x2dbd90: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DBD90u;
    {
        const bool branch_taken_0x2dbd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd90) {
            ctx->pc = 0x2DBD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBD90u;
            // 0x2dbd94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBDFCu;
            goto label_2dbdfc;
        }
    }
    ctx->pc = 0x2DBD98u;
    // 0x2dbd98: 0xc0b6df8  jal         func_2DB7E0
    ctx->pc = 0x2DBD98u;
    SET_GPR_U32(ctx, 31, 0x2DBDA0u);
    ctx->pc = 0x2DBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD98u;
    // 0x2dbd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7E0u, 0x2DBD98u, 0x2DBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDA0u;
label_2dbda0:
    // 0x2dbda0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBDA0u;
    {
        const bool branch_taken_0x2dbda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDA0u;
        // 0x2dbda4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbda0) {
            ctx->pc = 0x2DBDD4u;
            goto label_2dbdd4;
        }
    }
    ctx->pc = 0x2DBDA8u;
    // 0x2dbda8: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dbda8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dbdac: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dbdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dbdb0: 0x2508be08  addiu       $t0, $t0, -0x41F8
    ctx->pc = 0x2dbdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950408));
    // 0x2dbdb4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dbdb8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2dbdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbdbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dbdbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dbdc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdc4: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBDC4u;
    SET_GPR_U32(ctx, 31, 0x2DBDCCu);
    ctx->pc = 0x2DBDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDC4u;
    // 0x2dbdc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBDC4u, 0x2DBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDCCu;
label_2dbdcc:
    // 0x2dbdcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DBDCCu;
    {
        const bool branch_taken_0x2dbdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDCCu;
        // 0x2dbdd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdcc) {
            ctx->pc = 0x2DBDFCu;
            goto label_2dbdfc;
        }
    }
    ctx->pc = 0x2DBDD4u;
label_2dbdd4:
    // 0x2dbdd4: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dbdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dbdd8: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dbddc: 0x2508be08  addiu       $t0, $t0, -0x41F8
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950408));
    // 0x2dbde0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dbde4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2dbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbde8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dbde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dbdecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdf0: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBDF0u;
    SET_GPR_U32(ctx, 31, 0x2DBDF8u);
    ctx->pc = 0x2DBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDF0u;
    // 0x2dbdf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBDF0u, 0x2DBDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBDF8u;
label_2dbdf8:
    // 0x2dbdf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbdfc:
    // 0x2dbdfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE00u;
        // 0x2dbe04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE08u;
}
