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

// Function: HitPhaseObj_tickPhase
// Address: 0x1b0838 - 0x1b0978
void HitPhaseObj_tickPhase_0x1b0838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitPhaseObj_tickPhase_0x1b0838");
#endif

    switch (ctx->pc) {
        case 0x1b0838u: goto label_1b0838;
        case 0x1b083cu: goto label_1b083c;
        case 0x1b0840u: goto label_1b0840;
        case 0x1b0844u: goto label_1b0844;
        case 0x1b0848u: goto label_1b0848;
        case 0x1b084cu: goto label_1b084c;
        case 0x1b0850u: goto label_1b0850;
        case 0x1b0854u: goto label_1b0854;
        case 0x1b0858u: goto label_1b0858;
        case 0x1b085cu: goto label_1b085c;
        case 0x1b0860u: goto label_1b0860;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0868u: goto label_1b0868;
        case 0x1b086cu: goto label_1b086c;
        case 0x1b0870u: goto label_1b0870;
        case 0x1b0874u: goto label_1b0874;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b087cu: goto label_1b087c;
        case 0x1b0880u: goto label_1b0880;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0888u: goto label_1b0888;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b0890u: goto label_1b0890;
        case 0x1b0894u: goto label_1b0894;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a0u: goto label_1b08a0;
        case 0x1b08a4u: goto label_1b08a4;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08acu: goto label_1b08ac;
        case 0x1b08b0u: goto label_1b08b0;
        case 0x1b08b4u: goto label_1b08b4;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08bcu: goto label_1b08bc;
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        default: break;
    }

    ctx->pc = 0x1b0838u;

label_1b0838:
    // 0x1b0838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b083c:
    // 0x1b083c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b0840:
    // 0x1b0840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b0844:
    // 0x1b0844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0848:
    // 0x1b0848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b084c:
    // 0x1b084c: 0xc06dce0  jal         func_1B7380
label_1b0850:
    if (ctx->pc == 0x1B0850u) {
        ctx->pc = 0x1B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B084Cu;
        // 0x1b0850: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0854u;
        goto label_1b0854;
    }
    ctx->pc = 0x1B084Cu;
    SET_GPR_U32(ctx, 31, 0x1B0854u);
    ctx->pc = 0x1B0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B084Cu;
    // 0x1b0850: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1B084Cu, 0x1B0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0854u;
label_1b0854:
    // 0x1b0854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0858:
    // 0x1b0858: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_1b085c:
    if (ctx->pc == 0x1B085Cu) {
        ctx->pc = 0x1B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0858u;
        // 0x1b085c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0860u;
        goto label_1b0860;
    }
    ctx->pc = 0x1B0858u;
    {
        const bool branch_taken_0x1b0858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0858u;
        // 0x1b085c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0858) {
            ctx->pc = 0x1B08C8u;
            goto label_1b08c8;
        }
    }
    ctx->pc = 0x1B0860u;
label_1b0860:
    // 0x1b0860: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x1b0860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_1b0864:
    // 0x1b0864: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1b0864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1b0868:
    // 0x1b0868: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1b0868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b086c:
    // 0x1b086c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0870:
    if (ctx->pc == 0x1B0870u) {
        ctx->pc = 0x1B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B086Cu;
        // 0x1b0870: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0874u;
        goto label_1b0874;
    }
    ctx->pc = 0x1B086Cu;
    {
        const bool branch_taken_0x1b086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B086Cu;
        // 0x1b0870: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b086c) {
            ctx->pc = 0x1B087Cu;
            goto label_1b087c;
        }
    }
    ctx->pc = 0x1B0874u;
label_1b0874:
    // 0x1b0874: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0878:
    if (ctx->pc == 0x1B0878u) {
        ctx->pc = 0x1B0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0874u;
        // 0x1b0878: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B087Cu;
        goto label_1b087c;
    }
    ctx->pc = 0x1B0874u;
    {
        const bool branch_taken_0x1b0874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0874u;
        // 0x1b0878: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0874) {
            ctx->pc = 0x1B0880u;
            goto label_1b0880;
        }
    }
    ctx->pc = 0x1B087Cu;
label_1b087c:
    // 0x1b087c: 0xa604054a  sh          $a0, 0x54A($s0)
    ctx->pc = 0x1b087cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
label_1b0880:
    // 0x1b0880: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b0880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1b0884:
    // 0x1b0884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0888:
    // 0x1b0888: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b0888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1b088c:
    // 0x1b088c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1b0890:
    // 0x1b0890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0894:
    // 0x1b0894: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1b0894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_1b0898:
    // 0x1b0898: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1b0898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1b089c:
    // 0x1b089c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b089cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b08a0:
    // 0x1b08a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b08a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b08a4:
    // 0x1b08a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b08a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b08a8:
    // 0x1b08a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b08a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b08ac:
    // 0x1b08ac: 0xc0b2e92  jal         func_2CBA48
label_1b08b0:
    if (ctx->pc == 0x1B08B0u) {
        ctx->pc = 0x1B08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08ACu;
        // 0x1b08b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08B4u;
        goto label_1b08b4;
    }
    ctx->pc = 0x1B08ACu;
    SET_GPR_U32(ctx, 31, 0x1B08B4u);
    ctx->pc = 0x1B08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08ACu;
    // 0x1b08b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B08ACu, 0x1B08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08B4u;
label_1b08b4:
    // 0x1b08b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b08b8:
    // 0x1b08b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1b08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b08bc:
    // 0x1b08bc: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1b08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_1b08c0:
    // 0x1b08c0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1b08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b08c4:
    // 0x1b08c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1b08c8:
    // 0x1b08c8: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1b08c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1b08cc:
    // 0x1b08cc: 0x2446dcb0  addiu       $a2, $v0, -0x2350
    ctx->pc = 0x1b08ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958256));
