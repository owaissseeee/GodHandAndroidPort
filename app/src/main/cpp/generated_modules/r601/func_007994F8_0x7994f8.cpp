#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_007994F8
// Address: 0x7994f8 - 0x7995a0
void func_007994F8_0x7994f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994F8_0x7994f8");
#endif

    switch (ctx->pc) {
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        default: break;
    }

    ctx->pc = 0x7994f8u;

label_7994f8:
    // 0x7994f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_7994fc:
    // 0x7994fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799500:
    // 0x799500: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_799504:
    // 0x799504: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799508:
    // 0x799508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_79950c:
    // 0x79950c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_799510:
    // 0x799510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799514:
    // 0x799514: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x799514u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_799518:
    // 0x799518: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79951c:
    // 0x79951c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79951cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_799520:
    // 0x799520: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_799524:
    // 0x799524: 0xc0b56a8  jal         func_2D5AA0
label_799528:
    if (ctx->pc == 0x799528u) {
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79952Cu;
        goto label_79952c;
    }
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799530:
    // 0x799530: 0xc0c3ea6  jal         func_30FA98
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x24040350  addiu       $a0, $zero, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x24040350  addiu       $a0, $zero, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79953c:
    // 0x79953c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    {
        const bool branch_taken_0x79953c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79953c) {
            ctx->pc = 0x799558u;
            goto label_799558;
        }
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799548:
    // 0x799548: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79954c:
    // 0x79954c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799550:
    // 0x799550: 0x40f809  jalr        $v0
label_799554:
    if (ctx->pc == 0x799554u) {
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799558u;
        goto label_799558;
    }
    ctx->pc = 0x799550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799558u);
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x3c01438c  lui         $at, 0x438C
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17292 << 16));
label_79955c:
    // 0x79955c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79955cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799560:
    // 0x799560: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x799560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799564:
    // 0x799564: 0x10000005  b           . + 4 + (0x5 << 2)
label_799568:
    if (ctx->pc == 0x799568u) {
        ctx->pc = 0x79956Cu;
        goto label_79956c;
    }
    ctx->pc = 0x799564u;
    {
        const bool branch_taken_0x799564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799564) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x0  nop
    ctx->pc = 0x79956cu;
    // NOP
label_799570:
    // 0x799570: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799574:
    // 0x799574: 0xc0b56a8  jal         func_2D5AA0
label_799578:
    if (ctx->pc == 0x799578u) {
        ctx->pc = 0x799578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799574u;
        // 0x799578: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79957Cu;
        goto label_79957c;
    }
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0xc0a4bd4  jal         func_292F50
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x799584u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_799588:
    // 0x799588: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x799588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79958c:
    // 0x79958c: 0x0  nop
    ctx->pc = 0x79958cu;
    // NOP
label_799590:
    // 0x799590: 0x4500fff7  bc1f        . + 4 + (-0x9 << 2)
label_799594:
    if (ctx->pc == 0x799594u) {
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799598u;
        goto label_799598;
    }
    ctx->pc = 0x799590u;
    {
        const bool branch_taken_0x799590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799590) {
            ctx->pc = 0x799570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799570;
        }
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_fallthrough_0x799598;
    }
    ctx->pc = 0x799598u;
    {
        const bool branch_taken_0x799598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799598) {
            ctx->pc = 0x799530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799530;
        }
    }
label_fallthrough_0x799598:
    ctx->pc = 0x7995A0u;
}
} // namespace gh_r601
