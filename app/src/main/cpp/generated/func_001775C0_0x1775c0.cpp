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

// Function: func_001775C0
// Address: 0x1775c0 - 0x177dc0
void func_001775C0_0x1775c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001775C0_0x1775c0");
#endif

    switch (ctx->pc) {
        case 0x17764cu: goto label_17764c;
        case 0x177678u: goto label_177678;
        case 0x17768cu: goto label_17768c;
        case 0x17769cu: goto label_17769c;
        case 0x1776b0u: goto label_1776b0;
        case 0x177704u: goto label_177704;
        case 0x177738u: goto label_177738;
        case 0x177760u: goto label_177760;
        case 0x177774u: goto label_177774;
        case 0x177790u: goto label_177790;
        case 0x1778b0u: goto label_1778b0;
        case 0x1778bcu: goto label_1778bc;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778e4u: goto label_1778e4;
        case 0x1778f0u: goto label_1778f0;
        case 0x17790cu: goto label_17790c;
        case 0x177a30u: goto label_177a30;
        case 0x177a3cu: goto label_177a3c;
        case 0x177a48u: goto label_177a48;
        case 0x177a58u: goto label_177a58;
        case 0x177a64u: goto label_177a64;
        case 0x177a70u: goto label_177a70;
        case 0x177a94u: goto label_177a94;
        case 0x177abcu: goto label_177abc;
        case 0x177ae4u: goto label_177ae4;
        case 0x177b18u: goto label_177b18;
        case 0x177b68u: goto label_177b68;
        case 0x177bacu: goto label_177bac;
        case 0x177bbcu: goto label_177bbc;
        case 0x177c38u: goto label_177c38;
        case 0x177cb0u: goto label_177cb0;
        case 0x177cccu: goto label_177ccc;
        case 0x177d20u: goto label_177d20;
        default: break;
    }

    ctx->pc = 0x1775c0u;

    // 0x1775c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1775c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1775c4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1775c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1775c8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1775c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1775cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1775ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775d0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1775d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1775d4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1775d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1775d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1775d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1775dc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1775dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1775e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1775e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1775e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1775e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1775e8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1775e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1775ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1775ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1775f0: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1775f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1775f4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1775f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1775f8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1775f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1775fc: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1775fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x177600: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x177600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x177604: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x177604u;
    {
        const bool branch_taken_0x177604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177604u;
        // 0x177608: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177604) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x17760Cu;
    // 0x17760c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177610: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x177610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
    // 0x177614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x177614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177618: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17761c: 0x800008  jr          $a0
    ctx->pc = 0x17761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177624u: goto label_177624;
            case 0x177B28u: goto label_177b28;
            case 0x177B4Cu: goto label_177b4c;
            case 0x177CE4u: goto label_177ce4;
            case 0x177D28u: goto label_177d28;
            case 0x177D6Cu: goto label_177d6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17761Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x177624u;
label_177624:
    // 0x177624: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x177624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x177628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17762c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x177630: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x177630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177634: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x177634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177638: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17763c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17763cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177640: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x177640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177644: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x177644u;
    SET_GPR_U32(ctx, 31, 0x17764Cu);
    ctx->pc = 0x177648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177644u;
    // 0x177648: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x177644u, 0x17764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17764Cu;
label_17764c:
    // 0x17764c: 0x82430d3c  lb          $v1, 0xD3C($s2)
    ctx->pc = 0x17764cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x177650: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177650u;
    {
        const bool branch_taken_0x177650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177650u;
        // 0x177654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177650) {
            ctx->pc = 0x177668u;
            goto label_177668;
        }
    }
    ctx->pc = 0x177658u;
    // 0x177658: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177658u;
    {
        const bool branch_taken_0x177658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177658u;
        // 0x17765c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177658) {
            ctx->pc = 0x177680u;
            goto label_177680;
        }
    }
    ctx->pc = 0x177660u;
    // 0x177660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x177660u;
    {
        const bool branch_taken_0x177660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177660u;
        // 0x177664: 0x82450d3c  lb          $a1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177660) {
            ctx->pc = 0x177694u;
            goto label_177694;
        }
    }
    ctx->pc = 0x177668u;
