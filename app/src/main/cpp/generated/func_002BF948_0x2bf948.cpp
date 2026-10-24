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

// Function: func_002BF948
// Address: 0x2bf948 - 0x2bfc80
void func_002BF948_0x2bf948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF948_0x2bf948");
#endif

    switch (ctx->pc) {
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb54u: goto label_2bfb54;
        case 0x2bfb68u: goto label_2bfb68;
        case 0x2bfb74u: goto label_2bfb74;
        case 0x2bfbb0u: goto label_2bfbb0;
        default: break;
    }

    ctx->pc = 0x2bf948u;

    // 0x2bf948: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2bf948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x2bf94c: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x2bf94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x2bf950: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x2bf950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x2bf954: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x2bf958: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x2bf958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
    // 0x2bf95c: 0x26309b70  addiu       $s0, $s1, -0x6490
    ctx->pc = 0x2bf95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x2bf960: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bf960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf964: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x2bf964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x2bf968: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x2bf968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x2bf96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf970: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x2bf970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
    // 0x2bf974: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x2bf974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
    // 0x2bf978: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x2bf978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
    // 0x2bf97c: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x2bf97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
    // 0x2bf980: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x2bf980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x2bf984: 0xc07e988  jal         func_1FA620
    ctx->pc = 0x2BF984u;
    SET_GPR_U32(ctx, 31, 0x2BF98Cu);
    ctx->pc = 0x2BF988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF984u;
    // 0x2bf988: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA620u, 0x2BF984u, 0x2BF98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF98Cu;
label_2bf98c:
    // 0x2bf98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf990: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x2BF990u;
    SET_GPR_U32(ctx, 31, 0x2BF998u);
    ctx->pc = 0x2BF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF990u;
    // 0x2bf994: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x2BF990u, 0x2BF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF998u;
label_2bf998:
    // 0x2bf998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf99c: 0xc07efd2  jal         func_1FBF48
    ctx->pc = 0x2BF99Cu;
    SET_GPR_U32(ctx, 31, 0x2BF9A4u);
    ctx->pc = 0x2BF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF99Cu;
    // 0x2bf9a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF48u, 0x2BF99Cu, 0x2BF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9A4u;
label_2bf9a4:
    // 0x2bf9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9a8: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x2BF9A8u;
    SET_GPR_U32(ctx, 31, 0x2BF9B0u);
    ctx->pc = 0x2BF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9A8u;
    // 0x2bf9ac: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x2BF9A8u, 0x2BF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9B0u;
