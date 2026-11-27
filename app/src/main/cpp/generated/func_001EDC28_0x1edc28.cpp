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

// Function: func_001EDC28
// Address: 0x1edc28 - 0x1edd90
void func_001EDC28_0x1edc28(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EDC28_0x1edc28");
#endif

    if (__builtin_expect(ctx->pc != 0x1edc28u, 0)) {
        switch (ctx->pc) {
            case 0x1edc70u: goto label_1edc70;
            case 0x1edc7cu: goto label_1edc7c;
            case 0x1edc8cu: goto label_1edc8c;
            case 0x1edca0u: goto label_1edca0;
            case 0x1edcacu: goto label_1edcac;
            case 0x1edd2cu: goto label_1edd2c;
            case 0x1edd40u: goto label_1edd40;
            case 0x1edd50u: goto label_1edd50;
            case 0x1edd68u: goto label_1edd68;
            case 0x1edd78u: goto label_1edd78;
            default: break;
        }
    }


    // 0x1edc28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edc2c: 0x30a500ff  andi        $a1, $a1, 0xFF
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1edc30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edc34: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1edc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1edc3c: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc40: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDC40u;
    {
        const bool branch_taken_0x1edc40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC40u;
        // 0x1edc44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc40) {
            ctx->pc = 0x1EDC94u;
            goto label_1edc94;
        }
    }
    // 0x1edc48: 0x28a20002  slti        $v0, $a1, 0x2
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1edc4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDC4Cu;
    {
        const bool branch_taken_0x1edc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC4Cu;
        // 0x1edc50: 0x26300250  addiu       $s0, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc4c) {
            ctx->pc = 0x1EDC68u;
            goto label_1edc68;
        }
    }
    // 0x1edc54: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edc58: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EDC58u;
    {
        const bool branch_taken_0x1edc58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC58u;
        // 0x1edc5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc58) {
            ctx->pc = 0x1EDCB4u;
            goto label_1edcb4;
        }
    }
    // 0x1edc60: 0x10a2003d  beq         $a1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1EDC60u;
    {
        const bool branch_taken_0x1edc60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC60u;
        // 0x1edc64: 0x26240250  addiu       $a0, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc60) {
            ctx->pc = 0x1EDD58u;
            goto label_1edd58;
        }
    }
label_1edc68:
    // 0x1edc68: 0xc0b5a52  jal         func_2D6948
    SET_GPR_U32(ctx, 31, 0x1EDC70u);
    ctx->pc = 0x1EDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC68u;
    // 0x1edc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_ResetColorAnim_0x2d6948, 0x2d6948u, 0x1edc70u)) {
        return;
    }
label_1edc70:
    // 0x1edc70: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc74: 0xc0b59b4  jal         func_2D66D0
    SET_GPR_U32(ctx, 31, 0x1EDC7Cu);
    ctx->pc = 0x1EDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC74u;
    // 0x1edc78: 0x2405fe70  addiu       $a1, $zero, -0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966896));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetOffsetPosX_0x2d66d0, 0x2d66d0u, 0x1edc7cu)) {
        return;
    }
label_1edc7c:
    // 0x1edc7c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc80: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edc84: 0xc07b5c0  jal         func_1ED700
    SET_GPR_U32(ctx, 31, 0x1EDC8Cu);
    ctx->pc = 0x1EDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC84u;
    // 0x1edc88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001ED700_0x1ed700, 0x1ed700u, 0x1edc8cu)) {
        return;
    }
label_1edc8c:
    // 0x1edc8c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1EDC8Cu;
    {
        const bool branch_taken_0x1edc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC8Cu;
        // 0x1edc90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc8c) {
            ctx->pc = 0x1EDD7Cu;
            goto label_1edd7c;
        }
    }
label_1edc94:
    // 0x1edc94: 0x26300250  addiu       $s0, $s1, 0x250
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1edc98: 0xc0b5a52  jal         func_2D6948
    SET_GPR_U32(ctx, 31, 0x1EDCA0u);
    ctx->pc = 0x1EDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC98u;
    // 0x1edc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_ResetColorAnim_0x2d6948, 0x2d6948u, 0x1edca0u)) {
        return;
    }
label_1edca0:
    // 0x1edca0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edca4: 0xc0b59b4  jal         func_2D66D0
    SET_GPR_U32(ctx, 31, 0x1EDCACu);
    ctx->pc = 0x1EDCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCA4u;
    // 0x1edca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetOffsetPosX_0x2d66d0, 0x2d66d0u, 0x1edcacu)) {
        return;
    }
