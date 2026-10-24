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

// Function: cSpline_setBasePoint
// Address: 0x2d4dc8 - 0x2d4ef8
void cSpline_setBasePoint_0x2d4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSpline_setBasePoint_0x2d4dc8");
#endif

    switch (ctx->pc) {
        case 0x2d4e20u: goto label_2d4e20;
        case 0x2d4e70u: goto label_2d4e70;
        case 0x2d4ec0u: goto label_2d4ec0;
        default: break;
    }

    ctx->pc = 0x2d4dc8u;

    // 0x2d4dc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4dcc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d4dd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d4dd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4de4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2d4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d4de8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4dec: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2d4decu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2d4df0: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x2d4df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4df4: 0x26523560  addiu       $s2, $s2, 0x3560
    ctx->pc = 0x2d4df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13664));
    // 0x2d4df8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2d4df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4dfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e00: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2d4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4e04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d4e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e08: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d4e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4e0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e10: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2d4e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4e14: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d4e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d4e18: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2D4E18u;
    SET_GPR_U32(ctx, 31, 0x2D4E20u);
    ctx->pc = 0x2D4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E18u;
    // 0x2d4e1c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2D4E18u, 0x2D4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E20u;
label_2d4e20:
    // 0x2d4e20: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2d4e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e28: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4e2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d4e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e30: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d4e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4e34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e38: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2d4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4e3c: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2d4e3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d4e40: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2d4e40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d4e44: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x2d4e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d4e48: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2d4e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d4e4c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4e50: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2d4e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4e54: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2d4e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4e58: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2d4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4e5c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d4e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4e60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d4e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4e64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d4e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d4e68: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2D4E68u;
    SET_GPR_U32(ctx, 31, 0x2D4E70u);
    ctx->pc = 0x2D4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E68u;
    // 0x2d4e6c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2D4E68u, 0x2D4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E70u;
label_2d4e70:
    // 0x2d4e70: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2d4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4e74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e78: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d4e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e80: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d4e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e88: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2d4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4e8c: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x2d4e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d4e90: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x2d4e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d4e94: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2d4e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2d4e98: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2d4e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2d4e9c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x2d4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4ea0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d4ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4ea4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2d4ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4ea8: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x2d4ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4eac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d4eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4eb0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d4eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4eb4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d4eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d4eb8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2D4EB8u;
    SET_GPR_U32(ctx, 31, 0x2D4EC0u);
    ctx->pc = 0x2D4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4EB8u;
    // 0x2d4ebc: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2D4EB8u, 0x2D4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EC0u;
label_2d4ec0:
    // 0x2d4ec0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4ec4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4ec8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2d4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4ecc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2d4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4ed0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d4ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d4ed4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2d4ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2d4ed8: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x2d4ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d4edc: 0xe6230028  swc1        $f3, 0x28($s1)
    ctx->pc = 0x2d4edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2d4ee0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d4ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4ee4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d4ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4eec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EF0u;
        // 0x2d4ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4EF8u;
}
