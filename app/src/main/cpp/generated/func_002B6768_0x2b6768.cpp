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

// Function: func_002B6768
// Address: 0x2b6768 - 0x2b6918
void func_002B6768_0x2b6768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6768_0x2b6768");
#endif

    switch (ctx->pc) {
        case 0x2b679cu: goto label_2b679c;
        case 0x2b67b4u: goto label_2b67b4;
        case 0x2b67e0u: goto label_2b67e0;
        case 0x2b67f8u: goto label_2b67f8;
        case 0x2b6818u: goto label_2b6818;
        case 0x2b6824u: goto label_2b6824;
        case 0x2b6864u: goto label_2b6864;
        case 0x2b6880u: goto label_2b6880;
        case 0x2b68a0u: goto label_2b68a0;
        case 0x2b68c8u: goto label_2b68c8;
        case 0x2b68f4u: goto label_2b68f4;
        default: break;
    }

    ctx->pc = 0x2b6768u;

    // 0x2b6768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b676c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b6770: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b6774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6778: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b677c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6780: 0x920204d0  lbu         $v0, 0x4D0($s0)
    ctx->pc = 0x2b6780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2b6784: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B6784u;
    {
        const bool branch_taken_0x2b6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6784u;
        // 0x2b6788: 0x8e040304  lw          $a0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6784) {
            ctx->pc = 0x2B67D0u;
            goto label_2b67d0;
        }
    }
    ctx->pc = 0x2B678Cu;
    // 0x2b678c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b678cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6790: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
    // 0x2b6794: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B6794u;
    SET_GPR_U32(ctx, 31, 0x2B679Cu);
    ctx->pc = 0x2B6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6794u;
    // 0x2b6798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B6794u, 0x2B679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B679Cu;
label_2b679c:
    // 0x2b679c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b67a0: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b67a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b67a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67a8: 0x24a5b4a8  addiu       $a1, $a1, -0x4B58
    ctx->pc = 0x2b67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948008));
    // 0x2b67ac: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B67ACu;
    SET_GPR_U32(ctx, 31, 0x2B67B4u);
    ctx->pc = 0x2B67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67ACu;
    // 0x2b67b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B67ACu, 0x2B67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67B4u;
label_2b67b4:
    // 0x2b67b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b67b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67b8: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B67B8u;
    {
        const bool branch_taken_0x2b67b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B8u;
        // 0x2b67bc: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b8) {
            ctx->pc = 0x2B681Cu;
            goto label_2b681c;
        }
    }
    ctx->pc = 0x2B67C0u;
    // 0x2b67c0: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b67c4: 0x24a5b4b0  addiu       $a1, $a1, -0x4B50
    ctx->pc = 0x2b67c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948016));
    // 0x2b67c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B67C8u;
    {
        const bool branch_taken_0x2b67c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C8u;
        // 0x2b67cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c8) {
            ctx->pc = 0x2B6810u;
            goto label_2b6810;
        }
    }
    ctx->pc = 0x2B67D0u;
label_2b67d0:
    // 0x2b67d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b67d4: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2b67d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b67d8: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B67D8u;
    SET_GPR_U32(ctx, 31, 0x2B67E0u);
    ctx->pc = 0x2B67DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67D8u;
    // 0x2b67dc: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B67D8u, 0x2B67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67E0u;
label_2b67e0:
    // 0x2b67e0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b67e4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b67e8: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2b67e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b67ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b67ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67f0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B67F0u;
    SET_GPR_U32(ctx, 31, 0x2B67F8u);
    ctx->pc = 0x2B67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67F0u;
    // 0x2b67f4: 0x24a5b4a8  addiu       $a1, $a1, -0x4B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B67F0u, 0x2B67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67F8u;
label_2b67f8:
    // 0x2b67f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b67f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67fc: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B67FCu;
    {
        const bool branch_taken_0x2b67fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67FCu;
        // 0x2b6800: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67fc) {
            ctx->pc = 0x2B681Cu;
            goto label_2b681c;
        }
    }
    ctx->pc = 0x2B6804u;
    // 0x2b6804: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b6804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b6808: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2b6808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b680c: 0x24a5b4b0  addiu       $a1, $a1, -0x4B50
    ctx->pc = 0x2b680cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948016));
label_2b6810:
    // 0x2b6810: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B6810u;
    SET_GPR_U32(ctx, 31, 0x2B6818u);
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B6810u, 0x2B6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6818u;
label_2b6818:
    // 0x2b6818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b6818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b681c:
    // 0x2b681c: 0xc0ad9a2  jal         func_2B6688
    ctx->pc = 0x2B681Cu;
    SET_GPR_U32(ctx, 31, 0x2B6824u);
    ctx->pc = 0x2B6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B681Cu;
    // 0x2b6820: 0x960402fe  lhu         $a0, 0x2FE($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6688u, 0x2B681Cu, 0x2B6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6824u;
