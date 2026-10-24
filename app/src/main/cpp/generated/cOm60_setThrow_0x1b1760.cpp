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

// Function: cOm60_setThrow
// Address: 0x1b1760 - 0x1b1860
void cOm60_setThrow_0x1b1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm60_setThrow_0x1b1760");
#endif

    switch (ctx->pc) {
        case 0x1b17b8u: goto label_1b17b8;
        case 0x1b1820u: goto label_1b1820;
        case 0x1b1848u: goto label_1b1848;
        default: break;
    }

    ctx->pc = 0x1b1760u;

    // 0x1b1760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b176c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1770: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1b1770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1b1774: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1774u;
    {
        const bool branch_taken_0x1b1774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1774u;
        // 0x1b1778: 0xae000600  sw          $zero, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1774) {
            ctx->pc = 0x1B1794u;
            goto label_1b1794;
        }
    }
    ctx->pc = 0x1B177Cu;
    // 0x1b177c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1780: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1b1780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1b1784: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b1784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1788: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b178c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1790: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b1794:
    // 0x1b1794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1798: 0x0  nop
    ctx->pc = 0x1b1798u;
    // NOP
    // 0x1b179c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1b179cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b17a0: 0x0  nop
    ctx->pc = 0x1b17a0u;
    // NOP
    // 0x1b17a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B17A4u;
    {
        const bool branch_taken_0x1b17a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b17a4) {
            ctx->pc = 0x1B17A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B17A4u;
            // 0x1b17a8: 0xe60c0630  swc1        $f12, 0x630($s0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B17ACu;
            goto label_1b17ac;
        }
    }
    ctx->pc = 0x1B17ACu;
label_1b17ac:
    // 0x1b17ac: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x1b17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b17b0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1B17B0u;
    SET_GPR_U32(ctx, 31, 0x1B17B8u);
    ctx->pc = 0x1B17B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17B0u;
    // 0x1b17b4: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1B17B0u, 0x1B17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B8u;
label_1b17b8:
    // 0x1b17b8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1b17bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b17c0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1b17c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1b17c4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1b17c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b17c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b17cc: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1b17ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1b17d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b17d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b17d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b17d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b17d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b17dc: 0x92040667  lbu         $a0, 0x667($s0)
    ctx->pc = 0x1b17dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1639)));
    // 0x1b17e0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1b17e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1b17e4: 0xe6020650  swc1        $f2, 0x650($s0)
    ctx->pc = 0x1b17e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x1b17e8: 0xe601024c  swc1        $f1, 0x24C($s0)
    ctx->pc = 0x1b17e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1b17ec: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1b17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1b17f0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B17F0u;
    {
        const bool branch_taken_0x1b17f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17F0u;
        // 0x1b17f4: 0xa2000666  sb          $zero, 0x666($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1638), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17f0) {
            ctx->pc = 0x1B184Cu;
            goto label_1b184c;
        }
    }
    ctx->pc = 0x1B17F8u;
    // 0x1b17f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b17fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1800: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b1804: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b1808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b180c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b180cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1810: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1814: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1b1814u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1b1818: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B1818u;
    SET_GPR_U32(ctx, 31, 0x1B1820u);
    ctx->pc = 0x1B181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1818u;
    // 0x1b181c: 0xa2020667  sb          $v0, 0x667($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1639), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B1818u, 0x1B1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1820u;
label_1b1820:
    // 0x1b1820: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b1824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1828: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b1828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b182c: 0x24060117  addiu       $a2, $zero, 0x117
    ctx->pc = 0x1b182cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x1b1830: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b183c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b183cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1840: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B1840u;
    SET_GPR_U32(ctx, 31, 0x1B1848u);
    ctx->pc = 0x1B1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1840u;
    // 0x1b1844: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B1840u, 0x1B1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1848u;
label_1b1848:
    // 0x1b1848: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x1b1848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
label_1b184c:
    // 0x1b184c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1854: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1854u;
        // 0x1b1858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B185Cu;
    // 0x1b185c: 0x0  nop
    ctx->pc = 0x1b185cu;
    // NOP
    ctx->pc = 0x1b1860u;
}
