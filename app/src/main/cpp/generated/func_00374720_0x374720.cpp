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

// Function: func_00374720
// Address: 0x374720 - 0x374820
void func_00374720_0x374720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374720_0x374720");
#endif

    switch (ctx->pc) {
        case 0x374750u: goto label_374750;
        default: break;
    }

    ctx->pc = 0x374720u;

    // 0x374720: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x374720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374724: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x374724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x374728: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x374728u;
    {
        const bool branch_taken_0x374728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374728u;
        // 0x37472c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374728) {
            ctx->pc = 0x3747ACu;
            goto label_3747ac;
        }
    }
    ctx->pc = 0x374730u;
    // 0x374730: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x374730u;
    {
        const bool branch_taken_0x374730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x374730) {
            ctx->pc = 0x3747B4u;
            goto label_3747b4;
        }
    }
    ctx->pc = 0x374738u;
    // 0x374738: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x374738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37473c: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x37473Cu;
    {
        const bool branch_taken_0x37473c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x374740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37473Cu;
        // 0x374740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37473c) {
            ctx->pc = 0x3747ACu;
            goto label_3747ac;
        }
    }
    ctx->pc = 0x374744u;
    // 0x374744: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x374744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374748: 0x24c30024  addiu       $v1, $a2, 0x24
    ctx->pc = 0x374748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x37474c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374750:
    // 0x374750: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x374750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374754: 0x0  nop
    ctx->pc = 0x374754u;
    // NOP
    // 0x374758: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x374758u;
    {
        const bool branch_taken_0x374758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374758u;
        // 0x37475c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374758) {
            ctx->pc = 0x374784u;
            goto label_374784;
        }
    }
    ctx->pc = 0x374760u;
    // 0x374760: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x374760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374764: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x374764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374768: 0x0  nop
    ctx->pc = 0x374768u;
    // NOP
    // 0x37476c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x37476Cu;
    {
        const bool branch_taken_0x37476c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x374770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37476Cu;
        // 0x374770: 0x24c7001c  addiu       $a3, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37476c) {
            ctx->pc = 0x37477Cu;
            goto label_37477c;
        }
    }
    ctx->pc = 0x374774u;
    // 0x374774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x374774u;
    {
        const bool branch_taken_0x374774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374774u;
        // 0x374778: 0xc4c00038  lwc1        $f0, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374774) {
            ctx->pc = 0x374788u;
            goto label_374788;
        }
    }
    ctx->pc = 0x37477Cu;
label_37477c:
    // 0x37477c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37477Cu;
    {
        const bool branch_taken_0x37477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37477Cu;
        // 0x374780: 0xc4c00034  lwc1        $f0, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37477c) {
            ctx->pc = 0x374788u;
            goto label_374788;
        }
    }
    ctx->pc = 0x374784u;
label_374784:
    // 0x374784: 0x24c7001c  addiu       $a3, $a2, 0x1C
    ctx->pc = 0x374784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_374788:
    // 0x374788: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x374788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37478c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x37478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x374790: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x374790u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x374794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x374794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x374798: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x374798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x37479c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x37479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3747a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3747a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3747a4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3747A4u;
    {
        const bool branch_taken_0x3747a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3747A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747A4u;
        // 0x3747a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747a4) {
            ctx->pc = 0x374750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374750;
        }
    }
    ctx->pc = 0x3747ACu;
label_3747ac:
    // 0x3747ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3747ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3747ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3747B4u;
label_3747b4:
    // 0x3747b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3747b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3747b8: 0x0  nop
    ctx->pc = 0x3747b8u;
    // NOP
    // 0x3747bc: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x3747bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3747c0: 0x0  nop
    ctx->pc = 0x3747c0u;
    // NOP
    // 0x3747c4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3747C4u;
    {
        const bool branch_taken_0x3747c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3747C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747C4u;
        // 0x3747c8: 0x24c2001c  addiu       $v0, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747c4) {
            ctx->pc = 0x3747F8u;
            goto label_3747f8;
        }
    }
    ctx->pc = 0x3747CCu;
    // 0x3747cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3747ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3747d0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3747d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3747d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3747d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3747d8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3747d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3747dc: 0x0  nop
    ctx->pc = 0x3747dcu;
    // NOP
    // 0x3747e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3747E0u;
    {
        const bool branch_taken_0x3747e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3747E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747E0u;
        // 0x3747e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747e0) {
            ctx->pc = 0x3747F0u;
            goto label_3747f0;
        }
    }
    ctx->pc = 0x3747E8u;
    // 0x3747e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3747E8u;
    {
        const bool branch_taken_0x3747e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3747ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747E8u;
        // 0x3747ec: 0xc4c00038  lwc1        $f0, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747e8) {
            ctx->pc = 0x374804u;
            goto label_374804;
        }
    }
    ctx->pc = 0x3747F0u;
label_3747f0:
    // 0x3747f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3747F0u;
    {
        const bool branch_taken_0x3747f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3747F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747F0u;
        // 0x3747f4: 0xc4c00034  lwc1        $f0, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747f0) {
            ctx->pc = 0x374804u;
            goto label_374804;
        }
    }
    ctx->pc = 0x3747F8u;
label_3747f8:
    // 0x3747f8: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x3747f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
    // 0x3747fc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3747fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x374800: 0x24c7001c  addiu       $a3, $a2, 0x1C
    ctx->pc = 0x374800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_374804:
    // 0x374804: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x374804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x374808: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x374808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x37480c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x37480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x374810: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x374810u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x374814: 0x3e00008  jr          $ra
    ctx->pc = 0x374814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37481Cu;
    // 0x37481c: 0x0  nop
    ctx->pc = 0x37481cu;
    // NOP
    ctx->pc = 0x374820u;
}
