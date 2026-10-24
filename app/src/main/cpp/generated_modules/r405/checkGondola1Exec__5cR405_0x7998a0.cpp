#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: checkGondola1Exec__5cR405
// Address: 0x7998a0 - 0x799ab0
void checkGondola1Exec__5cR405_0x7998a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkGondola1Exec__5cR405_0x7998a0");
#endif

    switch (ctx->pc) {
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        case 0x799930u: goto label_799930;
        case 0x799934u: goto label_799934;
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        default: break;
    }

    ctx->pc = 0x7998a0u;

label_7998a0:
    // 0x7998a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_7998a4:
    // 0x7998a4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7998a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_7998a8:
    // 0x7998a8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7998a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_7998ac:
    // 0x7998ac: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_7998b0:
    // 0x7998b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7998b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_7998b4:
    // 0x7998b4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_7998b8:
    // 0x7998b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_7998bc:
    // 0x7998bc: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7998c0:
    // 0x7998c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_7998c4:
    // 0x7998c4: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_7998c8:
    // 0x7998c8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7998c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_7998cc:
    // 0x7998cc: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7998d0:
    // 0x7998d0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_7998d4:
    // 0x7998d4: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_7998d8:
    // 0x7998d8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7998d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_7998dc:
    // 0x7998dc: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_7998e0:
    // 0x7998e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_7998e4:
    if (ctx->pc == 0x7998E4u) {
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E8u;
        goto label_7998e8;
    }
    ctx->pc = 0x7998E0u;
    {
        const bool branch_taken_0x7998e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e0) {
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x7998E8u;
label_7998e8:
    // 0x7998e8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7998ec:
    // 0x7998ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7998f0:
    // 0x7998f0: 0xc0b56a8  jal         func_2D5AA0
label_7998f4:
    if (ctx->pc == 0x7998F4u) {
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F8u;
        goto label_7998f8;
    }
    ctx->pc = 0x7998F0u;
    SET_GPR_U32(ctx, 31, 0x7998F8u);
    ctx->pc = 0x7998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F0u;
    // 0x7998f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998F0u, 0x7998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x8e82a800  lw          $v0, -0x5800($s4)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
label_7998fc:
    // 0x7998fc: 0xc0693c4  jal         func_1A4F10
label_799900:
    if (ctx->pc == 0x799900u) {
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799904u;
        goto label_799904;
    }
    ctx->pc = 0x7998FCu;
    SET_GPR_U32(ctx, 31, 0x799904u);
    ctx->pc = 0x799900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998FCu;
    // 0x799900: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_799908:
    if (ctx->pc == 0x799908u) {
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0x8e82a800  lw          $v0, -0x5800($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79990Cu;
        goto label_79990c;
    }
    ctx->pc = 0x799904u;
    {
        const bool branch_taken_0x799904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0x8e82a800  lw          $v0, -0x5800($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799904) {
            ctx->pc = 0x7998E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998e8;
        }
    }
    ctx->pc = 0x79990Cu;
label_79990c:
    // 0x79990c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799910:
    // 0x799910: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799914:
    // 0x799914: 0xc0693ca  jal         func_1A4F28
label_799918:
    if (ctx->pc == 0x799918u) {
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79991Cu;
        goto label_79991c;
    }
    ctx->pc = 0x799914u;
    SET_GPR_U32(ctx, 31, 0x79991Cu);
    ctx->pc = 0x799918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799914u;
    // 0x799918: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799914u, 0x79991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0x26a7a6e0  addiu       $a3, $s5, -0x5920
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944480));
label_799920:
    // 0x799920: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x799920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799924:
    // 0x799924: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x799924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799928:
    // 0x799928: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x799928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_79992c:
    // 0x79992c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x79992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_799930:
    // 0x799930: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_799934:
    // 0x799934: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799938:
    // 0x799938: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79993c:
    // 0x79993c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x79993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799940:
    // 0x799940: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x799940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799944:
    // 0x799944: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x799944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_799948:
    // 0x799948: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_79994c:
    // 0x79994c: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799950:
    // 0x799950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799954:
    // 0x799954: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799958:
    // 0x799958: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79995c:
    // 0x79995c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799960:
    // 0x799960: 0xc0b0e6c  jal         func_2C39B0
label_799964:
    if (ctx->pc == 0x799964u) {
        ctx->pc = 0x799964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799960u;
        // 0x799964: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799968u;
        goto label_799968;
    }
    ctx->pc = 0x799960u;
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->pc = 0x799964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79996c:
    // 0x79996c: 0xc0b0fb6  jal         func_2C3ED8
label_799970:
    if (ctx->pc == 0x799970u) {
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0x26c5a6f8  addiu       $a1, $s6, -0x5908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799974u;
        goto label_799974;
    }
    ctx->pc = 0x79996Cu;
    SET_GPR_U32(ctx, 31, 0x799974u);
    ctx->pc = 0x799970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79996Cu;
    // 0x799970: 0x26c5a6f8  addiu       $a1, $s6, -0x5908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
label_799978:
    // 0x799978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79997c:
    // 0x79997c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_799980:
    // 0x799980: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799984:
    // 0x799984: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799988:
    // 0x799988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79998c:
    // 0x79998c: 0xc0b2e28  jal         func_2CB8A0
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    SET_GPR_U32(ctx, 31, 0x799994u);
    ctx->pc = 0x799990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79998Cu;
    // 0x799990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79998Cu, 0x799994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799998:
    // 0x799998: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_79999c:
    // 0x79999c: 0x0  nop
    ctx->pc = 0x79999cu;
    // NOP
