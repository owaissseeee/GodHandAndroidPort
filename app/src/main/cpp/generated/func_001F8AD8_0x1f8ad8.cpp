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

// Function: func_001F8AD8
// Address: 0x1f8ad8 - 0x1f8df8
void func_001F8AD8_0x1f8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8AD8_0x1f8ad8");
#endif

    switch (ctx->pc) {
        case 0x1f8b50u: goto label_1f8b50;
        case 0x1f8b84u: goto label_1f8b84;
        case 0x1f8b90u: goto label_1f8b90;
        case 0x1f8b9cu: goto label_1f8b9c;
        case 0x1f8c9cu: goto label_1f8c9c;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cb8u: goto label_1f8cb8;
        case 0x1f8cc4u: goto label_1f8cc4;
        case 0x1f8cd0u: goto label_1f8cd0;
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8cecu: goto label_1f8cec;
        case 0x1f8cf8u: goto label_1f8cf8;
        case 0x1f8d04u: goto label_1f8d04;
        default: break;
    }

    ctx->pc = 0x1f8ad8u;

    // 0x1f8ad8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1f8adc: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1f8adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1f8ae0: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1f8ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1f8ae4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f8ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8ae8: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1f8ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1f8aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8af0: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1f8af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1f8af4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f8af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8af8: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1f8af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1f8afc: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1f8afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1f8b00: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1f8b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1f8b04: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1f8b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1f8b08: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1f8b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x1f8b0c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1f8b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x1f8b10: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1f8b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1f8b14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8b18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f8b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8b1c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8b20: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8b24: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8b28: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f8b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8b2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f8b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f8b30: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f8b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f8b34: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1f8b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f8b38: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1f8b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8b3c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b48: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F8B48u;
    SET_GPR_U32(ctx, 31, 0x1F8B50u);
    ctx->pc = 0x1F8B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B48u;
    // 0x1f8b4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F8B48u, 0x1F8B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B50u;
label_1f8b50:
    // 0x1f8b50: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f8b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8b54: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8b58: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1f8b58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f8b5c: 0x13be0006  beq         $sp, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8B5Cu;
    {
        const bool branch_taken_0x1f8b5c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 30));
        ctx->pc = 0x1F8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B5Cu;
        // 0x1f8b60: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b5c) {
            ctx->pc = 0x1F8B78u;
            goto label_1f8b78;
        }
    }
    ctx->pc = 0x1F8B64u;
    // 0x1f8b64: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f8b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8b68: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1f8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8b6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f8b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8b70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f8b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f8b74: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f8b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f8b78:
    // 0x1f8b78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f8b7c: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F8B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B84u);
    ctx->pc = 0x1F8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B7Cu;
    // 0x1f8b80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F8B7Cu, 0x1F8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B84u;
label_1f8b84:
    // 0x1f8b84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f8b88: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F8B88u;
    SET_GPR_U32(ctx, 31, 0x1F8B90u);
    ctx->pc = 0x1F8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B88u;
    // 0x1f8b8c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F8B88u, 0x1F8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B90u;
label_1f8b90:
    // 0x1f8b90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f8b94: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F8B94u;
    SET_GPR_U32(ctx, 31, 0x1F8B9Cu);
    ctx->pc = 0x1F8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B94u;
    // 0x1f8b98: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F8B94u, 0x1F8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B9Cu;
