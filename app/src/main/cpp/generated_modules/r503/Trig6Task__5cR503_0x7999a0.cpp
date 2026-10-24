#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: Trig6Task__5cR503
// Address: 0x7999a0 - 0x799b00
void Trig6Task__5cR503_0x7999a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig6Task__5cR503_0x7999a0");
#endif

    switch (ctx->pc) {
        case 0x7999d8u: goto label_7999d8;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999f4u: goto label_7999f4;
        case 0x799a10u: goto label_799a10;
        case 0x799a40u: goto label_799a40;
        case 0x799a50u: goto label_799a50;
        case 0x799a68u: goto label_799a68;
        case 0x799a98u: goto label_799a98;
        case 0x799accu: goto label_799acc;
        case 0x799ad8u: goto label_799ad8;
        default: break;
    }

    ctx->pc = 0x7999a0u;

    // 0x7999a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7999a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7999a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7999a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7999a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7999ac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7999b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7999b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7999b4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x7999b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7999b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7999bc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7999c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7999c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7999c4: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x7999c8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x7999c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x7999cc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x7999ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x7999d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x7999E4u;
            goto label_7999e4;
        }
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999DCu;
    SET_GPR_U32(ctx, 31, 0x7999E4u);
    ctx->pc = 0x7999E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999DCu;
    // 0x7999e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999DCu, 0x7999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E4u;
label_7999e4:
    // 0x7999e4: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x7999e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7999ec: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7999ECu;
    SET_GPR_U32(ctx, 31, 0x7999F4u);
    ctx->pc = 0x7999F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ECu;
    // 0x7999f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7999ECu, 0x7999F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7999f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999fc: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7999FCu;
    {
        const bool branch_taken_0x7999fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999FCu;
        // 0x799a00: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999fc) {
            ctx->pc = 0x7999D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999d8;
        }
    }
    ctx->pc = 0x799A04u;
    // 0x799a04: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799a08: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799a14: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799a1c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799a28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a2c: 0x3c013fef  lui         $at, 0x3FEF
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16367 << 16));
    // 0x799a30: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799a34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799a38: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A38u;
    SET_GPR_U32(ctx, 31, 0x799A40u);
    ctx->pc = 0x799A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A38u;
    // 0x799a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A38u, 0x799A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799a48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799a54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799a54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799a58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a60: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A60u;
    SET_GPR_U32(ctx, 31, 0x799A68u);
    ctx->pc = 0x799A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A60u;
    // 0x799a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A60u, 0x799A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x3c01c1b6  lui         $at, 0xC1B6
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49590 << 16));
    // 0x799a6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a74: 0x3c01c264  lui         $at, 0xC264
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49764 << 16));
    // 0x799a78: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a84: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x799a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799a88: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x799a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x799a8c: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x799a8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799a90: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0xe616000c  swc1        $f22, 0xC($s0) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x3c01c1ae  lui         $at, 0xC1AE
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49582 << 16));
    // 0x799a9c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x799a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x799aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa8: 0x3c01c269  lui         $at, 0xC269
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49769 << 16));
    // 0x799aac: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x799ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799abc: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x799abcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799ac0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x799ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x799ac4: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0xe616000c  swc1        $f22, 0xC($s0) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799ad0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799adc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799ae0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799ae4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799ae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799aec: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x799aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799af0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x799af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799af4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x799af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799af8: 0x3e00008  jr          $ra
    ctx->pc = 0x799AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF8u;
        // 0x799afc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B00u;
}
} // namespace gh_r503
