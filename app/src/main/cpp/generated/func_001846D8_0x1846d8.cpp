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

// Function: func_001846D8
// Address: 0x1846d8 - 0x184a20
void func_001846D8_0x1846d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001846D8_0x1846d8");
#endif

    switch (ctx->pc) {
        case 0x184718u: goto label_184718;
        case 0x184774u: goto label_184774;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184974u: goto label_184974;
        case 0x184998u: goto label_184998;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849e4u: goto label_1849e4;
        default: break;
    }

    ctx->pc = 0x1846d8u;

    // 0x1846d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1846d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1846dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1846dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1846e0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1846e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1846e4: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1846e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1846e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1846e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1846ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1846f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1846f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1846f4: 0x26110638  addiu       $s1, $s0, 0x638
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1592));
    // 0x1846f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1846f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1846fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x184700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x184704: 0x2603063c  addiu       $v1, $s0, 0x63C
    ctx->pc = 0x184704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1596));
    // 0x184708: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x184708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18470c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x18470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x184710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184714: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x184714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_184718:
    // 0x184718: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x184718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18471c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x18471cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184720: 0x0  nop
    ctx->pc = 0x184720u;
    // NOP
    // 0x184724: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x184724u;
    {
        const bool branch_taken_0x184724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184724) {
            ctx->pc = 0x184728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184724u;
            // 0x184728: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184754u;
            goto label_184754;
        }
    }
    ctx->pc = 0x18472Cu;
    // 0x18472c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x18472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184730: 0xc4a10574  lwc1        $f1, 0x574($a1)
    ctx->pc = 0x184730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x184734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184738: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x184738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18473c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18473cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184740: 0x0  nop
    ctx->pc = 0x184740u;
    // NOP
    // 0x184744: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x184744u;
    {
        const bool branch_taken_0x184744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184744u;
        // 0x184748: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184744) {
            ctx->pc = 0x184750u;
            goto label_184750;
        }
    }
    ctx->pc = 0x18474Cu;
    // 0x18474c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18474cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_184750:
    // 0x184750: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x184750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_184754:
    // 0x184754: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x184754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x184758: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184758u;
        // 0x18475c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184758) {
            ctx->pc = 0x184718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184718;
        }
    }
    ctx->pc = 0x184760u;
    // 0x184760: 0x8e050600  lw          $a1, 0x600($s0)
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x184764: 0x50a000a5  beql        $a1, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x184764u;
    {
        const bool branch_taken_0x184764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x184764) {
            ctx->pc = 0x184768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184764u;
            // 0x184768: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1849FCu;
            goto label_1849fc;
        }
    }
    ctx->pc = 0x18476Cu;
    // 0x18476c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18476Cu;
    SET_GPR_U32(ctx, 31, 0x184774u);
    ctx->pc = 0x184770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18476Cu;
    // 0x184770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18476Cu, 0x184774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184774u;
label_184774:
    // 0x184774: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x184774u;
    {
        const bool branch_taken_0x184774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184774u;
        // 0x184778: 0x3c030042  lui         $v1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184774) {
            ctx->pc = 0x1849F8u;
            goto label_1849f8;
        }
    }
    ctx->pc = 0x18477Cu;
    // 0x18477c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x18477cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x184780: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x184780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184784: 0x84632f70  lh          $v1, 0x2F70($v1)
    ctx->pc = 0x184784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12144)));
    // 0x184788: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x184788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18478c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18478Cu;
    {
        const bool branch_taken_0x18478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18478Cu;
        // 0x184790: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18478c) {
            ctx->pc = 0x18479Cu;
            goto label_18479c;
        }
    }
    ctx->pc = 0x184794u;
    // 0x184794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x184794u;
    {
        const bool branch_taken_0x184794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184794u;
        // 0x184798: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184794) {
            ctx->pc = 0x1847A0u;
            goto label_1847a0;
        }
    }
    ctx->pc = 0x18479Cu;
