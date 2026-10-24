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

// Function: func_002DBF20
// Address: 0x2dbf20 - 0x2dbfb0
void func_002DBF20_0x2dbf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBF20_0x2dbf20");
#endif

    switch (ctx->pc) {
        case 0x2dbf34u: goto label_2dbf34;
        case 0x2dbf4cu: goto label_2dbf4c;
        case 0x2dbf70u: goto label_2dbf70;
        case 0x2dbf9cu: goto label_2dbf9c;
        default: break;
    }

    ctx->pc = 0x2dbf20u;

    // 0x2dbf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbf24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbf2c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF34u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBF2Cu, 0x2DBF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF34u;
label_2dbf34:
    // 0x2dbf34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf38: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dbf3c: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DBF3Cu;
    {
        const bool branch_taken_0x2dbf3c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbf3c) {
            ctx->pc = 0x2DBF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF3Cu;
            // 0x2dbf40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFA0u;
            goto label_2dbfa0;
        }
    }
    ctx->pc = 0x2DBF44u;
    // 0x2dbf44: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBF44u;
    SET_GPR_U32(ctx, 31, 0x2DBF4Cu);
    ctx->pc = 0x2DBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF44u;
    // 0x2dbf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBF44u, 0x2DBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF4Cu;
label_2dbf4c:
    // 0x2dbf4c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBF4Cu;
    {
        const bool branch_taken_0x2dbf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf4c) {
            ctx->pc = 0x2DBF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF4Cu;
            // 0x2dbf50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFA0u;
            goto label_2dbfa0;
        }
    }
    ctx->pc = 0x2DBF54u;
    // 0x2dbf54: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbf58: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbf5c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbf60: 0x5c60000f  bgtzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DBF60u;
    {
        const bool branch_taken_0x2dbf60 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbf60) {
            ctx->pc = 0x2DBF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF60u;
            // 0x2dbf64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFA0u;
            goto label_2dbfa0;
        }
    }
    ctx->pc = 0x2DBF68u;
    // 0x2dbf68: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBF68u;
    SET_GPR_U32(ctx, 31, 0x2DBF70u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBF68u, 0x2DBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF70u;
label_2dbf70:
    // 0x2dbf70: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBF70u;
    {
        const bool branch_taken_0x2dbf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf70) {
            ctx->pc = 0x2DBF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF70u;
            // 0x2dbf74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFA0u;
            goto label_2dbfa0;
        }
    }
    ctx->pc = 0x2DBF78u;
    // 0x2dbf78: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2dbf7c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dbf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbf80: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dbf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf88: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dbf88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbf8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf90: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dbf90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbf94: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2DBF94u;
    SET_GPR_U32(ctx, 31, 0x2DBF9Cu);
    ctx->pc = 0x2DBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF94u;
    // 0x2dbf98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2DBF94u, 0x2DBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF9Cu;
label_2dbf9c:
    // 0x2dbf9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbfa0:
    // 0x2dbfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFA4u;
        // 0x2dbfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBFACu;
    // 0x2dbfac: 0x0  nop
    ctx->pc = 0x2dbfacu;
    // NOP
    ctx->pc = 0x2dbfb0u;
}