label_1f8b9c:
    // 0x1f8b9c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1f8b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f8ba0: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x1f8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f8ba4: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1f8ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ba8: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x1f8ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1f8bac: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f8bb0: 0x460031c7  neg.s       $f7, $f6
    ctx->pc = 0x1f8bb0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[6]);
    // 0x1f8bb4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1f8bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bb8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1f8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8bbc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1f8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8bc0: 0x46004087  neg.s       $f2, $f8
    ctx->pc = 0x1f8bc0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[8]);
    // 0x1f8bc4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1f8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8bc8: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f8bcc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f8bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8bd0: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1f8bd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bd4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1f8bd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f8bd8: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1f8bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8bdc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1f8bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1f8be0: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x1f8be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f8be4: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x1f8be4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f8be8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1f8be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bec: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x1f8becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1f8bf0: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x1f8bf0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x1f8bf4: 0xe7a70070  swc1        $f7, 0x70($sp)
    ctx->pc = 0x1f8bf4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f8bf8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x1f8bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8bfc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f8bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f8c00: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1f8c00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c04: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1f8c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f8c08: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1f8c0c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1f8c0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1f8c10: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x1f8c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f8c14: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x1f8c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f8c18: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f8c1c: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x1f8c1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f8c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c24: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x1f8c24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f8c28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f8c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c2c: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x1f8c2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f8c30: 0xe7a700b0  swc1        $f7, 0xB0($sp)
    ctx->pc = 0x1f8c30u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f8c34: 0xe7a600c0  swc1        $f6, 0xC0($sp)
    ctx->pc = 0x1f8c34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f8c38: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x1f8c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1f8c3c: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1f8c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x1f8c40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f8c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f8c44: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x1f8c44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f8c48: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1f8c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1f8c4c: 0xe6880008  swc1        $f8, 0x8($s4)
    ctx->pc = 0x1f8c4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1f8c50: 0xe6c50004  swc1        $f5, 0x4($s6)
    ctx->pc = 0x1f8c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1f8c54: 0xe6c20008  swc1        $f2, 0x8($s6)
    ctx->pc = 0x1f8c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x1f8c58: 0xe6650004  swc1        $f5, 0x4($s3)
    ctx->pc = 0x1f8c58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1f8c5c: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1f8c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x1f8c60: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x1f8c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f8c64: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1f8c64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1f8c68: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x1f8c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x1f8c6c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1f8c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1f8c70: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x1f8c70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f8c74: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x1f8c74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1f8c78: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x1f8c78u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1f8c7c: 0xe6450004  swc1        $f5, 0x4($s2)
    ctx->pc = 0x1f8c7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1f8c80: 0xe6480008  swc1        $f8, 0x8($s2)
    ctx->pc = 0x1f8c80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f8c84: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1f8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1f8c88: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1f8c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1f8c8c: 0xe6a50004  swc1        $f5, 0x4($s5)
    ctx->pc = 0x1f8c8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1f8c90: 0xe6a80008  swc1        $f8, 0x8($s5)
    ctx->pc = 0x1f8c90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1f8c94: 0xc051d52  jal         func_147548
    ctx->pc = 0x1F8C94u;
    SET_GPR_U32(ctx, 31, 0x1F8C9Cu);
    ctx->pc = 0x1F8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C94u;
    // 0x1f8c98: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x1F8C94u, 0x1F8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C9Cu;
label_1f8c9c:
    // 0x1f8c9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f8c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca4: 0xc0a8e3a  jal         func_2A38E8
    ctx->pc = 0x1F8CA4u;
    SET_GPR_U32(ctx, 31, 0x1F8CACu);
    ctx->pc = 0x1F8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CA4u;
    // 0x1f8ca8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A38E8u, 0x1F8CA4u, 0x1F8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CACu;
label_1f8cac:
    // 0x1f8cac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f8cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb0: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CB0u;
    SET_GPR_U32(ctx, 31, 0x1F8CB8u);
    ctx->pc = 0x1F8CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CB0u;
    // 0x1f8cb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CB0u, 0x1F8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CB8u;
label_1f8cb8:
    // 0x1f8cb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f8cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cbc: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CBCu;
    SET_GPR_U32(ctx, 31, 0x1F8CC4u);
    ctx->pc = 0x1F8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CBCu;
    // 0x1f8cc0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CBCu, 0x1F8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CC4u;
label_1f8cc4:
    // 0x1f8cc4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f8cc8: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CC8u;
    SET_GPR_U32(ctx, 31, 0x1F8CD0u);
    ctx->pc = 0x1F8CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CC8u;
    // 0x1f8ccc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CC8u, 0x1F8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CD0u;
label_1f8cd0:
    // 0x1f8cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cd4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cd8: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CD8u;
    SET_GPR_U32(ctx, 31, 0x1F8CE0u);
    ctx->pc = 0x1F8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CD8u;
    // 0x1f8cdc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CD8u, 0x1F8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CE0u;
label_1f8ce0:
    // 0x1f8ce0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ce4: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CE4u;
    SET_GPR_U32(ctx, 31, 0x1F8CECu);
    ctx->pc = 0x1F8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CE4u;
    // 0x1f8ce8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CE4u, 0x1F8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CECu;
label_1f8cec:
    // 0x1f8cec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cf0: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CF0u;
    SET_GPR_U32(ctx, 31, 0x1F8CF8u);
    ctx->pc = 0x1F8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CF0u;
    // 0x1f8cf4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CF0u, 0x1F8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CF8u;
label_1f8cf8:
    // 0x1f8cf8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cfc: 0xc0a8e4c  jal         func_2A3930
    ctx->pc = 0x1F8CFCu;
    SET_GPR_U32(ctx, 31, 0x1F8D04u);
    ctx->pc = 0x1F8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CFCu;
    // 0x1f8d00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3930u, 0x1F8CFCu, 0x1F8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D04u;
label_1f8d04:
    // 0x1f8d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d08: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1f8d0c: 0x34428208  ori         $v0, $v0, 0x8208
    ctx->pc = 0x1f8d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33288);
    // 0x1f8d10: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8d14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D14u;
    {
        const bool branch_taken_0x1f8d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D14u;
        // 0x1f8d18: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d14) {
            ctx->pc = 0x1F8D28u;
            goto label_1f8d28;
        }
    }
    ctx->pc = 0x1F8D1Cu;
    // 0x1f8d1c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8d20: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F8D20u;
    {
        const bool branch_taken_0x1f8d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D20u;
        // 0x1f8d24: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d20) {
            ctx->pc = 0x1F8DB4u;
            goto label_1f8db4;
        }
    }
    ctx->pc = 0x1F8D28u;
