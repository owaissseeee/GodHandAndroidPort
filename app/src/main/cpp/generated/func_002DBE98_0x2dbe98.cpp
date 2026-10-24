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

// Function: func_002DBE98
// Address: 0x2dbe98 - 0x2dbf20
void func_002DBE98_0x2dbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBE98_0x2dbe98");
#endif

    switch (ctx->pc) {
        case 0x2dbea8u: goto label_2dbea8;
        case 0x2dbec0u: goto label_2dbec0;
        case 0x2dbee4u: goto label_2dbee4;
        case 0x2dbf14u: goto label_2dbf14;
        default: break;
    }

    ctx->pc = 0x2dbe98u;

    // 0x2dbe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbe9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbea0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBEA0u;
    SET_GPR_U32(ctx, 31, 0x2DBEA8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBEA0u, 0x2DBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEA8u;
label_2dbea8:
    // 0x2dbea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbeac: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dbeb0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBEB0u;
    {
        const bool branch_taken_0x2dbeb0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEB0u;
        // 0x2dbeb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbeb0) {
            ctx->pc = 0x2DBF18u;
            goto label_2dbf18;
        }
    }
    ctx->pc = 0x2DBEB8u;
    // 0x2dbeb8: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBEB8u;
    SET_GPR_U32(ctx, 31, 0x2DBEC0u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBEB8u, 0x2DBEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEC0u;
label_2dbec0:
    // 0x2dbec0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBEC0u;
    {
        const bool branch_taken_0x2dbec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEC0u;
        // 0x2dbec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbec0) {
            ctx->pc = 0x2DBF18u;
            goto label_2dbf18;
        }
    }
    ctx->pc = 0x2DBEC8u;
    // 0x2dbec8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbecc: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbed0: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbed4: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBED4u;
    {
        const bool branch_taken_0x2dbed4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbed4) {
            ctx->pc = 0x2DBF18u;
            goto label_2dbf18;
        }
    }
    ctx->pc = 0x2DBEDCu;
    // 0x2dbedc: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBEDCu;
    SET_GPR_U32(ctx, 31, 0x2DBEE4u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBEDCu, 0x2DBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEE4u;
label_2dbee4:
    // 0x2dbee4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBEE4u;
    {
        const bool branch_taken_0x2dbee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEE4u;
        // 0x2dbee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbee4) {
            ctx->pc = 0x2DBF18u;
            goto label_2dbf18;
        }
    }
    ctx->pc = 0x2DBEECu;
    // 0x2dbeec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dbef0: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dbef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dbef4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dbef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dbef8: 0x2508bf20  addiu       $t0, $t0, -0x40E0
    ctx->pc = 0x2dbef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950688));
    // 0x2dbefc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dbefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dbf00: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbf04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dbf04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dbf08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf0c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBF0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF14u);
    ctx->pc = 0x2DBF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF0Cu;
    // 0x2dbf10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBF0Cu, 0x2DBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF14u;
label_2dbf14:
    // 0x2dbf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbf18:
    // 0x2dbf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF18u;
        // 0x2dbf1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBF20u;
}
