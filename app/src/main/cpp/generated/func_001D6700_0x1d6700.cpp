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

// Function: func_001D6700
// Address: 0x1d6700 - 0x1d6850
void func_001D6700_0x1d6700(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6700_0x1d6700");
#endif

    if (__builtin_expect(ctx->pc != 0x1d6700u, 0)) {
        switch (ctx->pc) {
            case 0x1d6748u: goto label_1d6748;
            case 0x1d6758u: goto label_1d6758;
            case 0x1d676cu: goto label_1d676c;
            case 0x1d6798u: goto label_1d6798;
            case 0x1d67a8u: goto label_1d67a8;
            case 0x1d6820u: goto label_1d6820;
            case 0x1d682cu: goto label_1d682c;
            case 0x1d683cu: goto label_1d683c;
            default: break;
        }
    }


    // 0x1d6700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6704: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d670c: 0x2c620005  sltiu       $v0, $v1, 0x5
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d6710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6714: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6718u;
    {
        const bool branch_taken_0x1d6718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6718u;
        // 0x1d671c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6718) {
            ctx->pc = 0x1D673Cu;
            goto label_1d673c;
        }
    }
    // 0x1d6720: 0x3c020043  lui         $v0, 0x43
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d6724: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6728: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x1d672c: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6734: 0x800008  jr          $a0
    ctx->pc = 0x1D6734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D673Cu: goto label_1d673c;
            case 0x1D6760u: goto label_1d6760;
            case 0x1D6774u: goto label_1d6774;
            case 0x1D6784u: goto label_1d6784;
            case 0x1D67B0u: goto label_1d67b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6734u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_1d673c:
    // 0x1d673c: 0x26240b84  addiu       $a0, $s1, 0xB84
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6740: 0xc0b59b4  jal         func_2D66D0
    SET_GPR_U32(ctx, 31, 0x1D6748u);
    ctx->pc = 0x1D6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6740u;
    // 0x1d6744: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetOffsetPosX_0x2d66d0, 0x2d66d0u, 0x1d6748u)) {
        return;
    }
label_1d6748:
    // 0x1d6748: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674c: 0x24050017  addiu       $a1, $zero, 0x17
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d6750: 0xc07546e  jal         func_1D51B8
    SET_GPR_U32(ctx, 31, 0x1D6758u);
    ctx->pc = 0x1D6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6750u;
    // 0x1d6754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetFlagOnEntries7C_1D51B8_0x1d51b8, 0x1d51b8u, 0x1d6758u)) {
        return;
    }
label_1d6758:
    // 0x1d6758: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D6758u;
    {
        const bool branch_taken_0x1d6758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6758u;
        // 0x1d675c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6758) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
label_1d6760:
    // 0x1d6760: 0x26240b84  addiu       $a0, $s1, 0xB84
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6764: 0xc0b59b4  jal         func_2D66D0
    SET_GPR_U32(ctx, 31, 0x1D676Cu);
    ctx->pc = 0x1D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6764u;
    // 0x1d6768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetOffsetPosX_0x2d66d0, 0x2d66d0u, 0x1d676cu)) {
        return;
    }
label_1d676c:
    // 0x1d676c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D676Cu;
    {
        const bool branch_taken_0x1d676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D676Cu;
        // 0x1d6770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d676c) {
            ctx->pc = 0x1D679Cu;
            goto label_1d679c;
        }
    }
label_1d6774:
    // 0x1d6774: 0x26240b84  addiu       $a0, $s1, 0xB84
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6778: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1d677c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D677Cu;
    {
        const bool branch_taken_0x1d677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D677Cu;
        // 0x1d6780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d677c) {
            ctx->pc = 0x1D6790u;
            goto label_1d6790;
        }
    }
label_1d6784:
    // 0x1d6784: 0x26240b84  addiu       $a0, $s1, 0xB84
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6788: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d678c: 0x240601c2  addiu       $a2, $zero, 0x1C2
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d6790:
    // 0x1d6790: 0xc0b59da  jal         func_2D6768
    SET_GPR_U32(ctx, 31, 0x1D6798u);
    ctx->pc = 0x1D6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6790u;
    // 0x1d6794: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetMoveOffsetPosX_0x2d6768, 0x2d6768u, 0x1d6798u)) {
        return;
    }
label_1d6798:
    // 0x1d6798: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d679c:
    // 0x1d679c: 0x24050017  addiu       $a1, $zero, 0x17
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d67a0: 0xc07546e  jal         func_1D51B8
    SET_GPR_U32(ctx, 31, 0x1D67A8u);
    ctx->pc = 0x1D67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A0u;
    // 0x1d67a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetFlagOnEntries7C_1D51B8_0x1d51b8, 0x1d51b8u, 0x1d67a8u)) {
        return;
    }
label_1d67a8:
    // 0x1d67a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D67A8u;
    {
        const bool branch_taken_0x1d67a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A8u;
        // 0x1d67ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67a8) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
label_1d67b0:
    // 0x1d67b0: 0x3c05ff00  lui         $a1, 0xFF00
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d67b4: 0x3c030080  lui         $v1, 0x80
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d67b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d67bc: 0x3c02ffff  lui         $v0, 0xFFFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d67c0: 0xc53024  and         $a2, $a2, $a1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d67c4: 0x344200ff  ori         $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d67c8: 0xe52824  and         $a1, $a3, $a1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d67cc: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d67d0: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d67d4: 0xa32825  or          $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d67d8: 0xa22824  and         $a1, $a1, $v0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d67dc: 0x2403ff00  addiu       $v1, $zero, -0x100
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d67e0: 0x34c68000  ori         $a2, $a2, 0x8000
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d67e4: 0x34a58000  ori         $a1, $a1, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d67e8: 0xc33024  and         $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d67ec: 0x3c0200ff  lui         $v0, 0xFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d67f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d67f4: 0xa32824  and         $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d67f8: 0x34c60080  ori         $a2, $a2, 0x80
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d67fc: 0x3c038000  lui         $v1, 0x8000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d6800: 0xc23024  and         $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6804: 0x34a50080  ori         $a1, $a1, 0x80
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6808: 0x26300b84  addiu       $s0, $s1, 0xB84
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d680c: 0xa22824  and         $a1, $a1, $v0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6810: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6814: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6818: 0xc0b5a36  jal         func_2D68D8
    SET_GPR_U32(ctx, 31, 0x1D6820u);
    ctx->pc = 0x1D681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6818u;
    // 0x1d681c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetColorAnimNormal_2D68D8_0x2d68d8, 0x2d68d8u, 0x1d6820u)) {
        return;
    }
label_1d6820:
    // 0x1d6820: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6824: 0xc0b59b4  jal         func_2D66D0
    SET_GPR_U32(ctx, 31, 0x1D682Cu);
    ctx->pc = 0x1D6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6824u;
    // 0x1d6828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetOffsetPosX_0x2d66d0, 0x2d66d0u, 0x1d682cu)) {
        return;
    }
label_1d682c:
    // 0x1d682c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6830: 0x24050017  addiu       $a1, $zero, 0x17
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d6834: 0xc07546e  jal         func_1D51B8
    SET_GPR_U32(ctx, 31, 0x1D683Cu);
    ctx->pc = 0x1D6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6834u;
    // 0x1d6838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetFlagOnEntries7C_1D51B8_0x1d51b8, 0x1d51b8u, 0x1d683cu)) {
        return;
    }
label_1d683c:
    // 0x1d683c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d683cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6840:
    // 0x1d6840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6848: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6848u;
        // 0x1d684c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6850u;
}