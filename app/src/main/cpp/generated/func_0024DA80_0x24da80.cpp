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

// Function: func_0024DA80
// Address: 0x24da80 - 0x24f050
void func_0024DA80_0x24da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024DA80_0x24da80");
#endif

    switch (ctx->pc) {
        case 0x24dad4u: goto label_24dad4;
        case 0x24dae4u: goto label_24dae4;
        case 0x24db2cu: goto label_24db2c;
        case 0x24dbd8u: goto label_24dbd8;
        case 0x24dbecu: goto label_24dbec;
        case 0x24dc00u: goto label_24dc00;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc78u: goto label_24dc78;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dd18u: goto label_24dd18;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd70u: goto label_24dd70;
        case 0x24dda4u: goto label_24dda4;
        case 0x24ddd0u: goto label_24ddd0;
        case 0x24dde0u: goto label_24dde0;
        case 0x24de20u: goto label_24de20;
        case 0x24de70u: goto label_24de70;
        case 0x24de94u: goto label_24de94;
        case 0x24deccu: goto label_24decc;
        case 0x24df24u: goto label_24df24;
        case 0x24df50u: goto label_24df50;
        case 0x24df7cu: goto label_24df7c;
        case 0x24e030u: goto label_24e030;
        case 0x24e038u: goto label_24e038;
        case 0x24e060u: goto label_24e060;
        case 0x24e068u: goto label_24e068;
        case 0x24e074u: goto label_24e074;
        case 0x24e0a4u: goto label_24e0a4;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e110u: goto label_24e110;
        case 0x24e144u: goto label_24e144;
        case 0x24e168u: goto label_24e168;
        case 0x24e190u: goto label_24e190;
        case 0x24e264u: goto label_24e264;
        case 0x24e26cu: goto label_24e26c;
        case 0x24e298u: goto label_24e298;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e2b8u: goto label_24e2b8;
        case 0x24e2ccu: goto label_24e2cc;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e32cu: goto label_24e32c;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e440u: goto label_24e440;
        case 0x24e450u: goto label_24e450;
        case 0x24e4a0u: goto label_24e4a0;
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e534u: goto label_24e534;
        case 0x24e548u: goto label_24e548;
        case 0x24e570u: goto label_24e570;
        case 0x24e598u: goto label_24e598;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e65cu: goto label_24e65c;
        case 0x24e68cu: goto label_24e68c;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6c4u: goto label_24e6c4;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e6fcu: goto label_24e6fc;
        case 0x24e790u: goto label_24e790;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e800u: goto label_24e800;
        case 0x24e84cu: goto label_24e84c;
        case 0x24e884u: goto label_24e884;
        case 0x24e8b4u: goto label_24e8b4;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e988u: goto label_24e988;
        case 0x24e994u: goto label_24e994;
        case 0x24e9bcu: goto label_24e9bc;
        case 0x24e9c4u: goto label_24e9c4;
        case 0x24e9ccu: goto label_24e9cc;
        case 0x24e9fcu: goto label_24e9fc;
        case 0x24ea20u: goto label_24ea20;
        case 0x24ea44u: goto label_24ea44;
        case 0x24ea68u: goto label_24ea68;
        case 0x24ea8cu: goto label_24ea8c;
        case 0x24eabcu: goto label_24eabc;
        case 0x24eaccu: goto label_24eacc;
        case 0x24eaf8u: goto label_24eaf8;
        case 0x24eb24u: goto label_24eb24;
        case 0x24eb48u: goto label_24eb48;
        case 0x24eb60u: goto label_24eb60;
        case 0x24eb8cu: goto label_24eb8c;
        case 0x24eb9cu: goto label_24eb9c;
        case 0x24ebacu: goto label_24ebac;
        case 0x24ebbcu: goto label_24ebbc;
        case 0x24ebd0u: goto label_24ebd0;
        case 0x24ec10u: goto label_24ec10;
        case 0x24ec30u: goto label_24ec30;
        case 0x24ec5cu: goto label_24ec5c;
        case 0x24ec6cu: goto label_24ec6c;
        case 0x24ece4u: goto label_24ece4;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ed10u: goto label_24ed10;
        case 0x24ed1cu: goto label_24ed1c;
        case 0x24edc8u: goto label_24edc8;
        case 0x24edf8u: goto label_24edf8;
        case 0x24ee14u: goto label_24ee14;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee68u: goto label_24ee68;
        case 0x24ee94u: goto label_24ee94;
        case 0x24eeccu: goto label_24eecc;
        case 0x24eeecu: goto label_24eeec;
        case 0x24eefcu: goto label_24eefc;
        case 0x24ef24u: goto label_24ef24;
        case 0x24ef40u: goto label_24ef40;
        case 0x24efacu: goto label_24efac;
        case 0x24efccu: goto label_24efcc;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efe4u: goto label_24efe4;
        case 0x24eff4u: goto label_24eff4;
        case 0x24f004u: goto label_24f004;
        case 0x24f018u: goto label_24f018;
        case 0x24f024u: goto label_24f024;
        case 0x24f02cu: goto label_24f02c;
        default: break;
    }

    ctx->pc = 0x24da80u;

    // 0x24da80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24da84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24da84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24da88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24da8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24da8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24da94: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24da98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x24da9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24daa0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x24daa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x24daa4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24daa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24daa8: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x24DAA8u;
    {
        const bool branch_taken_0x24daa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24daa8) {
            ctx->pc = 0x24DAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAA8u;
            // 0x24daac: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DB74u;
            goto label_24db74;
        }
    }
    ctx->pc = 0x24DAB0u;
    // 0x24dab0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24dab4: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x24dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x24dab8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24DAB8u;
    {
        const bool branch_taken_0x24dab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24dab8) {
            ctx->pc = 0x24DABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAB8u;
            // 0x24dabc: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24DAC0u;
    // 0x24dac0: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24dac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24dac4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24DAC4u;
    {
        const bool branch_taken_0x24dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dac4) {
            ctx->pc = 0x24DAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAC4u;
            // 0x24dac8: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24DACCu;
    // 0x24dacc: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24DACCu;
    SET_GPR_U32(ctx, 31, 0x24DAD4u);
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24DACCu, 0x24DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAD4u;
label_24dad4:
    // 0x24dad4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24DAD4u;
    {
        const bool branch_taken_0x24dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dad4) {
            ctx->pc = 0x24DAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAD4u;
            // 0x24dad8: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24DADCu;
    // 0x24dadc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DADCu;
    SET_GPR_U32(ctx, 31, 0x24DAE4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DADCu, 0x24DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAE4u;
label_24dae4:
    // 0x24dae4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24dae8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DAE8u;
    {
        const bool branch_taken_0x24dae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dae8) {
            ctx->pc = 0x24DAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAE8u;
            // 0x24daec: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24DAF0u;
    // 0x24daf0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24daf4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24daf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24daf8: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_24dafc:
    // 0x24dafc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x24DAFCu;
    {
        const bool branch_taken_0x24dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dafc) {
            ctx->pc = 0x24DB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAFCu;
            // 0x24db00: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DB74u;
            goto label_24db74;
        }
    }
    ctx->pc = 0x24DB04u;
    // 0x24db04: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x24db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24db08: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x24DB08u;
    {
        const bool branch_taken_0x24db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db08) {
            ctx->pc = 0x24DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DB08u;
            // 0x24db0c: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DB74u;
            goto label_24db74;
        }
    }
    ctx->pc = 0x24DB10u;
    // 0x24db10: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24db14: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x24db14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24db18: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24db18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24db1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24db1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24db20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24db20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24db24: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x24DB24u;
    SET_GPR_U32(ctx, 31, 0x24DB2Cu);
    ctx->pc = 0x24DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB24u;
    // 0x24db28: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x24DB24u, 0x24DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB2Cu;
label_24db2c:
    // 0x24db2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24db2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24db30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24db30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24db34: 0x0  nop
    ctx->pc = 0x24db34u;
    // NOP
    // 0x24db38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24db38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db3c: 0x0  nop
    ctx->pc = 0x24db3cu;
    // NOP
    // 0x24db40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24DB40u;
    {
        const bool branch_taken_0x24db40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB40u;
        // 0x24db44: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db40) {
            ctx->pc = 0x24DB4Cu;
            goto label_24db4c;
        }
    }
    ctx->pc = 0x24DB48u;
    // 0x24db48: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x24db48u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_24db4c:
    // 0x24db4c: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x24db4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x24db50: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x24db50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x24db54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24db54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24db58: 0x0  nop
    ctx->pc = 0x24db58u;
    // NOP
    // 0x24db5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24db5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db60: 0x0  nop
    ctx->pc = 0x24db60u;
    // NOP
    // 0x24db64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24DB64u;
    {
        const bool branch_taken_0x24db64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB64u;
        // 0x24db68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db64) {
            ctx->pc = 0x24DB70u;
            goto label_24db70;
        }
    }
    ctx->pc = 0x24DB6Cu;
    // 0x24db6c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24db6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24db70:
    // 0x24db70: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x24db70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24db74:
    // 0x24db74: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24db74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24db78: 0x1040052c  beqz        $v0, . + 4 + (0x52C << 2)
    ctx->pc = 0x24DB78u;
    {
        const bool branch_taken_0x24db78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB78u;
        // 0x24db7c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db78) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24DB80u;
    // 0x24db80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24db84: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x24db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
    // 0x24db88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24db8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24db90: 0x800008  jr          $a0
    ctx->pc = 0x24DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DB98u: goto label_24db98;
            case 0x24E21Cu: goto label_24e21c;
            case 0x24E6F4u: goto label_24e6f4;
            case 0x24EB58u: goto label_24eb58;
            case 0x24EEB0u: goto label_24eeb0;
            case 0x24EF60u: goto label_24ef60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24DB98u;
label_24db98:
    // 0x24db98: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x24db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x24db9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24DB9Cu;
    {
        const bool branch_taken_0x24db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db9c) {
            ctx->pc = 0x24DC00u;
            goto label_24dc00;
        }
    }
    ctx->pc = 0x24DBA4u;
    // 0x24dba4: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x24dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24dba8: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x24dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x24dbac: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x24dbacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x24dbb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DBB0u;
    {
        const bool branch_taken_0x24dbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBB0u;
        // 0x24dbb4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dbb0) {
            ctx->pc = 0x24DBD0u;
            goto label_24dbd0;
        }
    }
    ctx->pc = 0x24DBB8u;
    // 0x24dbb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24dbbc: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x24dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x24dbc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dbc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24dbc8: 0x800008  jr          $a0
    ctx->pc = 0x24DBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DBD0u: goto label_24dbd0;
            case 0x24DBECu: goto label_24dbec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24DBD0u;
label_24dbd0:
    // 0x24dbd0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DBD0u;
    SET_GPR_U32(ctx, 31, 0x24DBD8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DBD0u, 0x24DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBD8u;
label_24dbd8:
    // 0x24dbd8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24dbdc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DBDCu;
    {
        const bool branch_taken_0x24dbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dbdc) {
            ctx->pc = 0x24DBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DBDCu;
            // 0x24dbe0: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBF0u;
            goto label_24dbf0;
        }
    }
    ctx->pc = 0x24DBE4u;
    // 0x24dbe4: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x24DBE4u;
    SET_GPR_U32(ctx, 31, 0x24DBECu);
    ctx->pc = 0x24DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DBE4u;
    // 0x24dbe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24DBE4u, 0x24DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBECu;
label_24dbec:
    // 0x24dbec: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24dbecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_24dbf0:
    // 0x24dbf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DBF0u;
    {
        const bool branch_taken_0x24dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dbf0) {
            ctx->pc = 0x24DC00u;
            goto label_24dc00;
        }
    }
    ctx->pc = 0x24DBF8u;
    // 0x24dbf8: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x24DBF8u;
    SET_GPR_U32(ctx, 31, 0x24DC00u);
    ctx->pc = 0x24DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DBF8u;
    // 0x24dbfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24DBF8u, 0x24DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC00u;
label_24dc00:
    // 0x24dc00: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24DC00u;
    SET_GPR_U32(ctx, 31, 0x24DC08u);
    ctx->pc = 0x24DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC00u;
    // 0x24dc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24DC00u, 0x24DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC08u;
label_24dc08:
    // 0x24dc08: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24dc0c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x24dc0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24dc10: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x24dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x24dc14: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x24dc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x24dc18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x24DC18u;
    {
        const bool branch_taken_0x24dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC18u;
        // 0x24dc1c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc18) {
            ctx->pc = 0x24DCD8u;
            goto label_24dcd8;
        }
    }
    ctx->pc = 0x24DC20u;
    // 0x24dc20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24dc24: 0x2442e0b0  addiu       $v0, $v0, -0x1F50
    ctx->pc = 0x24dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959280));
    // 0x24dc28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dc2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24dc30: 0x800008  jr          $a0
    ctx->pc = 0x24DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DC38u: goto label_24dc38;
            case 0x24DC70u: goto label_24dc70;
            case 0x24DCD8u: goto label_24dcd8;
            case 0x24DD10u: goto label_24dd10;
            case 0x24DD3Cu: goto label_24dd3c;
            case 0x24DD68u: goto label_24dd68;
            case 0x24DDD8u: goto label_24ddd8;
            case 0x24DE04u: goto label_24de04;
            case 0x24DE78u: goto label_24de78;
            case 0x24DF84u: goto label_24df84;
            case 0x24DF94u: goto label_24df94;
            case 0x24DFA4u: goto label_24dfa4;
            case 0x24DFB4u: goto label_24dfb4;
            case 0x24DFC4u: goto label_24dfc4;
            case 0x24DFD4u: goto label_24dfd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24DC38u;
label_24dc38:
    // 0x24dc38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DC38u;
    SET_GPR_U32(ctx, 31, 0x24DC40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DC38u, 0x24DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC40u;
label_24dc40:
    // 0x24dc40: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24dc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dc44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DC44u;
    {
        const bool branch_taken_0x24dc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC44u;
        // 0x24dc48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc44) {
            ctx->pc = 0x24DC54u;
            goto label_24dc54;
        }
    }
    ctx->pc = 0x24DC4Cu;
    // 0x24dc4c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC4Cu;
    {
        const bool branch_taken_0x24dc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dc4c) {
            ctx->pc = 0x24DC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC4Cu;
            // 0x24dc50: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DC64u;
            goto label_24dc64;
        }
    }
    ctx->pc = 0x24DC54u;
