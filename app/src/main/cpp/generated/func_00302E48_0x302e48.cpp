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

// Function: func_00302E48
// Address: 0x302e48 - 0x302f68
void func_00302E48_0x302e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302E48_0x302e48");
#endif

    switch (ctx->pc) {
        case 0x302e68u: goto label_302e68;
        case 0x302ef4u: goto label_302ef4;
        case 0x302f40u: goto label_302f40;
        case 0x302f48u: goto label_302f48;
        case 0x302f54u: goto label_302f54;
        default: break;
    }

    ctx->pc = 0x302e48u;

    // 0x302e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x302e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x302e4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x302e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x302e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302e58: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x302e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x302e5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e60: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x302E60u;
    SET_GPR_U32(ctx, 31, 0x302E68u);
    ctx->pc = 0x302E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E60u;
    // 0x302e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x302E60u, 0x302E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E68u;
label_302e68:
    // 0x302e68: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x302e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x302e6c: 0x8c4301a0  lw          $v1, 0x1A0($v0)
    ctx->pc = 0x302e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x302e70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302E70u;
    {
        const bool branch_taken_0x302e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e70) {
            ctx->pc = 0x302EA8u;
            goto label_302ea8;
        }
    }
    ctx->pc = 0x302E78u;
    // 0x302e78: 0x86020186  lh          $v0, 0x186($s0)
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 390)));
    // 0x302e7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x302e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302e80: 0x0  nop
    ctx->pc = 0x302e80u;
    // NOP
    // 0x302e84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x302e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x302e88: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x302e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302e90: 0x0  nop
    ctx->pc = 0x302e90u;
    // NOP
    // 0x302e94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x302e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x302e98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x302e98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x302e9c: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x302e9cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x302ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302EA0u;
    {
        const bool branch_taken_0x302ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EA0u;
        // 0x302ea4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ea0) {
            ctx->pc = 0x302EACu;
            goto label_302eac;
        }
    }
    ctx->pc = 0x302EA8u;
label_302ea8:
    // 0x302ea8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x302ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_302eac:
    // 0x302eac: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x302eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302eb0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x302eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302eb4: 0x0  nop
    ctx->pc = 0x302eb4u;
    // NOP
    // 0x302eb8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x302EB8u;
    {
        const bool branch_taken_0x302eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EB8u;
        // 0x302ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302eb8) {
            ctx->pc = 0x302EF4u;
            goto label_302ef4;
        }
    }
    ctx->pc = 0x302EC0u;
    // 0x302ec0: 0xc44101c4  lwc1        $f1, 0x1C4($v0)
    ctx->pc = 0x302ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302ec4: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x302ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ec8: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x302ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302ecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302ed0: 0xc6030130  lwc1        $f3, 0x130($s0)
    ctx->pc = 0x302ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302ed4: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x302ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x302ed8: 0xc44101c8  lwc1        $f1, 0x1C8($v0)
    ctx->pc = 0x302ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302edc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x302edcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x302ee0: 0xe602012c  swc1        $f2, 0x12C($s0)
    ctx->pc = 0x302ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x302ee4: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x302ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ee8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x302ee8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x302eec: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x302EECu;
    SET_GPR_U32(ctx, 31, 0x302EF4u);
    ctx->pc = 0x302EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302EECu;
    // 0x302ef0: 0xe6030130  swc1        $f3, 0x130($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x302EECu, 0x302EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302EF4u;
label_302ef4:
    // 0x302ef4: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x302ef8: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x302ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302efc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x302efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302f00: 0x0  nop
    ctx->pc = 0x302f00u;
    // NOP
    // 0x302f04: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x302F04u;
    {
        const bool branch_taken_0x302f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F04u;
        // 0x302f08: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f04) {
            ctx->pc = 0x302F48u;
            goto label_302f48;
        }
    }
    ctx->pc = 0x302F0Cu;
    // 0x302f0c: 0xc6030128  lwc1        $f3, 0x128($s0)
    ctx->pc = 0x302f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302f10: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x302f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f18: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x302f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x302f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302f28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x302f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f2c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x302f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x302f30: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x302f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x302f34: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x302f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x302f38: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x302F38u;
    SET_GPR_U32(ctx, 31, 0x302F40u);
    ctx->pc = 0x302F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F38u;
    // 0x302f3c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x302F38u, 0x302F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F40u;
label_302f40:
    // 0x302f40: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x302F40u;
    SET_GPR_U32(ctx, 31, 0x302F48u);
    ctx->pc = 0x302F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F40u;
    // 0x302f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x302F40u, 0x302F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F48u;
label_302f48:
    // 0x302f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f4c: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x302F4Cu;
    SET_GPR_U32(ctx, 31, 0x302F54u);
    ctx->pc = 0x302F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F4Cu;
    // 0x302f50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x302F4Cu, 0x302F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F54u;
label_302f54:
    // 0x302f54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x302f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302f58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302f5c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x302f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x302f60: 0x3e00008  jr          $ra
    ctx->pc = 0x302F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F60u;
        // 0x302f64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302F68u;
}
