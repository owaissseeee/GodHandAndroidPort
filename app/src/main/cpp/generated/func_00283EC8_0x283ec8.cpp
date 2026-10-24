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

// Function: func_00283EC8
// Address: 0x283ec8 - 0x284000
void func_00283EC8_0x283ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283EC8_0x283ec8");
#endif

    switch (ctx->pc) {
        case 0x283f00u: goto label_283f00;
        case 0x283fdcu: goto label_283fdc;
        case 0x283fe4u: goto label_283fe4;
        default: break;
    }

    ctx->pc = 0x283ec8u;

    // 0x283ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ed0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x283ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283ed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x283ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ed8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283ee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x283ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ee8: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x283ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x283eec: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x283eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x283ef0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x283ef4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x283ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x283ef8: 0xc0525ce  jal         func_149738
    ctx->pc = 0x283EF8u;
    SET_GPR_U32(ctx, 31, 0x283F00u);
    ctx->pc = 0x283EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283EF8u;
    // 0x283efc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x283EF8u, 0x283F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F00u;
label_283f00:
    // 0x283f00: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x283F00u;
    {
        const bool branch_taken_0x283f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F00u;
        // 0x283f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f00) {
            ctx->pc = 0x283FE4u;
            goto label_283fe4;
        }
    }
    ctx->pc = 0x283F08u;
    // 0x283f08: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x283f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x283f0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x283f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x283f10: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x283f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x283f14: 0x920602b4  lbu         $a2, 0x2B4($s0)
    ctx->pc = 0x283f14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x283f18: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x283f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x283f1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283f20: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x283f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x283f24: 0xa2050531  sb          $a1, 0x531($s0)
    ctx->pc = 0x283f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
    // 0x283f28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x283f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283f2c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x283f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x283f30: 0xae0021b0  sw          $zero, 0x21B0($s0)
    ctx->pc = 0x283f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8624), GPR_U32(ctx, 0));
    // 0x283f34: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x283F34u;
    {
        const bool branch_taken_0x283f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F34u;
        // 0x283f38: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f34) {
            ctx->pc = 0x283F48u;
            goto label_283f48;
        }
    }
    ctx->pc = 0x283F3Cu;
    // 0x283f3c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x283f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x283f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283F40u;
    {
        const bool branch_taken_0x283f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F40u;
        // 0x283f44: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f40) {
            ctx->pc = 0x283F4Cu;
            goto label_283f4c;
        }
    }
    ctx->pc = 0x283F48u;
label_283f48:
    // 0x283f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283f4c:
    // 0x283f4c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x283F4Cu;
    {
        const bool branch_taken_0x283f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283f4c) {
            ctx->pc = 0x283FD4u;
            goto label_283fd4;
        }
    }
    ctx->pc = 0x283F54u;
    // 0x283f54: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x283f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x283f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283F58u;
    {
        const bool branch_taken_0x283f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F58u;
        // 0x283f5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f58) {
            ctx->pc = 0x283F6Cu;
            goto label_283f6c;
        }
    }
    ctx->pc = 0x283F60u;
    // 0x283f60: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x283f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x283f64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283F64u;
    {
        const bool branch_taken_0x283f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F64u;
        // 0x283f68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f64) {
            ctx->pc = 0x283F70u;
            goto label_283f70;
        }
    }
    ctx->pc = 0x283F6Cu;
label_283f6c:
    // 0x283f6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283f70:
    // 0x283f70: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x283f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x283f74: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x283f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x283f78: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x283f78u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f80: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x283f84: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x283f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x283f88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x283f88u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x283f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x283f90: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x283f90u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f94: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x283f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x283f98: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x283f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x283f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283F9Cu;
    {
        const bool branch_taken_0x283f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F9Cu;
        // 0x283fa0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f9c) {
            ctx->pc = 0x283FB0u;
            goto label_283fb0;
        }
    }
    ctx->pc = 0x283FA4u;
    // 0x283fa4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x283fa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283FA8u;
    {
        const bool branch_taken_0x283fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FA8u;
        // 0x283fac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fa8) {
            ctx->pc = 0x283FB4u;
            goto label_283fb4;
        }
    }
    ctx->pc = 0x283FB0u;
label_283fb0:
    // 0x283fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283fb4:
    // 0x283fb4: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x283fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283fb8: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x283fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x283fbc: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x283fc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x283fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x283fc4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x283fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fc8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x283fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x283fcc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x283fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283fd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x283fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_283fd4:
    // 0x283fd4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x283FD4u;
    SET_GPR_U32(ctx, 31, 0x283FDCu);
    ctx->pc = 0x283FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FD4u;
    // 0x283fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x283FD4u, 0x283FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FDCu;
label_283fdc:
    // 0x283fdc: 0xc0a10d4  jal         func_284350
    ctx->pc = 0x283FDCu;
    SET_GPR_U32(ctx, 31, 0x283FE4u);
    ctx->pc = 0x283FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FDCu;
    // 0x283fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284350u, 0x283FDCu, 0x283FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FE4u;
label_283fe4:
    // 0x283fe4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x283fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fe8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283fec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x283FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FF4u;
        // 0x283ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283FFCu;
    // 0x283ffc: 0x0  nop
    ctx->pc = 0x283ffcu;
    // NOP
    ctx->pc = 0x284000u;
}