label_24dc54:
    // 0x24dc54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dc58: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x24dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x24dc5c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x24DC5Cu;
    {
        const bool branch_taken_0x24dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC5Cu;
        // 0x24dc60: 0x8c4402e4  lw          $a0, 0x2E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc5c) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DC64u;
label_24dc64:
    // 0x24dc64: 0x8c4302e8  lw          $v1, 0x2E8($v0)
    ctx->pc = 0x24dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x24dc68: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x24DC68u;
    {
        const bool branch_taken_0x24dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC68u;
        // 0x24dc6c: 0x8c4402ec  lw          $a0, 0x2EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc68) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DC70u;
label_24dc70:
    // 0x24dc70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DC70u;
    SET_GPR_U32(ctx, 31, 0x24DC78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DC70u, 0x24DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC78u;
label_24dc78:
    // 0x24dc78: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x24dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24dc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dc80: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24DC80u;
    {
        const bool branch_taken_0x24dc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dc80) {
            ctx->pc = 0x24DC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC80u;
            // 0x24dc84: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DCB0u;
            goto label_24dcb0;
        }
    }
    ctx->pc = 0x24DC88u;
    // 0x24dc88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC88u;
    {
        const bool branch_taken_0x24dc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC88u;
        // 0x24dc8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc88) {
            ctx->pc = 0x24DCA0u;
            goto label_24dca0;
        }
    }
    ctx->pc = 0x24DC90u;
    // 0x24dc90: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24DC90u;
    {
        const bool branch_taken_0x24dc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC90u;
        // 0x24dc94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc90) {
            ctx->pc = 0x24DCBCu;
            goto label_24dcbc;
        }
    }
    ctx->pc = 0x24DC98u;
    // 0x24dc98: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24DC98u;
    {
        const bool branch_taken_0x24dc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dc98) {
            ctx->pc = 0x24DC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC98u;
            // 0x24dc9c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DCCCu;
            goto label_24dccc;
        }
    }
    ctx->pc = 0x24DCA0u;
label_24dca0:
    // 0x24dca0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dca4: 0x8c4326e0  lw          $v1, 0x26E0($v0)
    ctx->pc = 0x24dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9952)));
    // 0x24dca8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x24DCA8u;
    {
        const bool branch_taken_0x24dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCA8u;
        // 0x24dcac: 0x8c4426e4  lw          $a0, 0x26E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dca8) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DCB0u;
label_24dcb0:
    // 0x24dcb0: 0x8c4326e8  lw          $v1, 0x26E8($v0)
    ctx->pc = 0x24dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9960)));
    // 0x24dcb4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x24DCB4u;
    {
        const bool branch_taken_0x24dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCB4u;
        // 0x24dcb8: 0x8c4426ec  lw          $a0, 0x26EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcb4) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DCBCu;
label_24dcbc:
    // 0x24dcbc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dcc0: 0x8c432bc8  lw          $v1, 0x2BC8($v0)
    ctx->pc = 0x24dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11208)));
    // 0x24dcc4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x24DCC4u;
    {
        const bool branch_taken_0x24dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCC4u;
        // 0x24dcc8: 0x8c442bcc  lw          $a0, 0x2BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcc4) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DCCCu;
label_24dccc:
    // 0x24dccc: 0x8c432bd0  lw          $v1, 0x2BD0($v0)
    ctx->pc = 0x24dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11216)));
    // 0x24dcd0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x24DCD0u;
    {
        const bool branch_taken_0x24dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCD0u;
        // 0x24dcd4: 0x8c442bd4  lw          $a0, 0x2BD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcd0) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DCD8u;
label_24dcd8:
    // 0x24dcd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DCD8u;
    SET_GPR_U32(ctx, 31, 0x24DCE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DCD8u, 0x24DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCE0u;
label_24dce0:
    // 0x24dce0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24dce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dce4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DCE4u;
    {
        const bool branch_taken_0x24dce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE4u;
        // 0x24dce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dce4) {
            ctx->pc = 0x24DCF4u;
            goto label_24dcf4;
        }
    }
    ctx->pc = 0x24DCECu;
    // 0x24dcec: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DCECu;
    {
        const bool branch_taken_0x24dcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dcec) {
            ctx->pc = 0x24DCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DCECu;
            // 0x24dcf0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DD04u;
            goto label_24dd04;
        }
    }
    ctx->pc = 0x24DCF4u;
label_24dcf4:
    // 0x24dcf4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dcf8: 0x8c430784  lw          $v1, 0x784($v0)
    ctx->pc = 0x24dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1924)));
    // 0x24dcfc: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x24DCFCu;
    {
        const bool branch_taken_0x24dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCFCu;
        // 0x24dd00: 0x8c440788  lw          $a0, 0x788($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcfc) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD04u;
label_24dd04:
    // 0x24dd04: 0x8c43078c  lw          $v1, 0x78C($v0)
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
    // 0x24dd08: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x24DD08u;
    {
        const bool branch_taken_0x24dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD08u;
        // 0x24dd0c: 0x8c440790  lw          $a0, 0x790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd08) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD10u;
label_24dd10:
    // 0x24dd10: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DD10u;
    SET_GPR_U32(ctx, 31, 0x24DD18u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DD10u, 0x24DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD18u;
label_24dd18:
    // 0x24dd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dd1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DD1Cu;
    {
        const bool branch_taken_0x24dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD1Cu;
        // 0x24dd20: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd1c) {
            ctx->pc = 0x24DD30u;
            goto label_24dd30;
        }
    }
    ctx->pc = 0x24DD24u;
    // 0x24dd24: 0x8c431248  lw          $v1, 0x1248($v0)
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
    // 0x24dd28: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x24DD28u;
    {
        const bool branch_taken_0x24dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD28u;
        // 0x24dd2c: 0x8c44124c  lw          $a0, 0x124C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd28) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD30u;
label_24dd30:
    // 0x24dd30: 0x8c431250  lw          $v1, 0x1250($v0)
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x24dd34: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x24DD34u;
    {
        const bool branch_taken_0x24dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD34u;
        // 0x24dd38: 0x8c441254  lw          $a0, 0x1254($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd34) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD3Cu;
label_24dd3c:
    // 0x24dd3c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DD3Cu;
    SET_GPR_U32(ctx, 31, 0x24DD44u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DD3Cu, 0x24DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD44u;
label_24dd44:
    // 0x24dd44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dd48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DD48u;
    {
        const bool branch_taken_0x24dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD48u;
        // 0x24dd4c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd48) {
            ctx->pc = 0x24DD5Cu;
            goto label_24dd5c;
        }
    }
    ctx->pc = 0x24DD50u;
    // 0x24dd50: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x24dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x24dd54: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x24DD54u;
    {
        const bool branch_taken_0x24dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD54u;
        // 0x24dd58: 0x8c4409d4  lw          $a0, 0x9D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd54) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD5Cu;
label_24dd5c:
    // 0x24dd5c: 0x8c4309d8  lw          $v1, 0x9D8($v0)
    ctx->pc = 0x24dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x24dd60: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x24DD60u;
    {
        const bool branch_taken_0x24dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD60u;
        // 0x24dd64: 0x8c4409dc  lw          $a0, 0x9DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd60) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DD68u;
label_24dd68:
    // 0x24dd68: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DD68u;
    SET_GPR_U32(ctx, 31, 0x24DD70u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DD68u, 0x24DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD70u;
label_24dd70:
    // 0x24dd70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dd74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DD74u;
    {
        const bool branch_taken_0x24dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD74u;
        // 0x24dd78: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd74) {
            ctx->pc = 0x24DD88u;
            goto label_24dd88;
        }
    }
    ctx->pc = 0x24DD7Cu;
    // 0x24dd7c: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x24dd80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24DD80u;
    {
        const bool branch_taken_0x24dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD80u;
        // 0x24dd84: 0x8c4409d4  lw          $a0, 0x9D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd80) {
            ctx->pc = 0x24DD90u;
            goto label_24dd90;
        }
    }
    ctx->pc = 0x24DD88u;
label_24dd88:
    // 0x24dd88: 0x8c4309d8  lw          $v1, 0x9D8($v0)
    ctx->pc = 0x24dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x24dd8c: 0x8c4409dc  lw          $a0, 0x9DC($v0)
    ctx->pc = 0x24dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2524)));
label_24dd90:
    // 0x24dd90: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24dd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dd94: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24dd98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd9c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24DD9Cu;
    SET_GPR_U32(ctx, 31, 0x24DDA4u);
    ctx->pc = 0x24DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD9Cu;
    // 0x24dda0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24DD9Cu, 0x24DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDA4u;
label_24dda4:
    // 0x24dda4: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24dda8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x24dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x24ddac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ddb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ddb4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24ddb4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24ddb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24ddb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ddbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24ddc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24ddc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddc8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24DDC8u;
    SET_GPR_U32(ctx, 31, 0x24DDD0u);
    ctx->pc = 0x24DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDC8u;
    // 0x24ddcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24DDC8u, 0x24DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDD0u;
label_24ddd0:
    // 0x24ddd0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x24DDD0u;
    {
        const bool branch_taken_0x24ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDD0u;
        // 0x24ddd4: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddd0) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DDD8u;
label_24ddd8:
    // 0x24ddd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DDD8u;
    SET_GPR_U32(ctx, 31, 0x24DDE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DDD8u, 0x24DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDE0u;
label_24dde0:
    // 0x24dde0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dde4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DDE4u;
    {
        const bool branch_taken_0x24dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDE4u;
        // 0x24dde8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dde4) {
            ctx->pc = 0x24DDF8u;
            goto label_24ddf8;
        }
    }
    ctx->pc = 0x24DDECu;
    // 0x24ddec: 0x8c433134  lw          $v1, 0x3134($v0)
    ctx->pc = 0x24ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12596)));
    // 0x24ddf0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x24DDF0u;
    {
        const bool branch_taken_0x24ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF0u;
        // 0x24ddf4: 0x8c443138  lw          $a0, 0x3138($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf0) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DDF8u;
label_24ddf8:
    // 0x24ddf8: 0x8c43313c  lw          $v1, 0x313C($v0)
    ctx->pc = 0x24ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12604)));
    // 0x24ddfc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x24DDFCu;
    {
        const bool branch_taken_0x24ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDFCu;
        // 0x24de00: 0x8c443140  lw          $a0, 0x3140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddfc) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DE04u;
label_24de04:
    // 0x24de04: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24de08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24de08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24de0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24de10: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24DE10u;
    {
        const bool branch_taken_0x24de10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24de10) {
            ctx->pc = 0x24DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DE10u;
            // 0x24de14: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DE50u;
            goto label_24de50;
        }
    }
    ctx->pc = 0x24DE18u;
    // 0x24de18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DE18u;
    SET_GPR_U32(ctx, 31, 0x24DE20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DE18u, 0x24DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE20u;
label_24de20:
    // 0x24de20: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24de24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DE24u;
    {
        const bool branch_taken_0x24de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE24u;
        // 0x24de28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de24) {
            ctx->pc = 0x24DE34u;
            goto label_24de34;
        }
    }
    ctx->pc = 0x24DE2Cu;
    // 0x24de2c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DE2Cu;
    {
        const bool branch_taken_0x24de2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24de2c) {
            ctx->pc = 0x24DE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DE2Cu;
            // 0x24de30: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DE44u;
            goto label_24de44;
        }
    }
    ctx->pc = 0x24DE34u;
label_24de34:
    // 0x24de34: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24de34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24de38: 0x8c433398  lw          $v1, 0x3398($v0)
    ctx->pc = 0x24de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13208)));
    // 0x24de3c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x24DE3Cu;
    {
        const bool branch_taken_0x24de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0x8c44339c  lw          $a0, 0x339C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de3c) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DE44u;
label_24de44:
    // 0x24de44: 0x8c4333a0  lw          $v1, 0x33A0($v0)
    ctx->pc = 0x24de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13216)));
    // 0x24de48: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x24DE48u;
    {
        const bool branch_taken_0x24de48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE48u;
        // 0x24de4c: 0x8c4433a4  lw          $a0, 0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de48) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DE50u;
label_24de50:
    // 0x24de50: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x24de50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x24de54: 0x8c433318  lw          $v1, 0x3318($v0)
    ctx->pc = 0x24de54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13080)));
    // 0x24de58: 0x8c44331c  lw          $a0, 0x331C($v0)
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13084)));
    // 0x24de5c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24de5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24de60: 0x10e00061  beqz        $a3, . + 4 + (0x61 << 2)
    ctx->pc = 0x24DE60u;
    {
        const bool branch_taken_0x24de60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE60u;
        // 0x24de64: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de60) {
            ctx->pc = 0x24DFE8u;
            goto label_24dfe8;
        }
    }
    ctx->pc = 0x24DE68u;
    // 0x24de68: 0xc09f6c2  jal         func_27DB08
    ctx->pc = 0x24DE68u;
    SET_GPR_U32(ctx, 31, 0x24DE70u);
    ctx->pc = 0x24DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE68u;
    // 0x24de6c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB08u, 0x24DE68u, 0x24DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE70u;
label_24de70:
    // 0x24de70: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x24DE70u;
    {
        const bool branch_taken_0x24de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE70u;
        // 0x24de74: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de70) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DE78u;
label_24de78:
    // 0x24de78: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24de7c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x24de80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24de84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24DE84u;
    {
        const bool branch_taken_0x24de84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24de84) {
            ctx->pc = 0x24DEC4u;
            goto label_24dec4;
        }
    }
    ctx->pc = 0x24DE8Cu;
    // 0x24de8c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DE8Cu;
    SET_GPR_U32(ctx, 31, 0x24DE94u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DE8Cu, 0x24DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE94u;
label_24de94:
    // 0x24de94: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24de98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DE98u;
    {
        const bool branch_taken_0x24de98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE98u;
        // 0x24de9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de98) {
            ctx->pc = 0x24DEA8u;
            goto label_24dea8;
        }
    }
    ctx->pc = 0x24DEA0u;
    // 0x24dea0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DEA0u;
    {
        const bool branch_taken_0x24dea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dea0) {
            ctx->pc = 0x24DEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DEA0u;
            // 0x24dea4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DEB8u;
            goto label_24deb8;
        }
    }
    ctx->pc = 0x24DEA8u;
label_24dea8:
    // 0x24dea8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24deac: 0x8c433948  lw          $v1, 0x3948($v0)
    ctx->pc = 0x24deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14664)));
    // 0x24deb0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24DEB0u;
    {
        const bool branch_taken_0x24deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEB0u;
        // 0x24deb4: 0x8c44394c  lw          $a0, 0x394C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24deb0) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DEB8u;
label_24deb8:
    // 0x24deb8: 0x8c433950  lw          $v1, 0x3950($v0)
    ctx->pc = 0x24deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14672)));
    // 0x24debc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x24DEBCu;
    {
        const bool branch_taken_0x24debc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEBCu;
        // 0x24dec0: 0x8c443954  lw          $a0, 0x3954($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24debc) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DEC4u;
label_24dec4:
    // 0x24dec4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24DEC4u;
    SET_GPR_U32(ctx, 31, 0x24DECCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24DEC4u, 0x24DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DECCu;
label_24decc:
    // 0x24decc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24deccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ded0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ded4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ded4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ded8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24DED8u;
    {
        const bool branch_taken_0x24ded8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ded8) {
            ctx->pc = 0x24DEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DED8u;
            // 0x24dedc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DEE0u;
            goto label_24dee0;
        }
    }
    ctx->pc = 0x24DEE0u;
label_24dee0:
    // 0x24dee0: 0x2810  mfhi        $a1
    ctx->pc = 0x24dee0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24dee4: 0x50a40011  beql        $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DEE4u;
    {
        const bool branch_taken_0x24dee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24dee4) {
            ctx->pc = 0x24DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DEE4u;
            // 0x24dee8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF2Cu;
            goto label_24df2c;
        }
    }
    ctx->pc = 0x24DEECu;
    // 0x24deec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DEECu;
    {
        const bool branch_taken_0x24deec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEECu;
        // 0x24def0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24deec) {
            ctx->pc = 0x24DEFCu;
            goto label_24defc;
        }
    }
    ctx->pc = 0x24DEF4u;
    // 0x24def4: 0x50a20018  beql        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24DEF4u;
    {
        const bool branch_taken_0x24def4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24def4) {
            ctx->pc = 0x24DEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DEF4u;
            // 0x24def8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF58u;
            goto label_24df58;
        }
    }
    ctx->pc = 0x24DEFCu;
