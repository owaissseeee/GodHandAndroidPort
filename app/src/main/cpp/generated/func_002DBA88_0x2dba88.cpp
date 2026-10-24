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

// Function: func_002DBA88
// Address: 0x2dba88 - 0x2dbb08
void func_002DBA88_0x2dba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBA88_0x2dba88");
#endif

    switch (ctx->pc) {
        case 0x2dba9cu: goto label_2dba9c;
        case 0x2dbab4u: goto label_2dbab4;
        case 0x2dbad8u: goto label_2dbad8;
        default: break;
    }

    ctx->pc = 0x2dba88u;

    // 0x2dba88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dba8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dba90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dba94: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBA94u;
    SET_GPR_U32(ctx, 31, 0x2DBA9Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBA94u, 0x2DBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA9Cu;
label_2dba9c:
    // 0x2dba9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbaa0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dbaa4: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBAA4u;
    {
        const bool branch_taken_0x2dbaa4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbaa4) {
            ctx->pc = 0x2DBAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBAA4u;
            // 0x2dbaa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAF8u;
            goto label_2dbaf8;
        }
    }
    ctx->pc = 0x2DBAACu;
    // 0x2dbaac: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBAACu;
    SET_GPR_U32(ctx, 31, 0x2DBAB4u);
    ctx->pc = 0x2DBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBAACu;
    // 0x2dbab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBAACu, 0x2DBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAB4u;
label_2dbab4:
    // 0x2dbab4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBAB4u;
    {
        const bool branch_taken_0x2dbab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbab4) {
            ctx->pc = 0x2DBAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBAB4u;
            // 0x2dbab8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAF8u;
            goto label_2dbaf8;
        }
    }
    ctx->pc = 0x2DBABCu;
    // 0x2dbabc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbac0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbac4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbac8: 0x5c60000b  bgtzl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBAC8u;
    {
        const bool branch_taken_0x2dbac8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbac8) {
            ctx->pc = 0x2DBACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBAC8u;
            // 0x2dbacc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAF8u;
            goto label_2dbaf8;
        }
    }
    ctx->pc = 0x2DBAD0u;
    // 0x2dbad0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBAD0u;
    SET_GPR_U32(ctx, 31, 0x2DBAD8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBAD0u, 0x2DBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAD8u;
label_2dbad8:
    // 0x2dbad8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBAD8u;
    {
        const bool branch_taken_0x2dbad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbad8) {
            ctx->pc = 0x2DBADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBAD8u;
            // 0x2dbadc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAF8u;
            goto label_2dbaf8;
        }
    }
    ctx->pc = 0x2DBAE0u;
    // 0x2dbae0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2dbae4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbae8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dbae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbaec: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dbaecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbaf0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dbaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbaf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbaf8:
    // 0x2dbaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbafc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAFCu;
        // 0x2dbb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB04u;
    // 0x2dbb04: 0x0  nop
    ctx->pc = 0x2dbb04u;
    // NOP
    ctx->pc = 0x2dbb08u;
}
