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

// Function: cCockLastBossBar_roomInit
// Address: 0x13e7e8 - 0x13e908
void cCockLastBossBar_roomInit_0x13e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockLastBossBar_roomInit_0x13e7e8");
#endif

    switch (ctx->pc) {
        case 0x13e828u: goto label_13e828;
        case 0x13e858u: goto label_13e858;
        case 0x13e868u: goto label_13e868;
        case 0x13e880u: goto label_13e880;
        case 0x13e890u: goto label_13e890;
        case 0x13e89cu: goto label_13e89c;
        case 0x13e8b8u: goto label_13e8b8;
        case 0x13e8c0u: goto label_13e8c0;
        default: break;
    }

    ctx->pc = 0x13e7e8u;

    // 0x13e7e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13e7ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13e7f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13e7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13e7fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13e800: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e804: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x13E804u;
    {
        const bool branch_taken_0x13e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e804) {
            ctx->pc = 0x13E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E804u;
            // 0x13e808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E894u;
            goto label_13e894;
        }
    }
    ctx->pc = 0x13E80Cu;
    // 0x13e80c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13e810: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x13e810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x13e814: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x13e814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x13e818: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e81c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13e81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e820: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x13E820u;
    SET_GPR_U32(ctx, 31, 0x13E828u);
    ctx->pc = 0x13E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E820u;
    // 0x13e824: 0x24c6e090  addiu       $a2, $a2, -0x1F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x13E820u, 0x13E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E828u;
label_13e828:
    // 0x13e828: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x13e828u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x13e82c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x13e82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x13e830: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x13e830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x13e834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13e834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13e838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e83c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13e83cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e840: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13e840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e844: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13e844u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e848: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x13e848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x13e84c: 0x26260094  addiu       $a2, $s1, 0x94
    ctx->pc = 0x13e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x13e850: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x13E850u;
    SET_GPR_U32(ctx, 31, 0x13E858u);
    ctx->pc = 0x13E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E850u;
    // 0x13e854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x13E850u, 0x13E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E858u;
label_13e858:
    // 0x13e858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e860: 0xc080458  jal         func_201160
    ctx->pc = 0x13E860u;
    SET_GPR_U32(ctx, 31, 0x13E868u);
    ctx->pc = 0x13E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E860u;
    // 0x13e864: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x13E860u, 0x13E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E868u;
label_13e868:
    // 0x13e868: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13e86c: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e870: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13e874: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x13e878: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x13E878u;
    SET_GPR_U32(ctx, 31, 0x13E880u);
    ctx->pc = 0x13E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E878u;
    // 0x13e87c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x13E878u, 0x13E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E880u;
label_13e880:
    // 0x13e880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e884: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x13e888: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13E888u;
    SET_GPR_U32(ctx, 31, 0x13E890u);
    ctx->pc = 0x13E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E888u;
    // 0x13e88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13E888u, 0x13E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E890u;
label_13e890:
    // 0x13e890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e894:
    // 0x13e894: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13E894u;
    SET_GPR_U32(ctx, 31, 0x13E89Cu);
    ctx->pc = 0x13E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E894u;
    // 0x13e898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13E894u, 0x13E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E89Cu;
label_13e89c:
    // 0x13e89c: 0x263200c0  addiu       $s2, $s1, 0xC0
    ctx->pc = 0x13e89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x13e8a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e8a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e8a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13e8ac: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x13e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x13e8b0: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x13e8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x13e8b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e8b8:
    // 0x13e8b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E8B8u;
    SET_GPR_U32(ctx, 31, 0x13E8C0u);
    ctx->pc = 0x13E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8B8u;
    // 0x13e8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E8B8u, 0x13E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8C0u;
label_13e8c0:
    // 0x13e8c0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e8c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13e8c8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13e8cc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13e8ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e8d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13e8d4: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x13e8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13e8d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8D8u;
        // 0x13e8dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13E8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e8b8;
        }
    }
    ctx->pc = 0x13E8E0u;
    // 0x13e8e0: 0xa220007c  sb          $zero, 0x7C($s1)
    ctx->pc = 0x13e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e8e4: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x13e8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e8e8: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x13e8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e8ec: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x13e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e8f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13e8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13e8f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13e8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e8f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13e8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e8fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e900: 0x3e00008  jr          $ra
    ctx->pc = 0x13E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E900u;
        // 0x13e904: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E908u;
}