label_177668:
    // 0x177668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17766c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17766cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177670: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x177670u;
    SET_GPR_U32(ctx, 31, 0x177678u);
    ctx->pc = 0x177674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177670u;
    // 0x177674: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x177670u, 0x177678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177678u;
label_177678:
    // 0x177678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177678u;
    {
        const bool branch_taken_0x177678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177678u;
        // 0x17767c: 0x82450d3c  lb          $a1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177678) {
            ctx->pc = 0x177690u;
            goto label_177690;
        }
    }
    ctx->pc = 0x177680u;
label_177680:
    // 0x177680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177684: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x177684u;
    SET_GPR_U32(ctx, 31, 0x17768Cu);
    ctx->pc = 0x177688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177684u;
    // 0x177688: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x177684u, 0x17768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17768Cu;
label_17768c:
    // 0x17768c: 0x82450d3c  lb          $a1, 0xD3C($s2)
    ctx->pc = 0x17768cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
label_177690:
    // 0x177690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177694:
    // 0x177694: 0xc05e01a  jal         func_178068
    ctx->pc = 0x177694u;
    SET_GPR_U32(ctx, 31, 0x17769Cu);
    ctx->pc = 0x177698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177694u;
    // 0x177698: 0x26560d30  addiu       $s6, $s2, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178068u, 0x177694u, 0x17769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17769Cu;
label_17769c:
    // 0x17769c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x17769cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776a0: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1776a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1776a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1776a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1776a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776ac: 0x0  nop
    ctx->pc = 0x1776acu;
    // NOP
label_1776b0:
    // 0x1776b0: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1776b4: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x1776b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1776b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1776b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1776bc: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x1776bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1776c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1776c4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1776c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1776c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1776cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1776ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1776d0: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1776d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1776d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1776d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1776d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1776D8u;
    {
        const bool branch_taken_0x1776d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1776DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776D8u;
        // 0x1776dc: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776d8) {
            ctx->pc = 0x1776B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1776b0;
        }
    }
    ctx->pc = 0x1776E0u;
    // 0x1776e0: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1776E0u;
    {
        const bool branch_taken_0x1776e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776e0) {
            ctx->pc = 0x1776F4u;
            goto label_1776f4;
        }
    }
    ctx->pc = 0x1776E8u;
    // 0x1776e8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1776e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1776ec: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1776ECu;
    {
        const bool branch_taken_0x1776ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776ECu;
        // 0x1776f0: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776ec) {
            ctx->pc = 0x177D78u;
            goto label_177d78;
        }
    }
    ctx->pc = 0x1776F4u;
label_1776f4:
    // 0x1776f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1776f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1776f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1776fc: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1776FCu;
    SET_GPR_U32(ctx, 31, 0x177704u);
    ctx->pc = 0x177700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776FCu;
    // 0x177700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1776FCu, 0x177704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177704u;
label_177704:
    // 0x177704: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x177704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x177708: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x177708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17770c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x177710: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x177710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x177714: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x177714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177718: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x17771c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x17771cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x177720: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x177720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x177724: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x177724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x177728: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x177728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17772c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17772cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x177730: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177730u;
    SET_GPR_U32(ctx, 31, 0x177738u);
    ctx->pc = 0x177734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177730u;
    // 0x177734: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177730u, 0x177738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177738u;
label_177738:
    // 0x177738: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x177738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17773c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17773cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177740: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177744: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x177744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x177748: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x177748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17774c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x17774cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x177750: 0x27d413a0  addiu       $s4, $fp, 0x13A0
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x177754: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177758: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177758u;
    SET_GPR_U32(ctx, 31, 0x177760u);
    ctx->pc = 0x17775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177758u;
    // 0x17775c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177758u, 0x177760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177760u;
label_177760:
    // 0x177760: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177764: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x177764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177768: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17776c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17776Cu;
    SET_GPR_U32(ctx, 31, 0x177774u);
    ctx->pc = 0x177770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17776Cu;
    // 0x177770: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17776Cu, 0x177774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177774u;
