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

// Function: func_00192700
// Address: 0x192700 - 0x1928b0
void func_00192700_0x192700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00192700_0x192700");
#endif

    switch (ctx->pc) {
        case 0x192700u: goto label_192700;
        case 0x192704u: goto label_192704;
        case 0x192708u: goto label_192708;
        case 0x19270cu: goto label_19270c;
        case 0x192710u: goto label_192710;
        case 0x192714u: goto label_192714;
        case 0x192718u: goto label_192718;
        case 0x19271cu: goto label_19271c;
        case 0x192720u: goto label_192720;
        case 0x192724u: goto label_192724;
        case 0x192728u: goto label_192728;
        case 0x19272cu: goto label_19272c;
        case 0x192730u: goto label_192730;
        case 0x192734u: goto label_192734;
        case 0x192738u: goto label_192738;
        case 0x19273cu: goto label_19273c;
        case 0x192740u: goto label_192740;
        case 0x192744u: goto label_192744;
        case 0x192748u: goto label_192748;
        case 0x19274cu: goto label_19274c;
        case 0x192750u: goto label_192750;
        case 0x192754u: goto label_192754;
        case 0x192758u: goto label_192758;
        case 0x19275cu: goto label_19275c;
        case 0x192760u: goto label_192760;
        case 0x192764u: goto label_192764;
        case 0x192768u: goto label_192768;
        case 0x19276cu: goto label_19276c;
        case 0x192770u: goto label_192770;
        case 0x192774u: goto label_192774;
        case 0x192778u: goto label_192778;
        case 0x19277cu: goto label_19277c;
        case 0x192780u: goto label_192780;
        case 0x192784u: goto label_192784;
        case 0x192788u: goto label_192788;
        case 0x19278cu: goto label_19278c;
        case 0x192790u: goto label_192790;
        case 0x192794u: goto label_192794;
        case 0x192798u: goto label_192798;
        case 0x19279cu: goto label_19279c;
        case 0x1927a0u: goto label_1927a0;
        case 0x1927a4u: goto label_1927a4;
        case 0x1927a8u: goto label_1927a8;
        case 0x1927acu: goto label_1927ac;
        case 0x1927b0u: goto label_1927b0;
        case 0x1927b4u: goto label_1927b4;
        case 0x1927b8u: goto label_1927b8;
        case 0x1927bcu: goto label_1927bc;
        case 0x1927c0u: goto label_1927c0;
        case 0x1927c4u: goto label_1927c4;
        case 0x1927c8u: goto label_1927c8;
        case 0x1927ccu: goto label_1927cc;
        case 0x1927d0u: goto label_1927d0;
        case 0x1927d4u: goto label_1927d4;
        case 0x1927d8u: goto label_1927d8;
        case 0x1927dcu: goto label_1927dc;
        case 0x1927e0u: goto label_1927e0;
        case 0x1927e4u: goto label_1927e4;
        case 0x1927e8u: goto label_1927e8;
        case 0x1927ecu: goto label_1927ec;
        case 0x1927f0u: goto label_1927f0;
        case 0x1927f4u: goto label_1927f4;
        case 0x1927f8u: goto label_1927f8;
        case 0x1927fcu: goto label_1927fc;
        case 0x192800u: goto label_192800;
        case 0x192804u: goto label_192804;
        case 0x192808u: goto label_192808;
        case 0x19280cu: goto label_19280c;
        case 0x192810u: goto label_192810;
        case 0x192814u: goto label_192814;
        case 0x192818u: goto label_192818;
        case 0x19281cu: goto label_19281c;
        case 0x192820u: goto label_192820;
        case 0x192824u: goto label_192824;
        case 0x192828u: goto label_192828;
        case 0x19282cu: goto label_19282c;
        case 0x192830u: goto label_192830;
        case 0x192834u: goto label_192834;
        case 0x192838u: goto label_192838;
        case 0x19283cu: goto label_19283c;
        case 0x192840u: goto label_192840;
        case 0x192844u: goto label_192844;
        case 0x192848u: goto label_192848;
        case 0x19284cu: goto label_19284c;
        case 0x192850u: goto label_192850;
        case 0x192854u: goto label_192854;
        case 0x192858u: goto label_192858;
        case 0x19285cu: goto label_19285c;
        case 0x192860u: goto label_192860;
        case 0x192864u: goto label_192864;
        case 0x192868u: goto label_192868;
        case 0x19286cu: goto label_19286c;
        case 0x192870u: goto label_192870;
        case 0x192874u: goto label_192874;
        case 0x192878u: goto label_192878;
        case 0x19287cu: goto label_19287c;
        case 0x192880u: goto label_192880;
        case 0x192884u: goto label_192884;
        case 0x192888u: goto label_192888;
        case 0x19288cu: goto label_19288c;
        case 0x192890u: goto label_192890;
        case 0x192894u: goto label_192894;
        case 0x192898u: goto label_192898;
        case 0x19289cu: goto label_19289c;
        case 0x1928a0u: goto label_1928a0;
        case 0x1928a4u: goto label_1928a4;
        case 0x1928a8u: goto label_1928a8;
        case 0x1928acu: goto label_1928ac;
        default: break;
    }

    ctx->pc = 0x192700u;

