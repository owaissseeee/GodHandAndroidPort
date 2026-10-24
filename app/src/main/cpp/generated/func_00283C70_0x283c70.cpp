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

// Function: func_00283C70
// Address: 0x283c70 - 0x283e58
void func_00283C70_0x283c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283C70_0x283c70");
#endif

    switch (ctx->pc) {
        case 0x283ce0u: goto label_283ce0;
        case 0x283d58u: goto label_283d58;
        case 0x283da4u: goto label_283da4;
        case 0x283df0u: goto label_283df0;
        default: break;
    }

    ctx->pc = 0x283c70u;

    // 0x283c70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x283c74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283c78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x283c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x283c7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x283c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x283c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283c88: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x283c88u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x283c8c: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x283c8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x283c90: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x283c90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x283c94: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x283c94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x283c98: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x283c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x283c9c: 0x14a20062  bne         $a1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x283C9Cu;
    {
        const bool branch_taken_0x283c9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x283CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C9Cu;
        // 0x283ca0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c9c) {
            ctx->pc = 0x283E28u;
            goto label_283e28;
        }
    }
    ctx->pc = 0x283CA4u;
    // 0x283ca4: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x283CA4u;
    {
        const bool branch_taken_0x283ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA4u;
        // 0x283ca8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ca4) {
            ctx->pc = 0x283E28u;
            goto label_283e28;
        }
    }
    ctx->pc = 0x283CACu;
    // 0x283cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283cb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x283cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x283cb4: 0x26105660  addiu       $s0, $s0, 0x5660
    ctx->pc = 0x283cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22112));
    // 0x283cb8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x283cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x283cbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x283cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x283cc0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x283cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x283cc4: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x283cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x283cc8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x283cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x283ccc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x283cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x283cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cd8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x283CD8u;
    SET_GPR_U32(ctx, 31, 0x283CE0u);
    ctx->pc = 0x283CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CD8u;
    // 0x283cdc: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x283CD8u, 0x283CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CE0u;
label_283ce0:
    // 0x283ce0: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x283ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x283ce4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x283ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x283ce8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x283ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x283cec: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x283cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283cf0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x283cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x283cf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x283cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x283cf8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x283cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x283cfc: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x283cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x283d00: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x283d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283d04: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x283d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x283d08: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x283d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x283d0c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x283d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x283d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d14: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x283d14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x283d18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x283d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x283d1c: 0xe6180010  swc1        $f24, 0x10($s0)
    ctx->pc = 0x283d1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x283d20: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x283d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283d24: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x283d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x283d28: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x283d28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x283d2c: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x283d2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x283d30: 0xe6180020  swc1        $f24, 0x20($s0)
    ctx->pc = 0x283d30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x283d34: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x283d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x283d38: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x283d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x283d3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x283d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x283d40: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x283d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x283d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d48: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x283d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x283d4c: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x283d4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x283d50: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x283D50u;
    SET_GPR_U32(ctx, 31, 0x283D58u);
    ctx->pc = 0x283D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D50u;
    // 0x283d54: 0xe4750008  swc1        $f21, 0x8($v1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x283D50u, 0x283D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D58u;
label_283d58:
    // 0x283d58: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x283d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x283d5c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283d60: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x283d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x283d64: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x283d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x283d68: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x283d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x283d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d70: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x283d70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x283d74: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x283d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x283d78: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x283d78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x283d7c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x283d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x283d80: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x283d80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x283d84: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x283d84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x283d88: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x283d88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x283d8c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x283d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x283d90: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x283d90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x283d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d98: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x283d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x283d9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x283D9Cu;
    SET_GPR_U32(ctx, 31, 0x283DA4u);
    ctx->pc = 0x283DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D9Cu;
    // 0x283da0: 0xe4750008  swc1        $f21, 0x8($v1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x283D9Cu, 0x283DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DA4u;
label_283da4:
    // 0x283da4: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x283da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x283da8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x283da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283dac: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x283dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x283db0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x283db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x283db4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x283db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x283db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dbc: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x283dbcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x283dc0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x283dc4: 0xe6180010  swc1        $f24, 0x10($s0)
    ctx->pc = 0x283dc4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x283dc8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x283dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x283dcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x283dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x283dd0: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x283dd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x283dd4: 0xe6180020  swc1        $f24, 0x20($s0)
    ctx->pc = 0x283dd4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x283dd8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x283dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x283ddc: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x283ddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x283de0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x283de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x283de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283de8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x283DE8u;
    SET_GPR_U32(ctx, 31, 0x283DF0u);
    ctx->pc = 0x283DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283DE8u;
    // 0x283dec: 0xe4750008  swc1        $f21, 0x8($v1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x283DE8u, 0x283DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DF0u;
label_283df0:
    // 0x283df0: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x283df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x283df4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x283df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283df8: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x283df8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x283dfc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x283dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x283e00: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x283e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x283e04: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x283e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x283e08: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x283e08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x283e0c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x283e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x283e10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x283e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x283e14: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x283e14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x283e18: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x283e18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x283e1c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x283e1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x283e20: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x283e20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x283e24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x283e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_283e28:
    // 0x283e28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283e2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283e30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x283e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283e38: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x283e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x283e3c: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x283e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x283e40: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x283e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x283e44: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x283e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283e48: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x283e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283e4c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x283e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x283e50: 0x3e00008  jr          $ra
    ctx->pc = 0x283E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E50u;
        // 0x283e54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283E58u;
}
