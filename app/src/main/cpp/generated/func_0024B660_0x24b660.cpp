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

// Function: func_0024B660
// Address: 0x24b660 - 0x24bb68
void func_0024B660_0x24b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024B660_0x24b660");
#endif

    switch (ctx->pc) {
        case 0x24b6d4u: goto label_24b6d4;
        case 0x24b700u: goto label_24b700;
        case 0x24b714u: goto label_24b714;
        case 0x24b728u: goto label_24b728;
        case 0x24b73cu: goto label_24b73c;
        case 0x24b768u: goto label_24b768;
        case 0x24b790u: goto label_24b790;
        case 0x24b79cu: goto label_24b79c;
        case 0x24b7c0u: goto label_24b7c0;
        case 0x24b7d4u: goto label_24b7d4;
        case 0x24b7e8u: goto label_24b7e8;
        case 0x24b7f0u: goto label_24b7f0;
        case 0x24b804u: goto label_24b804;
        case 0x24b830u: goto label_24b830;
        case 0x24b844u: goto label_24b844;
        case 0x24b858u: goto label_24b858;
        case 0x24b86cu: goto label_24b86c;
        case 0x24b878u: goto label_24b878;
        case 0x24b914u: goto label_24b914;
        case 0x24b920u: goto label_24b920;
        case 0x24b92cu: goto label_24b92c;
        case 0x24b938u: goto label_24b938;
        case 0x24b984u: goto label_24b984;
        case 0x24b998u: goto label_24b998;
        case 0x24b9acu: goto label_24b9ac;
        case 0x24b9d0u: goto label_24b9d0;
        case 0x24b9fcu: goto label_24b9fc;
        case 0x24ba10u: goto label_24ba10;
        case 0x24ba24u: goto label_24ba24;
        case 0x24ba38u: goto label_24ba38;
        case 0x24ba4cu: goto label_24ba4c;
        case 0x24ba78u: goto label_24ba78;
        case 0x24ba84u: goto label_24ba84;
        case 0x24ba98u: goto label_24ba98;
        case 0x24bac4u: goto label_24bac4;
        case 0x24bad8u: goto label_24bad8;
        case 0x24baecu: goto label_24baec;
        case 0x24bb00u: goto label_24bb00;
        case 0x24bb1cu: goto label_24bb1c;
        case 0x24bb3cu: goto label_24bb3c;
        case 0x24bb48u: goto label_24bb48;
        default: break;
    }

    ctx->pc = 0x24b660u;

    // 0x24b660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24b664: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24b664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24b668: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24b66c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24b66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24b670: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24b674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24b674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24b67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b680: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x24b680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24b684: 0x3c014528  lui         $at, 0x4528
    ctx->pc = 0x24b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17704 << 16));
    // 0x24b688: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x24b688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x24b68c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b690: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x24b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24b694: 0x924502f6  lbu         $a1, 0x2F6($s2)
    ctx->pc = 0x24b694u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24b698: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b69c: 0xe64016e4  swc1        $f0, 0x16E4($s2)
    ctx->pc = 0x24b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5860), bits); }
    // 0x24b6a0: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x24b6a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x24b6a4: 0x10800128  beqz        $a0, . + 4 + (0x128 << 2)
    ctx->pc = 0x24B6A4u;
    {
        const bool branch_taken_0x24b6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6A4u;
        // 0x24b6a8: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6a4) {
            ctx->pc = 0x24BB48u;
            goto label_24bb48;
        }
    }
    ctx->pc = 0x24B6ACu;
    // 0x24b6ac: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x24b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x24b6b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x24b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24b6b4: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x24b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x24b6b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b6bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b6c0: 0x800008  jr          $a0
    ctx->pc = 0x24B6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24B6C8u: goto label_24b6c8;
            case 0x24B750u: goto label_24b750;
            case 0x24B7F8u: goto label_24b7f8;
            case 0x24B8FCu: goto label_24b8fc;
            case 0x24B9C4u: goto label_24b9c4;
            case 0x24BA44u: goto label_24ba44;
            case 0x24BA8Cu: goto label_24ba8c;
            case 0x24BB0Cu: goto label_24bb0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24B6C8u;
label_24b6c8:
    // 0x24b6c8: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x24b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b6cc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B6CCu;
    SET_GPR_U32(ctx, 31, 0x24B6D4u);
    ctx->pc = 0x24B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6CCu;
    // 0x24b6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B6CCu, 0x24B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6D4u;
