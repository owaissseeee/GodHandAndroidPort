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

// Function: cCollisionSolid_constructSphere
// Address: 0x1339f0 - 0x133a80
void cCollisionSolid_constructSphere_0x1339f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolid_constructSphere_0x1339f0");
#endif

    switch (ctx->pc) {
        case 0x133a1cu: goto label_133a1c;
        default: break;
    }

    ctx->pc = 0x1339f0u;

    // 0x1339f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1339f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1339f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1339f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1339f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1339fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x133a00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x133a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x133a04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x133a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a08: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x133a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x133a0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x133a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133a14: 0xc04ce62  jal         func_133988
    ctx->pc = 0x133A14u;
    SET_GPR_U32(ctx, 31, 0x133A1Cu);
    ctx->pc = 0x133A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A14u;
    // 0x133a18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x133988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133988u, 0x133A14u, 0x133A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A1Cu;
label_133a1c:
    // 0x133a1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x133a20: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x133a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x133a24: 0x2442d7e0  addiu       $v0, $v0, -0x2820
    ctx->pc = 0x133a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
    // 0x133a28: 0xae300040  sw          $s0, 0x40($s1)
    ctx->pc = 0x133a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
    // 0x133a2c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x133a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x133a30: 0xfa200050  sqc2        $vf0, 0x50($s1)
    ctx->pc = 0x133a30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133a34: 0xfa200060  sqc2        $vf0, 0x60($s1)
    ctx->pc = 0x133a34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133a3c: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x133A3Cu;
    {
        const bool branch_taken_0x133a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x133A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A3Cu;
        // 0x133a40: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a3c) {
            ctx->pc = 0x133A5Cu;
            goto label_133a5c;
        }
    }
    ctx->pc = 0x133A44u;
    // 0x133a44: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x133a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133a48: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x133a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x133a4c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x133a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133a50: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x133a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x133a54: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x133a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133a58: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x133a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_133a5c:
    // 0x133a5c: 0xe6340070  swc1        $f20, 0x70($s1)
    ctx->pc = 0x133a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x133a60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x133a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x133a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133a68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x133a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133a6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x133a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133a74: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x133a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x133a78: 0x3e00008  jr          $ra
    ctx->pc = 0x133A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A78u;
        // 0x133a7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133A80u;
}
