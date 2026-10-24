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

// Function: cCockBossBar_roomInit
// Address: 0x13c818 - 0x13c930
void cCockBossBar_roomInit_0x13c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockBossBar_roomInit_0x13c818");
#endif

    switch (ctx->pc) {
        case 0x13c858u: goto label_13c858;
        case 0x13c888u: goto label_13c888;
        case 0x13c898u: goto label_13c898;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f8u: goto label_13c8f8;
        default: break;
    }

    ctx->pc = 0x13c818u;

    // 0x13c818: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13c81c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13c820: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13c824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c828: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13c82c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13c830: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13c834: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x13C834u;
    {
        const bool branch_taken_0x13c834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c834) {
            ctx->pc = 0x13C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C834u;
            // 0x13c838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C8C4u;
            goto label_13c8c4;
        }
    }
    ctx->pc = 0x13C83Cu;
    // 0x13c83c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13c840: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x13c844: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x13c848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c84c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c850: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x13C850u;
    SET_GPR_U32(ctx, 31, 0x13C858u);
    ctx->pc = 0x13C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C850u;
    // 0x13c854: 0x24c6dd20  addiu       $a2, $a2, -0x22E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x13C850u, 0x13C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C858u;
label_13c858:
    // 0x13c858: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x13c85c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x13c860: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x13c860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x13c864: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c86c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13c86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c870: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13c870u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c874: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13c874u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c878: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x13c878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x13c87c: 0x26260094  addiu       $a2, $s1, 0x94
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x13c880: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x13C880u;
    SET_GPR_U32(ctx, 31, 0x13C888u);
    ctx->pc = 0x13C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C880u;
    // 0x13c884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x13C880u, 0x13C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C888u;
label_13c888:
    // 0x13c888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13c888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c890: 0xc080458  jal         func_201160
    ctx->pc = 0x13C890u;
    SET_GPR_U32(ctx, 31, 0x13C898u);
    ctx->pc = 0x13C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C890u;
    // 0x13c894: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x13C890u, 0x13C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C898u;
label_13c898:
    // 0x13c898: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13c89c: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13c8a0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13c8a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c8a8: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x13C8A8u;
    SET_GPR_U32(ctx, 31, 0x13C8B0u);
    ctx->pc = 0x13C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8A8u;
    // 0x13c8ac: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x13C8A8u, 0x13C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8B0u;
label_13c8b0:
    // 0x13c8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c8b8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13C8B8u;
    SET_GPR_U32(ctx, 31, 0x13C8C0u);
    ctx->pc = 0x13C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8B8u;
    // 0x13c8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13C8B8u, 0x13C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8C0u;
label_13c8c0:
    // 0x13c8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c8c4:
    // 0x13c8c4: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13C8C4u;
    SET_GPR_U32(ctx, 31, 0x13C8CCu);
    ctx->pc = 0x13C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8C4u;
    // 0x13c8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13C8C4u, 0x13C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8CCu;
label_13c8cc:
    // 0x13c8cc: 0x263200bc  addiu       $s2, $s1, 0xBC
    ctx->pc = 0x13c8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x13c8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c8d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13c8dc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x13c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x13c8e0: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x13c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x13c8e4: 0xa62000b4  sh          $zero, 0xB4($s1)
    ctx->pc = 0x13c8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 180), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c8e8: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x13c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x13c8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c8f0:
    // 0x13c8f0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13C8F0u;
    SET_GPR_U32(ctx, 31, 0x13C8F8u);
    ctx->pc = 0x13C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8F0u;
    // 0x13c8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13C8F0u, 0x13C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13c8fc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c900: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13c904: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13c904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c908: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13c908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13c90c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x13c90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13c910: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13C910u;
    {
        const bool branch_taken_0x13c910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C910u;
        // 0x13c914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c910) {
            ctx->pc = 0x13C8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c8f0;
        }
    }
    ctx->pc = 0x13C918u;
    // 0x13c918: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13c918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c91c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13c91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c920: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13c920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c924: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c928: 0x3e00008  jr          $ra
    ctx->pc = 0x13C928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C928u;
        // 0x13c92c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C930u;
}