label_24b6d4:
    // 0x24b6d4: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x24b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24b6d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b6dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b6e0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24b6e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b6e4: 0x8c653e14  lw          $a1, 0x3E14($v1)
    ctx->pc = 0x24b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15892)));
    // 0x24b6e8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b6ec: 0x8c663e18  lw          $a2, 0x3E18($v1)
    ctx->pc = 0x24b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15896)));
    // 0x24b6f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24b6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b6f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b6f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B6F8u;
    SET_GPR_U32(ctx, 31, 0x24B700u);
    ctx->pc = 0x24B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6F8u;
    // 0x24b6fc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B6F8u, 0x24B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B700u;
label_24b700:
    // 0x24b700: 0x8e440748  lw          $a0, 0x748($s2)
    ctx->pc = 0x24b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1864)));
    // 0x24b704: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B704u;
    {
        const bool branch_taken_0x24b704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b704) {
            ctx->pc = 0x24B708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B704u;
            // 0x24b708: 0x8e44074c  lw          $a0, 0x74C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B718u;
            goto label_24b718;
        }
    }
    ctx->pc = 0x24B70Cu;
    // 0x24b70c: 0xc0a04fc  jal         func_2813F0
    ctx->pc = 0x24B70Cu;
    SET_GPR_U32(ctx, 31, 0x24B714u);
    ctx->pc = 0x24B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B70Cu;
    // 0x24b710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813F0u, 0x24B70Cu, 0x24B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B714u;
label_24b714:
    // 0x24b714: 0x8e44074c  lw          $a0, 0x74C($s2)
    ctx->pc = 0x24b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
label_24b718:
    // 0x24b718: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B718u;
    {
        const bool branch_taken_0x24b718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b718) {
            ctx->pc = 0x24B71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B718u;
            // 0x24b71c: 0x8e440750  lw          $a0, 0x750($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B72Cu;
            goto label_24b72c;
        }
    }
    ctx->pc = 0x24B720u;
    // 0x24b720: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24B720u;
    SET_GPR_U32(ctx, 31, 0x24B728u);
    ctx->pc = 0x24B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B720u;
    // 0x24b724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24B720u, 0x24B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B728u;
label_24b728:
    // 0x24b728: 0x8e440750  lw          $a0, 0x750($s2)
    ctx->pc = 0x24b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
label_24b72c:
    // 0x24b72c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B72Cu;
    {
        const bool branch_taken_0x24b72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b72c) {
            ctx->pc = 0x24B730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B72Cu;
            // 0x24b730: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B740u;
            goto label_24b740;
        }
    }
    ctx->pc = 0x24B734u;
    // 0x24b734: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24B734u;
    SET_GPR_U32(ctx, 31, 0x24B73Cu);
    ctx->pc = 0x24B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B734u;
    // 0x24b738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24B734u, 0x24B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B73Cu;
label_24b73c:
    // 0x24b73c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24b73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24b740:
    // 0x24b740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b744: 0xae4305f0  sw          $v1, 0x5F0($s2)
    ctx->pc = 0x24b744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
    // 0x24b748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b74c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24b74cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24b750:
    // 0x24b750: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x24b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24b754: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24b754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24b758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b75c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b760: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24B760u;
    SET_GPR_U32(ctx, 31, 0x24B768u);
    ctx->pc = 0x24B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B760u;
    // 0x24b764: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24B760u, 0x24B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B768u;
label_24b768:
    // 0x24b768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B768u;
    {
        const bool branch_taken_0x24b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b768) {
            ctx->pc = 0x24B77Cu;
            goto label_24b77c;
        }
    }
    ctx->pc = 0x24B770u;
    // 0x24b770: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24b770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24b774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b778: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24b778u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24b77c:
    // 0x24b77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24b780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b788: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24B788u;
    SET_GPR_U32(ctx, 31, 0x24B790u);
    ctx->pc = 0x24B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B788u;
    // 0x24b78c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24B788u, 0x24B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B790u;
label_24b790:
    // 0x24b790: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b794: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24B794u;
    SET_GPR_U32(ctx, 31, 0x24B79Cu);
    ctx->pc = 0x24B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B794u;
    // 0x24b798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24B794u, 0x24B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B79Cu;
