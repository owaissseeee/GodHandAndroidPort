#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_007998D0
// Address: 0x7998d0 - 0x799a10
void func_007998D0_0x7998d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998D0_0x7998d0");
#endif

    switch (ctx->pc) {
        case 0x799928u: goto label_799928;
        case 0x79993cu: goto label_79993c;
        case 0x799954u: goto label_799954;
        case 0x799964u: goto label_799964;
        case 0x799974u: goto label_799974;
        case 0x799994u: goto label_799994;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999ecu: goto label_7999ec;
        default: break;
    }

    ctx->pc = 0x7998d0u;

    // 0x7998d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7998d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7998d8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x7998dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7998e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7998e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7998e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7998e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7998e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7998ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7998f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7998f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7998f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7998f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7998f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7998fc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7998fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799900: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799900u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799904: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x799904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x799908: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x799908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
    // 0x79990c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x79990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799910: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x799910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799914: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x799914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799918: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x799918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79991c: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799920: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x799920u;
    {
        const bool branch_taken_0x799920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799920u;
        // 0x799924: 0x3c14005f  lui         $s4, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799920) {
            ctx->pc = 0x7999C0u;
            goto label_7999c0;
        }
    }
    ctx->pc = 0x799928u;
label_799928:
    // 0x799928: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x799928u;
    {
        const bool branch_taken_0x799928 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799928u;
        // 0x79992c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799928) {
            ctx->pc = 0x7999B0u;
            goto label_7999b0;
        }
    }
    ctx->pc = 0x799930u;
    // 0x799930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799934: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799934u;
    SET_GPR_U32(ctx, 31, 0x79993Cu);
    ctx->pc = 0x799938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799934u;
    // 0x799938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799934u, 0x79993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79993Cu;
label_79993c:
    // 0x79993c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799940: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799948: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x79994c: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799954u;
    {
        const bool branch_taken_0x799954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799954) {
            ctx->pc = 0x799998u;
            goto label_799998;
        }
    }
    ctx->pc = 0x79995Cu;
    // 0x79995c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79995Cu;
    SET_GPR_U32(ctx, 31, 0x799964u);
    ctx->pc = 0x799960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79995Cu;
    // 0x799960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79995Cu, 0x799964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799964u;
label_799964:
    // 0x799964: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799968: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x79996c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79996Cu;
    SET_GPR_U32(ctx, 31, 0x799974u);
    ctx->pc = 0x799970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79996Cu;
    // 0x799970: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799978: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79997c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799980: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799984: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799988: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79998c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79998Cu;
    SET_GPR_U32(ctx, 31, 0x799994u);
    ctx->pc = 0x799990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79998Cu;
    // 0x799990: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79998Cu, 0x799994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799998:
    // 0x799998: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799998u;
    SET_GPR_U32(ctx, 31, 0x7999A0u);
    ctx->pc = 0x79999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799998u;
    // 0x79999c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799998u, 0x7999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x24100384  addiu       $s0, $zero, 0x384
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x7999a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7999a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x7999ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x7999acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_7999b0:
    // 0x7999b0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7999b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999b8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x26928658  addiu       $s2, $s4, -0x79A8
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x7999c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999c8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7999d4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7999d8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x7999D8u;
    {
        const bool branch_taken_0x7999d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d8) {
            ctx->pc = 0x799928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799928;
        }
    }
    ctx->pc = 0x7999E0u;
    // 0x7999e0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7999e4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7999E4u;
    SET_GPR_U32(ctx, 31, 0x7999ECu);
    ctx->pc = 0x7999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E4u;
    // 0x7999e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7999ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7999f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7999f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7999f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7999f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7999f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7999f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7999fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7999fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799a00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a04: 0x3e00008  jr          $ra
    ctx->pc = 0x799A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A04u;
        // 0x799a08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A0Cu;
    // 0x799a0c: 0x0  nop
    ctx->pc = 0x799a0cu;
    // NOP
    ctx->pc = 0x799a10u;
}
} // namespace gh_r206
