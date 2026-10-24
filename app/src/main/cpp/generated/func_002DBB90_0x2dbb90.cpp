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

// Function: func_002DBB90
// Address: 0x2dbb90 - 0x2dbc10
void func_002DBB90_0x2dbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBB90_0x2dbb90");
#endif

    switch (ctx->pc) {
        case 0x2dbba4u: goto label_2dbba4;
        case 0x2dbbbcu: goto label_2dbbbc;
        case 0x2dbbe0u: goto label_2dbbe0;
        default: break;
    }

    ctx->pc = 0x2dbb90u;

    // 0x2dbb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbb94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbb9c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DBBA4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBB9Cu, 0x2DBBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBA4u;
label_2dbba4:
    // 0x2dbba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbba8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dbba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dbbac: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBBACu;
    {
        const bool branch_taken_0x2dbbac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbbac) {
            ctx->pc = 0x2DBBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBBACu;
            // 0x2dbbb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC00u;
            goto label_2dbc00;
        }
    }
    ctx->pc = 0x2DBBB4u;
    // 0x2dbbb4: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBBB4u;
    SET_GPR_U32(ctx, 31, 0x2DBBBCu);
    ctx->pc = 0x2DBBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBBB4u;
    // 0x2dbbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBBB4u, 0x2DBBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBBCu;
label_2dbbbc:
    // 0x2dbbbc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBBBCu;
    {
        const bool branch_taken_0x2dbbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbbc) {
            ctx->pc = 0x2DBBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBBBCu;
            // 0x2dbbc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC00u;
            goto label_2dbc00;
        }
    }
    ctx->pc = 0x2DBBC4u;
    // 0x2dbbc4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbbc8: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbbcc: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbbd0: 0x5c60000b  bgtzl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBBD0u;
    {
        const bool branch_taken_0x2dbbd0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbbd0) {
            ctx->pc = 0x2DBBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBBD0u;
            // 0x2dbbd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC00u;
            goto label_2dbc00;
        }
    }
    ctx->pc = 0x2DBBD8u;
    // 0x2dbbd8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBBD8u;
    SET_GPR_U32(ctx, 31, 0x2DBBE0u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBBD8u, 0x2DBBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBE0u;
label_2dbbe0:
    // 0x2dbbe0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBBE0u;
    {
        const bool branch_taken_0x2dbbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbe0) {
            ctx->pc = 0x2DBBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBBE0u;
            // 0x2dbbe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC00u;
            goto label_2dbc00;
        }
    }
    ctx->pc = 0x2DBBE8u;
    // 0x2dbbe8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2dbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2dbbec: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dbbecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbbf0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dbbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbbf4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dbbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbbf8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dbbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbbfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbc00:
    // 0x2dbc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbc04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC04u;
        // 0x2dbc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBC0Cu;
    // 0x2dbc0c: 0x0  nop
    ctx->pc = 0x2dbc0cu;
    // NOP
    ctx->pc = 0x2dbc10u;
}
