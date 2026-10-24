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

// Function: func_002DBCA0
// Address: 0x2dbca0 - 0x2dbd40
void func_002DBCA0_0x2dbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBCA0_0x2dbca0");
#endif

    switch (ctx->pc) {
        case 0x2dbcb8u: goto label_2dbcb8;
        case 0x2dbcd0u: goto label_2dbcd0;
        case 0x2dbcf4u: goto label_2dbcf4;
        case 0x2dbd2cu: goto label_2dbd2c;
        default: break;
    }

    ctx->pc = 0x2dbca0u;

    // 0x2dbca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dbca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dbcac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbcb0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBCB0u;
    SET_GPR_U32(ctx, 31, 0x2DBCB8u);
    ctx->pc = 0x2DBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCB0u;
    // 0x2dbcb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBCB0u, 0x2DBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCB8u;
label_2dbcb8:
    // 0x2dbcb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcbc: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dbcc0: 0x5840001b  blezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DBCC0u;
    {
        const bool branch_taken_0x2dbcc0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbcc0) {
            ctx->pc = 0x2DBCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCC0u;
            // 0x2dbcc4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD30u;
            goto label_2dbd30;
        }
    }
    ctx->pc = 0x2DBCC8u;
    // 0x2dbcc8: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBCC8u;
    SET_GPR_U32(ctx, 31, 0x2DBCD0u);
    ctx->pc = 0x2DBCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCC8u;
    // 0x2dbccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBCC8u, 0x2DBCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCD0u;
label_2dbcd0:
    // 0x2dbcd0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DBCD0u;
    {
        const bool branch_taken_0x2dbcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcd0) {
            ctx->pc = 0x2DBCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCD0u;
            // 0x2dbcd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD30u;
            goto label_2dbd30;
        }
    }
    ctx->pc = 0x2DBCD8u;
    // 0x2dbcd8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbcdc: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbce0: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbce4: 0x5c600012  bgtzl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DBCE4u;
    {
        const bool branch_taken_0x2dbce4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbce4) {
            ctx->pc = 0x2DBCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCE4u;
            // 0x2dbce8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD30u;
            goto label_2dbd30;
        }
    }
    ctx->pc = 0x2DBCECu;
    // 0x2dbcec: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBCECu;
    SET_GPR_U32(ctx, 31, 0x2DBCF4u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBCECu, 0x2DBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBCF4u;
label_2dbcf4:
    // 0x2dbcf4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2DBCF4u;
    {
        const bool branch_taken_0x2dbcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcf4) {
            ctx->pc = 0x2DBCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCF4u;
            // 0x2dbcf8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD30u;
            goto label_2dbd30;
        }
    }
    ctx->pc = 0x2DBCFCu;
    // 0x2dbcfc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2dbd00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dbd04: 0xae110640  sw          $s1, 0x640($s0)
    ctx->pc = 0x2dbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 17));
    // 0x2dbd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd0c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dbd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbd10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd14: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dbd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbd18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dbd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd1c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dbd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbd20: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dbd20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbd24: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2DBD24u;
    SET_GPR_U32(ctx, 31, 0x2DBD2Cu);
    ctx->pc = 0x2DBD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD24u;
    // 0x2dbd28: 0xa2030648  sb          $v1, 0x648($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2DBD24u, 0x2DBD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD2Cu;
label_2dbd2c:
    // 0x2dbd2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dbd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dbd30:
    // 0x2dbd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbd38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD38u;
        // 0x2dbd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBD40u;
}
