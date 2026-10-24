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

// Function: func_002DD9F0
// Address: 0x2dd9f0 - 0x2ddab0
void func_002DD9F0_0x2dd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD9F0_0x2dd9f0");
#endif

    switch (ctx->pc) {
        case 0x2dda08u: goto label_2dda08;
        case 0x2dda24u: goto label_2dda24;
        case 0x2dda48u: goto label_2dda48;
        case 0x2dda88u: goto label_2dda88;
        case 0x2dda98u: goto label_2dda98;
        default: break;
    }

    ctx->pc = 0x2dd9f0u;

    // 0x2dd9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd9f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dda00: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DDA00u;
    SET_GPR_U32(ctx, 31, 0x2DDA08u);
    ctx->pc = 0x2DDA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA00u;
    // 0x2dda04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DDA00u, 0x2DDA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA08u;
label_2dda08:
    // 0x2dda08: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DDA08u;
    {
        const bool branch_taken_0x2dda08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA08u;
        // 0x2dda0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda08) {
            ctx->pc = 0x2DDA98u;
            goto label_2dda98;
        }
    }
    ctx->pc = 0x2DDA10u;
    // 0x2dda10: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dda10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dda14: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DDA14u;
    {
        const bool branch_taken_0x2dda14 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dda14) {
            ctx->pc = 0x2DDA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA14u;
            // 0x2dda18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA1Cu;
    // 0x2dda1c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DDA1Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA24u);
    ctx->pc = 0x2DDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA1Cu;
    // 0x2dda20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DDA1Cu, 0x2DDA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA24u;
label_2dda24:
    // 0x2dda24: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DDA24u;
    {
        const bool branch_taken_0x2dda24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dda24) {
            ctx->pc = 0x2DDA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA24u;
            // 0x2dda28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA2Cu;
    // 0x2dda2c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dda30: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dda34: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dda34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dda38: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DDA38u;
    {
        const bool branch_taken_0x2dda38 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dda38) {
            ctx->pc = 0x2DDA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA38u;
            // 0x2dda3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA40u;
    // 0x2dda40: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DDA40u;
    SET_GPR_U32(ctx, 31, 0x2DDA48u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DDA40u, 0x2DDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA48u;
label_2dda48:
    // 0x2dda48: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DDA48u;
    {
        const bool branch_taken_0x2dda48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dda48) {
            ctx->pc = 0x2DDA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA48u;
            // 0x2dda4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA50u;
    // 0x2dda50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dda50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dda54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dda54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dda5c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2dda60: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dda60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dda64: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dda64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dda68: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dda68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dda6c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dda70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dda70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dda74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda78: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dda78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dda7c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dda7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dda80: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DDA80u;
    SET_GPR_U32(ctx, 31, 0x2DDA88u);
    ctx->pc = 0x2DDA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA80u;
    // 0x2dda84: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DDA80u, 0x2DDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA88u;
label_2dda88:
    // 0x2dda88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dda88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dda8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda90: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DDA90u;
    SET_GPR_U32(ctx, 31, 0x2DDA98u);
    ctx->pc = 0x2DDA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA90u;
    // 0x2dda94: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DDA90u, 0x2DDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA98u;
label_2dda98:
    // 0x2dda98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dda98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dda9c:
    // 0x2dda9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dda9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAA4u;
        // 0x2ddaa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDAACu;
    // 0x2ddaac: 0x0  nop
    ctx->pc = 0x2ddaacu;
    // NOP
    ctx->pc = 0x2ddab0u;
}