label_24defc:
    // 0x24defc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24df00: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24df00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24df04: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x24df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x24df08: 0x8c44381c  lw          $a0, 0x381C($v0)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
    // 0x24df0c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24df0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24df10: 0x10e00035  beqz        $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x24DF10u;
    {
        const bool branch_taken_0x24df10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF10u;
        // 0x24df14: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df10) {
            ctx->pc = 0x24DFE8u;
            goto label_24dfe8;
        }
    }
    ctx->pc = 0x24DF18u;
    // 0x24df18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df1c: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24DF1Cu;
    SET_GPR_U32(ctx, 31, 0x24DF24u);
    ctx->pc = 0x24DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF1Cu;
    // 0x24df20: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24DF1Cu, 0x24DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF24u;
label_24df24:
    // 0x24df24: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24DF24u;
    {
        const bool branch_taken_0x24df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF24u;
        // 0x24df28: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df24) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DF2Cu;
label_24df2c:
    // 0x24df2c: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24df30: 0x8c433820  lw          $v1, 0x3820($v0)
    ctx->pc = 0x24df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14368)));
    // 0x24df34: 0x8c443824  lw          $a0, 0x3824($v0)
    ctx->pc = 0x24df34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14372)));
    // 0x24df38: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24df38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24df3c: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x24DF3Cu;
    {
        const bool branch_taken_0x24df3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF3Cu;
        // 0x24df40: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df3c) {
            ctx->pc = 0x24DFE8u;
            goto label_24dfe8;
        }
    }
    ctx->pc = 0x24DF44u;
    // 0x24df44: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24df44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df48: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24DF48u;
    SET_GPR_U32(ctx, 31, 0x24DF50u);
    ctx->pc = 0x24DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF48u;
    // 0x24df4c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24DF48u, 0x24DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF50u;
label_24df50:
    // 0x24df50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24DF50u;
    {
        const bool branch_taken_0x24df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF50u;
        // 0x24df54: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df50) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DF58u;
label_24df58:
    // 0x24df58: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24df5c: 0x8c433828  lw          $v1, 0x3828($v0)
    ctx->pc = 0x24df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14376)));
    // 0x24df60: 0x8c44382c  lw          $a0, 0x382C($v0)
    ctx->pc = 0x24df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14380)));
    // 0x24df64: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24df64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24df68: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x24DF68u;
    {
        const bool branch_taken_0x24df68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF68u;
        // 0x24df6c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df68) {
            ctx->pc = 0x24DFE8u;
            goto label_24dfe8;
        }
    }
    ctx->pc = 0x24DF70u;
    // 0x24df70: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df74: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24DF74u;
    SET_GPR_U32(ctx, 31, 0x24DF7Cu);
    ctx->pc = 0x24DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF74u;
    // 0x24df78: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24DF74u, 0x24DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF7Cu;
label_24df7c:
    // 0x24df7c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24DF7Cu;
    {
        const bool branch_taken_0x24df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF7Cu;
        // 0x24df80: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df7c) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DF84u;
label_24df84:
    // 0x24df84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24df88: 0x8c431690  lw          $v1, 0x1690($v0)
    ctx->pc = 0x24df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5776)));
    // 0x24df8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24DF8Cu;
    {
        const bool branch_taken_0x24df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF8Cu;
        // 0x24df90: 0x8c441694  lw          $a0, 0x1694($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df8c) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DF94u;
label_24df94:
    // 0x24df94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24df98: 0x8c433a94  lw          $v1, 0x3A94($v0)
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14996)));
    // 0x24df9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24DF9Cu;
    {
        const bool branch_taken_0x24df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF9Cu;
        // 0x24dfa0: 0x8c443a98  lw          $a0, 0x3A98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df9c) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DFA4u;
label_24dfa4:
    // 0x24dfa4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dfa8: 0x8c431690  lw          $v1, 0x1690($v0)
    ctx->pc = 0x24dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5776)));
    // 0x24dfac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24DFACu;
    {
        const bool branch_taken_0x24dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFACu;
        // 0x24dfb0: 0x8c441694  lw          $a0, 0x1694($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfac) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DFB4u;
label_24dfb4:
    // 0x24dfb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dfb8: 0x8c431d08  lw          $v1, 0x1D08($v0)
    ctx->pc = 0x24dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
    // 0x24dfbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24DFBCu;
    {
        const bool branch_taken_0x24dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFBCu;
        // 0x24dfc0: 0x8c441d0c  lw          $a0, 0x1D0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfbc) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DFC4u;
label_24dfc4:
    // 0x24dfc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dfc8: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x24dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x24dfcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24DFCCu;
    {
        const bool branch_taken_0x24dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFCCu;
        // 0x24dfd0: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfcc) {
            ctx->pc = 0x24DFE0u;
            goto label_24dfe0;
        }
    }
    ctx->pc = 0x24DFD4u;
label_24dfd4:
    // 0x24dfd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dfd8: 0x8c432364  lw          $v1, 0x2364($v0)
    ctx->pc = 0x24dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9060)));
    // 0x24dfdc: 0x8c442368  lw          $a0, 0x2368($v0)
    ctx->pc = 0x24dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
label_24dfe0:
    // 0x24dfe0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24dfe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dfe4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24dfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24dfe8:
    // 0x24dfe8: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x24dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_24dfec:
    // 0x24dfec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24DFECu;
    {
        const bool branch_taken_0x24dfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dfec) {
            ctx->pc = 0x24E008u;
            goto label_24e008;
        }
    }
    ctx->pc = 0x24DFF4u;
    // 0x24dff4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24dff8: 0x8c430784  lw          $v1, 0x784($v0)
    ctx->pc = 0x24dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1924)));
    // 0x24dffc: 0x8c440788  lw          $a0, 0x788($v0)
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x24e000: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24e000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e004: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24e004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24e008:
    // 0x24e008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24e008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24e00c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x24e010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e014: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e018: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x24e018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e01c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e024: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x24e024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x24e028: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24E028u;
    SET_GPR_U32(ctx, 31, 0x24E030u);
    ctx->pc = 0x24E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E028u;
    // 0x24e02c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24E028u, 0x24E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E030u;
label_24e030:
    // 0x24e030: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24E030u;
    SET_GPR_U32(ctx, 31, 0x24E038u);
    ctx->pc = 0x24E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E030u;
    // 0x24e034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24E030u, 0x24E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E038u;
label_24e038:
    // 0x24e038: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24e03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e040: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24e040u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24e044: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24e044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24e048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e04c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e050: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24e050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e054: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24e054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e058: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24E058u;
    SET_GPR_U32(ctx, 31, 0x24E060u);
    ctx->pc = 0x24E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E058u;
    // 0x24e05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24E058u, 0x24E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E060u;
label_24e060:
    // 0x24e060: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x24E060u;
    SET_GPR_U32(ctx, 31, 0x24E068u);
    ctx->pc = 0x24E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E060u;
    // 0x24e064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x24E060u, 0x24E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E068u;
label_24e068:
    // 0x24e068: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24e068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24e06c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24E06Cu;
    SET_GPR_U32(ctx, 31, 0x24E074u);
    ctx->pc = 0x24E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E06Cu;
    // 0x24e070: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24E06Cu, 0x24E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E074u;
label_24e074:
    // 0x24e074: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e078: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24e078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24e07c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E07Cu;
    {
        const bool branch_taken_0x24e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E07Cu;
        // 0x24e080: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e07c) {
            ctx->pc = 0x24E09Cu;
            goto label_24e09c;
        }
    }
    ctx->pc = 0x24E084u;
    // 0x24e084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e088: 0x2442e2b0  addiu       $v0, $v0, -0x1D50
    ctx->pc = 0x24e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959792));
    // 0x24e08c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e090: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e094: 0x800008  jr          $a0
    ctx->pc = 0x24E094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E09Cu: goto label_24e09c;
            case 0x24E0C0u: goto label_24e0c0;
            case 0x24E0E4u: goto label_24e0e4;
            case 0x24E108u: goto label_24e108;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E094u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24E09Cu;
label_24e09c:
    // 0x24e09c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E09Cu;
    SET_GPR_U32(ctx, 31, 0x24E0A4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E09Cu, 0x24E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0A4u;
label_24e0a4:
    // 0x24e0a4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24e0a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e0a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e0ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E0ACu;
    {
        const bool branch_taken_0x24e0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e0ac) {
            ctx->pc = 0x24E0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0ACu;
            // 0x24e0b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E0B4u;
            goto label_24e0b4;
        }
    }
    ctx->pc = 0x24E0B4u;
label_24e0b4:
    // 0x24e0b4: 0x2010  mfhi        $a0
    ctx->pc = 0x24e0b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e0b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24E0B8u;
    {
        const bool branch_taken_0x24e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0B8u;
        // 0x24e0bc: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0b8) {
            ctx->pc = 0x24E128u;
            goto label_24e128;
        }
    }
    ctx->pc = 0x24E0C0u;
label_24e0c0:
    // 0x24e0c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E0C0u;
    SET_GPR_U32(ctx, 31, 0x24E0C8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E0C0u, 0x24E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0C8u;
label_24e0c8:
    // 0x24e0c8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24e0cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e0ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e0d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E0D0u;
    {
        const bool branch_taken_0x24e0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e0d0) {
            ctx->pc = 0x24E0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0D0u;
            // 0x24e0d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E0D8u;
            goto label_24e0d8;
        }
    }
    ctx->pc = 0x24E0D8u;
label_24e0d8:
    // 0x24e0d8: 0x2010  mfhi        $a0
    ctx->pc = 0x24e0d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e0dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24E0DCu;
    {
        const bool branch_taken_0x24e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0DCu;
        // 0x24e0e0: 0x2484002d  addiu       $a0, $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0dc) {
            ctx->pc = 0x24E128u;
            goto label_24e128;
        }
    }
    ctx->pc = 0x24E0E4u;
label_24e0e4:
    // 0x24e0e4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E0E4u;
    SET_GPR_U32(ctx, 31, 0x24E0ECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E0E4u, 0x24E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0ECu;
label_24e0ec:
    // 0x24e0ec: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24e0f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e0f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e0f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E0F4u;
    {
        const bool branch_taken_0x24e0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e0f4) {
            ctx->pc = 0x24E0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0F4u;
            // 0x24e0f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E0FCu;
            goto label_24e0fc;
        }
    }
    ctx->pc = 0x24E0FCu;
label_24e0fc:
    // 0x24e0fc: 0x2010  mfhi        $a0
    ctx->pc = 0x24e0fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24E100u;
    {
        const bool branch_taken_0x24e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E100u;
        // 0x24e104: 0x2484001e  addiu       $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e100) {
            ctx->pc = 0x24E128u;
            goto label_24e128;
        }
    }
    ctx->pc = 0x24E108u;
label_24e108:
    // 0x24e108: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E108u;
    SET_GPR_U32(ctx, 31, 0x24E110u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E108u, 0x24E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E110u;
label_24e110:
    // 0x24e110: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24e114: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e114u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e118: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E118u;
    {
        const bool branch_taken_0x24e118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e118) {
            ctx->pc = 0x24E11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E118u;
            // 0x24e11c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E120u;
            goto label_24e120;
        }
    }
    ctx->pc = 0x24E120u;
label_24e120:
    // 0x24e120: 0x2010  mfhi        $a0
    ctx->pc = 0x24e120u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e124: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x24e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_24e128:
    // 0x24e128: 0xae4405f4  sw          $a0, 0x5F4($s2)
    ctx->pc = 0x24e128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 4));
    // 0x24e12c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24e12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24e130: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E130u;
    {
        const bool branch_taken_0x24e130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E130u;
        // 0x24e134: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e130) {
            ctx->pc = 0x24E13Cu;
            goto label_24e13c;
        }
    }
    ctx->pc = 0x24E138u;
    // 0x24e138: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x24e138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
label_24e13c:
    // 0x24e13c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E13Cu;
    SET_GPR_U32(ctx, 31, 0x24E144u);
    ctx->pc = 0x24E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E13Cu;
    // 0x24e140: 0xa6400568  sh          $zero, 0x568($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E13Cu, 0x24E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E144u;
label_24e144:
    // 0x24e144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e148: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e148u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e14c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E14Cu;
    {
        const bool branch_taken_0x24e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e14c) {
            ctx->pc = 0x24E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E14Cu;
            // 0x24e150: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E154u;
            goto label_24e154;
        }
    }
    ctx->pc = 0x24E154u;
label_24e154:
    // 0x24e154: 0x2010  mfhi        $a0
    ctx->pc = 0x24e154u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e158: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E158u;
    {
        const bool branch_taken_0x24e158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e158) {
            ctx->pc = 0x24E188u;
            goto label_24e188;
        }
    }
    ctx->pc = 0x24E160u;
    // 0x24e160: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24E160u;
    SET_GPR_U32(ctx, 31, 0x24E168u);
    ctx->pc = 0x24E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E160u;
    // 0x24e164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24E160u, 0x24E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E168u;
label_24e168:
    // 0x24e168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E168u;
    {
        const bool branch_taken_0x24e168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E168u;
        // 0x24e16c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e168) {
            ctx->pc = 0x24E188u;
            goto label_24e188;
        }
    }
    ctx->pc = 0x24E170u;
    // 0x24e170: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e174: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E174u;
    {
        const bool branch_taken_0x24e174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E174u;
        // 0x24e178: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e174) {
            ctx->pc = 0x24E188u;
            goto label_24e188;
        }
    }
    ctx->pc = 0x24E17Cu;
    // 0x24e17c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e180: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x24e180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
    // 0x24e184: 0xa6430568  sh          $v1, 0x568($s2)
    ctx->pc = 0x24e184u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 3));
label_24e188:
    // 0x24e188: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24E188u;
    SET_GPR_U32(ctx, 31, 0x24E190u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24E188u, 0x24E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E190u;
label_24e190:
    // 0x24e190: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x24e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24e194: 0x264305d0  addiu       $v1, $s2, 0x5D0
    ctx->pc = 0x24e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x24e198: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E198u;
    {
        const bool branch_taken_0x24e198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e198) {
            ctx->pc = 0x24E19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E198u;
            // 0x24e19c: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E1BCu;
            goto label_24e1bc;
        }
    }
    ctx->pc = 0x24E1A0u;
    // 0x24e1a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1a4: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x24e1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x24e1a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e1ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24e1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24e1b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24e1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24e1b8: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x24e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_24e1bc:
    // 0x24e1bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24E1BCu;
    {
        const bool branch_taken_0x24e1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1BCu;
        // 0x24e1c0: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1bc) {
            ctx->pc = 0x24E1F8u;
            goto label_24e1f8;
        }
    }
    ctx->pc = 0x24E1C4u;
    // 0x24e1c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24e1c8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E1C8u;
    {
        const bool branch_taken_0x24e1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1C8u;
        // 0x24e1cc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1c8) {
            ctx->pc = 0x24E1F8u;
            goto label_24e1f8;
        }
    }
    ctx->pc = 0x24E1D0u;
    // 0x24e1d0: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x24e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x24e1d4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x24e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x24e1d8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E1D8u;
    {
        const bool branch_taken_0x24e1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e1d8) {
            ctx->pc = 0x24E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E1D8u;
            // 0x24e1dc: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E1FCu;
            goto label_24e1fc;
        }
    }
    ctx->pc = 0x24E1E0u;
    // 0x24e1e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1e4: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x24e1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x24e1e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e1ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24e1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24e1f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24e1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24e1f8:
    // 0x24e1f8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24e1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24e1fc:
    // 0x24e1fc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x24e1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x24e200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e204: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24e204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24e208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e20c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e210: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x24e210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x24e214: 0xe6410604  swc1        $f1, 0x604($s2)
    ctx->pc = 0x24e214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x24e218: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24e218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24e21c:
    // 0x24e21c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e220: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24e220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24e224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E224u;
    {
        const bool branch_taken_0x24e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E224u;
        // 0x24e228: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e224) {
            ctx->pc = 0x24E234u;
            goto label_24e234;
        }
    }
    ctx->pc = 0x24E22Cu;
    // 0x24e22c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E22Cu;
    {
        const bool branch_taken_0x24e22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e22c) {
            ctx->pc = 0x24E264u;
            goto label_24e264;
        }
    }
    ctx->pc = 0x24E234u;
