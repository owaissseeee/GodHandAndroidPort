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

// Function: func_001B76D8
// Address: 0x1b76d8 - 0x1b7908
void func_001B76D8_0x1b76d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B76D8_0x1b76d8");
#endif

    switch (ctx->pc) {
        case 0x1b7754u: goto label_1b7754;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b78e8u: goto label_1b78e8;
        default: break;
    }

    ctx->pc = 0x1b76d8u;

    // 0x1b76d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b76d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b76dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b76e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b76e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b76e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b76e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b76e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b76e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b76ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b76f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b76f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b76f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b76f8: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1b76f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1b76fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b76fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7700: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B7700u;
    {
        const bool branch_taken_0x1b7700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7700) {
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B7708u;
    // 0x1b7708: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b7708u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b770c: 0x2127b  dsra        $v0, $v0, 9
    ctx->pc = 0x1b770cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 9);
    // 0x1b7710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7714: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7714u;
    {
        const bool branch_taken_0x1b7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7714u;
        // 0x1b7718: 0x8e0505b8  lw          $a1, 0x5B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7714) {
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B771Cu;
    // 0x1b771c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b7720: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b7724: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1b7728: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b7728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b772c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B772Cu;
    {
        const bool branch_taken_0x1b772c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b772c) {
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B7734u;
    // 0x1b7734: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b7738: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b7738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_1b773c:
    // 0x1b773c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b773cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7740: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7748: 0x26130490  addiu       $s3, $s0, 0x490
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1b774c: 0xc053934  jal         func_14E4D0
    ctx->pc = 0x1B774Cu;
    SET_GPR_U32(ctx, 31, 0x1B7754u);
    ctx->pc = 0x1B7750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B774Cu;
    // 0x1b7750: 0x261205d0  addiu       $s2, $s0, 0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x1B774Cu, 0x1B7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7754u;
label_1b7754:
    // 0x1b7754: 0x9e0305b8  lwu         $v1, 0x5B8($s0)
    ctx->pc = 0x1b7754u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b7758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b775c: 0x3113b  dsra        $v0, $v1, 4
    ctx->pc = 0x1b775cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
    // 0x1b7760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7764: 0x1044003f  beq         $v0, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B7764u;
    {
        const bool branch_taken_0x1b7764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7764u;
        // 0x1b7768: 0x26110100  addiu       $s1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7764) {
            ctx->pc = 0x1B7864u;
            goto label_1b7864;
        }
    }
    ctx->pc = 0x1B776Cu;
    // 0x1b776c: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x1b776cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x1b7770: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7774: 0x1044003b  beq         $v0, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B7774u;
    {
        const bool branch_taken_0x1b7774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7774) {
            ctx->pc = 0x1B7864u;
            goto label_1b7864;
        }
    }
    ctx->pc = 0x1B777Cu;
    // 0x1b777c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b7780: 0xc6010490  lwc1        $f1, 0x490($s0)
    ctx->pc = 0x1b7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7784: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7788: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b7788u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b778c: 0x0  nop
    ctx->pc = 0x1b778cu;
    // NOP
    // 0x1b7790: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7790u;
    {
        const bool branch_taken_0x1b7790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7790) {
            ctx->pc = 0x1B7794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7790u;
            // 0x1b7794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B77E4u;
            goto label_1b77e4;
        }
    }
    ctx->pc = 0x1B7798u;
    // 0x1b7798: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1b7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b779c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b77a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b77a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b77a4: 0x0  nop
    ctx->pc = 0x1b77a4u;
    // NOP
    // 0x1b77a8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1B77A8u;
    {
        const bool branch_taken_0x1b77a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b77a8) {
            ctx->pc = 0x1B77ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B77A8u;
            // 0x1b77ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B77E4u;
            goto label_1b77e4;
        }
    }
    ctx->pc = 0x1B77B0u;
    // 0x1b77b0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1b77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b77b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b77b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b77b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b77bc: 0x0  nop
    ctx->pc = 0x1b77bcu;
    // NOP
    // 0x1b77c0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1B77C0u;
    {
        const bool branch_taken_0x1b77c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b77c0) {
            ctx->pc = 0x1B77C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B77C0u;
            // 0x1b77c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B77E4u;
            goto label_1b77e4;
        }
    }
    ctx->pc = 0x1B77C8u;
    // 0x1b77c8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1b77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b77cc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1b77ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b77d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b77d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b77d4: 0x0  nop
    ctx->pc = 0x1b77d4u;
    // NOP
    // 0x1b77d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B77D8u;
    {
        const bool branch_taken_0x1b77d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77D8u;
        // 0x1b77dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77d8) {
            ctx->pc = 0x1B77E4u;
            goto label_1b77e4;
        }
    }
    ctx->pc = 0x1B77E0u;
    // 0x1b77e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b77e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b77e4:
    // 0x1b77e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b77e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b77e8: 0x261205d0  addiu       $s2, $s0, 0x5D0
    ctx->pc = 0x1b77e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x1b77ec: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B77ECu;
    {
        const bool branch_taken_0x1b77ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77ECu;
        // 0x1b77f0: 0x26110100  addiu       $s1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77ec) {
            ctx->pc = 0x1B7864u;
            goto label_1b7864;
        }
    }
    ctx->pc = 0x1B77F4u;
    // 0x1b77f4: 0xc60105d0  lwc1        $f1, 0x5D0($s0)
    ctx->pc = 0x1b77f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b77f8: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1b77f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b77fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b77fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7800: 0x0  nop
    ctx->pc = 0x1b7800u;
    // NOP
    // 0x1b7804: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7804u;
    {
        const bool branch_taken_0x1b7804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7804) {
            ctx->pc = 0x1B7858u;
            goto label_1b7858;
        }
    }
    ctx->pc = 0x1B780Cu;
    // 0x1b780c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1b780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7810: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7814: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b7814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7818: 0x0  nop
    ctx->pc = 0x1b7818u;
    // NOP
    // 0x1b781c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B781Cu;
    {
        const bool branch_taken_0x1b781c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b781c) {
            ctx->pc = 0x1B7858u;
            goto label_1b7858;
        }
    }
    ctx->pc = 0x1B7824u;
    // 0x1b7824: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1b7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7828: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b782c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b782cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7830: 0x0  nop
    ctx->pc = 0x1b7830u;
    // NOP
    // 0x1b7834: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7834u;
    {
        const bool branch_taken_0x1b7834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7834) {
            ctx->pc = 0x1B7838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7834u;
            // 0x1b7838: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B785Cu;
            goto label_1b785c;
        }
    }
    ctx->pc = 0x1B783Cu;
    // 0x1b783c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1b783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7840: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7844: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b7844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7848: 0x0  nop
    ctx->pc = 0x1b7848u;
    // NOP
    // 0x1b784c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B784Cu;
    {
        const bool branch_taken_0x1b784c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B784Cu;
        // 0x1b7850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b784c) {
            ctx->pc = 0x1B7858u;
            goto label_1b7858;
        }
    }
    ctx->pc = 0x1B7854u;
    // 0x1b7854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7858:
    // 0x1b7858: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b785c:
    // 0x1b785c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B785Cu;
    {
        const bool branch_taken_0x1b785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b785c) {
            ctx->pc = 0x1B7860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B785Cu;
            // 0x1b7860: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7880u;
            goto label_1b7880;
        }
    }
    ctx->pc = 0x1B7864u;