label_7999a0:
    // 0x7999a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7999a4:
    // 0x7999a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999a8:
    // 0x7999a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7999ac:
    // 0x7999ac: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7999acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_7999b0:
    // 0x7999b0: 0xc0a56f0  jal         func_295BC0
label_7999b4:
    if (ctx->pc == 0x7999B4u) {
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B8u;
        goto label_7999b8;
    }
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_7999bc:
    // 0x7999bc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_7999c0:
    if (ctx->pc == 0x7999C0u) {
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C4u;
        goto label_7999c4;
    }
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x7999C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999BCu;
            // 0x7999c0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999a0;
        }
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x8e84a800  lw          $a0, -0x5800($s4)
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
label_7999c8:
    // 0x7999c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7999cc:
    // 0x7999cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7999d0:
    // 0x7999d0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7999d4:
    // 0x7999d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999d8:
    // 0x7999d8: 0xc1e678c  jal         func_799E30
label_7999dc:
    if (ctx->pc == 0x7999DCu) {
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E0u;
        goto label_7999e0;
    }
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E30u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0xc0b101e  jal         func_2C4078
label_7999e4:
    if (ctx->pc == 0x7999E4u) {
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E8u;
        goto label_7999e8;
    }
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0xc0b0f04  jal         func_2C3C10
label_7999ec:
    if (ctx->pc == 0x7999ECu) {
        ctx->pc = 0x7999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E8u;
        // 0x7999ec: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999F0u;
        goto label_7999f0;
    }
    ctx->pc = 0x7999E8u;
    SET_GPR_U32(ctx, 31, 0x7999F0u);
    ctx->pc = 0x7999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E8u;
    // 0x7999ec: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7999E8u, 0x7999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7999f4:
    // 0x7999f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_7999f8:
    // 0x7999f8: 0xc0b56a8  jal         func_2D5AA0
label_7999fc:
    if (ctx->pc == 0x7999FCu) {
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A00u;
        goto label_799a00;
    }
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799a04:
    // 0x799a04: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799a08:
    // 0x799a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799a0c:
    // 0x799a0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_799a10:
    // 0x799a10: 0xc0b6dac  jal         func_2DB6B0
label_799a14:
    if (ctx->pc == 0x799A14u) {
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A18u;
        goto label_799a18;
    }
    ctx->pc = 0x799A10u;
    SET_GPR_U32(ctx, 31, 0x799A18u);
    ctx->pc = 0x799A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A10u;
    // 0x799a14: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799A10u, 0x799A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799a1c:
    // 0x799a1c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799a20:
    // 0x799a20: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799a24:
    // 0x799a24: 0xa0f809  jalr        $a1
label_799a28:
    if (ctx->pc == 0x799A28u) {
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A2Cu;
        goto label_799a2c;
    }
    ctx->pc = 0x799A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799A2Cu);
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799a30:
    // 0x799a30: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799a34:
    // 0x799a34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799a38:
    // 0x799a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799a3c:
    // 0x799a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799a40:
    // 0x799a40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799a44:
    // 0x799a44: 0xc0a57e0  jal         func_295F80
label_799a48:
    if (ctx->pc == 0x799A48u) {
        ctx->pc = 0x799A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A44u;
        // 0x799a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A4Cu;
        goto label_799a4c;
    }
    ctx->pc = 0x799A44u;
    SET_GPR_U32(ctx, 31, 0x799A4Cu);
    ctx->pc = 0x799A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A44u;
    // 0x799a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A44u, 0x799A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0xc0c73f8  jal         func_31CFE0
label_799a50:
    if (ctx->pc == 0x799A50u) {
        ctx->pc = 0x799A54u;
        goto label_799a54;
    }
    ctx->pc = 0x799A4Cu;
    SET_GPR_U32(ctx, 31, 0x799A54u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x799A4Cu, 0x799A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A54u;
label_799a54:
    // 0x799a54: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799a58:
    // 0x799a58: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_799a5c:
    // 0x799a5c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799a60:
    // 0x799a60: 0xc0b56a8  jal         func_2D5AA0
label_799a64:
    if (ctx->pc == 0x799A64u) {
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A68u;
        goto label_799a68;
    }
    ctx->pc = 0x799A60u;
    SET_GPR_U32(ctx, 31, 0x799A68u);
    ctx->pc = 0x799A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A60u;
    // 0x799a64: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A60u, 0x799A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x799a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_799a6c:
    // 0x799a6c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_799a70:
    if (ctx->pc == 0x799A70u) {
        ctx->pc = 0x799A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A6Cu;
        // 0x799a70: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A74u;
        goto label_799a74;
    }
    ctx->pc = 0x799A6Cu;
    {
        const bool branch_taken_0x799a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a6c) {
            ctx->pc = 0x799A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A6Cu;
            // 0x799a70: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a08;
        }
    }
    ctx->pc = 0x799A74u;
label_799a74:
    // 0x799a74: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799a78:
    // 0x799a78: 0xc0b5692  jal         func_2D5A48
label_799a7c:
    if (ctx->pc == 0x799A7Cu) {
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A80u;
        goto label_799a80;
    }
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799a84:
    // 0x799a84: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799a88:
    // 0x799a88: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799a8c:
    // 0x799a8c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799a90:
    // 0x799a90: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799a94:
    // 0x799a94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799a94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799a98:
    // 0x799a98: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799a9c:
    // 0x799a9c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799a9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799aa0:
    // 0x799aa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_799aa4:
    // 0x799aa4: 0x3e00008  jr          $ra
label_799aa8:
    if (ctx->pc == 0x799AA8u) {
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AACu;
        goto label_799aac;
    }
    ctx->pc = 0x799AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0x0  nop
    ctx->pc = 0x799aacu;
    // NOP
    ctx->pc = 0x799ab0u;
}
} // namespace gh_r405
