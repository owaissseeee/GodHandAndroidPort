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

// Function: func_001A6FB0
// Address: 0x1a6fb0 - 0x1a70d8
void func_001A6FB0_0x1a6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6FB0_0x1a6fb0");
#endif

    switch (ctx->pc) {
        case 0x1a6fe0u: goto label_1a6fe0;
        default: break;
    }

    ctx->pc = 0x1a6fb0u;

    // 0x1a6fb0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a6fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fb4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a6fb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a6fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a6fbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a6fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a6fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6fc4: 0x250b0748  addiu       $t3, $t0, 0x748
    ctx->pc = 0x1a6fc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1864));
    // 0x1a6fc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6fcc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1a6fccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fd0: 0x250606c8  addiu       $a2, $t0, 0x6C8
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1736));
    // 0x1a6fd4: 0x25070644  addiu       $a3, $t0, 0x644
    ctx->pc = 0x1a6fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1604));
    // 0x1a6fd8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6fdc: 0x0  nop
    ctx->pc = 0x1a6fdcu;
    // NOP
label_1a6fe0:
    // 0x1a6fe0: 0x910302b4  lbu         $v1, 0x2B4($t0)
    ctx->pc = 0x1a6fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 692)));
    // 0x1a6fe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fe8: 0x12c102a  slt         $v0, $t1, $t4
    ctx->pc = 0x1a6fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1a6fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FECu;
    {
        const bool branch_taken_0x1a6fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FECu;
        // 0x1a6ff0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fec) {
            ctx->pc = 0x1A6FFCu;
            goto label_1a6ffc;
        }
    }
    ctx->pc = 0x1A6FF4u;
    // 0x1a6ff4: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1a6ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ffc:
    // 0x1a6ffc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a6ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a7000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A7014u;
            goto label_1a7014;
        }
    }
    ctx->pc = 0x1A7008u;
    // 0x1a7008: 0x8d020278  lw          $v0, 0x278($t0)
    ctx->pc = 0x1a7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 632)));
    // 0x1a700c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a7010: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7014:
    // 0x1a7014: 0x50a00025  beql        $a1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A7014u;
    {
        const bool branch_taken_0x1a7014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7014) {
            ctx->pc = 0x1A7018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7014u;
            // 0x1a7018: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A70ACu;
            goto label_1a70ac;
        }
    }
    ctx->pc = 0x1A701Cu;
    // 0x1a701c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1a7020: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1a7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7024: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7028: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a7028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a702c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1a702cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a7030: 0xe4c1ff7c  swc1        $f1, -0x84($a2)
    ctx->pc = 0x1a7030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967164), bits); }
    // 0x1a7034: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1a7038: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a703c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a7040: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1a7044: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7048: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a7048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a704c: 0x0  nop
    ctx->pc = 0x1a704cu;
    // NOP
    // 0x1a7050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7050u;
    {
        const bool branch_taken_0x1a7050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7050) {
            ctx->pc = 0x1A7068u;
            goto label_1a7068;
        }
    }
    ctx->pc = 0x1A7058u;
    // 0x1a7058: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1a7058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a705c: 0xe4c0ff7c  swc1        $f0, -0x84($a2)
    ctx->pc = 0x1a705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967164), bits); }
    // 0x1a7060: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1a7064: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7068:
    // 0x1a7068: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a7068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a706c: 0x0  nop
    ctx->pc = 0x1a706cu;
    // NOP
    // 0x1a7070: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7070u;
    {
        const bool branch_taken_0x1a7070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7070) {
            ctx->pc = 0x1A7074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7070u;
            // 0x1a7074: 0x8ca300d0  lw          $v1, 0xD0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7088u;
            goto label_1a7088;
        }
    }
    ctx->pc = 0x1A7078u;
    // 0x1a7078: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1a7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a707c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a707cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a7080: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1a7080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a7084: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
label_1a7088:
    // 0x1a7088: 0x1692021  addu        $a0, $t3, $t1
    ctx->pc = 0x1a7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1a708c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1a708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7090: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7098: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a7098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a709c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1a709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1a70a0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1a70a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a70a4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a70a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a70a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a70ac:
    // 0x1a70ac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a70b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a70b4: 0x2d220020  sltiu       $v0, $t1, 0x20
    ctx->pc = 0x1a70b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a70b8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1A70B8u;
    {
        const bool branch_taken_0x1a70b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70B8u;
        // 0x1a70bc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70b8) {
            ctx->pc = 0x1A6FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6fe0;
        }
    }
    ctx->pc = 0x1A70C0u;
    // 0x1a70c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70c4: 0xa1020768  sb          $v0, 0x768($t0)
    ctx->pc = 0x1a70c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1896), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a70c8: 0xa1020748  sb          $v0, 0x748($t0)
    ctx->pc = 0x1a70c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1864), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a70cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A70CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70CCu;
        // 0x1a70d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A70CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A70D4u;
    // 0x1a70d4: 0x0  nop
    ctx->pc = 0x1a70d4u;
    // NOP
    ctx->pc = 0x1a70d8u;
}