label_177774:
    // 0x177774: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177778: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x177778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17777c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177780: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177784: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177788: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x177788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17778c: 0x0  nop
    ctx->pc = 0x17778cu;
    // NOP
label_177790:
    // 0x177790: 0x151942  srl         $v1, $s5, 5
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x177794: 0x32a5001f  andi        $a1, $s5, 0x1F
    ctx->pc = 0x177794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x177798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17779c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17779cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1777a0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1777a4: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1777a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1777ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1777acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1777b0: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1777B0u;
    {
        const bool branch_taken_0x1777b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1777b0) {
            ctx->pc = 0x1777B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1777B0u;
            // 0x1777b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177914u;
            goto label_177914;
        }
    }
    ctx->pc = 0x1777B8u;
    // 0x1777b8: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x1777b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1777bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1777bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777c0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1777c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1777c4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1777c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1777c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1777C8u;
    {
        const bool branch_taken_0x1777c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1777CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777C8u;
        // 0x1777cc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777c8) {
            ctx->pc = 0x1777D8u;
            goto label_1777d8;
        }
    }
    ctx->pc = 0x1777D0u;
    // 0x1777d0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1777d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1777d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1777d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1777d8:
    // 0x1777d8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1777d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1777dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1777DCu;
    {
        const bool branch_taken_0x1777dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777DCu;
        // 0x1777e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777dc) {
            ctx->pc = 0x1777F4u;
            goto label_1777f4;
        }
    }
    ctx->pc = 0x1777E4u;
    // 0x1777e4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1777e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1777ECu;
    {
        const bool branch_taken_0x1777ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777ECu;
        // 0x1777f0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777ec) {
            ctx->pc = 0x1777F8u;
            goto label_1777f8;
        }
    }
    ctx->pc = 0x1777F4u;
label_1777f4:
    // 0x1777f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1777f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1777f8:
    // 0x1777f8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1777f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1777fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1777fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177800: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x177800u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x177804: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x177804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x177808: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x177808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17780c: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x17780cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x177810: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x177810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177814: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177814u;
    {
        const bool branch_taken_0x177814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177814u;
        // 0x177818: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177814) {
            ctx->pc = 0x177824u;
            goto label_177824;
        }
    }
    ctx->pc = 0x17781Cu;
    // 0x17781c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17781cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177824:
    // 0x177824: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x177824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x177828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177828u;
    {
        const bool branch_taken_0x177828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177828u;
        // 0x17782c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177828) {
            ctx->pc = 0x177840u;
            goto label_177840;
        }
    }
    ctx->pc = 0x177830u;
    // 0x177830: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177838u;
    {
        const bool branch_taken_0x177838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177838u;
        // 0x17783c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177838) {
            ctx->pc = 0x177844u;
            goto label_177844;
        }
    }
    ctx->pc = 0x177840u;
label_177840:
    // 0x177840: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x177840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177844:
    // 0x177844: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x177844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x177848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17784c: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x17784cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x177850: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x177850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x177854: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x177854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x177858: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x177858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17785c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x17785cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177860u;
    {
        const bool branch_taken_0x177860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177860u;
        // 0x177864: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177860) {
            ctx->pc = 0x177870u;
            goto label_177870;
        }
    }
    ctx->pc = 0x177868u;
    // 0x177868: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x177868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17786c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177870:
    // 0x177870: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x177870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x177874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177874u;
    {
        const bool branch_taken_0x177874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177874u;
        // 0x177878: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177874) {
            ctx->pc = 0x17788Cu;
            goto label_17788c;
        }
    }
    ctx->pc = 0x17787Cu;
    // 0x17787c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x17787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177884u;
    {
        const bool branch_taken_0x177884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177884u;
        // 0x177888: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177884) {
            ctx->pc = 0x177890u;
            goto label_177890;
        }
    }
    ctx->pc = 0x17788Cu;
label_17788c:
    // 0x17788c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177890:
    // 0x177890: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177894: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x177898: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x177898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17789c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1778a0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1778a4: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1778a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1778a8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1778A8u;
    SET_GPR_U32(ctx, 31, 0x1778B0u);
    ctx->pc = 0x1778ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778A8u;
    // 0x1778ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1778A8u, 0x1778B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778B0u;
