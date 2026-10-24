#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: Init__5cR022
// Address: 0x799440 - 0x799658
void Init__5cR022_0x799440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5cR022_0x799440");
#endif

    switch (ctx->pc) {
        case 0x799470u: goto label_799470;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994ecu: goto label_7994ec;
        case 0x79950cu: goto label_79950c;
        case 0x79951cu: goto label_79951c;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x799530u: goto label_799530;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995fcu: goto label_7995fc;
        case 0x799624u: goto label_799624;
        default: break;
    }

    ctx->pc = 0x799440u;

    // 0x799440: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x799444: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x799448: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79944c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799450: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799454: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x799458: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79945c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x799460: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x799468: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799474: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x799478: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x79947c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799480: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x799480u;
    {
        const bool branch_taken_0x799480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799480u;
        // 0x799484: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799480) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799488u;
    // 0x799488: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79948c: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x799490: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x799494: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799498: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79949c: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x24c6cc20  addiu       $a2, $a2, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x7994a8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7994ac: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x7994b0: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x7994b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7994bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994cc: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x7994d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d4: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0xc080458  jal         func_201160
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x26700060  addiu       $s0, $s3, 0x60
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x7994f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7994f4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994f8: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x7994fc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x799500: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x799504: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799510: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x799514: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799528:
    // 0x799528: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x799534: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799538: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x79953c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x799540: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x799540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x799544: 0x2e42001a  sltiu       $v0, $s2, 0x1A
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x799548: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799548u;
    {
        const bool branch_taken_0x799548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799548) {
            ctx->pc = 0x799528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799528;
        }
    }
    ctx->pc = 0x799550u;
    // 0x799550: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x799554: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x799558: 0x3c014405  lui         $at, 0x4405
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17413 << 16));
    // 0x79955c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79955cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799564: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x799568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79956c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799570: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x799574: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x799578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79957c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799580: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x799584: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x799588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79958c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799590: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x799594: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799598: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x799598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79959c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x7995a0: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x7995a4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x7995a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7995a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7995ac: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x7995acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x7995b0: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x7995b4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x7995b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7995b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7995bc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7995BCu;
    SET_GPR_U32(ctx, 31, 0x7995C4u);
    ctx->pc = 0x7995C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995BCu;
    // 0x7995c0: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7995BCu, 0x7995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C4u;
label_7995c4:
    // 0x7995c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995c8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x7995C8u;
    {
        const bool branch_taken_0x7995c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7995c8) {
            ctx->pc = 0x7995F4u;
            goto label_7995f4;
        }
    }
    ctx->pc = 0x7995D0u;
    // 0x7995d0: 0x8e6400ac  lw          $a0, 0xAC($s3)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x7995d4: 0x3c028026  lui         $v0, 0x8026
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32806 << 16));
    // 0x7995d8: 0x34422626  ori         $v0, $v0, 0x2626
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9766);
    // 0x7995dc: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x7995dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x7995e0: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x7995e4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x7995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x7995e8: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x7995ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7995ECu;
    {
        const bool branch_taken_0x7995ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ec) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7995FCu;
    {
        const bool branch_taken_0x7995fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995fc) {
            ctx->pc = 0x79961Cu;
            goto label_79961c;
        }
    }
    ctx->pc = 0x799604u;
    // 0x799604: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x799608: 0x3c038026  lui         $v1, 0x8026
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32806 << 16));
    // 0x79960c: 0x34632626  ori         $v1, $v1, 0x2626
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9766);
    // 0x799610: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x799610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x799614: 0x8e6400ac  lw          $a0, 0xAC($s3)
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x799618: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x799618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_79961c:
    // 0x79961c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x79961Cu;
    SET_GPR_U32(ctx, 31, 0x799624u);
    ctx->pc = 0x799620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79961Cu;
    // 0x799620: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x8e6300a4  lw          $v1, 0xA4($s3)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x799628: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79962c: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x79962cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799630: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x799630u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x799634: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799638:
    // 0x799638: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79963c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79963cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799640: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799644: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799648: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79964c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799650: 0x3e00008  jr          $ra
    ctx->pc = 0x799650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799650u;
        // 0x799654: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799658u;
}
} // namespace gh_r022