label_1b7864:
    // 0x1b7864: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1B7864u;
    SET_GPR_U32(ctx, 31, 0x1B786Cu);
    ctx->pc = 0x1B7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7864u;
    // 0x1b7868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1B7864u, 0x1B786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B786Cu;
label_1b786c:
    // 0x1b786c: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b7870: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x1b7870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1b7874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b7874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b7878: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b7878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x1b787c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b7880:
    // 0x1b7880: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7880u;
    {
        const bool branch_taken_0x1b7880 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7880) {
            ctx->pc = 0x1B78A0u;
            goto label_1b78a0;
        }
    }
    ctx->pc = 0x1B7888u;
    // 0x1b7888: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b788c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1b788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1b7890: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7894: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1b7894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1b7898: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b789c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1b789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1b78a0:
    // 0x1b78a0: 0x52510008  beql        $s2, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B78A0u;
    {
        const bool branch_taken_0x1b78a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b78a0) {
            ctx->pc = 0x1B78A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B78A0u;
            // 0x1b78a4: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B78C4u;
            goto label_1b78c4;
        }
    }
    ctx->pc = 0x1B78A8u;
    // 0x1b78a8: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1b78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78ac: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x1b78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    // 0x1b78b0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78b4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1b78b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1b78b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78bc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1b78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1b78c0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b78c4:
    // 0x1b78c4: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1b78c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b78c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b78cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b78ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b78d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b78d4: 0x0  nop
    ctx->pc = 0x1b78d4u;
    // NOP
    // 0x1b78d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B78D8u;
    {
        const bool branch_taken_0x1b78d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b78d8) {
            ctx->pc = 0x1B78DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B78D8u;
            // 0x1b78dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B78ECu;
            goto label_1b78ec;
        }
    }
    ctx->pc = 0x1B78E0u;
    // 0x1b78e0: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1B78E0u;
    SET_GPR_U32(ctx, 31, 0x1B78E8u);
    ctx->pc = 0x1B78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78E0u;
    // 0x1b78e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1B78E0u, 0x1B78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78E8u;
label_1b78e8:
    // 0x1b78e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b78e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b78ec:
    // 0x1b78ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b78ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b78f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b78f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b78f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b78f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b78f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b78fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B78FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78FCu;
        // 0x1b7900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B78FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7904u;
    // 0x1b7904: 0x0  nop
    ctx->pc = 0x1b7904u;
    // NOP
    ctx->pc = 0x1b7908u;
}