label_2bf9b0:
    // 0x2bf9b0: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bf9b4: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2bf9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2bf9b8: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x2bf9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x2bf9bc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2bf9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bf9c0: 0x8e239b70  lw          $v1, -0x6490($s1)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2bf9c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2bf9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2bf9c8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2bf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2bf9cc: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bf9d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2bf9d4: 0x24660270  addiu       $a2, $v1, 0x270
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x2bf9d8: 0x8c770130  lw          $s7, 0x130($v1)
    ctx->pc = 0x2bf9d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2bf9dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2bf9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2bf9e4: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x2bf9e8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2bf9e8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bf9ec:
    // 0x2bf9ec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2bf9ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf9f0: 0x78670010  lq          $a3, 0x10($v1)
    ctx->pc = 0x2bf9f0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bf9f4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2bf9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2bf9f8: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x2bf9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x2bf9fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bfa00: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFA00u;
    {
        const bool branch_taken_0x2bfa00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA00u;
        // 0x2bfa04: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa00) {
            ctx->pc = 0x2BF9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf9ec;
        }
    }
    ctx->pc = 0x2BFA08u;
    // 0x2bfa08: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfa0c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2bfa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa10: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2bfa10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfa14: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2bfa14u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bfa18: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2bfa18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2bfa1c: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2bfa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2bfa20: 0x24430130  addiu       $v1, $v0, 0x130
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2bfa24: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2bfa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2bfa28:
    // 0x2bfa28: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2bfa28u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfa2c: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x2bfa2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bfa30: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2bfa30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2bfa34: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x2bfa34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x2bfa38: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2bfa3c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFA3Cu;
    {
        const bool branch_taken_0x2bfa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA3Cu;
        // 0x2bfa40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa3c) {
            ctx->pc = 0x2BFA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfa28;
        }
    }
    ctx->pc = 0x2BFA44u;
    // 0x2bfa44: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfa48: 0x26519b70  addiu       $s1, $s2, -0x6490
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x2bfa4c: 0x68490093  ldl         $t1, 0x93($v0)
    ctx->pc = 0x2bfa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bfa50: 0x6c49008c  ldr         $t1, 0x8C($v0)
    ctx->pc = 0x2bfa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bfa54: 0x84430094  lh          $v1, 0x94($v0)
    ctx->pc = 0x2bfa54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2bfa58: 0xb3a90167  sdl         $t1, 0x167($sp)
    ctx->pc = 0x2bfa58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfa5c: 0xb7a90160  sdr         $t1, 0x160($sp)
    ctx->pc = 0x2bfa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfa60: 0xa7a30168  sh          $v1, 0x168($sp)
    ctx->pc = 0x2bfa60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfa64: 0x68460bb3  ldl         $a2, 0xBB3($v0)
    ctx->pc = 0x2bfa64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bfa68: 0x6c460bac  ldr         $a2, 0xBAC($v0)
    ctx->pc = 0x2bfa68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bfa6c: 0x84470bb4  lh          $a3, 0xBB4($v0)
    ctx->pc = 0x2bfa6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2996)));
    // 0x2bfa70: 0xb3a60177  sdl         $a2, 0x177($sp)
    ctx->pc = 0x2bfa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfa74: 0xb7a60170  sdr         $a2, 0x170($sp)
    ctx->pc = 0x2bfa74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfa78: 0xa7a70178  sh          $a3, 0x178($sp)
    ctx->pc = 0x2bfa78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 376), (uint16_t)GPR_U32(ctx, 7));
    // 0x2bfa7c: 0xdc430098  ld          $v1, 0x98($v0)
    ctx->pc = 0x2bfa7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bfa80: 0xffa30180  sd          $v1, 0x180($sp)
    ctx->pc = 0x2bfa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 3));
    // 0x2bfa84: 0x944400a0  lhu         $a0, 0xA0($v0)
    ctx->pc = 0x2bfa84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2bfa88: 0xa7a40188  sh          $a0, 0x188($sp)
    ctx->pc = 0x2bfa88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 392), (uint16_t)GPR_U32(ctx, 4));
    // 0x2bfa8c: 0x94430bba  lhu         $v1, 0xBBA($v0)
    ctx->pc = 0x2bfa8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3002)));
    // 0x2bfa90: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x2bfa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x2bfa94: 0x8c440170  lw          $a0, 0x170($v0)
    ctx->pc = 0x2bfa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x2bfa98: 0xafa40198  sw          $a0, 0x198($sp)
    ctx->pc = 0x2bfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
    // 0x2bfa9c: 0x8c450174  lw          $a1, 0x174($v0)
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x2bfaa0: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x2bfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x2bfaa4: 0x8c420178  lw          $v0, 0x178($v0)
    ctx->pc = 0x2bfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x2bfaa8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BFAA8u;
    SET_GPR_U32(ctx, 31, 0x2BFAB0u);
    ctx->pc = 0x2BFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAA8u;
    // 0x2bfaac: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BFAA8u, 0x2BFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAB0u;
label_2bfab0:
    // 0x2bfab0: 0x8c5006a8  lw          $s0, 0x6A8($v0)
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x2bfab4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bfab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bfab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfabc: 0xc0b01b4  jal         func_2C06D0
    ctx->pc = 0x2BFABCu;
    SET_GPR_U32(ctx, 31, 0x2BFAC4u);
    ctx->pc = 0x2BFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFABCu;
    // 0x2bfac0: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C06D0u, 0x2BFABCu, 0x2BFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAC4u;
label_2bfac4:
    // 0x2bfac4: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfac8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bfac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfad0: 0xc07e98e  jal         func_1FA638
    ctx->pc = 0x2BFAD0u;
    SET_GPR_U32(ctx, 31, 0x2BFAD8u);
    ctx->pc = 0x2BFAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAD0u;
    // 0x2bfad4: 0xa0500157  sb          $s0, 0x157($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 343), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA638u, 0x2BFAD0u, 0x2BFAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAD8u;
