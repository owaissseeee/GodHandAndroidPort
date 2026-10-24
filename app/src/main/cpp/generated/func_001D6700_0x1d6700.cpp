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
void func_001D6700_0x1d6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6700_0x1d6700");
#endif

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

    ctx->pc = 0x1d6700u;

    // 0x1d6700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6704: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d6704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d670c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d670cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d6710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6714u;
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
    ctx->pc = 0x1D6720u;
    // 0x1d6720: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d6720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d6724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6728: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x1d672c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d672cu;
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
    ctx->pc = 0x1D673Cu;
label_1d673c:
    // 0x1d673c: 0x26240b84  addiu       $a0, $s1, 0xB84
    ctx->pc = 0x1d673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6740: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6740u;
    SET_GPR_U32(ctx, 31, 0x1D6748u);
    ctx->pc = 0x1D6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6740u;
    // 0x1d6744: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6740u, 0x1D6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6748u;
label_1d6748:
    // 0x1d6748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1d674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d6750: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6750u;
    SET_GPR_U32(ctx, 31, 0x1D6758u);
    ctx->pc = 0x1D6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6750u;
    // 0x1d6754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6750u, 0x1D6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6758u;
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
    ctx->pc = 0x1D6760u;
label_1d6760:
    // 0x1d6760: 0x26240b84  addiu       $a0, $s1, 0xB84
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6764: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6764u;
    SET_GPR_U32(ctx, 31, 0x1D676Cu);
    ctx->pc = 0x1D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6764u;
    // 0x1d6768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6764u, 0x1D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676Cu;
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
    ctx->pc = 0x1D6774u;
label_1d6774:
    // 0x1d6774: 0x26240b84  addiu       $a0, $s1, 0xB84
    ctx->pc = 0x1d6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6778: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1d6778u;
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
    ctx->pc = 0x1D6784u;
label_1d6784:
    // 0x1d6784: 0x26240b84  addiu       $a0, $s1, 0xB84
    ctx->pc = 0x1d6784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d6788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d678c: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d6790:
    // 0x1d6790: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D6790u;
    SET_GPR_U32(ctx, 31, 0x1D6798u);
    ctx->pc = 0x1D6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6790u;
    // 0x1d6794: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D6790u, 0x1D6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6798u;
label_1d6798:
    // 0x1d6798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d679c:
    // 0x1d679c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1d679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d67a0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D67A0u;
    SET_GPR_U32(ctx, 31, 0x1D67A8u);
    ctx->pc = 0x1D67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A0u;
    // 0x1d67a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D67A0u, 0x1D67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A8u;
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
    ctx->pc = 0x1D67B0u;
label_1d67b0:
    // 0x1d67b0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d67b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d67b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d67b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d67b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d67bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d67c0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d67c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d67c4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d67c8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d67c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d67cc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d67ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d67d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d67d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d67d4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d67d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d67d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d67d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d67dc: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d67e0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d67e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d67e4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d67e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d67e8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d67e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d67ec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d67f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d67f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d67f4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d67f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d67f8: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d67f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d67fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d6800: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6804: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6808: 0x26300b84  addiu       $s0, $s1, 0xB84
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x1d680c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d680cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6810: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6818: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D6818u;
    SET_GPR_U32(ctx, 31, 0x1D6820u);
    ctx->pc = 0x1D681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6818u;
    // 0x1d681c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D6818u, 0x1D6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6820u;
label_1d6820:
    // 0x1d6820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6824: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6824u;
    SET_GPR_U32(ctx, 31, 0x1D682Cu);
    ctx->pc = 0x1D6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6824u;
    // 0x1d6828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6824u, 0x1D682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D682Cu;
label_1d682c:
    // 0x1d682c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d682cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6830: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1d6830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d6834: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6834u;
    SET_GPR_U32(ctx, 31, 0x1D683Cu);
    ctx->pc = 0x1D6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6834u;
    // 0x1d6838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6834u, 0x1D683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D683Cu;
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