label_192700:
    // 0x192700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192704:
    // 0x192704: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x192704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_192708:
    // 0x192708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x192708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19270c:
    // 0x19270c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19270cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192710:
    // 0x192710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192714:
    // 0x192714: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192718:
    // 0x192718: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x192718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_19271c:
    // 0x19271c: 0x10710036  beq         $v1, $s1, . + 4 + (0x36 << 2)
label_192720:
    if (ctx->pc == 0x192720u) {
        ctx->pc = 0x192720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19271Cu;
        // 0x192720: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192724u;
        goto label_192724;
    }
    ctx->pc = 0x19271Cu;
    {
        const bool branch_taken_0x19271c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x192720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19271Cu;
        // 0x192720: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19271c) {
            ctx->pc = 0x1927F8u;
            goto label_1927f8;
        }
    }
    ctx->pc = 0x192724u;
label_192724:
    // 0x192724: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_192728:
    if (ctx->pc == 0x192728u) {
        ctx->pc = 0x192728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192724u;
        // 0x192728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19272Cu;
        goto label_19272c;
    }
    ctx->pc = 0x192724u;
    {
        const bool branch_taken_0x192724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192724) {
            ctx->pc = 0x192728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192724u;
            // 0x192728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19273Cu;
            goto label_19273c;
        }
    }
    ctx->pc = 0x19272Cu;
label_19272c:
    // 0x19272c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_192730:
    if (ctx->pc == 0x192730u) {
        ctx->pc = 0x192734u;
        goto label_192734;
    }
    ctx->pc = 0x19272Cu;
    {
        const bool branch_taken_0x19272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19272c) {
            ctx->pc = 0x192754u;
            goto label_192754;
        }
    }
    ctx->pc = 0x192734u;
label_192734:
    // 0x192734: 0x1000004f  b           . + 4 + (0x4F << 2)
label_192738:
    if (ctx->pc == 0x192738u) {
        ctx->pc = 0x192738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192734u;
        // 0x192738: 0x920402b4  lbu         $a0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19273Cu;
        goto label_19273c;
    }
    ctx->pc = 0x192734u;
    {
        const bool branch_taken_0x192734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192734u;
        // 0x192738: 0x920402b4  lbu         $a0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192734) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x19273Cu;
label_19273c:
    // 0x19273c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_192740:
    if (ctx->pc == 0x192740u) {
        ctx->pc = 0x192740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19273Cu;
        // 0x192740: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192744u;
        goto label_192744;
    }
    ctx->pc = 0x19273Cu;
    {
        const bool branch_taken_0x19273c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19273Cu;
        // 0x192740: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19273c) {
            ctx->pc = 0x192820u;
            goto label_192820;
        }
    }
    ctx->pc = 0x192744u;
label_192744:
    // 0x192744: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_192748:
    if (ctx->pc == 0x192748u) {
        ctx->pc = 0x192748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192744u;
        // 0x192748: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19274Cu;
        goto label_19274c;
    }
    ctx->pc = 0x192744u;
    {
        const bool branch_taken_0x192744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192744) {
            ctx->pc = 0x192748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192744u;
            // 0x192748: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192864u;
            goto label_192864;
        }
    }
    ctx->pc = 0x19274Cu;
label_19274c:
    // 0x19274c: 0x10000049  b           . + 4 + (0x49 << 2)
label_192750:
    if (ctx->pc == 0x192750u) {
        ctx->pc = 0x192750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19274Cu;
        // 0x192750: 0x920402b4  lbu         $a0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192754u;
        goto label_192754;
    }
    ctx->pc = 0x19274Cu;
    {
        const bool branch_taken_0x19274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19274Cu;
        // 0x192750: 0x920402b4  lbu         $a0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19274c) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x192754u;
label_192754:
    // 0x192754: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x192754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_192758:
    // 0x192758: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x192758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_19275c:
    // 0x19275c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19275cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_192760:
    // 0x192760: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x192760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_192764:
    // 0x192764: 0x40f809  jalr        $v0
label_192768:
    if (ctx->pc == 0x192768u) {
        ctx->pc = 0x192768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192764u;
        // 0x192768: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19276Cu;
        goto label_19276c;
    }
    ctx->pc = 0x192764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19276Cu);
        ctx->pc = 0x192768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192764u;
        // 0x192768: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192764u, 0x19276Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19276Cu;