label_24b79c:
    // 0x24b79c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x24b79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x24b7a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b7a4: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x24B7A4u;
    {
        const bool branch_taken_0x24b7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7A4u;
        // 0x24b7a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7a4) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24B7ACu;
    // 0x24b7ac: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x24b7b0: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x24B7B0u;
    {
        const bool branch_taken_0x24b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7B0u;
        // 0x24b7b4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7b0) {
            ctx->pc = 0x24BB50u;
            goto label_24bb50;
        }
    }
    ctx->pc = 0x24B7B8u;
    // 0x24b7b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24B7B8u;
    SET_GPR_U32(ctx, 31, 0x24B7C0u);
    ctx->pc = 0x24B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7B8u;
    // 0x24b7bc: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24B7B8u, 0x24B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7C0u;
label_24b7c0:
    // 0x24b7c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b7c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B7C4u;
    {
        const bool branch_taken_0x24b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7C4u;
        // 0x24b7c8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7c4) {
            ctx->pc = 0x24B7E8u;
            goto label_24b7e8;
        }
    }
    ctx->pc = 0x24B7CCu;
    // 0x24b7cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B7CCu;
    SET_GPR_U32(ctx, 31, 0x24B7D4u);
    ctx->pc = 0x24B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7CCu;
    // 0x24b7d0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B7CCu, 0x24B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7D4u;
label_24b7d4:
    // 0x24b7d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24b7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B7D8u;
    {
        const bool branch_taken_0x24b7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b7d8) {
            ctx->pc = 0x24B7E8u;
            goto label_24b7e8;
        }
    }
    ctx->pc = 0x24B7E0u;
    // 0x24b7e0: 0xc09809e  jal         func_260278
    ctx->pc = 0x24B7E0u;
    SET_GPR_U32(ctx, 31, 0x24B7E8u);
    ctx->pc = 0x24B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7E0u;
    // 0x24b7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260278u, 0x24B7E0u, 0x24B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7E8u;
label_24b7e8:
    // 0x24b7e8: 0xc09809e  jal         func_260278
    ctx->pc = 0x24B7E8u;
    SET_GPR_U32(ctx, 31, 0x24B7F0u);
    ctx->pc = 0x24B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7E8u;
    // 0x24b7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260278u, 0x24B7E8u, 0x24B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7F0u;
label_24b7f0:
    // 0x24b7f0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x24B7F0u;
    {
        const bool branch_taken_0x24b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7F0u;
        // 0x24b7f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7f0) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24B7F8u;
label_24b7f8:
    // 0x24b7f8: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x24b7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b7fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B7FCu;
    SET_GPR_U32(ctx, 31, 0x24B804u);
    ctx->pc = 0x24B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7FCu;
    // 0x24b800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B7FCu, 0x24B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B804u;
label_24b804:
    // 0x24b804: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x24b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24b808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b80c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b810: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24b810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b814: 0x8c653e1c  lw          $a1, 0x3E1C($v1)
    ctx->pc = 0x24b814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15900)));
    // 0x24b818: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b81c: 0x8c663e20  lw          $a2, 0x3E20($v1)
    ctx->pc = 0x24b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15904)));
    // 0x24b820: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24b820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b824: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b828: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B828u;
    SET_GPR_U32(ctx, 31, 0x24B830u);
    ctx->pc = 0x24B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B828u;
    // 0x24b82c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B828u, 0x24B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B830u;
label_24b830:
    // 0x24b830: 0x8e440748  lw          $a0, 0x748($s2)
    ctx->pc = 0x24b830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1864)));
    // 0x24b834: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B834u;
    {
        const bool branch_taken_0x24b834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b834) {
            ctx->pc = 0x24B838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B834u;
            // 0x24b838: 0x8e44074c  lw          $a0, 0x74C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B848u;
            goto label_24b848;
        }
    }
    ctx->pc = 0x24B83Cu;
    // 0x24b83c: 0xc0a04fc  jal         func_2813F0
    ctx->pc = 0x24B83Cu;
    SET_GPR_U32(ctx, 31, 0x24B844u);
    ctx->pc = 0x24B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B83Cu;
    // 0x24b840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813F0u, 0x24B83Cu, 0x24B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B844u;
label_24b844:
    // 0x24b844: 0x8e44074c  lw          $a0, 0x74C($s2)
    ctx->pc = 0x24b844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