label_24e234:
    // 0x24e234: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x24e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x24e238: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E238u;
    {
        const bool branch_taken_0x24e238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E238u;
        // 0x24e23c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e238) {
            ctx->pc = 0x24E264u;
            goto label_24e264;
        }
    }
    ctx->pc = 0x24E240u;
    // 0x24e240: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x24e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24e244: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24e244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x24e248: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24e24c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e254: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x24e254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x24e258: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x24e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x24e25c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24E25Cu;
    SET_GPR_U32(ctx, 31, 0x24E264u);
    ctx->pc = 0x24E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E25Cu;
    // 0x24e260: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24E25Cu, 0x24E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E264u;
label_24e264:
    // 0x24e264: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24E264u;
    SET_GPR_U32(ctx, 31, 0x24E26Cu);
    ctx->pc = 0x24E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E264u;
    // 0x24e268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24E264u, 0x24E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E26Cu;
label_24e26c:
    // 0x24e26c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24E26Cu;
    {
        const bool branch_taken_0x24e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E26Cu;
        // 0x24e270: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e26c) {
            ctx->pc = 0x24E2B8u;
            goto label_24e2b8;
        }
    }
    ctx->pc = 0x24E274u;
    // 0x24e274: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24e278: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e27c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E27Cu;
    {
        const bool branch_taken_0x24e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E27Cu;
        // 0x24e280: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e27c) {
            ctx->pc = 0x24E290u;
            goto label_24e290;
        }
    }
    ctx->pc = 0x24E284u;
    // 0x24e284: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e288: 0x1062023e  beq         $v1, $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x24E288u;
    {
        const bool branch_taken_0x24e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e288) {
            ctx->pc = 0x24EB84u;
            goto label_24eb84;
        }
    }
    ctx->pc = 0x24E290u;
label_24e290:
    // 0x24e290: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24E290u;
    SET_GPR_U32(ctx, 31, 0x24E298u);
    ctx->pc = 0x24E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E290u;
    // 0x24e294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24E290u, 0x24E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E298u;
label_24e298:
    // 0x24e298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E298u;
    {
        const bool branch_taken_0x24e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e298) {
            ctx->pc = 0x24E2B0u;
            goto label_24e2b0;
        }
    }
    ctx->pc = 0x24E2A0u;
    // 0x24e2a0: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24E2A0u;
    SET_GPR_U32(ctx, 31, 0x24E2A8u);
    ctx->pc = 0x24E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2A0u;
    // 0x24e2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24E2A0u, 0x24E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2A8u;
label_24e2a8:
    // 0x24e2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E2A8u;
    {
        const bool branch_taken_0x24e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A8u;
        // 0x24e2ac: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2a8) {
            ctx->pc = 0x24E2BCu;
            goto label_24e2bc;
        }
    }
    ctx->pc = 0x24E2B0u;
label_24e2b0:
    // 0x24e2b0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24E2B0u;
    SET_GPR_U32(ctx, 31, 0x24E2B8u);
    ctx->pc = 0x24E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2B0u;
    // 0x24e2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24E2B0u, 0x24E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2B8u;
label_24e2b8:
    // 0x24e2b8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24e2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_24e2bc:
    // 0x24e2bc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x24E2BCu;
    {
        const bool branch_taken_0x24e2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e2bc) {
            ctx->pc = 0x24E2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2BCu;
            // 0x24e2c0: 0x8e4205f4  lw          $v0, 0x5F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E330u;
            goto label_24e330;
        }
    }
    ctx->pc = 0x24E2C4u;
    // 0x24e2c4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24E2C4u;
    SET_GPR_U32(ctx, 31, 0x24E2CCu);
    ctx->pc = 0x24E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2C4u;
    // 0x24e2c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24E2C4u, 0x24E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2CCu;
label_24e2cc:
    // 0x24e2cc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24E2CCu;
    {
        const bool branch_taken_0x24e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2cc) {
            ctx->pc = 0x24E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2CCu;
            // 0x24e2d0: 0x8e4205f4  lw          $v0, 0x5F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E330u;
            goto label_24e330;
        }
    }
    ctx->pc = 0x24E2D4u;
    // 0x24e2d4: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x24e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e2d8: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x24e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e2dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24e2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e2e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24e2e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24e2e4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24e2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e2e8: 0x0  nop
    ctx->pc = 0x24e2e8u;
    // NOP
    // 0x24e2ec: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24E2ECu;
    {
        const bool branch_taken_0x24e2ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ECu;
        // 0x24e2f0: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2ec) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E2F4u;
    // 0x24e2f4: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e2f8: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x24e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x24e2fc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E2FCu;
    {
        const bool branch_taken_0x24e2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e2fc) {
            ctx->pc = 0x24E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2FCu;
            // 0x24e300: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E314u;
            goto label_24e314;
        }
    }
    ctx->pc = 0x24E304u;
    // 0x24e304: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24E304u;
    SET_GPR_U32(ctx, 31, 0x24E30Cu);
    ctx->pc = 0x24E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E304u;
    // 0x24e308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24E304u, 0x24E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E30Cu;
label_24e30c:
    // 0x24e30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24E30Cu;
    {
        const bool branch_taken_0x24e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E30Cu;
        // 0x24e310: 0x8e4205f4  lw          $v0, 0x5F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e30c) {
            ctx->pc = 0x24E330u;
            goto label_24e330;
        }
    }
    ctx->pc = 0x24E314u;
label_24e314:
    // 0x24e314: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24e318: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e31c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E31Cu;
    {
        const bool branch_taken_0x24e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e31c) {
            ctx->pc = 0x24E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E31Cu;
            // 0x24e320: 0x8e4205f4  lw          $v0, 0x5F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E330u;
            goto label_24e330;
        }
    }
    ctx->pc = 0x24E324u;
    // 0x24e324: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24E324u;
    SET_GPR_U32(ctx, 31, 0x24E32Cu);
    ctx->pc = 0x24E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E324u;
    // 0x24e328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24E324u, 0x24E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E32Cu;
label_24e32c:
    // 0x24e32c: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x24e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
label_24e330:
    // 0x24e330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E330u;
    {
        const bool branch_taken_0x24e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E330u;
        // 0x24e334: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e330) {
            ctx->pc = 0x24E340u;
            goto label_24e340;
        }
    }
    ctx->pc = 0x24E338u;
    // 0x24e338: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x24E338u;
    {
        const bool branch_taken_0x24e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E338u;
        // 0x24e33c: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e338) {
            ctx->pc = 0x24E578u;
            goto label_24e578;
        }
    }
    ctx->pc = 0x24E340u;
label_24e340:
    // 0x24e340: 0x924217bb  lbu         $v0, 0x17BB($s2)
    ctx->pc = 0x24e340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6075)));
    // 0x24e344: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x24E344u;
    {
        const bool branch_taken_0x24e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e344) {
            ctx->pc = 0x24E498u;
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E34Cu;
    // 0x24e34c: 0xc6411740  lwc1        $f1, 0x1740($s2)
    ctx->pc = 0x24e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e354: 0x0  nop
    ctx->pc = 0x24e354u;
    // NOP
    // 0x24e358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24e358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e35c: 0x0  nop
    ctx->pc = 0x24e35cu;
    // NOP
    // 0x24e360: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x24E360u;
    {
        const bool branch_taken_0x24e360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e360) {
            ctx->pc = 0x24E498u;
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E368u;
    // 0x24e368: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x24e36c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x24E36Cu;
    {
        const bool branch_taken_0x24e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e36c) {
            ctx->pc = 0x24E498u;
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E374u;
    // 0x24e374: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e378: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x24e378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x24e37c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E384u;
    // 0x24e384: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24E384u;
    {
        const bool branch_taken_0x24e384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E384u;
        // 0x24e388: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e384) {
            ctx->pc = 0x24E3F8u;
            goto label_24e3f8;
        }
    }
    ctx->pc = 0x24E38Cu;
    // 0x24e38c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E38Cu;
    {
        const bool branch_taken_0x24e38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e38c) {
            ctx->pc = 0x24E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E38Cu;
            // 0x24e390: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3B0u;
            goto label_24e3b0;
        }
    }
    ctx->pc = 0x24E394u;
    // 0x24e394: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x24E394u;
    {
        const bool branch_taken_0x24e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e394) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E39Cu;
label_24e39c:
    // 0x24e39c: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x24e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x24e3a0: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24E3A0u;
    {
        const bool branch_taken_0x24e3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e3a0) {
            ctx->pc = 0x24E3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E3A0u;
            // 0x24e3a4: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E3A8u;
    // 0x24e3a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24E3A8u;
    {
        const bool branch_taken_0x24e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e3a8) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E3B0u;
label_24e3b0:
    // 0x24e3b0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24e3b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e3b8: 0x0  nop
    ctx->pc = 0x24e3b8u;
    // NOP
    // 0x24e3bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e3c0: 0x0  nop
    ctx->pc = 0x24e3c0u;
    // NOP
    // 0x24e3c4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x24E3C4u;
    {
        const bool branch_taken_0x24e3c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C4u;
        // 0x24e3c8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3c4) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E3CCu;
    // 0x24e3cc: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e3d0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x24E3D0u;
    {
        const bool branch_taken_0x24e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e3d0) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E3D8u;
    // 0x24e3d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E3D8u;
    SET_GPR_U32(ctx, 31, 0x24E3E0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E3D8u, 0x24E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3E0u;
label_24e3e0:
    // 0x24e3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e3e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24E3E4u;
    {
        const bool branch_taken_0x24e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3E4u;
        // 0x24e3e8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3e4) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E3ECu;
    // 0x24e3ec: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x24e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24e3f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x24E3F0u;
    {
        const bool branch_taken_0x24e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3F0u;
        // 0x24e3f4: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3f0) {
            ctx->pc = 0x24E55Cu;
            goto label_24e55c;
        }
    }
    ctx->pc = 0x24E3F8u;
label_24e3f8:
    // 0x24e3f8: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x24e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e3fc:
    // 0x24e3fc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24e3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x24e400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e404: 0x0  nop
    ctx->pc = 0x24e404u;
    // NOP
    // 0x24e408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e40c: 0x0  nop
    ctx->pc = 0x24e40cu;
    // NOP
    // 0x24e410: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24E410u;
    {
        const bool branch_taken_0x24e410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E410u;
        // 0x24e414: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e410) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E418u;
    // 0x24e418: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e41c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24E41Cu;
    {
        const bool branch_taken_0x24e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e41c) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E424u;
    // 0x24e424: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E424u;
    SET_GPR_U32(ctx, 31, 0x24E42Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E424u, 0x24E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E42Cu;
label_24e42c:
    // 0x24e42c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E430u;
    {
        const bool branch_taken_0x24e430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E430u;
        // 0x24e434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e430) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E438u;
    // 0x24e438: 0xc09a01a  jal         func_268068
    ctx->pc = 0x24E438u;
    SET_GPR_U32(ctx, 31, 0x24E440u);
    ctx->pc = 0x24E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E438u;
    // 0x24e43c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268068u, 0x24E438u, 0x24E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0x144002fb  bnez        $v0, . + 4 + (0x2FB << 2)
    ctx->pc = 0x24E440u;
    {
        const bool branch_taken_0x24e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E440u;
        // 0x24e444: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e440) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24E448u;
label_24e448:
    // 0x24e448: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E448u;
    SET_GPR_U32(ctx, 31, 0x24E450u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E448u, 0x24E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E450u;
label_24e450:
    // 0x24e450: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24e454: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e454u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e458: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E458u;
    {
        const bool branch_taken_0x24e458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e458) {
            ctx->pc = 0x24E45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E458u;
            // 0x24e45c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E460u;
            goto label_24e460;
        }
    }
    ctx->pc = 0x24E460u;
label_24e460:
    // 0x24e460: 0x2010  mfhi        $a0
    ctx->pc = 0x24e460u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e464: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E464u;
    {
        const bool branch_taken_0x24e464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e464) {
            ctx->pc = 0x24E498u;
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E46Cu;
    // 0x24e46c: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x24e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e470: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24e474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e478: 0x0  nop
    ctx->pc = 0x24e478u;
    // NOP
    // 0x24e47c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e480: 0x0  nop
    ctx->pc = 0x24e480u;
    // NOP
    // 0x24e484: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24E484u;
    {
        const bool branch_taken_0x24e484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E484u;
        // 0x24e488: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e484) {
            ctx->pc = 0x24E498u;
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E48Cu;
    // 0x24e48c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e490: 0x10600212  beqz        $v1, . + 4 + (0x212 << 2)
    ctx->pc = 0x24E490u;
    {
        const bool branch_taken_0x24e490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E490u;
        // 0x24e494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e490) {
            ctx->pc = 0x24ECDCu;
            goto label_24ecdc;
        }
    }
    ctx->pc = 0x24E498u;
label_24e498:
    // 0x24e498: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24E498u;
    SET_GPR_U32(ctx, 31, 0x24E4A0u);
    ctx->pc = 0x24E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E498u;
    // 0x24e49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24E498u, 0x24E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4A0u;
label_24e4a0:
    // 0x24e4a0: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x24E4A0u;
    {
        const bool branch_taken_0x24e4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e4a0) {
            ctx->pc = 0x24E4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E4A0u;
            // 0x24e4a4: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E57Cu;
            goto label_24e57c;
        }
    }
    ctx->pc = 0x24E4A8u;
    // 0x24e4a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E4A8u;
    SET_GPR_U32(ctx, 31, 0x24E4B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E4A8u, 0x24E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4B0u;
label_24e4b0:
    // 0x24e4b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24e4b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24e4b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24e4b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E4B8u;
    {
        const bool branch_taken_0x24e4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e4b8) {
            ctx->pc = 0x24E4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E4B8u;
            // 0x24e4bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E4C0u;
            goto label_24e4c0;
        }
    }
    ctx->pc = 0x24E4C0u;
label_24e4c0:
    // 0x24e4c0: 0x2010  mfhi        $a0
    ctx->pc = 0x24e4c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24e4c4: 0x54800017  bnel        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x24E4C4u;
    {
        const bool branch_taken_0x24e4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e4c4) {
            ctx->pc = 0x24E4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E4C4u;
            // 0x24e4c8: 0x924217b9  lbu         $v0, 0x17B9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E524u;
            goto label_24e524;
        }
    }
    ctx->pc = 0x24E4CCu;
    // 0x24e4cc: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x24e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e4d0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24e4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24e4d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e4d8: 0x0  nop
    ctx->pc = 0x24e4d8u;
    // NOP
    // 0x24e4dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e4e0: 0x0  nop
    ctx->pc = 0x24e4e0u;
    // NOP
    // 0x24e4e4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x24E4E4u;
    {
        const bool branch_taken_0x24e4e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4E4u;
        // 0x24e4e8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4e4) {
            ctx->pc = 0x24E520u;
            goto label_24e520;
        }
    }
    ctx->pc = 0x24E4ECu;
    // 0x24e4ec: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e4f0: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24E4F0u;
    {
        const bool branch_taken_0x24e4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e4f0) {
            ctx->pc = 0x24E4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E4F0u;
            // 0x24e4f4: 0x924217b9  lbu         $v0, 0x17B9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E524u;
            goto label_24e524;
        }
    }
    ctx->pc = 0x24E4F8u;
    // 0x24e4f8: 0x924217bb  lbu         $v0, 0x17BB($s2)
    ctx->pc = 0x24e4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6075)));
    // 0x24e4fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E4FCu;
    {
        const bool branch_taken_0x24e4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e4fc) {
            ctx->pc = 0x24E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E4FCu;
            // 0x24e500: 0x924217b9  lbu         $v0, 0x17B9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E524u;
            goto label_24e524;
        }
    }
    ctx->pc = 0x24E504u;
    // 0x24e504: 0xc6411740  lwc1        $f1, 0x1740($s2)
    ctx->pc = 0x24e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e50c: 0x0  nop
    ctx->pc = 0x24e50cu;
    // NOP
    // 0x24e510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24e510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e514: 0x0  nop
    ctx->pc = 0x24e514u;
    // NOP
    // 0x24e518: 0x450101f0  bc1t        . + 4 + (0x1F0 << 2)
    ctx->pc = 0x24E518u;
    {
        const bool branch_taken_0x24e518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E518u;
        // 0x24e51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e518) {
            ctx->pc = 0x24ECDCu;
            goto label_24ecdc;
        }
    }
    ctx->pc = 0x24E520u;
