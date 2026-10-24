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

// Function: cDoor_setCasinoJumpPoint
// Address: 0x2008b8 - 0x2009b0
void cDoor_setCasinoJumpPoint_0x2008b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDoor_setCasinoJumpPoint_0x2008b8");
#endif

    switch (ctx->pc) {
        case 0x2008f0u: goto label_2008f0;
        case 0x200900u: goto label_200900;
        default: break;
    }

    ctx->pc = 0x2008b8u;

    // 0x2008b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2008bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2008c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2008c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2008c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2008c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2008c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2008c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008cc: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x2008ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2008d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2008d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2008d4: 0x26500034  addiu       $s0, $s2, 0x34
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x2008d8: 0x8c457a44  lw          $a1, 0x7A44($v0)
    ctx->pc = 0x2008d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A44u));
    // 0x2008dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2008dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2008e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2008e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2008e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2008e8: 0xc0afa64  jal         func_2BE990
    ctx->pc = 0x2008E8u;
    SET_GPR_U32(ctx, 31, 0x2008F0u);
    ctx->pc = 0x2008ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008E8u;
    // 0x2008ec: 0x30d100ff  andi        $s1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE990u, 0x2008E8u, 0x2008F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008F0u;
label_2008f0:
    // 0x2008f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2008f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2008f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008f8: 0xc0afac0  jal         func_2BEB00
    ctx->pc = 0x2008F8u;
    SET_GPR_U32(ctx, 31, 0x200900u);
    ctx->pc = 0x2008FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008F8u;
    // 0x2008fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB00u, 0x2008F8u, 0x200900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200900u;
label_200900:
    // 0x200900: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x200900u;
    {
        const bool branch_taken_0x200900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200900) {
            ctx->pc = 0x200904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200900u;
            // 0x200904: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20097Cu;
            goto label_20097c;
        }
    }
    ctx->pc = 0x200908u;
    // 0x200908: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x200908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20090c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x200910: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x200910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x200914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200918: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x200918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x20091c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200920: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x200920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x200924: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x200924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200928: 0xe6410024  swc1        $f1, 0x24($s2)
    ctx->pc = 0x200928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x20092c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x20092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200930: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x200930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200934: 0x0  nop
    ctx->pc = 0x200934u;
    // NOP
    // 0x200938: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x200938u;
    {
        const bool branch_taken_0x200938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200938) {
            ctx->pc = 0x200960u;
            goto label_200960;
        }
    }
    ctx->pc = 0x200940u;
    // 0x200940: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x200944: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x200944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x200948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20094c: 0x0  nop
    ctx->pc = 0x20094cu;
    // NOP
    // 0x200950: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x200950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200954: 0x0  nop
    ctx->pc = 0x200954u;
    // NOP
    // 0x200958: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x200958u;
    {
        const bool branch_taken_0x200958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200958) {
            ctx->pc = 0x20095Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200958u;
            // 0x20095c: 0xe6410028  swc1        $f1, 0x28($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x200960u;
label_200960:
    // 0x200960: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x200964: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x200964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x200968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20096c: 0x0  nop
    ctx->pc = 0x20096cu;
    // NOP
    // 0x200970: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x200970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200974u;
    {
        const bool branch_taken_0x200974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200974u;
        // 0x200978: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200974) {
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x20097Cu;
label_20097c:
    // 0x20097c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x20097cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x200980: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x200980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x200984: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x200984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_200988:
    // 0x200988: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20098c: 0xa653002c  sh          $s3, 0x2C($s2)
    ctx->pc = 0x20098cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 19));
    // 0x200990: 0xa242002e  sb          $v0, 0x2E($s2)
    ctx->pc = 0x200990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x200994: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200998: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20099c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20099cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2009a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2009a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2009a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2009a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2009A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2009ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009A8u;
        // 0x2009ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2009A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2009B0u;
}
