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

// Function: cGame_gameLoop
// Address: 0x2a6690 - 0x2a67d0
void cGame_gameLoop_0x2a6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGame_gameLoop_0x2a6690");
#endif

    switch (ctx->pc) {
        case 0x2a66e0u: goto label_2a66e0;
        case 0x2a66e8u: goto label_2a66e8;
        case 0x2a6750u: goto label_2a6750;
        case 0x2a6758u: goto label_2a6758;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a6794u: goto label_2a6794;
        case 0x2a67a0u: goto label_2a67a0;
        default: break;
    }

    ctx->pc = 0x2a6690u;

    // 0x2a6690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6694: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6698: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a6698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a669c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a669cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a66a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a66a4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2a66a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a66a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a66ac: 0x24717a2c  addiu       $s1, $v1, 0x7A2C
    ctx->pc = 0x2a66acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x2a66b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a66b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a66b4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2a66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2a66b8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2a66b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a66bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x2a66c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x2a66c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2a66c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2a66cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A66CCu;
    {
        const bool branch_taken_0x2a66cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66CCu;
        // 0x2a66d0: 0xac652cf0  sw          $a1, 0x2CF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66cc) {
            ctx->pc = 0x2A66E0u;
            goto label_2a66e0;
        }
    }
    ctx->pc = 0x2A66D4u;
    // 0x2a66d4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a66d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a66d8: 0xc0806f8  jal         func_201BE0
    ctx->pc = 0x2A66D8u;
    SET_GPR_U32(ctx, 31, 0x2A66E0u);
    ctx->pc = 0x2A66DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66D8u;
    // 0x2a66dc: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201BE0u, 0x2A66D8u, 0x2A66E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66E0u;
label_2a66e0:
    // 0x2a66e0: 0xc0a9bfe  jal         func_2A6FF8
    ctx->pc = 0x2A66E0u;
    SET_GPR_U32(ctx, 31, 0x2A66E8u);
    ctx->pc = 0x2A66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66E0u;
    // 0x2a66e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6FF8u, 0x2A66E0u, 0x2A66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66E8u;
label_2a66e8:
    // 0x2a66e8: 0x2625fa74  addiu       $a1, $s1, -0x58C
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965876));
    // 0x2a66ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2a66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2a66f0: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x2a66f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x2a66f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a66f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A66F8u;
    {
        const bool branch_taken_0x2a66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66F8u;
        // 0x2a66fc: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66f8) {
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6700u;
    // 0x2a6700: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A6700u;
    {
        const bool branch_taken_0x2a6700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6700u;
        // 0x2a6704: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6700) {
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6708u;
    // 0x2a6708: 0x8ca405e4  lw          $a0, 0x5E4($a1)
    ctx->pc = 0x2a6708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1508)));
    // 0x2a670c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2a670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2a6710: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2a6710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a6714: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A6714u;
    {
        const bool branch_taken_0x2a6714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6714) {
            ctx->pc = 0x2A6718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6714u;
            // 0x2a6718: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A671Cu;
    // 0x2a671c: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2a6720: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A6720u;
    {
        const bool branch_taken_0x2a6720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6720) {
            ctx->pc = 0x2A6724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6720u;
            // 0x2a6724: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6728u;
    // 0x2a6728: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2a6728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2a672c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2a672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a6730: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A6730u;
    {
        const bool branch_taken_0x2a6730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6730) {
            ctx->pc = 0x2A6734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6730u;
            // 0x2a6734: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6738u;
    // 0x2a6738: 0x8ca205d8  lw          $v0, 0x5D8($a1)
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1496)));
    // 0x2a673c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6740: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2A6740u;
    {
        const bool branch_taken_0x2a6740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6740) {
            ctx->pc = 0x2A6744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6740u;
            // 0x2a6744: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6748u;
    // 0x2a6748: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2A6748u;
    SET_GPR_U32(ctx, 31, 0x2A6750u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2A6748u, 0x2A6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6750u;
label_2a6750:
    // 0x2a6750: 0xc04aeae  jal         func_12BAB8
    ctx->pc = 0x2A6750u;
    SET_GPR_U32(ctx, 31, 0x2A6758u);
    ctx->pc = 0x2A6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6750u;
    // 0x2a6754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BAB8u, 0x2A6750u, 0x2A6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6758u;
label_2a6758:
    // 0x2a6758: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6758u;
    {
        const bool branch_taken_0x2a6758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a6758) {
            ctx->pc = 0x2A675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6758u;
            // 0x2a675c: 0x860201b0  lh          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A677Cu;
            goto label_2a677c;
        }
    }
    ctx->pc = 0x2A6760u;
    // 0x2a6760: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6768: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x2a6768u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x2a676c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a676cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6770: 0xc058008  jal         func_160020
    ctx->pc = 0x2A6770u;
    SET_GPR_U32(ctx, 31, 0x2A6778u);
    ctx->pc = 0x2A6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6770u;
    // 0x2a6774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x2A6770u, 0x2A6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6778u;
label_2a6778:
    // 0x2a6778: 0x860201b0  lh          $v0, 0x1B0($s0)
    ctx->pc = 0x2a6778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
label_2a677c:
    // 0x2a677c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A677Cu;
    {
        const bool branch_taken_0x2a677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A677Cu;
        // 0x2a6780: 0x960301b0  lhu         $v1, 0x1B0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a677c) {
            ctx->pc = 0x2A678Cu;
            goto label_2a678c;
        }
    }
    ctx->pc = 0x2A6784u;
    // 0x2a6784: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a6784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a6788: 0xa60201b0  sh          $v0, 0x1B0($s0)
    ctx->pc = 0x2a6788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 2));
label_2a678c:
    // 0x2a678c: 0xc0c3bba  jal         func_30EEE8
    ctx->pc = 0x2A678Cu;
    SET_GPR_U32(ctx, 31, 0x2A6794u);
    ctx->pc = 0x30EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EEE8u, 0x2A678Cu, 0x2A6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6794u;
label_2a6794:
    // 0x2a6794: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a6794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a6798: 0xc057eea  jal         func_15FBA8
    ctx->pc = 0x2A6798u;
    SET_GPR_U32(ctx, 31, 0x2A67A0u);
    ctx->pc = 0x2A679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6798u;
    // 0x2a679c: 0xac40aff4  sw          $zero, -0x500C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBA8u, 0x2A6798u, 0x2A67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67A0u;
label_2a67a0:
    // 0x2a67a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a67a4: 0x8e432cf0  lw          $v1, 0x2CF0($s2)
    ctx->pc = 0x2a67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11504)));
    // 0x2a67a8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2a67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a67ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a67acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a67b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x2a67b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a67b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a67b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a67bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a67bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a67c0: 0xae432cf0  sw          $v1, 0x2CF0($s2)
    ctx->pc = 0x2a67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11504), GPR_U32(ctx, 3));
    // 0x2a67c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a67c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a67c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A67C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67C8u;
        // 0x2a67cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A67C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A67D0u;
}