label_18479c:
    // 0x18479c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x18479cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_1847a0:
    // 0x1847a0: 0x84a22f70  lh          $v0, 0x2F70($a1)
    ctx->pc = 0x1847a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12144)));
    // 0x1847a4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1847a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1847a8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1847ac: 0xa602061c  sh          $v0, 0x61C($s0)
    ctx->pc = 0x1847acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1564), (uint16_t)GPR_U32(ctx, 2));
    // 0x1847b0: 0xa602062a  sh          $v0, 0x62A($s0)
    ctx->pc = 0x1847b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1578), (uint16_t)GPR_U32(ctx, 2));
    // 0x1847b4: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1847b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1847b8: 0xa6030662  sh          $v1, 0x662($s0)
    ctx->pc = 0x1847b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1634), (uint16_t)GPR_U32(ctx, 3));
    // 0x1847bc: 0x9082b010  lbu         $v0, -0x4FF0($a0)
    ctx->pc = 0x1847bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x1847c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1847C0u;
    {
        const bool branch_taken_0x1847c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847C0u;
        // 0x1847c4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847c0) {
            ctx->pc = 0x1847CCu;
            goto label_1847cc;
        }
    }
    ctx->pc = 0x1847C8u;
    // 0x1847c8: 0xa6020662  sh          $v0, 0x662($s0)
    ctx->pc = 0x1847c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1634), (uint16_t)GPR_U32(ctx, 2));
label_1847cc:
    // 0x1847cc: 0x86020662  lh          $v0, 0x662($s0)
    ctx->pc = 0x1847ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1634)));
    // 0x1847d0: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1847d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x1847d4: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1847d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1847d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1847dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1847e0: 0x0  nop
    ctx->pc = 0x1847e0u;
    // NOP
    // 0x1847e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1847e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1847e8: 0x2692ee00  addiu       $s2, $s4, -0x1200
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x1847ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1847f0: 0x26160600  addiu       $s6, $s0, 0x600
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1847f4: 0xc061966  jal         func_186598
    ctx->pc = 0x1847F4u;
    SET_GPR_U32(ctx, 31, 0x1847FCu);
    ctx->pc = 0x1847F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1847F4u;
    // 0x1847f8: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186598u, 0x1847F4u, 0x1847FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1847FCu;
label_1847fc:
    // 0x1847fc: 0x0  nop
    ctx->pc = 0x1847fcu;
    // NOP