label_24e520:
    // 0x24e520: 0x924217b9  lbu         $v0, 0x17B9($s2)
    ctx->pc = 0x24e520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6073)));
label_24e524:
    // 0x24e524: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E524u;
    {
        const bool branch_taken_0x24e524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e524) {
            ctx->pc = 0x24E568u;
            goto label_24e568;
        }
    }
    ctx->pc = 0x24E52Cu;
    // 0x24e52c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E52Cu;
    SET_GPR_U32(ctx, 31, 0x24E534u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E52Cu, 0x24E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E534u;
label_24e534:
    // 0x24e534: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24e534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24e538: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E538u;
    {
        const bool branch_taken_0x24e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e538) {
            ctx->pc = 0x24E568u;
            goto label_24e568;
        }
    }
    ctx->pc = 0x24E540u;
    // 0x24e540: 0xc09cf0e  jal         func_273C38
    ctx->pc = 0x24E540u;
    SET_GPR_U32(ctx, 31, 0x24E548u);
    ctx->pc = 0x24E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E540u;
    // 0x24e544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C38u, 0x24E540u, 0x24E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E548u;
label_24e548:
    // 0x24e548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E548u;
    {
        const bool branch_taken_0x24e548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E548u;
        // 0x24e54c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e548) {
            ctx->pc = 0x24E568u;
            goto label_24e568;
        }
    }
    ctx->pc = 0x24E550u;
    // 0x24e550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e554: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x24e554u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x24e558: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x24e558u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_24e55c:
    // 0x24e55c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x24e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24e560: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x24E560u;
    {
        const bool branch_taken_0x24e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E560u;
        // 0x24e564: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e560) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24E568u;
label_24e568:
    // 0x24e568: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24E568u;
    SET_GPR_U32(ctx, 31, 0x24E570u);
    ctx->pc = 0x24E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E568u;
    // 0x24e56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24E568u, 0x24E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E570u;
label_24e570:
    // 0x24e570: 0x144002af  bnez        $v0, . + 4 + (0x2AF << 2)
    ctx->pc = 0x24E570u;
    {
        const bool branch_taken_0x24e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E570u;
        // 0x24e574: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e570) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24E578u;
label_24e578:
    // 0x24e578: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24e578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_24e57c:
    // 0x24e57c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24E57Cu;
    {
        const bool branch_taken_0x24e57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e57c) {
            ctx->pc = 0x24E580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E57Cu;
            // 0x24e580: 0xc6410604  lwc1        $f1, 0x604($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E5A8u;
            goto label_24e5a8;
        }
    }
    ctx->pc = 0x24E584u;
    // 0x24e584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e588: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24e588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24e58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e590: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24E590u;
    SET_GPR_U32(ctx, 31, 0x24E598u);
    ctx->pc = 0x24E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E590u;
    // 0x24e594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24E590u, 0x24E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E598u;
label_24e598:
    // 0x24e598: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24e598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24e59c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24E59Cu;
    SET_GPR_U32(ctx, 31, 0x24E5A4u);
    ctx->pc = 0x24E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E59Cu;
    // 0x24e5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24E59Cu, 0x24E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5A4u;
label_24e5a4:
    // 0x24e5a4: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x24e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e5a8:
    // 0x24e5a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24e5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e5ac: 0x0  nop
    ctx->pc = 0x24e5acu;
    // NOP
    // 0x24e5b0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x24e5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e5b4: 0x0  nop
    ctx->pc = 0x24e5b4u;
    // NOP
    // 0x24e5b8: 0x4500029c  bc1f        . + 4 + (0x29C << 2)
    ctx->pc = 0x24E5B8u;
    {
        const bool branch_taken_0x24e5b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5B8u;
        // 0x24e5bc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5b8) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24E5C0u;
    // 0x24e5c0: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24e5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24e5c4: 0x1460029a  bnez        $v1, . + 4 + (0x29A << 2)
    ctx->pc = 0x24E5C4u;
    {
        const bool branch_taken_0x24e5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5C4u;
        // 0x24e5c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5c4) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24E5CCu;
    // 0x24e5cc: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24e5ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24e5d0: 0x14400298  bnez        $v0, . + 4 + (0x298 << 2)
    ctx->pc = 0x24E5D0u;
    {
        const bool branch_taken_0x24e5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5D0u;
        // 0x24e5d4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5d0) {
            ctx->pc = 0x24F034u;
            goto label_24f034;
        }
    }
    ctx->pc = 0x24E5D8u;
    // 0x24e5d8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e5dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e5dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e5e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24e5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e5e4: 0x0  nop
    ctx->pc = 0x24e5e4u;
    // NOP
    // 0x24e5e8: 0x45000292  bc1f        . + 4 + (0x292 << 2)
    ctx->pc = 0x24E5E8u;
    {
        const bool branch_taken_0x24e5e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5E8u;
        // 0x24e5ec: 0xe6400604  swc1        $f0, 0x604($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5e8) {
            ctx->pc = 0x24F034u;
            goto label_24f034;
        }
    }
    ctx->pc = 0x24E5F0u;
    // 0x24e5f0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e5f4: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24e5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24e5f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E5F8u;
    {
        const bool branch_taken_0x24e5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5F8u;
        // 0x24e5fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5f8) {
            ctx->pc = 0x24E624u;
            goto label_24e624;
        }
    }
    ctx->pc = 0x24E600u;
    // 0x24e600: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x24e600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x24e604: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E604u;
    {
        const bool branch_taken_0x24e604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E604u;
        // 0x24e608: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e604) {
            ctx->pc = 0x24E638u;
            goto label_24e638;
        }
    }
    ctx->pc = 0x24E60Cu;
    // 0x24e60c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E60Cu;
    {
        const bool branch_taken_0x24e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E60Cu;
        // 0x24e610: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e60c) {
            ctx->pc = 0x24E638u;
            goto label_24e638;
        }
    }
    ctx->pc = 0x24E614u;
    // 0x24e614: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E614u;
    {
        const bool branch_taken_0x24e614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e614) {
            ctx->pc = 0x24E618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E614u;
            // 0x24e618: 0x924217c0  lbu         $v0, 0x17C0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E63Cu;
            goto label_24e63c;
        }
    }
    ctx->pc = 0x24E61Cu;
    // 0x24e61c: 0x10000285  b           . + 4 + (0x285 << 2)
    ctx->pc = 0x24E61Cu;
    {
        const bool branch_taken_0x24e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E61Cu;
        // 0x24e620: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e61c) {
            ctx->pc = 0x24F034u;
            goto label_24f034;
        }
    }
    ctx->pc = 0x24E624u;
label_24e624:
    // 0x24e624: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x24e624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x24e628: 0x10400280  beqz        $v0, . + 4 + (0x280 << 2)
    ctx->pc = 0x24E628u;
    {
        const bool branch_taken_0x24e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E628u;
        // 0x24e62c: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e628) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24E630u;
    // 0x24e630: 0x5440027f  bnel        $v0, $zero, . + 4 + (0x27F << 2)
    ctx->pc = 0x24E630u;
    {
        const bool branch_taken_0x24e630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e630) {
            ctx->pc = 0x24E634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E630u;
            // 0x24e634: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24E638u;
label_24e638:
    // 0x24e638: 0x924217c0  lbu         $v0, 0x17C0($s2)
    ctx->pc = 0x24e638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6080)));
label_24e63c:
    // 0x24e63c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24e640: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24e640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24e644: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x24e644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24e648: 0x14600278  bnez        $v1, . + 4 + (0x278 << 2)
    ctx->pc = 0x24E648u;
    {
        const bool branch_taken_0x24e648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E648u;
        // 0x24e64c: 0xa24217c0  sb          $v0, 0x17C0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6080), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e648) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24E650u;
    // 0x24e650: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24e650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24e654: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24E654u;
    SET_GPR_U32(ctx, 31, 0x24E65Cu);
    ctx->pc = 0x24E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E654u;
    // 0x24e658: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24E654u, 0x24E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E65Cu;
label_24e65c:
    // 0x24e65c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e660: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24e660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24e664: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E664u;
    {
        const bool branch_taken_0x24e664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E664u;
        // 0x24e668: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e664) {
            ctx->pc = 0x24E684u;
            goto label_24e684;
        }
    }
    ctx->pc = 0x24E66Cu;
    // 0x24e66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e670: 0x2442e2d0  addiu       $v0, $v0, -0x1D30
    ctx->pc = 0x24e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959824));
    // 0x24e674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e678: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e67c: 0x800008  jr          $a0
    ctx->pc = 0x24E67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E684u: goto label_24e684;
            case 0x24E6A0u: goto label_24e6a0;
            case 0x24E6BCu: goto label_24e6bc;
            case 0x24E6D8u: goto label_24e6d8;
            case 0x24EE60u: goto label_24ee60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E67Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24E684u;
label_24e684:
    // 0x24e684: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24E684u;
    SET_GPR_U32(ctx, 31, 0x24E68Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24E684u, 0x24E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E68Cu;
label_24e68c:
    // 0x24e68c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24e68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24e690: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24e694: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e698: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x24E698u;
    {
        const bool branch_taken_0x24e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e698) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24E6A0u;
label_24e6a0:
    // 0x24e6a0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24E6A0u;
    SET_GPR_U32(ctx, 31, 0x24E6A8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24E6A0u, 0x24E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6A8u;
label_24e6a8:
    // 0x24e6a8: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x24e6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x24e6ac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24e6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24e6b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e6b4: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x24E6B4u;
    {
        const bool branch_taken_0x24e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e6b4) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24E6BCu;
label_24e6bc:
    // 0x24e6bc: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24E6BCu;
    SET_GPR_U32(ctx, 31, 0x24E6C4u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24E6BCu, 0x24E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6C4u;
label_24e6c4:
    // 0x24e6c4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24e6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24e6c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24e6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24e6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e6d0: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x24E6D0u;
    {
        const bool branch_taken_0x24e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e6d0) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24E6D8u;
label_24e6d8:
    // 0x24e6d8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24E6D8u;
    SET_GPR_U32(ctx, 31, 0x24E6E0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24E6D8u, 0x24E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6E0u;
label_24e6e0:
    // 0x24e6e0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24e6e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24e6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24e6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e6ec: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x24E6ECu;
    {
        const bool branch_taken_0x24e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e6ec) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24E6F4u;
label_24e6f4:
    // 0x24e6f4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24E6F4u;
    SET_GPR_U32(ctx, 31, 0x24E6FCu);
    ctx->pc = 0x24E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6F4u;
    // 0x24e6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24E6F4u, 0x24E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6FCu;
label_24e6fc:
    // 0x24e6fc: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24e700: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x24e700u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24e704: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x24e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x24e708: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x24e708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x24e70c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24E70Cu;
    {
        const bool branch_taken_0x24e70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E70Cu;
        // 0x24e710: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e70c) {
            ctx->pc = 0x24E74Cu;
            goto label_24e74c;
        }
    }
    ctx->pc = 0x24E714u;
    // 0x24e714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e718: 0x2442e2f0  addiu       $v0, $v0, -0x1D10
    ctx->pc = 0x24e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959856));
    // 0x24e71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e720: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e724: 0x800008  jr          $a0
    ctx->pc = 0x24E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E72Cu: goto label_24e72c;
            case 0x24E73Cu: goto label_24e73c;
            case 0x24E74Cu: goto label_24e74c;
            case 0x24E75Cu: goto label_24e75c;
            case 0x24E76Cu: goto label_24e76c;
            case 0x24E7C4u: goto label_24e7c4;
            case 0x24E7D4u: goto label_24e7d4;
            case 0x24E830u: goto label_24e830;
            case 0x24E8E8u: goto label_24e8e8;
            case 0x24E8F8u: goto label_24e8f8;
            case 0x24E908u: goto label_24e908;
            case 0x24E918u: goto label_24e918;
            case 0x24E928u: goto label_24e928;
            case 0x24E938u: goto label_24e938;
            case 0x24E948u: goto label_24e948;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24E72Cu;
label_24e72c:
    // 0x24e72c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e730: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24e734: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x24E734u;
    {
        const bool branch_taken_0x24e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E734u;
        // 0x24e738: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e734) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E73Cu;
label_24e73c:
    // 0x24e73c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e740: 0x8c432bec  lw          $v1, 0x2BEC($v0)
    ctx->pc = 0x24e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11244)));
    // 0x24e744: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x24E744u;
    {
        const bool branch_taken_0x24e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E744u;
        // 0x24e748: 0x8c442bf0  lw          $a0, 0x2BF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e744) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E74Cu;
label_24e74c:
    // 0x24e74c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e750: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24e754: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x24E754u;
    {
        const bool branch_taken_0x24e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E754u;
        // 0x24e758: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e754) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E75Cu;
label_24e75c:
    // 0x24e75c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e760: 0x8c4309f0  lw          $v1, 0x9F0($v0)
    ctx->pc = 0x24e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2544)));
    // 0x24e764: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x24E764u;
    {
        const bool branch_taken_0x24e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E764u;
        // 0x24e768: 0x8c4409f4  lw          $a0, 0x9F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e764) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E76Cu;
label_24e76c:
    // 0x24e76c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e770: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x24e774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e778: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x24e778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x24e77c: 0x8c4609f0  lw          $a2, 0x9F0($v0)
    ctx->pc = 0x24e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2544)));
    // 0x24e780: 0x8c4509f4  lw          $a1, 0x9F4($v0)
    ctx->pc = 0x24e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2548)));
    // 0x24e784: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x24e784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24e788: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24E788u;
    SET_GPR_U32(ctx, 31, 0x24E790u);
    ctx->pc = 0x24E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E788u;
    // 0x24e78c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24E788u, 0x24E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E790u;
