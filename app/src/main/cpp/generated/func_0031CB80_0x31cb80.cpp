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

// Function: func_0031CB80
// Address: 0x31cb80 - 0x31cc48
void func_0031CB80_0x31cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CB80_0x31cb80");
#endif

    switch (ctx->pc) {
        case 0x31cbb0u: goto label_31cbb0;
        case 0x31cc24u: goto label_31cc24;
        case 0x31cc30u: goto label_31cc30;
        default: break;
    }

    ctx->pc = 0x31cb80u;

    // 0x31cb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31cb84: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x31cb88: 0x30c80001  andi        $t0, $a2, 0x1
    ctx->pc = 0x31cb88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x31cb8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31cb90: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x31cb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x31cb94: 0x3421f800  ori         $at, $at, 0xF800
    ctx->pc = 0x31cb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63488);
    // 0x31cb98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31cb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31cb9c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x31cb9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x31cba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31cba4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31cba8: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x31cba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31cbac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x31cbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31cbb0:
    // 0x31cbb0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x31cbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31cbb4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x31cbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31cbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cbbc: 0x0  nop
    ctx->pc = 0x31cbbcu;
    // NOP
    // 0x31cbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31cbc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31cbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31cbc8: 0x0  nop
    ctx->pc = 0x31cbc8u;
    // NOP
    // 0x31cbcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31cbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31cbd0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x31cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x31cbd4: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CBD4u;
    {
        const bool branch_taken_0x31cbd4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x31CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBD4u;
        // 0x31cbd8: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbd4) {
            ctx->pc = 0x31CBF0u;
            goto label_31cbf0;
        }
    }
    ctx->pc = 0x31CBDCu;
    // 0x31cbdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31cbdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cbe0: 0x0  nop
    ctx->pc = 0x31cbe0u;
    // NOP
    // 0x31cbe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31cbe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31CBE8u;
    {
        const bool branch_taken_0x31cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBE8u;
        // 0x31cbec: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbe8) {
            ctx->pc = 0x31CC04u;
            goto label_31cc04;
        }
    }
    ctx->pc = 0x31CBF0u;
label_31cbf0:
    // 0x31cbf0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31cbf0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cbf4: 0x0  nop
    ctx->pc = 0x31cbf4u;
    // NOP
    // 0x31cbf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cbf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31cbfc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31cbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31cc00: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31cc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_31cc04:
    // 0x31cc04: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x31cc04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x31cc08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31cc0c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x31cc0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x31cc10: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x31cc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x31cc14: 0x1520ffe6  bnez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31CC14u;
    {
        const bool branch_taken_0x31cc14 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC14u;
        // 0x31cc18: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc14) {
            ctx->pc = 0x31CBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cbb0;
        }
    }
    ctx->pc = 0x31CC1Cu;
    // 0x31cc1c: 0xc0c7296  jal         func_31CA58
    ctx->pc = 0x31CC1Cu;
    SET_GPR_U32(ctx, 31, 0x31CC24u);
    ctx->pc = 0x31CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC1Cu;
    // 0x31cc20: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CA58u, 0x31CC1Cu, 0x31CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC24u;
label_31cc24:
    // 0x31cc24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc28: 0xc057cac  jal         func_15F2B0
    ctx->pc = 0x31CC28u;
    SET_GPR_U32(ctx, 31, 0x31CC30u);
    ctx->pc = 0x31CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC28u;
    // 0x31cc2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2B0u, 0x31CC28u, 0x31CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC30u;
label_31cc30:
    // 0x31cc30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31cc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x31CC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC34u;
        // 0x31cc38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CC3Cu;
    // 0x31cc3c: 0x0  nop
    ctx->pc = 0x31cc3cu;
    // NOP
    // 0x31cc40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31cc44: 0x0  nop
    ctx->pc = 0x31cc44u;
    // NOP
    ctx->pc = 0x31cc48u;
}
