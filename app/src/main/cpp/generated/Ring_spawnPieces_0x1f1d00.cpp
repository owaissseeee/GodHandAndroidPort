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

// Function: Ring_spawnPieces
// Address: 0x1f1d00 - 0x1f1df8
void Ring_spawnPieces_0x1f1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ring_spawnPieces_0x1f1d00");
#endif

    switch (ctx->pc) {
        case 0x1f1d60u: goto label_1f1d60;
        case 0x1f1d7cu: goto label_1f1d7c;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1d94u: goto label_1f1d94;
        case 0x1f1dbcu: goto label_1f1dbc;
        default: break;
    }

    ctx->pc = 0x1f1d00u;

    // 0x1f1d00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f1d04: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x1f1d04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f1d08: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x1f1d08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f1d0c: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x1f1d0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f1d10: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1f1d10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f1d14: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1f1d14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f1d18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f1d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1d20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d2c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f1d2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f1d30: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f1d30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f1d34: 0x3c014290  lui         $at, 0x4290
    ctx->pc = 0x1f1d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17040 << 16));
    // 0x1f1d38: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f1d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f1d3c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1f1d40: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1f1d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1f1d44: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1f1d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1f1d48: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1f1d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1d4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f1d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f1d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f1d54: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f1d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f1d58: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f1d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f1d5c: 0x0  nop
    ctx->pc = 0x1f1d5cu;
    // NOP
label_1f1d60:
    // 0x1f1d60: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1f1d60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1d64: 0x0  nop
    ctx->pc = 0x1f1d64u;
    // NOP
    // 0x1f1d68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f1d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f1d6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f1d70: 0x461a6302  mul.s       $f12, $f12, $f26
    ctx->pc = 0x1f1d70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[26]);
    // 0x1f1d74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1F1D74u;
    SET_GPR_U32(ctx, 31, 0x1F1D7Cu);
    ctx->pc = 0x1F1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D74u;
    // 0x1f1d78: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1F1D74u, 0x1F1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D7Cu;
label_1f1d7c:
    // 0x1f1d7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f1d7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1d80: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1F1D80u;
    SET_GPR_U32(ctx, 31, 0x1F1D88u);
    ctx->pc = 0x1F1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D80u;
    // 0x1f1d84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1F1D80u, 0x1F1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D88u;
label_1f1d88:
    // 0x1f1d88: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x1f1d88u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f1d8c: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x1F1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F1D94u);
    ctx->pc = 0x1F1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D8Cu;
    // 0x1f1d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x1F1D8Cu, 0x1F1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D94u;
label_1f1d94:
    // 0x1f1d94: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f1d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f1d98: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f1d9c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1f1d9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f1da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1da4: 0xe7b8000c  swc1        $f24, 0xC($sp)
    ctx->pc = 0x1f1da4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f1da8: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1f1dac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f1dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f1db0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1db4: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F1DB4u;
    SET_GPR_U32(ctx, 31, 0x1F1DBCu);
    ctx->pc = 0x1F1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DB4u;
    // 0x1f1db8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F1DB4u, 0x1F1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DBCu;
label_1f1dbc:
    // 0x1f1dbc: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1f1dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1dc0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F1DC0u;
    {
        const bool branch_taken_0x1f1dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DC0u;
        // 0x1f1dc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dc0) {
            ctx->pc = 0x1F1D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1d60;
        }
    }
    ctx->pc = 0x1F1DC8u;
    // 0x1f1dc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f1dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1dd0: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x1f1dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f1dd4: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x1f1dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f1dd8: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x1f1dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f1ddc: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1f1ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f1de0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1f1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f1de4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1f1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f1de8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DECu;
        // 0x1f1df0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1DF4u;
    // 0x1f1df4: 0x0  nop
    ctx->pc = 0x1f1df4u;
    // NOP
    ctx->pc = 0x1f1df8u;
}