label_24e790:
    // 0x24e790: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24e794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e798: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24e798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24e79c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e7a0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24e7a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24e7a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24e7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24e7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e7acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24e7b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24E7B4u;
    SET_GPR_U32(ctx, 31, 0x24E7BCu);
    ctx->pc = 0x24E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7B4u;
    // 0x24e7b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24E7B4u, 0x24E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7BCu;
label_24e7bc:
    // 0x24e7bc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24E7BCu;
    {
        const bool branch_taken_0x24e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7bc) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E7C4u;
label_24e7c4:
    // 0x24e7c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e7c8: 0x8c43314c  lw          $v1, 0x314C($v0)
    ctx->pc = 0x24e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12620)));
    // 0x24e7cc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x24E7CCu;
    {
        const bool branch_taken_0x24e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7CCu;
        // 0x24e7d0: 0x8c443150  lw          $a0, 0x3150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7cc) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E7D4u;
label_24e7d4:
    // 0x24e7d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e7d8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x24e7dc: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x24e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24e7e0: 0x8c443320  lw          $a0, 0x3320($v0)
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13088)));
    // 0x24e7e4: 0x8c453324  lw          $a1, 0x3324($v0)
    ctx->pc = 0x24e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13092)));
    // 0x24e7e8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x24e7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x24e7ec: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x24e7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24e7f0: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x24E7F0u;
    {
        const bool branch_taken_0x24e7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7F0u;
        // 0x24e7f4: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7f0) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E7F8u;
    // 0x24e7f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E7F8u;
    SET_GPR_U32(ctx, 31, 0x24E800u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E7F8u, 0x24E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E800u;
label_24e800:
    // 0x24e800: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24e800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e804: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E804u;
    {
        const bool branch_taken_0x24e804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E804u;
        // 0x24e808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e804) {
            ctx->pc = 0x24E814u;
            goto label_24e814;
        }
    }
    ctx->pc = 0x24E80Cu;
    // 0x24e80c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E80Cu;
    {
        const bool branch_taken_0x24e80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e80c) {
            ctx->pc = 0x24E810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E80Cu;
            // 0x24e810: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E824u;
            goto label_24e824;
        }
    }
    ctx->pc = 0x24E814u;
label_24e814:
    // 0x24e814: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e818: 0x8c433398  lw          $v1, 0x3398($v0)
    ctx->pc = 0x24e818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13208)));
    // 0x24e81c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x24E81Cu;
    {
        const bool branch_taken_0x24e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E81Cu;
        // 0x24e820: 0x8c44339c  lw          $a0, 0x339C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e81c) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E824u;
label_24e824:
    // 0x24e824: 0x8c4333a0  lw          $v1, 0x33A0($v0)
    ctx->pc = 0x24e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13216)));
    // 0x24e828: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x24E828u;
    {
        const bool branch_taken_0x24e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E828u;
        // 0x24e82c: 0x8c4433a4  lw          $a0, 0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e828) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E830u;
label_24e830:
    // 0x24e830: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24e834: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24e834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x24e838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e83c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24E83Cu;
    {
        const bool branch_taken_0x24e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e83c) {
            ctx->pc = 0x24E87Cu;
            goto label_24e87c;
        }
    }
    ctx->pc = 0x24E844u;
    // 0x24e844: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E844u;
    SET_GPR_U32(ctx, 31, 0x24E84Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E844u, 0x24E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E84Cu;
label_24e84c:
    // 0x24e84c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E850u;
    {
        const bool branch_taken_0x24e850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E850u;
        // 0x24e854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e850) {
            ctx->pc = 0x24E860u;
            goto label_24e860;
        }
    }
    ctx->pc = 0x24E858u;
    // 0x24e858: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E858u;
    {
        const bool branch_taken_0x24e858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e858) {
            ctx->pc = 0x24E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E858u;
            // 0x24e85c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E870u;
            goto label_24e870;
        }
    }
    ctx->pc = 0x24E860u;
label_24e860:
    // 0x24e860: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e864: 0x8c433958  lw          $v1, 0x3958($v0)
    ctx->pc = 0x24e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14680)));
    // 0x24e868: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24E868u;
    {
        const bool branch_taken_0x24e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E868u;
        // 0x24e86c: 0x8c44395c  lw          $a0, 0x395C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e868) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E870u;
label_24e870:
    // 0x24e870: 0x8c433960  lw          $v1, 0x3960($v0)
    ctx->pc = 0x24e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14688)));
    // 0x24e874: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x24E874u;
    {
        const bool branch_taken_0x24e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E874u;
        // 0x24e878: 0x8c443964  lw          $a0, 0x3964($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e874) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E87Cu;
label_24e87c:
    // 0x24e87c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E87Cu;
    SET_GPR_U32(ctx, 31, 0x24E884u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E87Cu, 0x24E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E884u;
label_24e884:
    // 0x24e884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e888: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E888u;
    {
        const bool branch_taken_0x24e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E888u;
        // 0x24e88c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e888) {
            ctx->pc = 0x24E8BCu;
            goto label_24e8bc;
        }
    }
    ctx->pc = 0x24E890u;
    // 0x24e890: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24e890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24e894: 0x8c433830  lw          $v1, 0x3830($v0)
    ctx->pc = 0x24e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14384)));
    // 0x24e898: 0x8c443834  lw          $a0, 0x3834($v0)
    ctx->pc = 0x24e898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14388)));
    // 0x24e89c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e8a0: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x24E8A0u;
    {
        const bool branch_taken_0x24e8a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8A0u;
        // 0x24e8a4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8a0) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E8A8u;
    // 0x24e8a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8ac: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24E8ACu;
    SET_GPR_U32(ctx, 31, 0x24E8B4u);
    ctx->pc = 0x24E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E8ACu;
    // 0x24e8b0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24E8ACu, 0x24E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8B4u;
label_24e8b4:
    // 0x24e8b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24E8B4u;
    {
        const bool branch_taken_0x24e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e8b4) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E8BCu;
label_24e8bc:
    // 0x24e8bc: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24e8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24e8c0: 0x8c433838  lw          $v1, 0x3838($v0)
    ctx->pc = 0x24e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14392)));
    // 0x24e8c4: 0x8c44383c  lw          $a0, 0x383C($v0)
    ctx->pc = 0x24e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14396)));
    // 0x24e8c8: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24e8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e8cc: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x24E8CCu;
    {
        const bool branch_taken_0x24e8cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8CCu;
        // 0x24e8d0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8cc) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E8D4u;
    // 0x24e8d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8d8: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24E8D8u;
    SET_GPR_U32(ctx, 31, 0x24E8E0u);
    ctx->pc = 0x24E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E8D8u;
    // 0x24e8dc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24E8D8u, 0x24E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8E0u;
label_24e8e0:
    // 0x24e8e0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24E8E0u;
    {
        const bool branch_taken_0x24e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e8e0) {
            ctx->pc = 0x24E95Cu;
            goto label_24e95c;
        }
    }
    ctx->pc = 0x24E8E8u;
label_24e8e8:
    // 0x24e8e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e8ec: 0x8c4316a8  lw          $v1, 0x16A8($v0)
    ctx->pc = 0x24e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5800)));
    // 0x24e8f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24E8F0u;
    {
        const bool branch_taken_0x24e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8F0u;
        // 0x24e8f4: 0x8c4416ac  lw          $a0, 0x16AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8f0) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E8F8u;
label_24e8f8:
    // 0x24e8f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e8fc: 0x8c433aac  lw          $v1, 0x3AAC($v0)
    ctx->pc = 0x24e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15020)));
    // 0x24e900: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24E900u;
    {
        const bool branch_taken_0x24e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E900u;
        // 0x24e904: 0x8c443ab0  lw          $a0, 0x3AB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e900) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E908u;
label_24e908:
    // 0x24e908: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e90c: 0x8c4316a8  lw          $v1, 0x16A8($v0)
    ctx->pc = 0x24e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5800)));
    // 0x24e910: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24E910u;
    {
        const bool branch_taken_0x24e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E910u;
        // 0x24e914: 0x8c4416ac  lw          $a0, 0x16AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e910) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E918u;
label_24e918:
    // 0x24e918: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e91c: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24e920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24E920u;
    {
        const bool branch_taken_0x24e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E920u;
        // 0x24e924: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e920) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E928u;
label_24e928:
    // 0x24e928: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e92c: 0x8c432eb4  lw          $v1, 0x2EB4($v0)
    ctx->pc = 0x24e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11956)));
    // 0x24e930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24E930u;
    {
        const bool branch_taken_0x24e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E930u;
        // 0x24e934: 0x8c442eb8  lw          $a0, 0x2EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e930) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E938u;
label_24e938:
    // 0x24e938: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e93c: 0x8c431268  lw          $v1, 0x1268($v0)
    ctx->pc = 0x24e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
    // 0x24e940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E940u;
    {
        const bool branch_taken_0x24e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E940u;
        // 0x24e944: 0x8c44126c  lw          $a0, 0x126C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e940) {
            ctx->pc = 0x24E954u;
            goto label_24e954;
        }
    }
    ctx->pc = 0x24E948u;
label_24e948:
    // 0x24e948: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24e94c: 0x8c43236c  lw          $v1, 0x236C($v0)
    ctx->pc = 0x24e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9068)));
    // 0x24e950: 0x8c442370  lw          $a0, 0x2370($v0)
    ctx->pc = 0x24e950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9072)));
label_24e954:
    // 0x24e954: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24e954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e958: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24e958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24e95c:
    // 0x24e95c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24e95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24e960: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x24e964: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e96c: 0x36880040  ori         $t0, $s4, 0x40
    ctx->pc = 0x24e96cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
    // 0x24e970: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e978: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x24e978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x24e97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e980: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24E980u;
    SET_GPR_U32(ctx, 31, 0x24E988u);
    ctx->pc = 0x24E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E980u;
    // 0x24e984: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24E980u, 0x24E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E988u;
label_24e988:
    // 0x24e988: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x24e988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e98c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24E98Cu;
    SET_GPR_U32(ctx, 31, 0x24E994u);
    ctx->pc = 0x24E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E98Cu;
    // 0x24e990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24E98Cu, 0x24E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E994u;
label_24e994:
    // 0x24e994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24e994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24e998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e99c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24e99cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24e9a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24e9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24e9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24e9acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24e9b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24E9B4u;
    SET_GPR_U32(ctx, 31, 0x24E9BCu);
    ctx->pc = 0x24E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B4u;
    // 0x24e9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24E9B4u, 0x24E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9BCu;
label_24e9bc:
    // 0x24e9bc: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x24E9BCu;
    SET_GPR_U32(ctx, 31, 0x24E9C4u);
    ctx->pc = 0x24E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9BCu;
    // 0x24e9c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x24E9BCu, 0x24E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9C4u;
label_24e9c4:
    // 0x24e9c4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24E9C4u;
    SET_GPR_U32(ctx, 31, 0x24E9CCu);
    ctx->pc = 0x24E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9C4u;
    // 0x24e9c8: 0x26249b70  addiu       $a0, $s1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24E9C4u, 0x24E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9CCu;
label_24e9cc:
    // 0x24e9cc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e9d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24e9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24e9d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E9D4u;
    {
        const bool branch_taken_0x24e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9D4u;
        // 0x24e9d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9d4) {
            ctx->pc = 0x24E9F4u;
            goto label_24e9f4;
        }
    }
    ctx->pc = 0x24E9DCu;
    // 0x24e9dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e9e0: 0x2442e4f0  addiu       $v0, $v0, -0x1B10
    ctx->pc = 0x24e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
    // 0x24e9e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e9e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e9ec: 0x800008  jr          $a0
    ctx->pc = 0x24E9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E9F4u: goto label_24e9f4;
            case 0x24EA18u: goto label_24ea18;
            case 0x24EA3Cu: goto label_24ea3c;
            case 0x24EA60u: goto label_24ea60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E9ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24E9F4u;
label_24e9f4:
    // 0x24e9f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24E9F4u;
    SET_GPR_U32(ctx, 31, 0x24E9FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24E9F4u, 0x24E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9FCu;
label_24e9fc:
    // 0x24e9fc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24ea00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ea00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ea04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EA04u;
    {
        const bool branch_taken_0x24ea04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea04) {
            ctx->pc = 0x24EA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EA04u;
            // 0x24ea08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EA0Cu;
            goto label_24ea0c;
        }
    }
    ctx->pc = 0x24EA0Cu;
label_24ea0c:
    // 0x24ea0c: 0x2010  mfhi        $a0
    ctx->pc = 0x24ea0cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24ea10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24EA10u;
    {
        const bool branch_taken_0x24ea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA10u;
        // 0x24ea14: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea10) {
            ctx->pc = 0x24EA80u;
            goto label_24ea80;
        }
    }
    ctx->pc = 0x24EA18u;
label_24ea18:
    // 0x24ea18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EA18u;
    SET_GPR_U32(ctx, 31, 0x24EA20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EA18u, 0x24EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA20u;
label_24ea20:
    // 0x24ea20: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24ea24: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ea24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ea28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EA28u;
    {
        const bool branch_taken_0x24ea28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea28) {
            ctx->pc = 0x24EA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EA28u;
            // 0x24ea2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EA30u;
            goto label_24ea30;
        }
    }
    ctx->pc = 0x24EA30u;
label_24ea30:
    // 0x24ea30: 0x2010  mfhi        $a0
    ctx->pc = 0x24ea30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24ea34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24EA34u;
    {
        const bool branch_taken_0x24ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA34u;
        // 0x24ea38: 0x2484002d  addiu       $a0, $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea34) {
            ctx->pc = 0x24EA80u;
            goto label_24ea80;
        }
    }
    ctx->pc = 0x24EA3Cu;
label_24ea3c:
    // 0x24ea3c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EA3Cu;
    SET_GPR_U32(ctx, 31, 0x24EA44u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EA3Cu, 0x24EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA44u;
label_24ea44:
    // 0x24ea44: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24ea48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ea48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ea4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EA4Cu;
    {
        const bool branch_taken_0x24ea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea4c) {
            ctx->pc = 0x24EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EA4Cu;
            // 0x24ea50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EA54u;
            goto label_24ea54;
        }
    }
    ctx->pc = 0x24EA54u;
label_24ea54:
    // 0x24ea54: 0x2010  mfhi        $a0
    ctx->pc = 0x24ea54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24ea58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24EA58u;
    {
        const bool branch_taken_0x24ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA58u;
        // 0x24ea5c: 0x2484001e  addiu       $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea58) {
            ctx->pc = 0x24EA80u;
            goto label_24ea80;
        }
    }
    ctx->pc = 0x24EA60u;