label_24b848:
    // 0x24b848: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B848u;
    {
        const bool branch_taken_0x24b848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b848) {
            ctx->pc = 0x24B84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B848u;
            // 0x24b84c: 0x8e440750  lw          $a0, 0x750($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B85Cu;
            goto label_24b85c;
        }
    }
    ctx->pc = 0x24B850u;
    // 0x24b850: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24B850u;
    SET_GPR_U32(ctx, 31, 0x24B858u);
    ctx->pc = 0x24B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B850u;
    // 0x24b854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24B850u, 0x24B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B858u;
label_24b858:
    // 0x24b858: 0x8e440750  lw          $a0, 0x750($s2)
    ctx->pc = 0x24b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
label_24b85c:
    // 0x24b85c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B85Cu;
    {
        const bool branch_taken_0x24b85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b85c) {
            ctx->pc = 0x24B860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B85Cu;
            // 0x24b860: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B870u;
            goto label_24b870;
        }
    }
    ctx->pc = 0x24B864u;
    // 0x24b864: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24B864u;
    SET_GPR_U32(ctx, 31, 0x24B86Cu);
    ctx->pc = 0x24B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B864u;
    // 0x24b868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24B864u, 0x24B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B86Cu;
label_24b86c:
    // 0x24b86c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_24b870:
    // 0x24b870: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B870u;
    SET_GPR_U32(ctx, 31, 0x24B878u);
    ctx->pc = 0x24B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B870u;
    // 0x24b874: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B870u, 0x24B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B878u;
label_24b878:
    // 0x24b878: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24b87c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24b87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24b880: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B880u;
    {
        const bool branch_taken_0x24b880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B880u;
        // 0x24b884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b880) {
            ctx->pc = 0x24B8A0u;
            goto label_24b8a0;
        }
    }
    ctx->pc = 0x24B888u;
    // 0x24b888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24b888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24b88c: 0x2442d850  addiu       $v0, $v0, -0x27B0
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957136));
    // 0x24b890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24b894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b898: 0x800008  jr          $a0
    ctx->pc = 0x24B898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24B8A0u: goto label_24b8a0;
            case 0x24B8B0u: goto label_24b8b0;
            case 0x24B8C0u: goto label_24b8c0;
            case 0x24B8D0u: goto label_24b8d0;
            case 0x24B8E0u: goto label_24b8e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24B8A0u;
label_24b8a0:
    // 0x24b8a0: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x24b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x24b8a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24B8A8u;
    {
        const bool branch_taken_0x24b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8A8u;
        // 0x24b8ac: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8a8) {
            ctx->pc = 0x24B8F0u;
            goto label_24b8f0;
        }
    }
    ctx->pc = 0x24B8B0u;
label_24b8b0:
    // 0x24b8b0: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x24b8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24B8B8u;
    {
        const bool branch_taken_0x24b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B8u;
        // 0x24b8bc: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8b8) {
            ctx->pc = 0x24B8F0u;
            goto label_24b8f0;
        }
    }
    ctx->pc = 0x24B8C0u;
label_24b8c0:
    // 0x24b8c0: 0x3c014352  lui         $at, 0x4352
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17234 << 16));
    // 0x24b8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B8C8u;
    {
        const bool branch_taken_0x24b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8C8u;
        // 0x24b8cc: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8c8) {
            ctx->pc = 0x24B8F0u;
            goto label_24b8f0;
        }
    }
    ctx->pc = 0x24B8D0u;
label_24b8d0:
    // 0x24b8d0: 0x3c014352  lui         $at, 0x4352
    ctx->pc = 0x24b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17234 << 16));
    // 0x24b8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24B8D8u;
    {
        const bool branch_taken_0x24b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8D8u;
        // 0x24b8dc: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8d8) {
            ctx->pc = 0x24B8F0u;
            goto label_24b8f0;
        }
    }
    ctx->pc = 0x24B8E0u;
label_24b8e0:
    // 0x24b8e0: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x24b8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x24b8e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8e8: 0x0  nop
    ctx->pc = 0x24b8e8u;
    // NOP
    // 0x24b8ec: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x24b8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
label_24b8f0:
    // 0x24b8f0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24b8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24b8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b8f8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24b8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24b8fc:
    // 0x24b8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b908: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24b908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b90c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24B90Cu;
    SET_GPR_U32(ctx, 31, 0x24B914u);
    ctx->pc = 0x24B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B90Cu;
    // 0x24b910: 0xa2420617  sb          $v0, 0x617($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24B90Cu, 0x24B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B914u;