label_1778b0:
    // 0x1778b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1778b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778b4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1778B4u;
    SET_GPR_U32(ctx, 31, 0x1778BCu);
    ctx->pc = 0x1778B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778B4u;
    // 0x1778b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1778B4u, 0x1778BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778BCu;
label_1778bc:
    // 0x1778bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1778bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778c0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1778C0u;
    SET_GPR_U32(ctx, 31, 0x1778C8u);
    ctx->pc = 0x1778C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778C0u;
    // 0x1778c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1778C0u, 0x1778C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778C8u;
label_1778c8:
    // 0x1778c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1778c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1778ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778d0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1778D0u;
    SET_GPR_U32(ctx, 31, 0x1778D8u);
    ctx->pc = 0x1778D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778D0u;
    // 0x1778d4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1778D0u, 0x1778D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778D8u;
label_1778d8:
    // 0x1778d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1778d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778dc: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1778DCu;
    SET_GPR_U32(ctx, 31, 0x1778E4u);
    ctx->pc = 0x1778E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778DCu;
    // 0x1778e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1778DCu, 0x1778E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778E4u;
label_1778e4:
    // 0x1778e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1778e8: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1778E8u;
    SET_GPR_U32(ctx, 31, 0x1778F0u);
    ctx->pc = 0x1778ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778E8u;
    // 0x1778ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1778E8u, 0x1778F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778F0u;
label_1778f0:
    // 0x1778f0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1778f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1778f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1778f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778f8: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x1778f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1778fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1778fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177900: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x177900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x177904: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x177904u;
    SET_GPR_U32(ctx, 31, 0x17790Cu);
    ctx->pc = 0x177908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177904u;
    // 0x177908: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x177904u, 0x17790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17790Cu;
label_17790c:
    // 0x17790c: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x17790cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x177910: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x177910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_177914:
    // 0x177914: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x177918: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x177918u;
    {
        const bool branch_taken_0x177918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177918u;
        // 0x17791c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177918) {
            ctx->pc = 0x177790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177790;
        }
    }
    ctx->pc = 0x177920u;
    // 0x177920: 0x27c213a0  addiu       $v0, $fp, 0x13A0
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x177924: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x177924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177928: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x177928u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17792c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177930: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x177930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x177934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177934u;
    {
        const bool branch_taken_0x177934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177934u;
        // 0x177938: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177934) {
            ctx->pc = 0x177944u;
            goto label_177944;
        }
    }
    ctx->pc = 0x17793Cu;
    // 0x17793c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17793cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177944:
    // 0x177944: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x177944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x177948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177948u;
    {
        const bool branch_taken_0x177948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177948u;
        // 0x17794c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177948) {
            ctx->pc = 0x177960u;
            goto label_177960;
        }
    }
    ctx->pc = 0x177950u;
    // 0x177950: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177958u;
    {
        const bool branch_taken_0x177958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177958u;
        // 0x17795c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177958) {
            ctx->pc = 0x177964u;
            goto label_177964;
        }
    }
    ctx->pc = 0x177960u;
label_177960:
    // 0x177960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177964:
    // 0x177964: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x177964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x177968: 0x27c313a0  addiu       $v1, $fp, 0x13A0
    ctx->pc = 0x177968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x17796c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x17796cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x177970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177974: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x177974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x177978: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x177978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17797c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x177980: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x177980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177984: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177984u;
    {
        const bool branch_taken_0x177984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177984u;
        // 0x177988: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177984) {
            ctx->pc = 0x177994u;
            goto label_177994;
        }
    }
    ctx->pc = 0x17798Cu;
    // 0x17798c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17798cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177994:
    // 0x177994: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x177994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x177998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177998u;
    {
        const bool branch_taken_0x177998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177998u;
        // 0x17799c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177998) {
            ctx->pc = 0x1779B0u;
            goto label_1779b0;
        }
    }
    ctx->pc = 0x1779A0u;
    // 0x1779a0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1779a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1779a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1779a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1779a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1779A8u;
    {
        const bool branch_taken_0x1779a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779A8u;
        // 0x1779ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779a8) {
            ctx->pc = 0x1779B4u;
            goto label_1779b4;
        }
    }
    ctx->pc = 0x1779B0u;