label_24ea60:
    // 0x24ea60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EA60u;
    SET_GPR_U32(ctx, 31, 0x24EA68u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EA60u, 0x24EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA68u;
label_24ea68:
    // 0x24ea68: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24ea6c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ea6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ea70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EA70u;
    {
        const bool branch_taken_0x24ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea70) {
            ctx->pc = 0x24EA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EA70u;
            // 0x24ea74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EA78u;
            goto label_24ea78;
        }
    }
    ctx->pc = 0x24EA78u;
label_24ea78:
    // 0x24ea78: 0x2010  mfhi        $a0
    ctx->pc = 0x24ea78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24ea7c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x24ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_24ea80:
    // 0x24ea80: 0xae4405f4  sw          $a0, 0x5F4($s2)
    ctx->pc = 0x24ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 4));
    // 0x24ea84: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24EA84u;
    SET_GPR_U32(ctx, 31, 0x24EA8Cu);
    ctx->pc = 0x24EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA84u;
    // 0x24ea88: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24EA84u, 0x24EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA8Cu;
label_24ea8c:
    // 0x24ea8c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ea90: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24ea90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24ea94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24EA94u;
    {
        const bool branch_taken_0x24ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA94u;
        // 0x24ea98: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea94) {
            ctx->pc = 0x24EAB4u;
            goto label_24eab4;
        }
    }
    ctx->pc = 0x24EA9Cu;
    // 0x24ea9c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x24ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x24eaa0: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x24eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x24eaa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24eaa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eaac: 0x800008  jr          $a0
    ctx->pc = 0x24EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EAB4u: goto label_24eab4;
            case 0x24EAC4u: goto label_24eac4;
            case 0x24EAF0u: goto label_24eaf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EAACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24EAB4u;
label_24eab4:
    // 0x24eab4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EAB4u;
    SET_GPR_U32(ctx, 31, 0x24EABCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EAB4u, 0x24EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EABCu;
label_24eabc:
    // 0x24eabc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24EABCu;
    {
        const bool branch_taken_0x24eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EABCu;
        // 0x24eac0: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eabc) {
            ctx->pc = 0x24EAFCu;
            goto label_24eafc;
        }
    }
    ctx->pc = 0x24EAC4u;
label_24eac4:
    // 0x24eac4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EAC4u;
    SET_GPR_U32(ctx, 31, 0x24EACCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EAC4u, 0x24EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EACCu;
label_24eacc:
    // 0x24eacc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24ead0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ead0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ead4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EAD4u;
    {
        const bool branch_taken_0x24ead4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ead4) {
            ctx->pc = 0x24EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EAD4u;
            // 0x24ead8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EADCu;
            goto label_24eadc;
        }
    }
    ctx->pc = 0x24EADCu;
label_24eadc:
    // 0x24eadc: 0x2010  mfhi        $a0
    ctx->pc = 0x24eadcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24eae0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24EAE0u;
    {
        const bool branch_taken_0x24eae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAE0u;
        // 0x24eae4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eae0) {
            ctx->pc = 0x24EB08u;
            goto label_24eb08;
        }
    }
    ctx->pc = 0x24EAE8u;
    // 0x24eae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24EAE8u;
    {
        const bool branch_taken_0x24eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAE8u;
        // 0x24eaec: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eae8) {
            ctx->pc = 0x24EB08u;
            goto label_24eb08;
        }
    }
    ctx->pc = 0x24EAF0u;
label_24eaf0:
    // 0x24eaf0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EAF0u;
    SET_GPR_U32(ctx, 31, 0x24EAF8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EAF0u, 0x24EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAF8u;
label_24eaf8:
    // 0x24eaf8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_24eafc:
    // 0x24eafc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24EAFCu;
    {
        const bool branch_taken_0x24eafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAFCu;
        // 0x24eb00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eafc) {
            ctx->pc = 0x24EB08u;
            goto label_24eb08;
        }
    }
    ctx->pc = 0x24EB04u;
    // 0x24eb04: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x24eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
label_24eb08:
    // 0x24eb08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24eb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24eb0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24eb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eb10: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24eb14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb18: 0xe6410604  swc1        $f1, 0x604($s2)
    ctx->pc = 0x24eb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x24eb1c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x24EB1Cu;
    SET_GPR_U32(ctx, 31, 0x24EB24u);
    ctx->pc = 0x24EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB1Cu;
    // 0x24eb20: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x24EB1Cu, 0x24EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB24u;
label_24eb24:
    // 0x24eb24: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x24eb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x24eb28: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x24eb28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x24eb2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24eb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24eb30: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x24eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24eb34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24eb38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24eb38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eb3c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x24eb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x24eb40: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24EB40u;
    SET_GPR_U32(ctx, 31, 0x24EB48u);
    ctx->pc = 0x24EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB40u;
    // 0x24eb44: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24EB40u, 0x24EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB48u;
label_24eb48:
    // 0x24eb48: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24eb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24eb4c: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x24eb50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24eb54: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24eb54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24eb58:
    // 0x24eb58: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24EB58u;
    SET_GPR_U32(ctx, 31, 0x24EB60u);
    ctx->pc = 0x24EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB58u;
    // 0x24eb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24EB58u, 0x24EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB60u;
label_24eb60:
    // 0x24eb60: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24EB60u;
    {
        const bool branch_taken_0x24eb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB60u;
        // 0x24eb64: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb60) {
            ctx->pc = 0x24EBBCu;
            goto label_24ebbc;
        }
    }
    ctx->pc = 0x24EB68u;
    // 0x24eb68: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24eb6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24eb70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EB70u;
    {
        const bool branch_taken_0x24eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB70u;
        // 0x24eb74: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb70) {
            ctx->pc = 0x24EB94u;
            goto label_24eb94;
        }
    }
    ctx->pc = 0x24EB78u;
    // 0x24eb78: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24eb7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB7Cu;
    {
        const bool branch_taken_0x24eb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24eb7c) {
            ctx->pc = 0x24EB94u;
            goto label_24eb94;
        }
    }
    ctx->pc = 0x24EB84u;
label_24eb84:
    // 0x24eb84: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24EB84u;
    SET_GPR_U32(ctx, 31, 0x24EB8Cu);
    ctx->pc = 0x24EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB84u;
    // 0x24eb88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24EB84u, 0x24EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB8Cu;
label_24eb8c:
    // 0x24eb8c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x24EB8Cu;
    {
        const bool branch_taken_0x24eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB8Cu;
        // 0x24eb90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb8c) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24EB94u;
label_24eb94:
    // 0x24eb94: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24EB94u;
    SET_GPR_U32(ctx, 31, 0x24EB9Cu);
    ctx->pc = 0x24EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB94u;
    // 0x24eb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24EB94u, 0x24EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB9Cu;
label_24eb9c:
    // 0x24eb9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB9Cu;
    {
        const bool branch_taken_0x24eb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb9c) {
            ctx->pc = 0x24EBB4u;
            goto label_24ebb4;
        }
    }
    ctx->pc = 0x24EBA4u;
    // 0x24eba4: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24EBA4u;
    SET_GPR_U32(ctx, 31, 0x24EBACu);
    ctx->pc = 0x24EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBA4u;
    // 0x24eba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24EBA4u, 0x24EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBACu;
label_24ebac:
    // 0x24ebac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24EBACu;
    {
        const bool branch_taken_0x24ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBACu;
        // 0x24ebb0: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebac) {
            ctx->pc = 0x24EBC0u;
            goto label_24ebc0;
        }
    }
    ctx->pc = 0x24EBB4u;
label_24ebb4:
    // 0x24ebb4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24EBB4u;
    SET_GPR_U32(ctx, 31, 0x24EBBCu);
    ctx->pc = 0x24EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBB4u;
    // 0x24ebb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24EBB4u, 0x24EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBBCu;
label_24ebbc:
    // 0x24ebbc: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_24ebc0:
    // 0x24ebc0: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x24EBC0u;
    {
        const bool branch_taken_0x24ebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBC0u;
        // 0x24ebc4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebc0) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24EBC8u;
    // 0x24ebc8: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24EBC8u;
    SET_GPR_U32(ctx, 31, 0x24EBD0u);
    ctx->pc = 0x24EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBC8u;
    // 0x24ebcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24EBC8u, 0x24EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBD0u;
label_24ebd0:
    // 0x24ebd0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24EBD0u;
    {
        const bool branch_taken_0x24ebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ebd0) {
            ctx->pc = 0x24EBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBD0u;
            // 0x24ebd4: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC34u;
            goto label_24ec34;
        }
    }
    ctx->pc = 0x24EBD8u;
    // 0x24ebd8: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x24ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ebdc: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x24ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ebe0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24ebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ebe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24ebe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24ebe8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24ebe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ebec: 0x0  nop
    ctx->pc = 0x24ebecu;
    // NOP
    // 0x24ebf0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24EBF0u;
    {
        const bool branch_taken_0x24ebf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBF0u;
        // 0x24ebf4: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebf0) {
            ctx->pc = 0x24EC30u;
            goto label_24ec30;
        }
    }
    ctx->pc = 0x24EBF8u;
    // 0x24ebf8: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24ebfc: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x24ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x24ec00: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EC00u;
    {
        const bool branch_taken_0x24ec00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ec00) {
            ctx->pc = 0x24EC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC00u;
            // 0x24ec04: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC18u;
            goto label_24ec18;
        }
    }
    ctx->pc = 0x24EC08u;
    // 0x24ec08: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24EC08u;
    SET_GPR_U32(ctx, 31, 0x24EC10u);
    ctx->pc = 0x24EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC08u;
    // 0x24ec0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24EC08u, 0x24EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC10u;
label_24ec10:
    // 0x24ec10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24EC10u;
    {
        const bool branch_taken_0x24ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC10u;
        // 0x24ec14: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec10) {
            ctx->pc = 0x24EC34u;
            goto label_24ec34;
        }
    }
    ctx->pc = 0x24EC18u;
label_24ec18:
    // 0x24ec18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24ec1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ec1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ec20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EC20u;
    {
        const bool branch_taken_0x24ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ec20) {
            ctx->pc = 0x24EC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC20u;
            // 0x24ec24: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC34u;
            goto label_24ec34;
        }
    }
    ctx->pc = 0x24EC28u;
    // 0x24ec28: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24EC28u;
    SET_GPR_U32(ctx, 31, 0x24EC30u);
    ctx->pc = 0x24EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC28u;
    // 0x24ec2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24EC28u, 0x24EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC30u;
label_24ec30:
    // 0x24ec30: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x24ec30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_24ec34:
    // 0x24ec34: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24ec38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EC38u;
    {
        const bool branch_taken_0x24ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ec38) {
            ctx->pc = 0x24EC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC38u;
            // 0x24ec3c: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC40u;
            goto label_24ec40;
        }
    }
    ctx->pc = 0x24EC40u;
label_24ec40:
    // 0x24ec40: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x24ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x24ec44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EC44u;
    {
        const bool branch_taken_0x24ec44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC44u;
        // 0x24ec48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec44) {
            ctx->pc = 0x24EC54u;
            goto label_24ec54;
        }
    }
    ctx->pc = 0x24EC4Cu;
    // 0x24ec4c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x24EC4Cu;
    {
        const bool branch_taken_0x24ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC4Cu;
        // 0x24ec50: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec4c) {
            ctx->pc = 0x24ECFCu;
            goto label_24ecfc;
        }
    }
    ctx->pc = 0x24EC54u;
label_24ec54:
    // 0x24ec54: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24EC54u;
    SET_GPR_U32(ctx, 31, 0x24EC5Cu);
    ctx->pc = 0x24EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EC54u;
    // 0x24ec58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24EC54u, 0x24EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC5Cu;
label_24ec5c:
    // 0x24ec5c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24EC5Cu;
    {
        const bool branch_taken_0x24ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ec5c) {
            ctx->pc = 0x24ECFCu;
            goto label_24ecfc;
        }
    }
    ctx->pc = 0x24EC64u;
    // 0x24ec64: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24EC64u;
    SET_GPR_U32(ctx, 31, 0x24EC6Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24EC64u, 0x24EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC6Cu;
label_24ec6c:
    // 0x24ec6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24ec70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ec70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ec74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EC74u;
    {
        const bool branch_taken_0x24ec74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec74) {
            ctx->pc = 0x24EC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC74u;
            // 0x24ec78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC7Cu;
            goto label_24ec7c;
        }
    }
    ctx->pc = 0x24EC7Cu;
