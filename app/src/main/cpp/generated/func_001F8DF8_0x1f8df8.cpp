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

// Function: func_001F8DF8
// Address: 0x1f8df8 - 0x1f9070
void func_001F8DF8_0x1f8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8DF8_0x1f8df8");
#endif

    switch (ctx->pc) {
        case 0x1f8e60u: goto label_1f8e60;
        case 0x1f8e94u: goto label_1f8e94;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f78u: goto label_1f8f78;
        case 0x1f8f9cu: goto label_1f8f9c;
        default: break;
    }

    ctx->pc = 0x1f8df8u;

    // 0x1f8df8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1f8df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1f8dfc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1f8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1f8e00: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1f8e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1f8e04: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8e08: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1f8e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1f8e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e10: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1f8e10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f8e14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f8e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e18: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1f8e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1f8e1c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f8e1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1f8e20: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1f8e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1f8e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f8e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8e2c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f8e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8e30: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f8e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8e34: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8e38: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f8e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8e3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f8e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f8e40: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f8e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f8e44: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1f8e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f8e48: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1f8e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8e4c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f8e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e58: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F8E58u;
    SET_GPR_U32(ctx, 31, 0x1F8E60u);
    ctx->pc = 0x1F8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E58u;
    // 0x1f8e5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F8E58u, 0x1F8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E60u;
label_1f8e60:
    // 0x1f8e60: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f8e60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8e64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f8e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8e68: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f8e6c: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8E6Cu;
    {
        const bool branch_taken_0x1f8e6c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E6Cu;
        // 0x1f8e70: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e6c) {
            ctx->pc = 0x1F8E88u;
            goto label_1f8e88;
        }
    }
    ctx->pc = 0x1F8E74u;
    // 0x1f8e74: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f8e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8e78: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1f8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8e7c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f8e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8e80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f8e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f8e84: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f8e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f8e88:
    // 0x1f8e88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e8c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x1F8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E94u);
    ctx->pc = 0x1F8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E8Cu;
    // 0x1f8e90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1F8E8Cu, 0x1F8E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E94u;
label_1f8e94:
    // 0x1f8e94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f8e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e98: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x1f8e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f8e9c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8ea0: 0xc6260014  lwc1        $f6, 0x14($s1)
    ctx->pc = 0x1f8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f8ea4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1f8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f8ea8: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x1f8ea8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x1f8eac: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1f8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8eb0: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x1f8eb0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x1f8eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8ebc: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x1f8ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x1f8ec0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1f8ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f8ec4: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x1f8ec4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x1f8ec8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f8ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f8ecc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1f8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f8ed0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1f8ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1f8ed4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f8ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f8ed8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1f8ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1f8edc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1f8edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f8ee0: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x1f8ee0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f8ee4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1f8ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8ee8: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1f8ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8eec: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8ef0: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1f8ef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f8ef4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f8ef8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1f8ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8efc: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x1f8efcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8f00: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f04: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f8f04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f8f08: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f8f0c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1f8f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8f10: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x1f8f10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8f14: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f18: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x1f8f18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f8f1c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1f8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f8f20: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x1f8f20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8f24: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1f8f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8f28: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f2c: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x1f8f2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f8f30: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1f8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f8f34: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1f8f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8f38: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x1f8f38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8f3c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f40: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8f44: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x1f8f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f8f48: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x1f8f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8f4c: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x1f8f4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8f50: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f54: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x1f8f54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1f8f58: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1f8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f8f5c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f8f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8f60: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x1f8f60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f8f64: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x1f8f64u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f8f68:
    // 0x1f8f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f8f70: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F8F70u;
    SET_GPR_U32(ctx, 31, 0x1F8F78u);
    ctx->pc = 0x1F8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F70u;
    // 0x1f8f74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F8F70u, 0x1F8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F78u;
label_1f8f78:
    // 0x1f8f78: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f8f78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8f7c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1f8f7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8f80: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f8f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8f84: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8f88: 0x8e25aff0  lw          $a1, -0x5010($s1)
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x1f8f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f8f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f94: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F8F94u;
    SET_GPR_U32(ctx, 31, 0x1F8F9Cu);
    ctx->pc = 0x1F8F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F94u;
    // 0x1f8f98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F8F94u, 0x1F8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F9Cu;