label_1779b0:
    // 0x1779b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1779b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1779b4:
    // 0x1779b4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1779b8: 0x27c313a0  addiu       $v1, $fp, 0x13A0
    ctx->pc = 0x1779b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x1779bc: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1779bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1779c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1779c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1779c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1779c8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1779c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1779cc: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1779ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1779d0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1779d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1779d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1779D4u;
    {
        const bool branch_taken_0x1779d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1779D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779D4u;
        // 0x1779d8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779d4) {
            ctx->pc = 0x1779E4u;
            goto label_1779e4;
        }
    }
    ctx->pc = 0x1779DCu;
    // 0x1779dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1779dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1779e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1779e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1779e4:
    // 0x1779e4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1779e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1779e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1779E8u;
    {
        const bool branch_taken_0x1779e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779E8u;
        // 0x1779ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779e8) {
            ctx->pc = 0x177A00u;
            goto label_177a00;
        }
    }
    ctx->pc = 0x1779F0u;
    // 0x1779f0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1779f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1779f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1779f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1779F8u;
    {
        const bool branch_taken_0x1779f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779F8u;
        // 0x1779fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779f8) {
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x177A00u;
label_177a00:
    // 0x177a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177a04:
    // 0x177a04: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x177a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177a08: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x177a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x177a0c: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x177a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x177a10: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x177a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x177a14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x177a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x177a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x177a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x177a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177a20: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x177a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x177a24: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x177a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x177a28: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x177A28u;
    SET_GPR_U32(ctx, 31, 0x177A30u);
    ctx->pc = 0x177A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A28u;
    // 0x177a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x177A28u, 0x177A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A30u;
label_177a30:
    // 0x177a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a34: 0xc05ce66  jal         func_173998
    ctx->pc = 0x177A34u;
    SET_GPR_U32(ctx, 31, 0x177A3Cu);
    ctx->pc = 0x177A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A34u;
    // 0x177a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x177A34u, 0x177A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A3Cu;
label_177a3c:
    // 0x177a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a40: 0xc051f18  jal         func_147C60
    ctx->pc = 0x177A40u;
    SET_GPR_U32(ctx, 31, 0x177A48u);
    ctx->pc = 0x177A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A40u;
    // 0x177a44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x177A40u, 0x177A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A48u;
label_177a48:
    // 0x177a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a50: 0xc051f22  jal         func_147C88
    ctx->pc = 0x177A50u;
    SET_GPR_U32(ctx, 31, 0x177A58u);
    ctx->pc = 0x177A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A50u;
    // 0x177a54: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x177A50u, 0x177A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A58u;
label_177a58:
    // 0x177a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x177a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a5c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x177A5Cu;
    SET_GPR_U32(ctx, 31, 0x177A64u);
    ctx->pc = 0x177A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A5Cu;
    // 0x177a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x177A5Cu, 0x177A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A64u;
label_177a64:
    // 0x177a64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177a68: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x177A68u;
    SET_GPR_U32(ctx, 31, 0x177A70u);
    ctx->pc = 0x177A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A68u;
    // 0x177a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x177A68u, 0x177A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A70u;
label_177a70:
    // 0x177a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x177a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x177a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177a78: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x177a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x177a84: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x177a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x177a88: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x177a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x177a8c: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x177A8Cu;
    SET_GPR_U32(ctx, 31, 0x177A94u);
    ctx->pc = 0x177A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A8Cu;
    // 0x177a90: 0xe6e00008  swc1        $f0, 0x8($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x177A8Cu, 0x177A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A94u;
label_177a94:
    // 0x177a94: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x177a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x177a98: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x177a9c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x177A9Cu;
    {
        const bool branch_taken_0x177a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A9Cu;
        // 0x177aa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a9c) {
            ctx->pc = 0x177ABCu;
            goto label_177abc;
        }
    }
    ctx->pc = 0x177AA4u;
    // 0x177aa4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x177aa8: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x177aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ab0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177ab4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x177AB4u;
    SET_GPR_U32(ctx, 31, 0x177ABCu);
    ctx->pc = 0x177AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AB4u;
    // 0x177ab8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x177AB4u, 0x177ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177ABCu;
