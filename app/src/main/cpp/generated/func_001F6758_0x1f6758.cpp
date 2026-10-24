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

// Function: func_001F6758
// Address: 0x1f6758 - 0x1f6a20
void func_001F6758_0x1f6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6758_0x1f6758");
#endif

    switch (ctx->pc) {
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67c8u: goto label_1f67c8;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f6830u: goto label_1f6830;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f6988u: goto label_1f6988;
        case 0x1f69c8u: goto label_1f69c8;
        case 0x1f69e4u: goto label_1f69e4;
        default: break;
    }

    ctx->pc = 0x1f6758u;

    // 0x1f6758: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f675c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f6760: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f6764: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f6768: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f676c: 0x3c14dfff  lui         $s4, 0xDFFF
    ctx->pc = 0x1f676cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6770: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f6774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6778: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1f6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1f677c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f677cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6780: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1f6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1f6784: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1f6784u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1f6788: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1f6788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1f678c: 0x2456f0c0  addiu       $s6, $v0, -0xF40
    ctx->pc = 0x1f678cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x1f6790: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f6790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f6794: 0x2477f0d0  addiu       $s7, $v1, -0xF30
    ctx->pc = 0x1f6794u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1f6798: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f679c: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x1f679cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
    // 0x1f67a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f67a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f67a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f67a8:
    // 0x1f67a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f67ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1f67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1f67b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f67b4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1f67b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f67b8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F67B8u;
    {
        const bool branch_taken_0x1f67b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67B8u;
        // 0x1f67bc: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67b8) {
            ctx->pc = 0x1F6828u;
            goto label_1f6828;
        }
    }
    ctx->pc = 0x1F67C0u;
    // 0x1f67c0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F67C0u;
    SET_GPR_U32(ctx, 31, 0x1F67C8u);
    ctx->pc = 0x1F67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67C0u;
    // 0x1f67c4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F67C0u, 0x1F67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67C8u;
label_1f67c8:
    // 0x1f67c8: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x1f67c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1f67cc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f67d0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1f67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f67d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f67d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f67d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67dc: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1f67e0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F67E0u;
    SET_GPR_U32(ctx, 31, 0x1F67E8u);
    ctx->pc = 0x1F67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67E0u;
    // 0x1f67e4: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F67E0u, 0x1F67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67E8u;
label_1f67e8:
    // 0x1f67e8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f67ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f67ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67f4: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1f67f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1f67f8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F67F8u;
    SET_GPR_U32(ctx, 31, 0x1F6800u);
    ctx->pc = 0x1F67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67F8u;
    // 0x1f67fc: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F67F8u, 0x1F6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6800u;
label_1f6800:
    // 0x1f6800: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f6804: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1f6804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f6808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f680c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1f6810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6814: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f6814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f6818: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1f6818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f681c: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x1f681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x1f6820: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F6820u;
    {
        const bool branch_taken_0x1f6820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6820u;
        // 0x1f6824: 0xa4430090  sh          $v1, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6820) {
            ctx->pc = 0x1F6858u;
            goto label_1f6858;
        }
    }
    ctx->pc = 0x1F6828u;
label_1f6828:
    // 0x1f6828: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6828u;
    SET_GPR_U32(ctx, 31, 0x1F6830u);
    ctx->pc = 0x1F682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6828u;
    // 0x1f682c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6828u, 0x1F6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6830u;
label_1f6830:
    // 0x1f6830: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x1f6830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f6834: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f683c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1f6840: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x1f6840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x1f6844: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6844u;
    SET_GPR_U32(ctx, 31, 0x1F684Cu);
    ctx->pc = 0x1F6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6844u;
    // 0x1f6848: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6844u, 0x1F684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F684Cu;
label_1f684c:
    // 0x1f684c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6850: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x1f6850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x1f6854: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1f6858:
    // 0x1f6858: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1f6858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f685c: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F685Cu;
    {
        const bool branch_taken_0x1f685c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F685Cu;
        // 0x1f6860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f685c) {
            ctx->pc = 0x1F6888u;
            goto label_1f6888;
        }
    }
    ctx->pc = 0x1F6864u;
    // 0x1f6864: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x1f6864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1f6868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f686c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F686Cu;
    {
        const bool branch_taken_0x1f686c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f686c) {
            ctx->pc = 0x1F6888u;
            goto label_1f6888;
        }
    }
    ctx->pc = 0x1F6874u;
    // 0x1f6874: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6874u;
    SET_GPR_U32(ctx, 31, 0x1F687Cu);
    ctx->pc = 0x1F6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6874u;
    // 0x1f6878: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6874u, 0x1F687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F687Cu;
label_1f687c:
    // 0x1f687c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6880: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6880u;
    {
        const bool branch_taken_0x1f6880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6880u;
        // 0x1f6884: 0x741824  and         $v1, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6880) {
            ctx->pc = 0x1F6898u;
            goto label_1f6898;
        }
    }
    ctx->pc = 0x1F6888u;
label_1f6888:
    // 0x1f6888: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6888u;
    SET_GPR_U32(ctx, 31, 0x1F6890u);
    ctx->pc = 0x1F688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6888u;
    // 0x1f688c: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6888u, 0x1F6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6890u;