label_19276c:
    // 0x19276c: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_192770:
    if (ctx->pc == 0x192770u) {
        ctx->pc = 0x192774u;
        goto label_192774;
    }
    ctx->pc = 0x19276Cu;
    {
        const bool branch_taken_0x19276c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x19276c) {
            ctx->pc = 0x19278Cu;
            goto label_19278c;
        }
    }
    ctx->pc = 0x192774u;
label_192774:
    // 0x192774: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x192774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192778:
    // 0x192778: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x192778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19277c:
    // 0x19277c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192780:
    // 0x192780: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x192780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_192784:
    // 0x192784: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x192784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192788:
    // 0x192788: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x192788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19278c:
    // 0x19278c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_192790:
    // 0x192790: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x192790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_192794:
    // 0x192794: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x192794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_192798:
    // 0x192798: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19279c:
    // 0x19279c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1927a0:
    // 0x1927a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1927a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927a4:
    // 0x1927a4: 0xc0c1a0e  jal         func_306838
label_1927a8:
    if (ctx->pc == 0x1927A8u) {
        ctx->pc = 0x1927A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927A4u;
        // 0x1927a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927ACu;
        goto label_1927ac;
    }
    ctx->pc = 0x1927A4u;
    SET_GPR_U32(ctx, 31, 0x1927ACu);
    ctx->pc = 0x1927A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927A4u;
    // 0x1927a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1927A4u, 0x1927ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ACu;
label_1927ac:
    // 0x1927ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1927acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1927b0:
    // 0x1927b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1927b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927b4:
    // 0x1927b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1927b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927b8:
    // 0x1927b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1927b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927bc:
    // 0x1927bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1927bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1927c0:
    // 0x1927c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1927c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927c4:
    // 0x1927c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1927c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1927c8:
    // 0x1927c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1927c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927cc:
    // 0x1927cc: 0xc0b2e92  jal         func_2CBA48
label_1927d0:
    if (ctx->pc == 0x1927D0u) {
        ctx->pc = 0x1927D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927CCu;
        // 0x1927d0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927D4u;
        goto label_1927d4;
    }
    ctx->pc = 0x1927CCu;
    SET_GPR_U32(ctx, 31, 0x1927D4u);
    ctx->pc = 0x1927D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927CCu;
    // 0x1927d0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1927CCu, 0x1927D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927D4u;
label_1927d4:
    // 0x1927d4: 0xc064a36  jal         func_1928D8
label_1927d8:
    if (ctx->pc == 0x1927D8u) {
        ctx->pc = 0x1927D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D4u;
        // 0x1927d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927DCu;
        goto label_1927dc;
    }
    ctx->pc = 0x1927D4u;
    SET_GPR_U32(ctx, 31, 0x1927DCu);
    ctx->pc = 0x1927D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927D4u;
    // 0x1927d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928D8u, 0x1927D4u, 0x1927DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927DCu;
label_1927dc:
    // 0x1927dc: 0xc06de42  jal         func_1B7908
label_1927e0:
    if (ctx->pc == 0x1927E0u) {
        ctx->pc = 0x1927E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927DCu;
        // 0x1927e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927E4u;
        goto label_1927e4;
    }
    ctx->pc = 0x1927DCu;
    SET_GPR_U32(ctx, 31, 0x1927E4u);
    ctx->pc = 0x1927E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927DCu;
    // 0x1927e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1927DCu, 0x1927E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927E4u;
label_1927e4:
    // 0x1927e4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1927e8:
    // 0x1927e8: 0xa21102f5  sb          $s1, 0x2F5($s0)
    ctx->pc = 0x1927e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 17));
label_1927ec:
    // 0x1927ec: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x1927ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
label_1927f0:
    // 0x1927f0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1927f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1927f4:
    // 0x1927f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1927f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1927f8:
    // 0x1927f8: 0x96020600  lhu         $v0, 0x600($s0)
    ctx->pc = 0x1927f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1536)));
label_1927fc:
    // 0x1927fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_192800:
    // 0x192800: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_192804:
    // 0x192804: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_192808:
    if (ctx->pc == 0x192808u) {
        ctx->pc = 0x192808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192804u;
        // 0x192808: 0xa6020600  sh          $v0, 0x600($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19280Cu;
        goto label_19280c;
    }
    ctx->pc = 0x192804u;
    {
        const bool branch_taken_0x192804 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x192808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192804u;
        // 0x192808: 0xa6020600  sh          $v0, 0x600($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192804) {
            ctx->pc = 0x192870u;
            goto label_192870;
        }
    }
    ctx->pc = 0x19280Cu;
label_19280c:
    // 0x19280c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_192810:
    // 0x192810: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_192814:
    // 0x192814: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x192814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