label_177abc:
    // 0x177abc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x177abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x177ac0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177ac4: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x177ac8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x177ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177acc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x177accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x177ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ad8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x177ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177adc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x177ADCu;
    SET_GPR_U32(ctx, 31, 0x177AE4u);
    ctx->pc = 0x177AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ADCu;
    // 0x177ae0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x177ADCu, 0x177AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AE4u;
label_177ae4:
    // 0x177ae4: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x177ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x177ae8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x177aec: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x177aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x177af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x177af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177af4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x177af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177af8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x177af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x177afc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x177afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x177b00: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x177b00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x177b04: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x177b08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177B08u;
    {
        const bool branch_taken_0x177b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B08u;
        // 0x177b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b08) {
            ctx->pc = 0x177B1Cu;
            goto label_177b1c;
        }
    }
    ctx->pc = 0x177B10u;
    // 0x177b10: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x177B10u;
    SET_GPR_U32(ctx, 31, 0x177B18u);
    ctx->pc = 0x177B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B10u;
    // 0x177b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x177B10u, 0x177B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B18u;
label_177b18:
    // 0x177b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177b1c:
    // 0x177b1c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x177b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x177b20: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x177b20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x177b24: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x177b24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_177b28:
    // 0x177b28: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x177b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x177b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177b30: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x177b34: 0x1c600092  bgtz        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x177B34u;
    {
        const bool branch_taken_0x177b34 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x177B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B34u;
        // 0x177b38: 0xa6420d34  sh          $v0, 0xD34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b34) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x177B3Cu;
    // 0x177b3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177b40: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x177b40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x177b44: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x177B44u;
    {
        const bool branch_taken_0x177b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B44u;
        // 0x177b48: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b44) {
            ctx->pc = 0x177D7Cu;
            goto label_177d7c;
        }
    }
    ctx->pc = 0x177B4Cu;
label_177b4c:
    // 0x177b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b50: 0x26560d30  addiu       $s6, $s2, 0xD30
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x177b54: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x177b58: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x177b58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x177b5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x177b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b60: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x177b64: 0x0  nop
    ctx->pc = 0x177b64u;
    // NOP
label_177b68:
    // 0x177b68: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x177b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x177b6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x177b70: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x177b74: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x177b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x177b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x177b80: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x177B80u;
    {
        const bool branch_taken_0x177b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177b80) {
            ctx->pc = 0x177B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177B80u;
            // 0x177b84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177BC0u;
            goto label_177bc0;
        }
    }
    ctx->pc = 0x177B88u;
    // 0x177b88: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177B88u;
    {
        const bool branch_taken_0x177b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B88u;
        // 0x177b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b88) {
            ctx->pc = 0x177BA0u;
            goto label_177ba0;
        }
    }
    ctx->pc = 0x177B90u;
    // 0x177b90: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177B90u;
    {
        const bool branch_taken_0x177b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x177B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B90u;
        // 0x177b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b90) {
            ctx->pc = 0x177BB4u;
            goto label_177bb4;
        }
    }
    ctx->pc = 0x177B98u;
    // 0x177b98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x177B98u;
    {
        const bool branch_taken_0x177b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B98u;
        // 0x177b9c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b98) {
            ctx->pc = 0x177BC0u;
            goto label_177bc0;
        }
    }
    ctx->pc = 0x177BA0u;
label_177ba0:
    // 0x177ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ba4: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x177BA4u;
    SET_GPR_U32(ctx, 31, 0x177BACu);
    ctx->pc = 0x177BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BA4u;
    // 0x177ba8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x177BA4u, 0x177BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BACu;
label_177bac:
    // 0x177bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177BACu;
    {
        const bool branch_taken_0x177bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BACu;
        // 0x177bb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bac) {
            ctx->pc = 0x177BC0u;
            goto label_177bc0;
        }
    }
    ctx->pc = 0x177BB4u;
