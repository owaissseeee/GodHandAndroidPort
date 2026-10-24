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

// Function: func_0012B928
// Address: 0x12b928 - 0x12b9f0
void func_0012B928_0x12b928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012B928_0x12b928");
#endif

    switch (ctx->pc) {
        case 0x12b964u: goto label_12b964;
        default: break;
    }

    ctx->pc = 0x12b928u;

    // 0x12b928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b92c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12b930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b938: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12b93c: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x12B93Cu;
    {
        const bool branch_taken_0x12b93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b93c) {
            ctx->pc = 0x12B940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B93Cu;
            // 0x12b940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B9E4u;
            goto label_12b9e4;
        }
    }
    ctx->pc = 0x12B944u;
    // 0x12b944: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12b944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12b948: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x12b94c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12b950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b954: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12b954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12b958: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12b958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12b95c: 0xc07232e  jal         func_1C8CB8
    ctx->pc = 0x12B95Cu;
    SET_GPR_U32(ctx, 31, 0x12B964u);
    ctx->pc = 0x12B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B95Cu;
    // 0x12b960: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CB8u, 0x12B95Cu, 0x12B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B964u;
label_12b964:
    // 0x12b964: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12b968: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x12b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12b96c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x12b970: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B970u;
    {
        const bool branch_taken_0x12b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b970) {
            ctx->pc = 0x12B974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B970u;
            // 0x12b974: 0x8e0206a0  lw          $v0, 0x6A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B994u;
            goto label_12b994;
        }
    }
    ctx->pc = 0x12B978u;
    // 0x12b978: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b97c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12b97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b980: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b984: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12b984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12b988: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b98c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12b98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12b990: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b994:
    // 0x12b994: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12b994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x12b998: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12b99c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b9a0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x12b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x12b9a4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x12b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b9ac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12b9b0: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12b9b4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x12b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x12b9b8: 0x24640490  addiu       $a0, $v1, 0x490
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x12b9bc: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B9BCu;
    {
        const bool branch_taken_0x12b9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b9bc) {
            ctx->pc = 0x12B9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B9BCu;
            // 0x12b9c0: 0xae0006a0  sw          $zero, 0x6A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B9E0u;
            goto label_12b9e0;
        }
    }
    ctx->pc = 0x12B9C4u;
    // 0x12b9c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9c8: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x12b9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
    // 0x12b9cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b9d0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x12b9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12b9d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9d8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x12b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12b9dc: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x12b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
label_12b9e0:
    // 0x12b9e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12b9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b9e4:
    // 0x12b9e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9E8u;
        // 0x12b9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B9F0u;
}