label_184800:
    // 0x184800: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x184800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x184804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184808: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x184808u;
    {
        const bool branch_taken_0x184808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184808) {
            ctx->pc = 0x18480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184808u;
            // 0x18480c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x184810u;
    // 0x184810: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x184810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184818: 0x0  nop
    ctx->pc = 0x184818u;
    // NOP
    // 0x18481c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18481cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184820: 0x0  nop
    ctx->pc = 0x184820u;
    // NOP
    // 0x184824: 0x45020070  bc1fl       . + 4 + (0x70 << 2)
    ctx->pc = 0x184824u;
    {
        const bool branch_taken_0x184824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184824) {
            ctx->pc = 0x184828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184824u;
            // 0x184828: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x18482Cu;
    // 0x18482c: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x18482cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x184830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x184834: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x184834u;
    {
        const bool branch_taken_0x184834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184834u;
        // 0x184838: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184834) {
            ctx->pc = 0x1849E4u;
            goto label_1849e4;
        }
    }
    ctx->pc = 0x18483Cu;
    // 0x18483c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18483Cu;
    {
        const bool branch_taken_0x18483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18483Cu;
        // 0x184840: 0x86050662  lh          $a1, 0x662($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1634)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18483c) {
            ctx->pc = 0x184868u;
            goto label_184868;
        }
    }
    ctx->pc = 0x184844u;
    // 0x184844: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x184844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x184848: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x184848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x18484c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184850: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x184850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184854: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x184854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184858: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18485c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18485Cu;
    {
        const bool branch_taken_0x18485c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x184860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18485Cu;
        // 0x184860: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18485c) {
            ctx->pc = 0x184868u;
            goto label_184868;
        }
    }
    ctx->pc = 0x184864u;
    // 0x184864: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x184864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_184868:
    // 0x184868: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x184868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x18486c: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x18486cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x184870: 0x28430028  slti        $v1, $v0, 0x28
    ctx->pc = 0x184870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x184874: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x184878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18487c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18487Cu;
    {
        const bool branch_taken_0x18487c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18487Cu;
        // 0x184880: 0x2842001a  slti        $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18487c) {
            ctx->pc = 0x184894u;
            goto label_184894;
        }
    }
    ctx->pc = 0x184884u;
    // 0x184884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184884u;
    {
        const bool branch_taken_0x184884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184884u;
        // 0x184888: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184884) {
            ctx->pc = 0x184898u;
            goto label_184898;
        }
    }
    ctx->pc = 0x18488Cu;
    // 0x18488c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x184890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184894:
    // 0x184894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184898:
    // 0x184898: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x184898u;
    {
        const bool branch_taken_0x184898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x18489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184898u;
        // 0x18489c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184898) {
            ctx->pc = 0x1848FCu;
            goto label_1848fc;
        }
    }
    ctx->pc = 0x1848A0u;
    // 0x1848a0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1848a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1848a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1848A4u;
    {
        const bool branch_taken_0x1848a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1848A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848A4u;
        // 0x1848a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848a4) {
            ctx->pc = 0x1848BCu;
            goto label_1848bc;
        }
    }
    ctx->pc = 0x1848ACu;
    // 0x1848ac: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1848ACu;
    {
        const bool branch_taken_0x1848ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1848ac) {
            ctx->pc = 0x1848B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1848ACu;
            // 0x1848b0: 0x9202065c  lbu         $v0, 0x65C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1848D8u;
            goto label_1848d8;
        }
    }
    ctx->pc = 0x1848B4u;
    // 0x1848b4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1848B4u;
    {
        const bool branch_taken_0x1848b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1848B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848B4u;
        // 0x1848b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848b4) {
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x1848BCu;
label_1848bc:
    // 0x1848bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1848c0: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1848C0u;
    {
        const bool branch_taken_0x1848c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1848C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848C0u;
        // 0x1848c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848c0) {
            ctx->pc = 0x184924u;
            goto label_184924;
        }
    }
    ctx->pc = 0x1848C8u;
    // 0x1848c8: 0x52220020  beql        $s1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1848C8u;
    {
        const bool branch_taken_0x1848c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1848c8) {
            ctx->pc = 0x1848CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1848C8u;
            // 0x1848cc: 0x9202065f  lbu         $v0, 0x65F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1631)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18494Cu;
            goto label_18494c;
        }
    }
    ctx->pc = 0x1848D0u;
    // 0x1848d0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1848D0u;
    {
        const bool branch_taken_0x1848d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1848D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D0u;
        // 0x1848d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848d0) {
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x1848D8u;
label_1848d8:
    // 0x1848d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1848D8u;
    {
        const bool branch_taken_0x1848d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1848DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D8u;
        // 0x1848dc: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848d8) {
            ctx->pc = 0x1848F0u;
            goto label_1848f0;
        }
    }
    ctx->pc = 0x1848E0u;
    // 0x1848e0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1848e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1848e4: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x1848e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1848E8u;
    {
        const bool branch_taken_0x1848e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1848ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848E8u;
        // 0x1848ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848e8) {
            ctx->pc = 0x184960u;
            goto label_184960;
        }
    }
    ctx->pc = 0x1848F0u;
label_1848f0:
    // 0x1848f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1848f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1848f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1848F4u;
    {
        const bool branch_taken_0x1848f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1848F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848F4u;
        // 0x1848f8: 0x24060117  addiu       $a2, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848f4) {
            ctx->pc = 0x1849A4u;
            goto label_1849a4;
        }
    }
    ctx->pc = 0x1848FCu;
label_1848fc:
    // 0x1848fc: 0x9202065d  lbu         $v0, 0x65D($s0)
    ctx->pc = 0x1848fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1629)));
    // 0x184900: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x184900u;
    {
        const bool branch_taken_0x184900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184900u;
        // 0x184904: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184900) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x184908u;
    // 0x184908: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x184908u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x18490c: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x18490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x184910: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x184910u;
    {
        const bool branch_taken_0x184910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184910u;
        // 0x184914: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184910) {
            ctx->pc = 0x184960u;
            goto label_184960;
        }
    }
    ctx->pc = 0x184918u;