label_177bb4:
    // 0x177bb4: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x177BB4u;
    SET_GPR_U32(ctx, 31, 0x177BBCu);
    ctx->pc = 0x177BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BB4u;
    // 0x177bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x177BB4u, 0x177BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BBCu;
label_177bbc:
    // 0x177bbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_177bc0:
    // 0x177bc0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x177bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x177bc4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x177BC4u;
    {
        const bool branch_taken_0x177bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC4u;
        // 0x177bc8: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bc4) {
            ctx->pc = 0x177B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177b68;
        }
    }
    ctx->pc = 0x177BCCu;
    // 0x177bcc: 0x27c213a0  addiu       $v0, $fp, 0x13A0
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x177bd0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x177bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177bd4: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x177bd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bdc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x177bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x177be0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177BE0u;
    {
        const bool branch_taken_0x177be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BE0u;
        // 0x177be4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177be0) {
            ctx->pc = 0x177BF0u;
            goto label_177bf0;
        }
    }
    ctx->pc = 0x177BE8u;
    // 0x177be8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x177be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177bf0:
    // 0x177bf0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x177bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x177bf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177BF4u;
    {
        const bool branch_taken_0x177bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BF4u;
        // 0x177bf8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bf4) {
            ctx->pc = 0x177C0Cu;
            goto label_177c0c;
        }
    }
    ctx->pc = 0x177BFCu;
    // 0x177bfc: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177c04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177C04u;
    {
        const bool branch_taken_0x177c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C04u;
        // 0x177c08: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c04) {
            ctx->pc = 0x177C10u;
            goto label_177c10;
        }
    }
    ctx->pc = 0x177C0Cu;
label_177c0c:
    // 0x177c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c10:
    // 0x177c10: 0x27c213a0  addiu       $v0, $fp, 0x13A0
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5024));
    // 0x177c14: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x177c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x177c18: 0x9050000a  lbu         $s0, 0xA($v0)
    ctx->pc = 0x177c18u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x177c1c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x177c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x177c20: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x177c24: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x177C24u;
    {
        const bool branch_taken_0x177c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C24u;
        // 0x177c28: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c24) {
            ctx->pc = 0x177CBCu;
            goto label_177cbc;
        }
    }
    ctx->pc = 0x177C2Cu;
    // 0x177c2c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x177c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c30: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x177c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c34: 0x0  nop
    ctx->pc = 0x177c34u;
    // NOP
label_177c38:
    // 0x177c38: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x177c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c40: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x177C40u;
    {
        const bool branch_taken_0x177c40 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x177C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C40u;
        // 0x177c44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c40) {
            ctx->pc = 0x177C4Cu;
            goto label_177c4c;
        }
    }
    ctx->pc = 0x177C48u;
    // 0x177c48: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x177c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177c4c:
    // 0x177c4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x177c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C50u;
    {
        const bool branch_taken_0x177c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C50u;
        // 0x177c54: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c50) {
            ctx->pc = 0x177C68u;
            goto label_177c68;
        }
    }
    ctx->pc = 0x177C58u;
    // 0x177c58: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177C60u;
    {
        const bool branch_taken_0x177c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C60u;
        // 0x177c64: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c60) {
            ctx->pc = 0x177C6Cu;
            goto label_177c6c;
        }
    }
    ctx->pc = 0x177C68u;
label_177c68:
    // 0x177c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c6c:
    // 0x177c6c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x177c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177c70: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c78: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x177C78u;
    {
        const bool branch_taken_0x177c78 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x177C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C78u;
        // 0x177c7c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c78) {
            ctx->pc = 0x177C84u;
            goto label_177c84;
        }
    }
    ctx->pc = 0x177C80u;
    // 0x177c80: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x177c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177c84:
    // 0x177c84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x177c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177c88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C88u;
    {
        const bool branch_taken_0x177c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C88u;
        // 0x177c8c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c88) {
            ctx->pc = 0x177CA0u;
            goto label_177ca0;
        }
    }
    ctx->pc = 0x177C90u;
    // 0x177c90: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177c98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177C98u;
    {
        const bool branch_taken_0x177c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C98u;
        // 0x177c9c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c98) {
            ctx->pc = 0x177CA4u;
            goto label_177ca4;
        }
    }
    ctx->pc = 0x177CA0u;