label_2bfad8:
    // 0x2bfad8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bfad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfadc: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x2BFADCu;
    SET_GPR_U32(ctx, 31, 0x2BFAE4u);
    ctx->pc = 0x2BFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFADCu;
    // 0x2bfae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x2BFADCu, 0x2BFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE4u;
label_2bfae4:
    // 0x2bfae4: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x2BFAE4u;
    SET_GPR_U32(ctx, 31, 0x2BFAECu);
    ctx->pc = 0x2BFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE4u;
    // 0x2bfae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x2BFAE4u, 0x2BFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAECu;
label_2bfaec:
    // 0x2bfaec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfaf0: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x2BFAF0u;
    SET_GPR_U32(ctx, 31, 0x2BFAF8u);
    ctx->pc = 0x2BFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAF0u;
    // 0x2bfaf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x2BFAF0u, 0x2BFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAF8u;
label_2bfaf8:
    // 0x2bfaf8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bfafc: 0xc07efde  jal         func_1FBF78
    ctx->pc = 0x2BFAFCu;
    SET_GPR_U32(ctx, 31, 0x2BFB04u);
    ctx->pc = 0x2BFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAFCu;
    // 0x2bfb00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF78u, 0x2BFAFCu, 0x2BFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB04u;
label_2bfb04:
    // 0x2bfb04: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfb08: 0x8fa60194  lw          $a2, 0x194($sp)
    ctx->pc = 0x2bfb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2bfb0c: 0xa4460bb8  sh          $a2, 0xBB8($v0)
    ctx->pc = 0x2bfb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3000), (uint16_t)GPR_U32(ctx, 6));
    // 0x2bfb10: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfb14: 0xac770130  sw          $s7, 0x130($v1)
    ctx->pc = 0x2bfb14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 23));
    // 0x2bfb18: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFB18u;
    {
        const bool branch_taken_0x2bfb18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB18u;
        // 0x2bfb1c: 0x8e449b70  lw          $a0, -0x6490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb18) {
            ctx->pc = 0x2BFB34u;
            goto label_2bfb34;
        }
    }
    ctx->pc = 0x2BFB20u;
    // 0x2bfb20: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2bfb24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2bfb28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bfb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bfb2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFB2Cu;
    {
        const bool branch_taken_0x2bfb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB2Cu;
        // 0x2bfb30: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb2c) {
            ctx->pc = 0x2BFB48u;
            goto label_2bfb48;
        }
    }
    ctx->pc = 0x2BFB34u;
label_2bfb34:
    // 0x2bfb34: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2bfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2bfb38: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x2bfb3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bfb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2bfb40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bfb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bfb44: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2bfb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2bfb48:
    // 0x2bfb48: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x2bfb4c: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x2BFB4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFB54u);
    ctx->pc = 0x2BFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB4Cu;
    // 0x2bfb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x2BFB4Cu, 0x2BFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB54u;
label_2bfb54:
    // 0x2bfb54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFB54u;
    {
        const bool branch_taken_0x2bfb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb54) {
            ctx->pc = 0x2BFB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFB54u;
            // 0x2bfb58: 0x8e429b70  lw          $v0, -0x6490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB6Cu;
            goto label_2bfb6c;
        }
    }
    ctx->pc = 0x2BFB5Cu;
    // 0x2bfb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb60: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x2BFB60u;
    SET_GPR_U32(ctx, 31, 0x2BFB68u);
    ctx->pc = 0x2BFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB60u;
    // 0x2bfb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x2BFB60u, 0x2BFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB68u;
label_2bfb68:
    // 0x2bfb68: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