label_1f8d28:
    // 0x1f8d28: 0x34424104  ori         $v0, $v0, 0x4104
    ctx->pc = 0x1f8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16644);
    // 0x1f8d2c: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8d30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D30u;
    {
        const bool branch_taken_0x1f8d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D30u;
        // 0x1f8d34: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d30) {
            ctx->pc = 0x1F8D44u;
            goto label_1f8d44;
        }
    }
    ctx->pc = 0x1F8D38u;
    // 0x1f8d38: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8d3c: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8D3Cu;
    {
        const bool branch_taken_0x1f8d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D3Cu;
        // 0x1f8d40: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d3c) {
            ctx->pc = 0x1F8DB4u;
            goto label_1f8db4;
        }
    }
    ctx->pc = 0x1F8D44u;
label_1f8d44:
    // 0x1f8d44: 0x34422082  ori         $v0, $v0, 0x2082
    ctx->pc = 0x1f8d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8322);
    // 0x1f8d48: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8d4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D4Cu;
    {
        const bool branch_taken_0x1f8d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D4Cu;
        // 0x1f8d50: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d4c) {
            ctx->pc = 0x1F8D60u;
            goto label_1f8d60;
        }
    }
    ctx->pc = 0x1F8D54u;
    // 0x1f8d54: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8d58: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F8D58u;
    {
        const bool branch_taken_0x1f8d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D58u;
        // 0x1f8d5c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d58) {
            ctx->pc = 0x1F8DB4u;
            goto label_1f8db4;
        }
    }
    ctx->pc = 0x1F8D60u;
label_1f8d60:
    // 0x1f8d60: 0x34421041  ori         $v0, $v0, 0x1041
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4161);
    // 0x1f8d64: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8d68: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D68u;
    {
        const bool branch_taken_0x1f8d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D68u;
        // 0x1f8d6c: 0x3c020082  lui         $v0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d68) {
            ctx->pc = 0x1F8D7Cu;
            goto label_1f8d7c;
        }
    }
    ctx->pc = 0x1F8D70u;
    // 0x1f8d70: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8d74: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8D74u;
    {
        const bool branch_taken_0x1f8d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D74u;
        // 0x1f8d78: 0x3c020082  lui         $v0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d74) {
            ctx->pc = 0x1F8DB4u;
            goto label_1f8db4;
        }
    }
    ctx->pc = 0x1F8D7Cu;
label_1f8d7c:
    // 0x1f8d7c: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1f8d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x1f8d80: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8d84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D84u;
    {
        const bool branch_taken_0x1f8d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D84u;
        // 0x1f8d88: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d84) {
            ctx->pc = 0x1F8D98u;
            goto label_1f8d98;
        }
    }
    ctx->pc = 0x1F8D8Cu;
    // 0x1f8d8c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8d90: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8D90u;
    {
        const bool branch_taken_0x1f8d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D90u;
        // 0x1f8d94: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d90) {
            ctx->pc = 0x1F8DB4u;
            goto label_1f8db4;
        }
    }
    ctx->pc = 0x1F8D98u;
label_1f8d98:
    // 0x1f8d98: 0x34420410  ori         $v0, $v0, 0x410
    ctx->pc = 0x1f8d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1040);
    // 0x1f8d9c: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x1f8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1f8da0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8DA0u;
    {
        const bool branch_taken_0x1f8da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DA0u;
        // 0x1f8da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8da0) {
            ctx->pc = 0x1F8DB8u;
            goto label_1f8db8;
        }
    }
    ctx->pc = 0x1F8DA8u;
    // 0x1f8da8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1f8da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8dac: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8DACu;
    {
        const bool branch_taken_0x1f8dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DACu;
        // 0x1f8db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dac) {
            ctx->pc = 0x1F8DB8u;
            goto label_1f8db8;
        }
    }
    ctx->pc = 0x1F8DB4u;
label_1f8db4:
    // 0x1f8db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8db8:
    // 0x1f8db8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1f8db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f8dbc: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1f8dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f8dc0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1f8dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f8dc4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1f8dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f8dc8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1f8dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8dcc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1f8dccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f8dd0: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1f8dd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f8dd4: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1f8dd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f8dd8: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1f8dd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f8ddc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1f8ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f8de0: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1f8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DE4u;
        // 0x1f8de8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8DECu;
    // 0x1f8dec: 0x0  nop
    ctx->pc = 0x1f8decu;
    // NOP
    // 0x1f8df0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8df4: 0x0  nop
    ctx->pc = 0x1f8df4u;
    // NOP
    ctx->pc = 0x1f8df8u;
}