label_1f8f9c:
    // 0x1f8f9c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f8fa0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F8FA0u;
    {
        const bool branch_taken_0x1f8fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FA0u;
        // 0x1f8fa4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fa0) {
            ctx->pc = 0x1F8F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8f68;
        }
    }
    ctx->pc = 0x1F8FA8u;
    // 0x1f8fa8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8fac: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1f8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8fb4: 0x0  nop
    ctx->pc = 0x1f8fb4u;
    // NOP
    // 0x1f8fb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8FB8u;
    {
        const bool branch_taken_0x1f8fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8fb8) {
            ctx->pc = 0x1F8FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FB8u;
            // 0x1f8fbc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FC0u;
            goto label_1f8fc0;
        }
    }
    ctx->pc = 0x1F8FC0u;
label_1f8fc0:
    // 0x1f8fc0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f8fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8fc8: 0x0  nop
    ctx->pc = 0x1f8fc8u;
    // NOP
    // 0x1f8fcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8FCCu;
    {
        const bool branch_taken_0x1f8fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8fcc) {
            ctx->pc = 0x1F8FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FCCu;
            // 0x1f8fd0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FD4u;
            goto label_1f8fd4;
        }
    }
    ctx->pc = 0x1F8FD4u;
label_1f8fd4:
    // 0x1f8fd4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1f8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8fd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8fdc: 0x0  nop
    ctx->pc = 0x1f8fdcu;
    // NOP
    // 0x1f8fe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8FE0u;
    {
        const bool branch_taken_0x1f8fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8fe0) {
            ctx->pc = 0x1F8FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FE0u;
            // 0x1f8fe4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FE8u;
            goto label_1f8fe8;
        }
    }
    ctx->pc = 0x1F8FE8u;
label_1f8fe8:
    // 0x1f8fe8: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1f8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8fec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8ff0: 0x0  nop
    ctx->pc = 0x1f8ff0u;
    // NOP
    // 0x1f8ff4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8FF4u;
    {
        const bool branch_taken_0x1f8ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8ff4) {
            ctx->pc = 0x1F8FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FF4u;
            // 0x1f8ff8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FFCu;
            goto label_1f8ffc;
        }
    }
    ctx->pc = 0x1F8FFCu;
label_1f8ffc:
    // 0x1f8ffc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1f8ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9004: 0x0  nop
    ctx->pc = 0x1f9004u;
    // NOP
    // 0x1f9008: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9008u;
    {
        const bool branch_taken_0x1f9008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9008) {
            ctx->pc = 0x1F900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9008u;
            // 0x1f900c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9010u;
            goto label_1f9010;
        }
    }
    ctx->pc = 0x1F9010u;
label_1f9010:
    // 0x1f9010: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x1f9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9018: 0x0  nop
    ctx->pc = 0x1f9018u;
    // NOP
    // 0x1f901c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F901Cu;
    {
        const bool branch_taken_0x1f901c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f901c) {
            ctx->pc = 0x1F9020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F901Cu;
            // 0x1f9020: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9024u;
            goto label_1f9024;
        }
    }
    ctx->pc = 0x1F9024u;
label_1f9024:
    // 0x1f9024: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1f9024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f902c: 0x0  nop
    ctx->pc = 0x1f902cu;
    // NOP
    // 0x1f9030: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9030u;
    {
        const bool branch_taken_0x1f9030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9030) {
            ctx->pc = 0x1F9034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9030u;
            // 0x1f9034: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9038u;
            goto label_1f9038;
        }
    }
    ctx->pc = 0x1F9038u;
label_1f9038:
    // 0x1f9038: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f9038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f903c: 0x0  nop
    ctx->pc = 0x1f903cu;
    // NOP
    // 0x1f9040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9040u;
    {
        const bool branch_taken_0x1f9040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9040u;
        // 0x1f9044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9040) {
            ctx->pc = 0x1F904Cu;
            goto label_1f904c;
        }
    }
    ctx->pc = 0x1F9048u;
    // 0x1f9048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f904c:
    // 0x1f904c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1f904cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f9050: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1f9050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f9054: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1f9054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f9058: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1f9058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f905c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1f905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f9060: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1f9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f9064: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9064u;
        // 0x1f9068: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F906Cu;
    // 0x1f906c: 0x0  nop
    ctx->pc = 0x1f906cu;
    // NOP
    ctx->pc = 0x1f9070u;
}