label_177ca0:
    // 0x177ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ca4:
    // 0x177ca4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ca8: 0xc051d52  jal         func_147548
    ctx->pc = 0x177CA8u;
    SET_GPR_U32(ctx, 31, 0x177CB0u);
    ctx->pc = 0x177CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CA8u;
    // 0x177cac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x177CA8u, 0x177CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CB0u;
label_177cb0:
    // 0x177cb0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x177cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x177cb4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x177CB4u;
    {
        const bool branch_taken_0x177cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CB4u;
        // 0x177cb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cb4) {
            ctx->pc = 0x177C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177c38;
        }
    }
    ctx->pc = 0x177CBCu;
label_177cbc:
    // 0x177cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177cc4: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x177CC4u;
    SET_GPR_U32(ctx, 31, 0x177CCCu);
    ctx->pc = 0x177CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CC4u;
    // 0x177cc8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x177CC4u, 0x177CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CCCu;
label_177ccc:
    // 0x177ccc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x177cd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177cd4: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x177cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x177cd8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x177cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x177cdc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x177CDCu;
    {
        const bool branch_taken_0x177cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CDCu;
        // 0x177ce0: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cdc) {
            ctx->pc = 0x177D7Cu;
            goto label_177d7c;
        }
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x177ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x177ce8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177cec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x177cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x177cf0: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x177CF0u;
    {
        const bool branch_taken_0x177cf0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x177CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CF0u;
        // 0x177cf4: 0xa6420d34  sh          $v0, 0xD34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cf0) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x177CF8u;
    // 0x177cf8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177cfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x177cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177d00: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x177d04: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x177d04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x177d08: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x177d08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x177d0c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x177d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x177d10: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177D10u;
    {
        const bool branch_taken_0x177d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D10u;
        // 0x177d14: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d10) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x177D18u;
    // 0x177d18: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x177D18u;
    SET_GPR_U32(ctx, 31, 0x177D20u);
    ctx->pc = 0x177D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D18u;
    // 0x177d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x177D18u, 0x177D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D20u;
label_177d20:
    // 0x177d20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x177D20u;
    {
        const bool branch_taken_0x177d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D20u;
        // 0x177d24: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d20) {
            ctx->pc = 0x177D84u;
            goto label_177d84;
        }
    }
    ctx->pc = 0x177D28u;
label_177d28:
    // 0x177d28: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x177d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x177d2c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x177d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x177d30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x177d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177d38: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x177d3c: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x177d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x177d40: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x177d40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x177d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177d48: 0x0  nop
    ctx->pc = 0x177d48u;
    // NOP
    // 0x177d4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177d50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x177d50u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x177d54: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x177D54u;
    {
        const bool branch_taken_0x177d54 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x177D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D54u;
        // 0x177d58: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d54) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x177D5Cu;
    // 0x177d5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x177d60: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x177d60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x177d64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177D64u;
    {
        const bool branch_taken_0x177d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D64u;
        // 0x177d68: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d64) {
            ctx->pc = 0x177D7Cu;
            goto label_177d7c;
        }
    }
    ctx->pc = 0x177D6Cu;
label_177d6c:
    // 0x177d6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177d70: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x177d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x177d74: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x177d74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_177d78:
    // 0x177d78: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x177d78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_177d7c:
    // 0x177d7c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x177d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_177d80:
    // 0x177d80: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x177d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_177d84:
    // 0x177d84: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x177d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x177d88: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x177d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x177d8c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x177d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x177d90: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x177d90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x177d94: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x177d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x177d98: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x177d98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177d9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177d9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177da0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x177da0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177da4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x177da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177da8: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x177da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x177dac: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x177dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x177db0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x177db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177db4: 0x3e00008  jr          $ra
    ctx->pc = 0x177DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DB4u;
        // 0x177db8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DBCu;
    // 0x177dbc: 0x0  nop
    ctx->pc = 0x177dbcu;
    // NOP
    ctx->pc = 0x177dc0u;
}