label_192818:
    // 0x192818: 0x10000013  b           . + 4 + (0x13 << 2)
label_19281c:
    if (ctx->pc == 0x19281Cu) {
        ctx->pc = 0x19281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192818u;
        // 0x19281c: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192820u;
        goto label_192820;
    }
    ctx->pc = 0x192818u;
    {
        const bool branch_taken_0x192818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192818u;
        // 0x19281c: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192818) {
            ctx->pc = 0x192868u;
            goto label_192868;
        }
    }
    ctx->pc = 0x192820u;
label_192820:
    // 0x192820: 0x96020600  lhu         $v0, 0x600($s0)
    ctx->pc = 0x192820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1536)));
label_192824:
    // 0x192824: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_192828:
    // 0x192828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19282c:
    // 0x19282c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_192830:
    // 0x192830: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_192834:
    // 0x192834: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x192834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
label_192838:
    // 0x192838: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_19283c:
    // 0x19283c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19283cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192840:
    // 0x192840: 0x0  nop
    ctx->pc = 0x192840u;
    // NOP
label_192844:
    // 0x192844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192848:
    // 0x192848: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x192848u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_19284c:
    // 0x19284c: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_192850:
    if (ctx->pc == 0x192850u) {
        ctx->pc = 0x192850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19284Cu;
        // 0x192850: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192854u;
        goto label_192854;
    }
    ctx->pc = 0x19284Cu;
    {
        const bool branch_taken_0x19284c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x192850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19284Cu;
        // 0x192850: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19284c) {
            ctx->pc = 0x192870u;
            goto label_192870;
        }
    }
    ctx->pc = 0x192854u;
label_192854:
    // 0x192854: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_192858:
    // 0x192858: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x192858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19285c:
    // 0x19285c: 0x10000003  b           . + 4 + (0x3 << 2)
label_192860:
    if (ctx->pc == 0x192860u) {
        ctx->pc = 0x192860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19285Cu;
        // 0x192860: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192864u;
        goto label_192864;
    }
    ctx->pc = 0x19285Cu;
    {
        const bool branch_taken_0x19285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19285Cu;
        // 0x192860: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19285c) {
            ctx->pc = 0x19286Cu;
            goto label_19286c;
        }
    }
    ctx->pc = 0x192864u;
label_192864:
    // 0x192864: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x192864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_192868:
    // 0x192868: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x192868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19286c:
    // 0x19286c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19286cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_192870:
    // 0x192870: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x192870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_192874:
    // 0x192874: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_192878:
    if (ctx->pc == 0x192878u) {
        ctx->pc = 0x192878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192874u;
        // 0x192878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19287Cu;
        goto label_19287c;
    }
    ctx->pc = 0x192874u;
    {
        const bool branch_taken_0x192874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192874u;
        // 0x192878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192874) {
            ctx->pc = 0x192898u;
            goto label_192898;
        }
    }
    ctx->pc = 0x19287Cu;
label_19287c:
    // 0x19287c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_192880:
    // 0x192880: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_192884:
    // 0x192884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_192888:
    if (ctx->pc == 0x192888u) {
        ctx->pc = 0x192888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192884u;
        // 0x192888: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19288Cu;
        goto label_19288c;
    }
    ctx->pc = 0x192884u;
    {
        const bool branch_taken_0x192884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192884u;
        // 0x192888: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192884) {
            ctx->pc = 0x19289Cu;
            goto label_19289c;
        }
    }
    ctx->pc = 0x19288Cu;
label_19288c:
    // 0x19288c: 0x0  nop
    ctx->pc = 0x19288cu;
    // NOP
label_192890:
    // 0x192890: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
label_192894:
    if (ctx->pc == 0x192894u) {
        ctx->pc = 0x192894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192890u;
        // 0x192894: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192898u;
        goto label_192898;
    }
    ctx->pc = 0x192890u;
    {
        const bool branch_taken_0x192890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x192890) {
            ctx->pc = 0x192894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192890u;
            // 0x192894: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192880;
        }
    }
    ctx->pc = 0x192898u;
label_192898:
    // 0x192898: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x192898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19289c:
    // 0x19289c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19289cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1928a0:
    // 0x1928a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1928a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1928a4:
    // 0x1928a4: 0x3e00008  jr          $ra
label_1928a8:
    if (ctx->pc == 0x1928A8u) {
        ctx->pc = 0x1928A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928A4u;
        // 0x1928a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1928ACu;
        goto label_1928ac;
    }
    ctx->pc = 0x1928A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928A4u;
        // 0x1928a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928ACu;
label_1928ac:
    // 0x1928ac: 0x0  nop
    ctx->pc = 0x1928acu;
    // NOP
    ctx->pc = 0x1928b0u;
}
