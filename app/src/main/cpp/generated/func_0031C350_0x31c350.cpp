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

// Function: func_0031C350
// Address: 0x31c350 - 0x31c438
void func_0031C350_0x31c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C350_0x31c350");
#endif

    switch (ctx->pc) {
        case 0x31c36cu: goto label_31c36c;
        default: break;
    }

    ctx->pc = 0x31c350u;

    // 0x31c350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c354: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31c358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c364: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x31C364u;
    SET_GPR_U32(ctx, 31, 0x31C36Cu);
    ctx->pc = 0x31C368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C364u;
    // 0x31c368: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x31C364u, 0x31C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C36Cu;
label_31c36c:
    // 0x31c36c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x31C36Cu;
    {
        const bool branch_taken_0x31c36c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C36Cu;
        // 0x31c370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c36c) {
            ctx->pc = 0x31C3A8u;
            goto label_31c3a8;
        }
    }
    ctx->pc = 0x31C374u;
    // 0x31c374: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x31c378: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31c37c: 0x24445880  addiu       $a0, $v0, 0x5880
    ctx->pc = 0x31c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x31c380: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31c380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c384: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c388: 0xe4405880  swc1        $f0, 0x5880($v0)
    ctx->pc = 0x31c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x755880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755880u, _value); } while (0); }
    // 0x31c38c: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x31c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x31c390: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x31c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c394: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x31c394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x755884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755884u, _value); } while (0); }
    // 0x31c398: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x31c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x31c39c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c3a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C3A0u;
    {
        const bool branch_taken_0x31c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3A0u;
        // 0x31c3a4: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3a0) {
            ctx->pc = 0x31C3CCu;
            goto label_31c3cc;
        }
    }
    ctx->pc = 0x31C3A8u;
label_31c3a8:
    // 0x31c3a8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x31c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c3ac: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31c3b0: 0x24435880  addiu       $v1, $v0, 0x5880
    ctx->pc = 0x31c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x31c3b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31c3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3b8: 0xe4415880  swc1        $f1, 0x5880($v0)
    ctx->pc = 0x31c3b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x755880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755880u, _value); } while (0); }
    // 0x31c3bc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c3c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x31c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x755884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755884u, _value); } while (0); }
    // 0x31c3c4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x31c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c3c8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x31c3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x755888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755888u, _value); } while (0); }
label_31c3cc:
    // 0x31c3cc: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31C3CCu;
    {
        const bool branch_taken_0x31c3cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c3cc) {
            ctx->pc = 0x31C3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C3CCu;
            // 0x31c3d0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3D4u;
    // 0x31c3d4: 0xc4a10100  lwc1        $f1, 0x100($a1)
    ctx->pc = 0x31c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c3d8: 0x24c25880  addiu       $v0, $a2, 0x5880
    ctx->pc = 0x31c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22656));
    // 0x31c3dc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x31c3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x31c3e0: 0xc4a00104  lwc1        $f0, 0x104($a1)
    ctx->pc = 0x31c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c3e4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x31c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x31c3e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31C3E8u;
    {
        const bool branch_taken_0x31c3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3E8u;
        // 0x31c3ec: 0xc4a10108  lwc1        $f1, 0x108($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3e8) {
            ctx->pc = 0x31C404u;
            goto label_31c404;
        }
    }
    ctx->pc = 0x31C3F0u;
label_31c3f0:
    // 0x31c3f0: 0x24c25880  addiu       $v0, $a2, 0x5880
    ctx->pc = 0x31c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22656));
    // 0x31c3f4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x31c3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x31c3f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x31c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c3fc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x31c3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x31c400: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x31c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c404:
    // 0x31c404: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x31c404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x31c408: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31c40c: 0x24c45880  addiu       $a0, $a2, 0x5880
    ctx->pc = 0x31c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 22656));
    // 0x31c410: 0x2443b000  addiu       $v1, $v0, -0x5000
    ctx->pc = 0x31c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x31c414: 0xc440b000  lwc1        $f0, -0x5000($v0)
    ctx->pc = 0x31c414u;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c418: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31c418u;
    { uint32_t bits = FAST_READ32(0x5CB004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c41c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c428: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x31c428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x31c42c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x31c42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x31c430: 0x3e00008  jr          $ra
    ctx->pc = 0x31C430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C430u;
        // 0x31c434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C438u;
}