label_2b6824:
    // 0x2b6824: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b6824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6828: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2b6828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b682c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B682Cu;
    {
        const bool branch_taken_0x2b682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B682Cu;
        // 0x2b6830: 0xae0304dc  sw          $v1, 0x4DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b682c) {
            ctx->pc = 0x2B68C8u;
            goto label_2b68c8;
        }
    }
    ctx->pc = 0x2B6834u;
    // 0x2b6834: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b6838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b683c: 0x2442b4c0  addiu       $v0, $v0, -0x4B40
    ctx->pc = 0x2b683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
    // 0x2b6840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b6844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b6844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6848: 0x800008  jr          $a0
    ctx->pc = 0x2B6848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6850u: goto label_2b6850;
            case 0x2B686Cu: goto label_2b686c;
            case 0x2B688Cu: goto label_2b688c;
            case 0x2B68B4u: goto label_2b68b4;
            case 0x2B68C8u: goto label_2b68c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B6850u;
label_2b6850:
    // 0x2b6850: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2b6854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6858: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x2b6858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
    // 0x2b685c: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x2B685Cu;
    SET_GPR_U32(ctx, 31, 0x2B6864u);
    ctx->pc = 0x2B6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B685Cu;
    // 0x2b6860: 0x260504f0  addiu       $a1, $s0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x2B685Cu, 0x2B6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6864u;
label_2b6864:
    // 0x2b6864: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B6864u;
    {
        const bool branch_taken_0x2b6864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6864u;
        // 0x2b6868: 0x8e020254  lw          $v0, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6864) {
            ctx->pc = 0x2B68CCu;
            goto label_2b68cc;
        }
    }
    ctx->pc = 0x2B686Cu;
label_2b686c:
    // 0x2b686c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2b686cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2b6870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6874: 0x24c63f58  addiu       $a2, $a2, 0x3F58
    ctx->pc = 0x2b6874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16216));
    // 0x2b6878: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x2B6878u;
    SET_GPR_U32(ctx, 31, 0x2B6880u);
    ctx->pc = 0x2B687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6878u;
    // 0x2b687c: 0x260504f0  addiu       $a1, $s0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x2B6878u, 0x2B6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6880u;
label_2b6880:
    // 0x2b6880: 0x8e0204a8  lw          $v0, 0x4A8($s0)
    ctx->pc = 0x2b6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x2b6884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6884u;
    {
        const bool branch_taken_0x2b6884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6884u;
        // 0x2b6888: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6884) {
            ctx->pc = 0x2B68A8u;
            goto label_2b68a8;
        }
    }
    ctx->pc = 0x2B688Cu;
label_2b688c:
    // 0x2b688c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2b688cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2b6890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6894: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x2b6894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
    // 0x2b6898: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x2B6898u;
    SET_GPR_U32(ctx, 31, 0x2B68A0u);
    ctx->pc = 0x2B689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6898u;
    // 0x2b689c: 0x260504f0  addiu       $a1, $s0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x2B6898u, 0x2B68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68A0u;
label_2b68a0:
    // 0x2b68a0: 0x8e0204a8  lw          $v0, 0x4A8($s0)
    ctx->pc = 0x2b68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x2b68a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2b68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2b68a8:
    // 0x2b68a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b68a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b68ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B68ACu;
    {
        const bool branch_taken_0x2b68ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68ACu;
        // 0x2b68b0: 0xae0204a8  sw          $v0, 0x4A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68ac) {
            ctx->pc = 0x2B68C8u;
            goto label_2b68c8;
        }
    }
    ctx->pc = 0x2B68B4u;
label_2b68b4:
    // 0x2b68b4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2b68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2b68b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68bc: 0x24c63fb0  addiu       $a2, $a2, 0x3FB0
    ctx->pc = 0x2b68bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16304));
    // 0x2b68c0: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x2B68C0u;
    SET_GPR_U32(ctx, 31, 0x2B68C8u);
    ctx->pc = 0x2B68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B68C0u;
    // 0x2b68c4: 0x260504f0  addiu       $a1, $s0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x2B68C0u, 0x2B68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68C8u;
label_2b68c8:
    // 0x2b68c8: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x2b68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_2b68cc:
    // 0x2b68cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2b68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2b68d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b68d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b68d4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B68D4u;
    {
        const bool branch_taken_0x2b68d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68D4u;
        // 0x2b68d8: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68d4) {
            ctx->pc = 0x2B68FCu;
            goto label_2b68fc;
        }
    }
    ctx->pc = 0x2B68DCu;
    // 0x2b68dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b68e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b68e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b68e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68ec: 0xc0525ce  jal         func_149738
    ctx->pc = 0x2B68ECu;
    SET_GPR_U32(ctx, 31, 0x2B68F4u);
    ctx->pc = 0x2B68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B68ECu;
    // 0x2b68f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x2B68ECu, 0x2B68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68F4u;
label_2b68f4:
    // 0x2b68f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B68F4u;
    {
        const bool branch_taken_0x2b68f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68F4u;
        // 0x2b68f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68f4) {
            ctx->pc = 0x2B6904u;
            goto label_2b6904;
        }
    }
    ctx->pc = 0x2B68FCu;
label_2b68fc:
    // 0x2b68fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b68fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6900: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b6900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6904:
    // 0x2b6904: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b6904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6908: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b6908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b690c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6910: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6910u;
        // 0x2b6914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6918u;
}
