#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: Init__5cR021
// Address: 0x799468 - 0x799640
void Init__5cR021_0x799468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5cR021_0x799468");
#endif

    switch (ctx->pc) {
        case 0x7994bcu: goto label_7994bc;
        case 0x7994f4u: goto label_7994f4;
        case 0x799504u: goto label_799504;
        case 0x799524u: goto label_799524;
        case 0x799534u: goto label_799534;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799548u: goto label_799548;
        case 0x7995acu: goto label_7995ac;
        case 0x7995e4u: goto label_7995e4;
        case 0x79960cu: goto label_79960c;
        default: break;
    }

    ctx->pc = 0x799468u;

    // 0x799468: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79946c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x799470: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x799474: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x799478: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79947c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799484: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x799488: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x79948c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x799490: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x799494: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799498: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x7994A0u;
    // 0x7994a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7994a4: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x7994a8: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7994ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994b4: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x24c6bc20  addiu       $a2, $a2, -0x43E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x7994c0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7994c4: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x7994c8: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x7994cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7994d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x7994e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994fc: 0xc080458  jal         func_201160
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x799508: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79950c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799510: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x799514: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799518: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x79951c: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799528: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79952c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x799534u;
    SET_GPR_U32(ctx, 31, 0x79953Cu);
    ctx->pc = 0x799538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799534u;
    // 0x799538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799540:
    // 0x799540: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x799544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799540u;
    // 0x799544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x79954c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x799550: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x799554: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x799558: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x799558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x79955c: 0x2e620022  sltiu       $v0, $s3, 0x22
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x799560: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799560u;
    {
        const bool branch_taken_0x799560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799560u;
        // 0x799564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799560) {
            ctx->pc = 0x799540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799540;
        }
    }
    ctx->pc = 0x799568u;
    // 0x799568: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x79956c: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x799570: 0x3c014405  lui         $at, 0x4405
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17413 << 16));
    // 0x799574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79957c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799580: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x799584: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799588: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x79958c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799590: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x799594: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799598: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x79959c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x7995a0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x7995a4: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995b0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x7995B0u;
    {
        const bool branch_taken_0x7995b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7995b0) {
            ctx->pc = 0x7995DCu;
            goto label_7995dc;
        }
    }
    ctx->pc = 0x7995B8u;
    // 0x7995b8: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x7995bc: 0x3c02802e  lui         $v0, 0x802E
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32814 << 16));
    // 0x7995c0: 0x34422e2e  ori         $v0, $v0, 0x2E2E
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11822);
    // 0x7995c4: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x7995c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x7995c8: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x7995cc: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x7995ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x7995d0: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x7995d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7995D4u;
    {
        const bool branch_taken_0x7995d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d4) {
            ctx->pc = 0x799604u;
            goto label_799604;
        }
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7995DCu;
    SET_GPR_U32(ctx, 31, 0x7995E4u);
    ctx->pc = 0x7995E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995DCu;
    // 0x7995e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7995DCu, 0x7995E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E4u;
label_7995e4:
    // 0x7995e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7995E4u;
    {
        const bool branch_taken_0x7995e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995e4) {
            ctx->pc = 0x799604u;
            goto label_799604;
        }
    }
    ctx->pc = 0x7995ECu;
    // 0x7995ec: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x7995f0: 0x3c03802e  lui         $v1, 0x802E
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32814 << 16));
    // 0x7995f4: 0x34632e2e  ori         $v1, $v1, 0x2E2E
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11822);
    // 0x7995f8: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x7995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x7995fc: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x799600: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x799600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_799604:
    // 0x799604: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x799610: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799614: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x799614u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799618: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x799618u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_79961c:
    // 0x79961c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79961cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799620: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799624: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799628: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79962c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79962cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799630: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799634: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799638: 0x3e00008  jr          $ra
    ctx->pc = 0x799638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799640u;
}
} // namespace gh_r021