label_1b08d0:
    // 0x1b08d0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b08d4:
    // 0x1b08d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b08d8:
    // 0x1b08d8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b08dc:
    // 0x1b08dc: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b08dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b08e0:
    // 0x1b08e0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b08e4:
    if (ctx->pc == 0x1B08E4u) {
        ctx->pc = 0x1B08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08E0u;
        // 0x1b08e4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08E8u;
        goto label_1b08e8;
    }
    ctx->pc = 0x1B08E0u;
    {
        const bool branch_taken_0x1b08e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08E0u;
        // 0x1b08e4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08e0) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08E8u;
label_1b08e8:
    // 0x1b08e8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b08e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b08ec:
    // 0x1b08ec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b08f0:
    // 0x1b08f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b08f4:
    // 0x1b08f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b08f8:
    // 0x1b08f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b08fc:
    // 0x1b08fc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b08fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b0900:
    // 0x1b0900: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b0900u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b0904:
    // 0x1b0904: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b0908:
    if (ctx->pc == 0x1B0908u) {
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0904u;
        // 0x1b0908: 0x2503dcb0  addiu       $v1, $t0, -0x2350 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B090Cu;
        goto label_1b090c;
    }
    ctx->pc = 0x1B0904u;
    {
        const bool branch_taken_0x1b0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0904u;
        // 0x1b0908: 0x2503dcb0  addiu       $v1, $t0, -0x2350 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0904) {
            ctx->pc = 0x1B0918u;
            goto label_1b0918;
        }
    }
    ctx->pc = 0x1B090Cu;
label_1b090c:
    // 0x1b090c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b0910:
    // 0x1b0910: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b0914:
    // 0x1b0914: 0x2503dcb0  addiu       $v1, $t0, -0x2350
    ctx->pc = 0x1b0914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958256));
label_1b0918:
    // 0x1b0918: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b091c:
    // 0x1b091c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b0920:
    // 0x1b0920: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b0924:
    if (ctx->pc == 0x1B0924u) {
        ctx->pc = 0x1B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0920u;
        // 0x1b0924: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0928u;
        goto label_1b0928;
    }
    ctx->pc = 0x1B0920u;
    {
        const bool branch_taken_0x1b0920 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0920u;
        // 0x1b0924: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0920) {
            ctx->pc = 0x1B093Cu;
            goto label_1b093c;
        }
    }
    ctx->pc = 0x1B0928u;
label_1b0928:
    // 0x1b0928: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b0928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b092c:
    // 0x1b092c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b0930:
    // 0x1b0930: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b0934:
    // 0x1b0934: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0938:
    if (ctx->pc == 0x1B0938u) {
        ctx->pc = 0x1B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0934u;
        // 0x1b0938: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B093Cu;
        goto label_1b093c;
    }
    ctx->pc = 0x1B0934u;
    {
        const bool branch_taken_0x1b0934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0934u;
        // 0x1b0938: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0934) {
            ctx->pc = 0x1B0940u;
            goto label_1b0940;
        }
    }
    ctx->pc = 0x1B093Cu;
label_1b093c:
    // 0x1b093c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b0940:
    // 0x1b0940: 0xc0f809  jalr        $a2
label_1b0944:
    if (ctx->pc == 0x1B0944u) {
        ctx->pc = 0x1B0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0940u;
        // 0x1b0944: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0948u;
        goto label_1b0948;
    }
    ctx->pc = 0x1B0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B0948u);
        ctx->pc = 0x1B0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0940u;
        // 0x1b0944: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0940u, 0x1B0948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0948u;
label_1b0948:
    // 0x1b0948: 0xc06c150  jal         func_1B0540
label_1b094c:
    if (ctx->pc == 0x1B094Cu) {
        ctx->pc = 0x1B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0948u;
        // 0x1b094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0950u;
        goto label_1b0950;
    }
    ctx->pc = 0x1B0948u;
    SET_GPR_U32(ctx, 31, 0x1B0950u);
    ctx->pc = 0x1B094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0948u;
    // 0x1b094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0540u, 0x1B0948u, 0x1B0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0950u;
label_1b0950:
    // 0x1b0950: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b0950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1b0954:
    // 0x1b0954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0958:
    // 0x1b0958: 0xc06dfb8  jal         func_1B7EE0
label_1b095c:
    if (ctx->pc == 0x1B095Cu) {
        ctx->pc = 0x1B095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0958u;
        // 0x1b095c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0960u;
        goto label_1b0960;
    }
    ctx->pc = 0x1B0958u;
    SET_GPR_U32(ctx, 31, 0x1B0960u);
    ctx->pc = 0x1B095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0958u;
    // 0x1b095c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1B0958u, 0x1B0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0960u;
label_1b0960:
    // 0x1b0960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b0960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0964:
    // 0x1b0964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0968:
    // 0x1b0968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b096c:
    // 0x1b096c: 0x3e00008  jr          $ra
label_1b0970:
    if (ctx->pc == 0x1B0970u) {
        ctx->pc = 0x1B0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B096Cu;
        // 0x1b0970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0974u;
        goto label_1b0974;
    }
    ctx->pc = 0x1B096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B096Cu;
        // 0x1b0970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0974u;
label_1b0974:
    // 0x1b0974: 0x0  nop
    ctx->pc = 0x1b0974u;
    // NOP
    ctx->pc = 0x1b0978u;
}