label_24b914:
    // 0x24b914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b918: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24B918u;
    SET_GPR_U32(ctx, 31, 0x24B920u);
    ctx->pc = 0x24B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B918u;
    // 0x24b91c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24B918u, 0x24B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B920u;
label_24b920:
    // 0x24b920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b924: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24B924u;
    SET_GPR_U32(ctx, 31, 0x24B92Cu);
    ctx->pc = 0x24B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B924u;
    // 0x24b928: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24B924u, 0x24B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B92Cu;
label_24b92c:
    // 0x24b92c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24b930: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24B930u;
    SET_GPR_U32(ctx, 31, 0x24B938u);
    ctx->pc = 0x24B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B930u;
    // 0x24b934: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24B930u, 0x24B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B938u;
label_24b938:
    // 0x24b938: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24b938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b93c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24B93Cu;
    {
        const bool branch_taken_0x24b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B93Cu;
        // 0x24b940: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b93c) {
            ctx->pc = 0x24B970u;
            goto label_24b970;
        }
    }
    ctx->pc = 0x24B944u;
    // 0x24b944: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x24b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b948: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x24b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b94c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24b94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24b950: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24b950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24b954: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24b954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b958: 0x0  nop
    ctx->pc = 0x24b958u;
    // NOP
    // 0x24b95c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24B95Cu;
    {
        const bool branch_taken_0x24b95c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B95Cu;
        // 0x24b960: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b95c) {
            ctx->pc = 0x24B970u;
            goto label_24b970;
        }
    }
    ctx->pc = 0x24B964u;
    // 0x24b964: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b968: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24b968u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b96c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x24b96cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_24b970:
    // 0x24b970: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x24b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x24b974: 0x263164f0  addiu       $s1, $s1, 0x64F0
    ctx->pc = 0x24b974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    // 0x24b978: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x24b978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x24b97c: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x24B97Cu;
    SET_GPR_U32(ctx, 31, 0x24B984u);
    ctx->pc = 0x24B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B97Cu;
    // 0x24b980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x24B97Cu, 0x24B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B984u;
label_24b984:
    // 0x24b984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b98c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x24b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x24b990: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x24B990u;
    SET_GPR_U32(ctx, 31, 0x24B998u);
    ctx->pc = 0x24B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B990u;
    // 0x24b994: 0x24060221  addiu       $a2, $zero, 0x221 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x24B990u, 0x24B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B998u;
label_24b998:
    // 0x24b998: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9a0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x24b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x24b9a4: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x24B9A4u;
    SET_GPR_U32(ctx, 31, 0x24B9ACu);
    ctx->pc = 0x24B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9A4u;
    // 0x24b9a8: 0x24060222  addiu       $a2, $zero, 0x222 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x24B9A4u, 0x24B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9ACu;
label_24b9ac:
    // 0x24b9ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b9b0: 0x16000066  bnez        $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x24B9B0u;
    {
        const bool branch_taken_0x24b9b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9B0u;
        // 0x24b9b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9b0) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24B9B8u;
    // 0x24b9b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b9bc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x24B9BCu;
    {
        const bool branch_taken_0x24b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9BCu;
        // 0x24b9c0: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9bc) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24B9C4u;
label_24b9c4:
    // 0x24b9c4: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x24b9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b9c8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B9C8u;
    SET_GPR_U32(ctx, 31, 0x24B9D0u);
    ctx->pc = 0x24B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9C8u;
    // 0x24b9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B9C8u, 0x24B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9D0u;
label_24b9d0:
    // 0x24b9d0: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x24b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24b9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b9dc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24b9dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b9e0: 0x8c653e24  lw          $a1, 0x3E24($v1)
    ctx->pc = 0x24b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15908)));
    // 0x24b9e4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b9e8: 0x8c663e28  lw          $a2, 0x3E28($v1)
    ctx->pc = 0x24b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
    // 0x24b9ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24b9ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b9f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B9F4u;
    SET_GPR_U32(ctx, 31, 0x24B9FCu);
    ctx->pc = 0x24B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9F4u;
    // 0x24b9f8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B9F4u, 0x24B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9FCu;