label_2bfb6c:
    // 0x2bfb6c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2bfb6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb70: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x2bfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_2bfb74:
    // 0x2bfb74: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2bfb74u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfb78: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x2bfb78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bfb7c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2bfb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x2bfb80: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x2bfb80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x2bfb84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bfb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bfb88: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x2bfb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bfb8c: 0x1465fff9  bne         $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BFB8Cu;
    {
        const bool branch_taken_0x2bfb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB8Cu;
        // 0x2bfb90: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb8c) {
            ctx->pc = 0x2BFB74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfb74;
        }
    }
    ctx->pc = 0x2BFB94u;
    // 0x2bfb94: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2bfb94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfb98: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2bfb98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bfb9c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2bfb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2bfba0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x2bfba0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x2bfba4: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfba8: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2bfba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbac: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2bfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2bfbb0:
    // 0x2bfbb0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2bfbb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfbb4: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x2bfbb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bfbb8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2bfbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2bfbbc: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2bfbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x2bfbc0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bfbc4: 0x8fa801ac  lw          $t0, 0x1AC($sp)
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2bfbc8: 0x1468fff9  bne         $v1, $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BFBC8u;
    {
        const bool branch_taken_0x2bfbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBC8u;
        // 0x2bfbcc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbc8) {
            ctx->pc = 0x2BFBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfbb0;
        }
    }
    ctx->pc = 0x2BFBD0u;
    // 0x2bfbd0: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfbd4: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x2bfbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2bfbd8: 0x6ba90167  ldl         $t1, 0x167($sp)
    ctx->pc = 0x2bfbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bfbdc: 0x6fa90160  ldr         $t1, 0x160($sp)
    ctx->pc = 0x2bfbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bfbe0: 0x87a30168  lh          $v1, 0x168($sp)
    ctx->pc = 0x2bfbe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2bfbe4: 0xb0490093  sdl         $t1, 0x93($v0)
    ctx->pc = 0x2bfbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfbe8: 0xb449008c  sdr         $t1, 0x8C($v0)
    ctx->pc = 0x2bfbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfbec: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x2bfbecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfbf0: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x2bfbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2bfbf4: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x2bfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfbf8: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x2bfbf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2bfbfc: 0x6ba60177  ldl         $a2, 0x177($sp)
    ctx->pc = 0x2bfbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bfc00: 0x6fa60170  ldr         $a2, 0x170($sp)
    ctx->pc = 0x2bfc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bfc04: 0x87a70178  lh          $a3, 0x178($sp)
    ctx->pc = 0x2bfc04u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bfc08: 0xb0660bb3  sdl         $a2, 0xBB3($v1)
    ctx->pc = 0x2bfc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 2995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfc0c: 0xb4660bac  sdr         $a2, 0xBAC($v1)
    ctx->pc = 0x2bfc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 2988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfc10: 0xa4670bb4  sh          $a3, 0xBB4($v1)
    ctx->pc = 0x2bfc10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2996), (uint16_t)GPR_U32(ctx, 7));
    // 0x2bfc14: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x2bfc14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bfc18: 0x8e449b70  lw          $a0, -0x6490($s2)
    ctx->pc = 0x2bfc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfc1c: 0xdfa20180  ld          $v0, 0x180($sp)
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bfc20: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x2bfc20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2bfc24: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x2bfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
    // 0x2bfc28: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x2bfc28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bfc2c: 0x97a30188  lhu         $v1, 0x188($sp)
    ctx->pc = 0x2bfc2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bfc30: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x2bfc30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bfc34: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x2bfc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfc38: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x2bfc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2bfc3c: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfc40: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x2bfc40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bfc44: 0xac430170  sw          $v1, 0x170($v0)
    ctx->pc = 0x2bfc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
    // 0x2bfc48: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x2bfc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bfc4c: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfc50: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2bfc54: 0xac640174  sw          $a0, 0x174($v1)
    ctx->pc = 0x2bfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 4));
    // 0x2bfc58: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfc5c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2bfc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bfc60: 0xac450178  sw          $a1, 0x178($v0)
    ctx->pc = 0x2bfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 5));
    // 0x2bfc64: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x2bfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2bfc68: 0x8fa601a4  lw          $a2, 0x1A4($sp)
    ctx->pc = 0x2bfc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2bfc6c: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x2bfc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2bfc70: 0xa4660bba  sh          $a2, 0xBBA($v1)
    ctx->pc = 0x2bfc70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3002), (uint16_t)GPR_U32(ctx, 6));
    // 0x2bfc74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC74u;
        // 0x2bfc78: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC7Cu;
    // 0x2bfc7c: 0x0  nop
    ctx->pc = 0x2bfc7cu;
    // NOP
    ctx->pc = 0x2bfc80u;
}
