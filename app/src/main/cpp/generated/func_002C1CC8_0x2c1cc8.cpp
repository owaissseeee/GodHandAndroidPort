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

// Function: func_002C1CC8
// Address: 0x2c1cc8 - 0x2c1d68
void func_002C1CC8_0x2c1cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1CC8_0x2c1cc8");
#endif

    switch (ctx->pc) {
        case 0x2c1cd8u: goto label_2c1cd8;
        case 0x2c1ce8u: goto label_2c1ce8;
        default: break;
    }

    ctx->pc = 0x2c1cc8u;

    // 0x2c1cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1ccc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c1cd0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C1CD0u;
    SET_GPR_U32(ctx, 31, 0x2C1CD8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C1CD0u, 0x2C1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CD8u;
label_2c1cd8:
    // 0x2c1cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cdc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1ce0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c1ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1ce8:
    // 0x2c1ce8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2c1ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c1cec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c1cf0: 0x0  nop
    ctx->pc = 0x2c1cf0u;
    // NOP
    // 0x2c1cf4: 0x0  nop
    ctx->pc = 0x2c1cf4u;
    // NOP
    // 0x2c1cf8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C1CF8u;
    {
        const bool branch_taken_0x2c1cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CF8u;
        // 0x2c1cfc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cf8) {
            ctx->pc = 0x2C1CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1ce8;
        }
    }
    ctx->pc = 0x2C1D00u;
    // 0x2c1d00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c1d04: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x2c1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x2c1d08: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2c1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2c1d0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2c1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2c1d10: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1D10u;
    {
        const bool branch_taken_0x2c1d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D10u;
        // 0x2c1d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d10) {
            ctx->pc = 0x2C1D58u;
            goto label_2c1d58;
        }
    }
    ctx->pc = 0x2C1D18u;
    // 0x2c1d18: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x2c1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x2c1d1c: 0x13a20008  beq         $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1D1Cu;
    {
        const bool branch_taken_0x2c1d1c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D1Cu;
        // 0x2c1d20: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d1c) {
            ctx->pc = 0x2C1D40u;
            goto label_2c1d40;
        }
    }
    ctx->pc = 0x2C1D24u;
    // 0x2c1d24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c1d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c1d2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1d30: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c1d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c1d34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c1d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c1d3c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2c1d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c1d40:
    // 0x2c1d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1d4c: 0x0  nop
    ctx->pc = 0x2c1d4cu;
    // NOP
    // 0x2c1d50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1d54: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c1d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c1d58:
    // 0x2c1d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D5Cu;
        // 0x2c1d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1D64u;
    // 0x2c1d64: 0x0  nop
    ctx->pc = 0x2c1d64u;
    // NOP
    ctx->pc = 0x2c1d68u;
}
