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

// Function: func_002FDDA8
// Address: 0x2fdda8 - 0x2fde60
void func_002FDDA8_0x2fdda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FDDA8_0x2fdda8");
#endif

    switch (ctx->pc) {
        case 0x2fdddcu: goto label_2fdddc;
        case 0x2fde0cu: goto label_2fde0c;
        case 0x2fde18u: goto label_2fde18;
        default: break;
    }

    ctx->pc = 0x2fdda8u;

    // 0x2fdda8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fdda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fddac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fddacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fddb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fddb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fddb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fddb8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2fddb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fddbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fddbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddc0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fddc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddc8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2fddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2fddcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fddd4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FDDD4u;
    SET_GPR_U32(ctx, 31, 0x2FDDDCu);
    ctx->pc = 0x2FDDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDD4u;
    // 0x2fddd8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FDDD4u, 0x2FDDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDDCu;
label_2fdddc:
    // 0x2fdddc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2fdddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdde0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fdde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdde4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2fdde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2fdde8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fdde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fddec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fddecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddf0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2fddf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2fddf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fddf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fddf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fddf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fddfc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fddfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fde00: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2fde00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2fde04: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2FDE04u;
    SET_GPR_U32(ctx, 31, 0x2FDE0Cu);
    ctx->pc = 0x2FDE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE04u;
    // 0x2fde08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2FDE04u, 0x2FDE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE0Cu;
label_2fde0c:
    // 0x2fde0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fde0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fde10: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FDE10u;
    SET_GPR_U32(ctx, 31, 0x2FDE18u);
    ctx->pc = 0x2FDE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE10u;
    // 0x2fde14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FDE10u, 0x2FDE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE18u;
label_2fde18:
    // 0x2fde18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fde1c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FDE1Cu;
    {
        const bool branch_taken_0x2fde1c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2FDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE1Cu;
        // 0x2fde20: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde1c) {
            ctx->pc = 0x2FDE4Cu;
            goto label_2fde4c;
        }
    }
    ctx->pc = 0x2FDE24u;
    // 0x2fde24: 0x3404fec0  ori         $a0, $zero, 0xFEC0
    ctx->pc = 0x2fde24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65216);
    // 0x2fde28: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x2fde28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x2fde2c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2fde2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fde30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDE30u;
    {
        const bool branch_taken_0x2fde30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE30u;
        // 0x2fde34: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde30) {
            ctx->pc = 0x2FDE4Cu;
            goto label_2fde4c;
        }
    }
    ctx->pc = 0x2FDE38u;
    // 0x2fde38: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x2fde38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x2fde3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fde40: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2fde40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fde44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDE44u;
    {
        const bool branch_taken_0x2fde44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE44u;
        // 0x2fde48: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde44) {
            ctx->pc = 0x2FDE50u;
            goto label_2fde50;
        }
    }
    ctx->pc = 0x2FDE4Cu;
label_2fde4c:
    // 0x2fde4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fde50:
    // 0x2fde50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fde50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fde54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fde54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fde58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE58u;
        // 0x2fde5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE60u;
}