label_24ec7c:
    // 0x24ec7c: 0x2010  mfhi        $a0
    ctx->pc = 0x24ec7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24ec80: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24EC80u;
    {
        const bool branch_taken_0x24ec80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ec80) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24EC88u;
    // 0x24ec88: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x24ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec8c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24ec90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ec90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ec94: 0x0  nop
    ctx->pc = 0x24ec94u;
    // NOP
    // 0x24ec98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ec98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec9c: 0x0  nop
    ctx->pc = 0x24ec9cu;
    // NOP
    // 0x24eca0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x24ECA0u;
    {
        const bool branch_taken_0x24eca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECA0u;
        // 0x24eca4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eca0) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24ECA8u;
    // 0x24eca8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24eca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24ecac: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24ECACu;
    {
        const bool branch_taken_0x24ecac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ecac) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24ECB4u;
    // 0x24ecb4: 0x924217bb  lbu         $v0, 0x17BB($s2)
    ctx->pc = 0x24ecb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6075)));
    // 0x24ecb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24ECB8u;
    {
        const bool branch_taken_0x24ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ecb8) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24ECC0u;
    // 0x24ecc0: 0xc6411740  lwc1        $f1, 0x1740($s2)
    ctx->pc = 0x24ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ecc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ecc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ecc8: 0x0  nop
    ctx->pc = 0x24ecc8u;
    // NOP
    // 0x24eccc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24ecccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecd0: 0x0  nop
    ctx->pc = 0x24ecd0u;
    // NOP
    // 0x24ecd4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24ECD4u;
    {
        const bool branch_taken_0x24ecd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECD4u;
        // 0x24ecd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecd4) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24ECDCu;
label_24ecdc:
    // 0x24ecdc: 0xc09d08e  jal         func_274238
    ctx->pc = 0x24ECDCu;
    SET_GPR_U32(ctx, 31, 0x24ECE4u);
    ctx->pc = 0x24ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECDCu;
    // 0x24ece0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x24ECDCu, 0x24ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECE4u;
label_24ece4:
    // 0x24ece4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x24ECE4u;
    {
        const bool branch_taken_0x24ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE4u;
        // 0x24ece8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ece4) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24ECECu;
label_24ecec:
    // 0x24ecec: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24ECECu;
    SET_GPR_U32(ctx, 31, 0x24ECF4u);
    ctx->pc = 0x24ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECECu;
    // 0x24ecf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24ECECu, 0x24ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECF4u;
label_24ecf4:
    // 0x24ecf4: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x24ECF4u;
    {
        const bool branch_taken_0x24ecf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECF4u;
        // 0x24ecf8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecf4) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24ECFCu;
label_24ecfc:
    // 0x24ecfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ecfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ed00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ed00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ed04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed08: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24ED08u;
    SET_GPR_U32(ctx, 31, 0x24ED10u);
    ctx->pc = 0x24ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED08u;
    // 0x24ed0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24ED08u, 0x24ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED10u;
label_24ed10:
    // 0x24ed10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24ed10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24ed14: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24ED14u;
    SET_GPR_U32(ctx, 31, 0x24ED1Cu);
    ctx->pc = 0x24ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED14u;
    // 0x24ed18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24ED14u, 0x24ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED1Cu;
label_24ed1c:
    // 0x24ed1c: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x24ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ed20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24ed20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ed24: 0x0  nop
    ctx->pc = 0x24ed24u;
    // NOP
    // 0x24ed28: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x24ed28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ed2c: 0x0  nop
    ctx->pc = 0x24ed2cu;
    // NOP
    // 0x24ed30: 0x450000be  bc1f        . + 4 + (0xBE << 2)
    ctx->pc = 0x24ED30u;
    {
        const bool branch_taken_0x24ed30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED30u;
        // 0x24ed34: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed30) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24ED38u;
    // 0x24ed38: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24ed38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24ed3c: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x24ED3Cu;
    {
        const bool branch_taken_0x24ed3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED3Cu;
        // 0x24ed40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed3c) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24ED44u;
    // 0x24ed44: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ed48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24ed48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ed4c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24ed4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ed50: 0x0  nop
    ctx->pc = 0x24ed50u;
    // NOP
    // 0x24ed54: 0x450000b6  bc1f        . + 4 + (0xB6 << 2)
    ctx->pc = 0x24ED54u;
    {
        const bool branch_taken_0x24ed54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED54u;
        // 0x24ed58: 0xe6400604  swc1        $f0, 0x604($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed54) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24ED5Cu;
    // 0x24ed5c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24ed60: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24ed60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24ed64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24ED64u;
    {
        const bool branch_taken_0x24ed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED64u;
        // 0x24ed68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed64) {
            ctx->pc = 0x24ED90u;
            goto label_24ed90;
        }
    }
    ctx->pc = 0x24ED6Cu;
    // 0x24ed6c: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x24ed6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x24ed70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24ED70u;
    {
        const bool branch_taken_0x24ed70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED70u;
        // 0x24ed74: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed70) {
            ctx->pc = 0x24EDA4u;
            goto label_24eda4;
        }
    }
    ctx->pc = 0x24ED78u;
    // 0x24ed78: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24ED78u;
    {
        const bool branch_taken_0x24ed78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED78u;
        // 0x24ed7c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed78) {
            ctx->pc = 0x24EDA4u;
            goto label_24eda4;
        }
    }
    ctx->pc = 0x24ED80u;
    // 0x24ed80: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24ED80u;
    {
        const bool branch_taken_0x24ed80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ed80) {
            ctx->pc = 0x24ED84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED80u;
            // 0x24ed84: 0x924217c0  lbu         $v0, 0x17C0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDA8u;
            goto label_24eda8;
        }
    }
    ctx->pc = 0x24ED88u;
    // 0x24ed88: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x24ED88u;
    {
        const bool branch_taken_0x24ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED88u;
        // 0x24ed8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed88) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24ED90u;
label_24ed90:
    // 0x24ed90: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x24ed94: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x24ED94u;
    {
        const bool branch_taken_0x24ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED94u;
        // 0x24ed98: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed94) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24ED9Cu;
    // 0x24ed9c: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x24ED9Cu;
    {
        const bool branch_taken_0x24ed9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ed9c) {
            ctx->pc = 0x24EDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED9Cu;
            // 0x24eda0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24EDA4u;
label_24eda4:
    // 0x24eda4: 0x924217c0  lbu         $v0, 0x17C0($s2)
    ctx->pc = 0x24eda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6080)));
label_24eda8:
    // 0x24eda8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24edac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24edacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24edb0: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x24edb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24edb4: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x24EDB4u;
    {
        const bool branch_taken_0x24edb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB4u;
        // 0x24edb8: 0xa24217c0  sb          $v0, 0x17C0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6080), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edb4) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24EDBCu;
    // 0x24edbc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24edc0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24EDC0u;
    SET_GPR_U32(ctx, 31, 0x24EDC8u);
    ctx->pc = 0x24EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDC0u;
    // 0x24edc4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24EDC0u, 0x24EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDC8u;
label_24edc8:
    // 0x24edc8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24edcc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24edccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24edd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24EDD0u;
    {
        const bool branch_taken_0x24edd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDD0u;
        // 0x24edd4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edd0) {
            ctx->pc = 0x24EDF0u;
            goto label_24edf0;
        }
    }
    ctx->pc = 0x24EDD8u;
    // 0x24edd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24eddc: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x24eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x24ede0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ede4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ede8: 0x800008  jr          $a0
    ctx->pc = 0x24EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EDF0u: goto label_24edf0;
            case 0x24EE0Cu: goto label_24ee0c;
            case 0x24EE28u: goto label_24ee28;
            case 0x24EE44u: goto label_24ee44;
            case 0x24EE60u: goto label_24ee60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EDE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24EDF0u;
label_24edf0:
    // 0x24edf0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24EDF0u;
    SET_GPR_U32(ctx, 31, 0x24EDF8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24EDF0u, 0x24EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDF8u;
label_24edf8:
    // 0x24edf8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24edf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24edfc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24edfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24ee00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24EE04u;
    {
        const bool branch_taken_0x24ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee04) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE0Cu;
label_24ee0c:
    // 0x24ee0c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24EE0Cu;
    SET_GPR_U32(ctx, 31, 0x24EE14u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24EE0Cu, 0x24EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE14u;
label_24ee14:
    // 0x24ee14: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x24ee14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x24ee18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24ee18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24ee1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24EE20u;
    {
        const bool branch_taken_0x24ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee20) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE28u;
label_24ee28:
    // 0x24ee28: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24EE28u;
    SET_GPR_U32(ctx, 31, 0x24EE30u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24EE28u, 0x24EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE30u;
label_24ee30:
    // 0x24ee30: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24ee30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24ee34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ee34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ee38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24EE3Cu;
    {
        const bool branch_taken_0x24ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee3c) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE44u;
label_24ee44:
    // 0x24ee44: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24EE44u;
    SET_GPR_U32(ctx, 31, 0x24EE4Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24EE44u, 0x24EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE4Cu;
label_24ee4c:
    // 0x24ee4c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24ee4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24ee50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ee50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ee54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ee58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE58u;
    {
        const bool branch_taken_0x24ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee58) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE60u;
label_24ee60:
    // 0x24ee60: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24EE60u;
    SET_GPR_U32(ctx, 31, 0x24EE68u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24EE60u, 0x24EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE68u;
label_24ee68:
    // 0x24ee68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24ee68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24ee6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ee6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24ee70:
    // 0x24ee70: 0x0  nop
    ctx->pc = 0x24ee70u;
    // NOP
    // 0x24ee74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ee74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee78: 0x0  nop
    ctx->pc = 0x24ee78u;
    // NOP
    // 0x24ee7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24EE7Cu;
    {
        const bool branch_taken_0x24ee7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee7c) {
            ctx->pc = 0x24EE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE7Cu;
            // 0x24ee80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EE84u;
            goto label_24ee84;
        }
    }
    ctx->pc = 0x24EE84u;
label_24ee84:
    // 0x24ee84: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x24EE84u;
    {
        const bool branch_taken_0x24ee84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE84u;
        // 0x24ee88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee84) {
            ctx->pc = 0x24F030u;
            goto label_24f030;
        }
    }
    ctx->pc = 0x24EE8Cu;
    // 0x24ee8c: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24EE8Cu;
    SET_GPR_U32(ctx, 31, 0x24EE94u);
    ctx->pc = 0x24EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE8Cu;
    // 0x24ee90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24EE8Cu, 0x24EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE94u;
label_24ee94:
    // 0x24ee94: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x24EE94u;
    {
        const bool branch_taken_0x24ee94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE94u;
        // 0x24ee98: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee94) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24EE9Cu;
    // 0x24ee9c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x24ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24eea0: 0xa24017c0  sb          $zero, 0x17C0($s2)
    ctx->pc = 0x24eea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6080), (uint8_t)GPR_U32(ctx, 0));
    // 0x24eea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24eea8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x24EEA8u;
    {
        const bool branch_taken_0x24eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEA8u;
        // 0x24eeac: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eea8) {
            ctx->pc = 0x24F02Cu;
            goto label_24f02c;
        }
    }
    ctx->pc = 0x24EEB0u;
label_24eeb0:
    // 0x24eeb0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24eeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eeb8: 0x8c433a70  lw          $v1, 0x3A70($v0)
    ctx->pc = 0x24eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14960)));
    // 0x24eebc: 0x8c453a74  lw          $a1, 0x3A74($v0)
    ctx->pc = 0x24eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14964)));
    // 0x24eec0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24eec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24eec4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24EEC4u;
    SET_GPR_U32(ctx, 31, 0x24EECCu);
    ctx->pc = 0x24EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEC4u;
    // 0x24eec8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24EEC4u, 0x24EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EECCu;
label_24eecc:
    // 0x24eecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24eeccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24eed0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24eed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eed4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24eed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eed8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24eed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24eedc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24eedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24eee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24eee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eee4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24EEE4u;
    SET_GPR_U32(ctx, 31, 0x24EEECu);
    ctx->pc = 0x24EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEE4u;
    // 0x24eee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24EEE4u, 0x24EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEECu;
label_24eeec:
    // 0x24eeec: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x24eeecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x24eef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eef4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24EEF4u;
    SET_GPR_U32(ctx, 31, 0x24EEFCu);
    ctx->pc = 0x24EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEF4u;
    // 0x24eef8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24EEF4u, 0x24EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEFCu;
label_24eefc:
    // 0x24eefc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ef00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef04: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24ef04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24ef08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ef0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24ef0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ef10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24ef14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24ef18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef1c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24EF1Cu;
    SET_GPR_U32(ctx, 31, 0x24EF24u);
    ctx->pc = 0x24EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF1Cu;
    // 0x24ef20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24EF1Cu, 0x24EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF24u;
label_24ef24:
    // 0x24ef24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef28: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x24ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24ef2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ef2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef30: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x24ef30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x24ef34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x24ef34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24ef38: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x24EF38u;
    SET_GPR_U32(ctx, 31, 0x24EF40u);
    ctx->pc = 0x24EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF38u;
    // 0x24ef3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x24EF38u, 0x24EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF40u;
label_24ef40:
    // 0x24ef40: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24ef40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24ef44: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24ef48: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x24ef48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24ef4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ef4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ef54: 0xae4305f0  sw          $v1, 0x5F0($s2)
    ctx->pc = 0x24ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
    // 0x24ef58: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x24ef58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x24ef5c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24ef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24ef60:
    // 0x24ef60: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x24ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ef64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef68: 0x0  nop
    ctx->pc = 0x24ef68u;
    // NOP
    // 0x24ef6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24ef6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef70: 0x0  nop
    ctx->pc = 0x24ef70u;
    // NOP
    // 0x24ef74: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x24EF74u;
    {
        const bool branch_taken_0x24ef74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ef74) {
            ctx->pc = 0x24EF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EF74u;
            // 0x24ef78: 0x8e4205f0  lw          $v0, 0x5F0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EF9Cu;
            goto label_24ef9c;
        }
    }
    ctx->pc = 0x24EF7Cu;
    // 0x24ef7c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ef80: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24ef84: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x24ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24ef88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24ef88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ef8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ef8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ef90: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x24ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x24ef94: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x24ef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x24ef98: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x24ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
label_24ef9c:
    // 0x24ef9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24EF9Cu;
    {
        const bool branch_taken_0x24ef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF9Cu;
        // 0x24efa0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef9c) {
            ctx->pc = 0x24EFCCu;
            goto label_24efcc;
        }
    }
    ctx->pc = 0x24EFA4u;
    // 0x24efa4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24EFA4u;
    SET_GPR_U32(ctx, 31, 0x24EFACu);
    ctx->pc = 0x24EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFA4u;
    // 0x24efa8: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24EFA4u, 0x24EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFACu;
label_24efac:
    // 0x24efac: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24efb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efb4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x24efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x24efb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24efbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24efbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24efc0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24efc4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24EFC4u;
    SET_GPR_U32(ctx, 31, 0x24EFCCu);
    ctx->pc = 0x24EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFC4u;
    // 0x24efc8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24EFC4u, 0x24EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFCCu;
label_24efcc:
    // 0x24efcc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24EFCCu;
    SET_GPR_U32(ctx, 31, 0x24EFD4u);
    ctx->pc = 0x24EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFCCu;
    // 0x24efd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24EFCCu, 0x24EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFD4u;
label_24efd4:
    // 0x24efd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24EFD4u;
    {
        const bool branch_taken_0x24efd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24efd4) {
            ctx->pc = 0x24F004u;
            goto label_24f004;
        }
    }
    ctx->pc = 0x24EFDCu;
    // 0x24efdc: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24EFDCu;
    SET_GPR_U32(ctx, 31, 0x24EFE4u);
    ctx->pc = 0x24EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFDCu;
    // 0x24efe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24EFDCu, 0x24EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFE4u;
label_24efe4:
    // 0x24efe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EFE4u;
    {
        const bool branch_taken_0x24efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24efe4) {
            ctx->pc = 0x24EFFCu;
            goto label_24effc;
        }
    }
    ctx->pc = 0x24EFECu;
    // 0x24efec: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24EFECu;
    SET_GPR_U32(ctx, 31, 0x24EFF4u);
    ctx->pc = 0x24EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFECu;
    // 0x24eff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24EFECu, 0x24EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFF4u;
label_24eff4:
    // 0x24eff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EFF4u;
    {
        const bool branch_taken_0x24eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eff4) {
            ctx->pc = 0x24F004u;
            goto label_24f004;
        }
    }
    ctx->pc = 0x24EFFCu;
label_24effc:
    // 0x24effc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24EFFCu;
    SET_GPR_U32(ctx, 31, 0x24F004u);
    ctx->pc = 0x24F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFFCu;
    // 0x24f000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24EFFCu, 0x24F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F004u;
label_24f004:
    // 0x24f004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f008: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24f008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f00c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f010: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24F010u;
    SET_GPR_U32(ctx, 31, 0x24F018u);
    ctx->pc = 0x24F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F010u;
    // 0x24f014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24F010u, 0x24F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F018u;
label_24f018:
    // 0x24f018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f01c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24F01Cu;
    SET_GPR_U32(ctx, 31, 0x24F024u);
    ctx->pc = 0x24F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F01Cu;
    // 0x24f020: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24F01Cu, 0x24F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F024u;
label_24f024:
    // 0x24f024: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x24F024u;
    SET_GPR_U32(ctx, 31, 0x24F02Cu);
    ctx->pc = 0x24F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F024u;
    // 0x24f028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x24F024u, 0x24F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F02Cu;
label_24f02c:
    // 0x24f02c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24f02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24f030:
    // 0x24f030: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24f030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24f034:
    // 0x24f034: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24f034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f038: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24f038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f03c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24f03cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f044: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x24f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f048: 0x3e00008  jr          $ra
    ctx->pc = 0x24F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F048u;
        // 0x24f04c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F050u;
}