label_24b9fc:
    // 0x24b9fc: 0x8e440748  lw          $a0, 0x748($s2)
    ctx->pc = 0x24b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1864)));
    // 0x24ba00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA00u;
    {
        const bool branch_taken_0x24ba00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba00) {
            ctx->pc = 0x24BA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA00u;
            // 0x24ba04: 0x8e44074c  lw          $a0, 0x74C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BA14u;
            goto label_24ba14;
        }
    }
    ctx->pc = 0x24BA08u;
    // 0x24ba08: 0xc0a04fc  jal         func_2813F0
    ctx->pc = 0x24BA08u;
    SET_GPR_U32(ctx, 31, 0x24BA10u);
    ctx->pc = 0x24BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA08u;
    // 0x24ba0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813F0u, 0x24BA08u, 0x24BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA10u;
label_24ba10:
    // 0x24ba10: 0x8e44074c  lw          $a0, 0x74C($s2)
    ctx->pc = 0x24ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
label_24ba14:
    // 0x24ba14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA14u;
    {
        const bool branch_taken_0x24ba14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba14) {
            ctx->pc = 0x24BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA14u;
            // 0x24ba18: 0x8e440750  lw          $a0, 0x750($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BA28u;
            goto label_24ba28;
        }
    }
    ctx->pc = 0x24BA1Cu;
    // 0x24ba1c: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24BA1Cu;
    SET_GPR_U32(ctx, 31, 0x24BA24u);
    ctx->pc = 0x24BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA1Cu;
    // 0x24ba20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24BA1Cu, 0x24BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA24u;
label_24ba24:
    // 0x24ba24: 0x8e440750  lw          $a0, 0x750($s2)
    ctx->pc = 0x24ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
label_24ba28:
    // 0x24ba28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA28u;
    {
        const bool branch_taken_0x24ba28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba28) {
            ctx->pc = 0x24BA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA28u;
            // 0x24ba2c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BA3Cu;
            goto label_24ba3c;
        }
    }
    ctx->pc = 0x24BA30u;
    // 0x24ba30: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24BA30u;
    SET_GPR_U32(ctx, 31, 0x24BA38u);
    ctx->pc = 0x24BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA30u;
    // 0x24ba34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24BA30u, 0x24BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA38u;
label_24ba38:
    // 0x24ba38: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24ba38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24ba3c:
    // 0x24ba3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ba40: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24ba44:
    // 0x24ba44: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24BA44u;
    SET_GPR_U32(ctx, 31, 0x24BA4Cu);
    ctx->pc = 0x24BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA44u;
    // 0x24ba48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24BA44u, 0x24BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA4Cu;
label_24ba4c:
    // 0x24ba4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BA4Cu;
    {
        const bool branch_taken_0x24ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA4Cu;
        // 0x24ba50: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba4c) {
            ctx->pc = 0x24BA64u;
            goto label_24ba64;
        }
    }
    ctx->pc = 0x24BA54u;
    // 0x24ba54: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x24ba54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ba58: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x24ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ba5c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x24ba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ba60: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x24ba60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_24ba64:
    // 0x24ba64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ba68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ba68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ba6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba70: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24BA70u;
    SET_GPR_U32(ctx, 31, 0x24BA78u);
    ctx->pc = 0x24BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA70u;
    // 0x24ba74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24BA70u, 0x24BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA78u;
label_24ba78:
    // 0x24ba78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba7c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24BA7Cu;
    SET_GPR_U32(ctx, 31, 0x24BA84u);
    ctx->pc = 0x24BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA7Cu;
    // 0x24ba80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24BA7Cu, 0x24BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA84u;
label_24ba84:
    // 0x24ba84: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24BA84u;
    {
        const bool branch_taken_0x24ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA84u;
        // 0x24ba88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba84) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24BA8Cu;
label_24ba8c:
    // 0x24ba8c: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x24ba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ba90: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24BA90u;
    SET_GPR_U32(ctx, 31, 0x24BA98u);
    ctx->pc = 0x24BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA90u;
    // 0x24ba94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24BA90u, 0x24BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA98u;
label_24ba98:
    // 0x24ba98: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x24ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24ba9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24baa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24baa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24baa4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24baa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24baa8: 0x8c653e2c  lw          $a1, 0x3E2C($v1)
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15916)));
    // 0x24baac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24baacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24bab0: 0x8c663e30  lw          $a2, 0x3E30($v1)
    ctx->pc = 0x24bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
    // 0x24bab4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bab8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24babc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24BABCu;
    SET_GPR_U32(ctx, 31, 0x24BAC4u);
    ctx->pc = 0x24BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BABCu;
    // 0x24bac0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24BABCu, 0x24BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAC4u;