label_184918:
    // 0x184918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18491c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18491Cu;
    {
        const bool branch_taken_0x18491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18491Cu;
        // 0x184920: 0x24060117  addiu       $a2, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18491c) {
            ctx->pc = 0x1849A4u;
            goto label_1849a4;
        }
    }
    ctx->pc = 0x184924u;
label_184924:
    // 0x184924: 0x9202065e  lbu         $v0, 0x65E($s0)
    ctx->pc = 0x184924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1630)));
    // 0x184928: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x184928u;
    {
        const bool branch_taken_0x184928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184928u;
        // 0x18492c: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184928) {
            ctx->pc = 0x184940u;
            goto label_184940;
        }
    }
    ctx->pc = 0x184930u;
    // 0x184930: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x184930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x184934: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x184938: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x184938u;
    {
        const bool branch_taken_0x184938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184938u;
        // 0x18493c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184938) {
            ctx->pc = 0x184960u;
            goto label_184960;
        }
    }
    ctx->pc = 0x184940u;
label_184940:
    // 0x184940: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184944: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x184944u;
    {
        const bool branch_taken_0x184944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184944u;
        // 0x184948: 0x24060117  addiu       $a2, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184944) {
            ctx->pc = 0x1849A4u;
            goto label_1849a4;
        }
    }
    ctx->pc = 0x18494Cu;
label_18494c:
    // 0x18494c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18494Cu;
    {
        const bool branch_taken_0x18494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18494Cu;
        // 0x184950: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18494c) {
            ctx->pc = 0x1849C4u;
            goto label_1849c4;
        }
    }
    ctx->pc = 0x184954u;
    // 0x184954: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x184958: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x18495c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x18495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_184960:
    // 0x184960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x184960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184968: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x184968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18496c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x18496Cu;
    SET_GPR_U32(ctx, 31, 0x184974u);
    ctx->pc = 0x184970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18496Cu;
    // 0x184970: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x18496Cu, 0x184974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184974u;
label_184974:
    // 0x184974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x184974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18497c: 0x2406010f  addiu       $a2, $zero, 0x10F
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x184980: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x184980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18498c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18498cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184990: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x184990u;
    SET_GPR_U32(ctx, 31, 0x184998u);
    ctx->pc = 0x184994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184990u;
    // 0x184994: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x184990u, 0x184998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184998u;
label_184998:
    // 0x184998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x184998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18499c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18499cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1849a4:
    // 0x1849a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1849a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1849a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1849acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1849b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1849B4u;
    SET_GPR_U32(ctx, 31, 0x1849BCu);
    ctx->pc = 0x1849B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849B4u;
    // 0x1849b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1849B4u, 0x1849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849BCu;
label_1849bc:
    // 0x1849bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1849BCu;
    {
        const bool branch_taken_0x1849bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1849C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849BCu;
        // 0x1849c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849bc) {
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x1849C4u;
label_1849c4:
    // 0x1849c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1849c8: 0x24060117  addiu       $a2, $zero, 0x117
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x1849cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1849ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1849d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1849d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1849d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849dc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1849DCu;
    SET_GPR_U32(ctx, 31, 0x1849E4u);
    ctx->pc = 0x1849E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849DCu;
    // 0x1849e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1849DCu, 0x1849E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849E4u;
label_1849e4:
    // 0x1849e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1849e8:
    // 0x1849e8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1849e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1849ec: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1849ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1849f0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x1849F0u;
    {
        const bool branch_taken_0x1849f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1849F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849F0u;
        // 0x1849f4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849f0) {
            ctx->pc = 0x184800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184800;
        }
    }
    ctx->pc = 0x1849F8u;
label_1849f8:
    // 0x1849f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1849f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1849fc:
    // 0x1849fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1849fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184a00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x184a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184a04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x184a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184a08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x184a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184a0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x184a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184a10: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x184a10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a18: 0x3e00008  jr          $ra
    ctx->pc = 0x184A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A18u;
        // 0x184a1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A20u;
}
