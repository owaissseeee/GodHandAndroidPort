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

// Function: cObjBase_addNullSpeed_Rotation
// Address: 0x14f9f0 - 0x14fa60
void cObjBase_addNullSpeed_Rotation_0x14f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_addNullSpeed_Rotation_0x14f9f0");
#endif

    switch (ctx->pc) {
        case 0x14fa54u: goto label_14fa54;
        default: break;
    }

    ctx->pc = 0x14f9f0u;

    // 0x14f9f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14f9f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f9f8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x14f9fc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x14f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x14fa00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fa04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14fa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14fa08: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14FA08u;
    {
        const bool branch_taken_0x14fa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA08u;
        // 0x14fa0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa08) {
            ctx->pc = 0x14FA54u;
            goto label_14fa54;
        }
    }
    ctx->pc = 0x14FA10u;
    // 0x14fa10: 0xc4450360  lwc1        $f5, 0x360($v0)
    ctx->pc = 0x14fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14fa14: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x14fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14fa18: 0xc4430364  lwc1        $f3, 0x364($v0)
    ctx->pc = 0x14fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fa1c: 0xc4440368  lwc1        $f4, 0x368($v0)
    ctx->pc = 0x14fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14fa20: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x14fa20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x14fa24: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x14fa24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x14fa28: 0xc4420100  lwc1        $f2, 0x100($v0)
    ctx->pc = 0x14fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fa2c: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x14fa2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x14fa30: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x14fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa34: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x14fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fa38: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x14fa38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x14fa3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x14fa3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x14fa40: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x14fa40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x14fa44: 0xe4420100  swc1        $f2, 0x100($v0)
    ctx->pc = 0x14fa44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x14fa48: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x14fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x14fa4c: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x14FA4Cu;
    SET_GPR_U32(ctx, 31, 0x14FA54u);
    ctx->pc = 0x14FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA4Cu;
    // 0x14fa50: 0xe4410108  swc1        $f1, 0x108($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x14FA4Cu, 0x14FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA54u;
label_14fa54:
    // 0x14fa54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fa54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fa58: 0x3e00008  jr          $ra
    ctx->pc = 0x14FA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA58u;
        // 0x14fa5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FA60u;
}