label_1f6890:
    // 0x1f6890: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6894: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x1f6894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_1f6898:
    // 0x1f6898: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1f689c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f689cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f68a0: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x1f68a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f68a4: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1F68A4u;
    {
        const bool branch_taken_0x1f68a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f68a4) {
            ctx->pc = 0x1F68A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F68A4u;
            // 0x1f68a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F67A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f67a8;
        }
    }
    ctx->pc = 0x1F68ACu;
    // 0x1f68ac: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x1f68acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1f68b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f68b4: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F68B4u;
    {
        const bool branch_taken_0x1f68b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B4u;
        // 0x1f68b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68b4) {
            ctx->pc = 0x1F69C0u;
            goto label_1f69c0;
        }
    }
    ctx->pc = 0x1F68BCu;
    // 0x1f68bc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f68c0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1f68c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f68c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F68C4u;
    {
        const bool branch_taken_0x1f68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f68c4) {
            ctx->pc = 0x1F6940u;
            goto label_1f6940;
        }
    }
    ctx->pc = 0x1F68CCu;
    // 0x1f68cc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F68CCu;
    SET_GPR_U32(ctx, 31, 0x1F68D4u);
    ctx->pc = 0x1F68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68CCu;
    // 0x1f68d0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F68CCu, 0x1F68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68D4u;
label_1f68d4:
    // 0x1f68d4: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x1f68d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f68d8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1f68d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f68dc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1f68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1f68e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f68e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f68e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f68e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68e8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f68e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f68ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f68f0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F68F0u;
    SET_GPR_U32(ctx, 31, 0x1F68F8u);
    ctx->pc = 0x1F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68F0u;
    // 0x1f68f4: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F68F0u, 0x1F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68F8u;
label_1f68f8:
    // 0x1f68f8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f68fc: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1f68fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6904: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f6908: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1f6908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1f690c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F690Cu;
    SET_GPR_U32(ctx, 31, 0x1F6914u);
    ctx->pc = 0x1F6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F690Cu;
    // 0x1f6910: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F690Cu, 0x1F6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6914u;
label_1f6914:
    // 0x1f6914: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1f6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f691c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1f6920: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f6924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6928: 0x3c014319  lui         $at, 0x4319
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17177 << 16));
    // 0x1f692c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f692cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6934: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f6934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f6938: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F6938u;
    {
        const bool branch_taken_0x1f6938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6938u;
        // 0x1f693c: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6938) {
            ctx->pc = 0x1F69F0u;
            goto label_1f69f0;
        }
    }
    ctx->pc = 0x1F6940u;
label_1f6940:
    // 0x1f6940: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6940u;
    SET_GPR_U32(ctx, 31, 0x1F6948u);
    ctx->pc = 0x1F6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6940u;
    // 0x1f6944: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6940u, 0x1F6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6948u;
label_1f6948:
    // 0x1f6948: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x1f6948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f694c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6950: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6958: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f695c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1f695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1f6960: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6960u;
    SET_GPR_U32(ctx, 31, 0x1F6968u);
    ctx->pc = 0x1F6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6960u;
    // 0x1f6964: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6960u, 0x1F6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6968u;
label_1f6968:
    // 0x1f6968: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f696c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1f696cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6978: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f6978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f697c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f6980: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6980u;
    SET_GPR_U32(ctx, 31, 0x1F6988u);
    ctx->pc = 0x1F6984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6980u;
    // 0x1f6984: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6980u, 0x1F6988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6988u;
label_1f6988:
    // 0x1f6988: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1f6988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f698c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1f698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1f6990: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f6990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f6994: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6998: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1f6998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1f699c: 0x3c014319  lui         $at, 0x4319
    ctx->pc = 0x1f699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17177 << 16));
    // 0x1f69a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f69a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f69a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f69a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f69a8: 0x0  nop
    ctx->pc = 0x1f69a8u;
    // NOP
    // 0x1f69ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f69acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f69b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f69b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f69b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f69b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f69b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F69B8u;
    {
        const bool branch_taken_0x1f69b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69B8u;
        // 0x1f69bc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69b8) {
            ctx->pc = 0x1F69F0u;
            goto label_1f69f0;
        }
    }
    ctx->pc = 0x1F69C0u;
label_1f69c0:
    // 0x1f69c0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F69C0u;
    SET_GPR_U32(ctx, 31, 0x1F69C8u);
    ctx->pc = 0x1F69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69C0u;
    // 0x1f69c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F69C0u, 0x1F69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69C8u;
label_1f69c8:
    // 0x1f69c8: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x1f69c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x1f69cc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f69d0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1f69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f69d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f69d8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1f69d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1f69dc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F69DCu;
    SET_GPR_U32(ctx, 31, 0x1F69E4u);
    ctx->pc = 0x1F69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69DCu;
    // 0x1f69e0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F69DCu, 0x1F69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69E4u;
label_1f69e4:
    // 0x1f69e4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f69e8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1f69e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1f69ec: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1f69f0:
    // 0x1f69f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f69f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f69f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f69f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f69f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f69f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f69fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f69fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f6a00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f6a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6a04: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1f6a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a08: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1f6a08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6a0c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A14u;
        // 0x1f6a18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6A1Cu;
    // 0x1f6a1c: 0x0  nop
    ctx->pc = 0x1f6a1cu;
    // NOP
    ctx->pc = 0x1f6a20u;
}