label_1edcac:
    // 0x1edcac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EDCACu;
    {
        const bool branch_taken_0x1edcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCACu;
        // 0x1edcb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcac) {
            ctx->pc = 0x1EDD44u;
            goto label_1edd44;
        }
    }
label_1edcb4:
    // 0x1edcb4: 0x3c0700ff  lui         $a3, 0xFF
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x1edcb8: 0x2409ff00  addiu       $t1, $zero, -0x100
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1edcbc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1edcc0: 0x3c088000  lui         $t0, 0x8000
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1edcc4: 0x672824  and         $a1, $v1, $a3
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1edcc8: 0xc93024  and         $a2, $a2, $t1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x1edccc: 0x3c03ff00  lui         $v1, 0xFF00
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1edcd0: 0x3c04ffff  lui         $a0, 0xFFFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1edcd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1edcd8: 0x348400ff  ori         $a0, $a0, 0xFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1edcdc: 0xa82825  or          $a1, $a1, $t0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1edce0: 0x34c600d0  ori         $a2, $a2, 0xD0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)208);
    // 0x1edce4: 0xc43024  and         $a2, $a2, $a0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1edce8: 0xa32824  and         $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1edcec: 0x3c020080  lui         $v0, 0x80
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1edcf0: 0x34c6d000  ori         $a2, $a2, 0xD000
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x1edcf4: 0xa22825  or          $a1, $a1, $v0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1edcf8: 0xc33024  and         $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1edcfc: 0xa42824  and         $a1, $a1, $a0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1edd00: 0x3c0200d0  lui         $v0, 0xD0
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)208 << 16));
    // 0x1edd04: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1edd08: 0x34a58000  ori         $a1, $a1, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1edd0c: 0xc73024  and         $a2, $a2, $a3
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1edd10: 0xa92824  and         $a1, $a1, $t1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x1edd14: 0x26300250  addiu       $s0, $s1, 0x250
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1edd18: 0xc83025  or          $a2, $a2, $t0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1edd1c: 0x34a50080  ori         $a1, $a1, 0x80
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1edd20: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd24: 0xc0b5a44  jal         func_2D6910
    SET_GPR_U32(ctx, 31, 0x1EDD2Cu);
    ctx->pc = 0x1EDD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD24u;
    // 0x1edd28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetColorAnimSin_0x2d6910, 0x2d6910u, 0x1edd2cu)) {
        return;
    }
label_1edd2c:
    // 0x1edd2c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd30: 0x2405fe70  addiu       $a1, $zero, -0x190
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966896));
    // 0x1edd34: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd38: 0xc0b59da  jal         func_2D6768
    SET_GPR_U32(ctx, 31, 0x1EDD40u);
    ctx->pc = 0x1EDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD38u;
    // 0x1edd3c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetMoveOffsetPosX_0x2d6768, 0x2d6768u, 0x1edd40u)) {
        return;
    }
label_1edd40:
    // 0x1edd40: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edd44:
    // 0x1edd44: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edd48: 0xc07b5c0  jal         func_1ED700
    SET_GPR_U32(ctx, 31, 0x1EDD50u);
    ctx->pc = 0x1EDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD48u;
    // 0x1edd4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001ED700_0x1ed700, 0x1ed700u, 0x1edd50u)) {
        return;
    }
label_1edd50:
    // 0x1edd50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EDD50u;
    {
        const bool branch_taken_0x1edd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD50u;
        // 0x1edd54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd50) {
            ctx->pc = 0x1EDD7Cu;
            goto label_1edd7c;
        }
    }
label_1edd58:
    // 0x1edd58: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd5c: 0x24060190  addiu       $a2, $zero, 0x190
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1edd60: 0xc0b59da  jal         func_2D6768
    SET_GPR_U32(ctx, 31, 0x1EDD68u);
    ctx->pc = 0x1EDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD60u;
    // 0x1edd64: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetMoveOffsetPosX_0x2d6768, 0x2d6768u, 0x1edd68u)) {
        return;
    }
label_1edd68:
    // 0x1edd68: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd6c: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edd70: 0xc07b5c0  jal         func_1ED700
    SET_GPR_U32(ctx, 31, 0x1EDD78u);
    ctx->pc = 0x1EDD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD70u;
    // 0x1edd74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001ED700_0x1ed700, 0x1ed700u, 0x1edd78u)) {
        return;
    }
label_1edd78:
    // 0x1edd78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1edd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1edd7c:
    // 0x1edd7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1edd7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edd84: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD84u;
        // 0x1edd88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1edd8c: 0x0  nop
    // NOP
    ctx->pc = 0x1edd90u;
}