label_24bac4:
    // 0x24bac4: 0x8e440748  lw          $a0, 0x748($s2)
    ctx->pc = 0x24bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1864)));
    // 0x24bac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BAC8u;
    {
        const bool branch_taken_0x24bac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bac8) {
            ctx->pc = 0x24BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BAC8u;
            // 0x24bacc: 0x8e44074c  lw          $a0, 0x74C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BADCu;
            goto label_24badc;
        }
    }
    ctx->pc = 0x24BAD0u;
    // 0x24bad0: 0xc0a04fc  jal         func_2813F0
    ctx->pc = 0x24BAD0u;
    SET_GPR_U32(ctx, 31, 0x24BAD8u);
    ctx->pc = 0x24BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAD0u;
    // 0x24bad4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813F0u, 0x24BAD0u, 0x24BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAD8u;
label_24bad8:
    // 0x24bad8: 0x8e44074c  lw          $a0, 0x74C($s2)
    ctx->pc = 0x24bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1868)));
label_24badc:
    // 0x24badc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BADCu;
    {
        const bool branch_taken_0x24badc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24badc) {
            ctx->pc = 0x24BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BADCu;
            // 0x24bae0: 0x8e440750  lw          $a0, 0x750($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BAF0u;
            goto label_24baf0;
        }
    }
    ctx->pc = 0x24BAE4u;
    // 0x24bae4: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24BAE4u;
    SET_GPR_U32(ctx, 31, 0x24BAECu);
    ctx->pc = 0x24BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAE4u;
    // 0x24bae8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24BAE4u, 0x24BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x8e440750  lw          $a0, 0x750($s2)
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
label_24baf0:
    // 0x24baf0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BAF0u;
    {
        const bool branch_taken_0x24baf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24baf0) {
            ctx->pc = 0x24BAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BAF0u;
            // 0x24baf4: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BB04u;
            goto label_24bb04;
        }
    }
    ctx->pc = 0x24BAF8u;
    // 0x24baf8: 0xc0a0cbe  jal         func_2832F8
    ctx->pc = 0x24BAF8u;
    SET_GPR_U32(ctx, 31, 0x24BB00u);
    ctx->pc = 0x24BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAF8u;
    // 0x24bafc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832F8u, 0x24BAF8u, 0x24BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB00u;
label_24bb00:
    // 0x24bb00: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24bb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24bb04:
    // 0x24bb04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24bb08: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24bb0c:
    // 0x24bb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24BB14u;
    SET_GPR_U32(ctx, 31, 0x24BB1Cu);
    ctx->pc = 0x24BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB14u;
    // 0x24bb18: 0xa2420617  sb          $v0, 0x617($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24BB14u, 0x24BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB1Cu;
label_24bb1c:
    // 0x24bb1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24BB1Cu;
    {
        const bool branch_taken_0x24bb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB1Cu;
        // 0x24bb20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb1c) {
            ctx->pc = 0x24BB28u;
            goto label_24bb28;
        }
    }
    ctx->pc = 0x24BB24u;
    // 0x24bb24: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24bb28:
    // 0x24bb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bb2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24bb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24bb30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb34: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24BB34u;
    SET_GPR_U32(ctx, 31, 0x24BB3Cu);
    ctx->pc = 0x24BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB34u;
    // 0x24bb38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24BB34u, 0x24BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB3Cu;
label_24bb3c:
    // 0x24bb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24BB40u;
    SET_GPR_U32(ctx, 31, 0x24BB48u);
    ctx->pc = 0x24BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB40u;
    // 0x24bb44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24BB40u, 0x24BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB48u;
label_24bb48:
    // 0x24bb48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24bb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24bb4c:
    // 0x24bb4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24bb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24bb50:
    // 0x24bb50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24bb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb58: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x24bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24bb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB5Cu;
        // 0x24bb60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BB64u;
    // 0x24bb64: 0x0  nop
    ctx->pc = 0x24bb64u;
    // NOP
    ctx->pc = 0x24bb68u;
}
