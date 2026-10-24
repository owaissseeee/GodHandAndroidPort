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

// Function: cIDBase_initEntry
// Address: 0x2aa2d0 - 0x2aa3d8
void cIDBase_initEntry_0x2aa2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_initEntry_0x2aa2d0");
#endif

    ctx->pc = 0x2aa2d0u;

    // 0x2aa2d0: 0x3c0200bc  lui         $v0, 0xBC
    ctx->pc = 0x2aa2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)188 << 16));
    // 0x2aa2d4: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x2aa2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x2aa2d8: 0x3442614e  ori         $v0, $v0, 0x614E
    ctx->pc = 0x2aa2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24910);
    // 0x2aa2dc: 0x24aa027c  addiu       $t2, $a1, 0x27C
    ctx->pc = 0x2aa2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
    // 0x2aa2e0: 0xacc20084  sw          $v0, 0x84($a2)
    ctx->pc = 0x2aa2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
    // 0x2aa2e4: 0x24a40130  addiu       $a0, $a1, 0x130
    ctx->pc = 0x2aa2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x2aa2e8: 0x24a80070  addiu       $t0, $a1, 0x70
    ctx->pc = 0x2aa2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2aa2ec: 0x24a901b4  addiu       $t1, $a1, 0x1B4
    ctx->pc = 0x2aa2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
    // 0x2aa2f0: 0x90a30066  lbu         $v1, 0x66($a1)
    ctx->pc = 0x2aa2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 102)));
    // 0x2aa2f4: 0x24a70218  addiu       $a3, $a1, 0x218
    ctx->pc = 0x2aa2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 536));
    // 0x2aa2f8: 0xa0c30088  sb          $v1, 0x88($a2)
    ctx->pc = 0x2aa2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa2fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2aa300: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x2aa300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x2aa304: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2aa304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa308: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x2aa308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x2aa30c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2aa30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa310: 0xe4c1003c  swc1        $f1, 0x3C($a2)
    ctx->pc = 0x2aa310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x2aa314: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2aa314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa318: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x2aa318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x2aa31c: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x2aa31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa320: 0xe4c10044  swc1        $f1, 0x44($a2)
    ctx->pc = 0x2aa320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x2aa324: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2aa324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa328: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x2aa328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x2aa32c: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x2aa32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2aa330: 0xacc2004c  sw          $v0, 0x4C($a2)
    ctx->pc = 0x2aa330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 2));
    // 0x2aa334: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2aa334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa338: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x2aa338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x2aa33c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2aa33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa340: 0xe4c1006c  swc1        $f1, 0x6C($a2)
    ctx->pc = 0x2aa340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
    // 0x2aa344: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2aa344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa348: 0xe4c00070  swc1        $f0, 0x70($a2)
    ctx->pc = 0x2aa348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
    // 0x2aa34c: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x2aa34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa350: 0xe4c10074  swc1        $f1, 0x74($a2)
    ctx->pc = 0x2aa350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x2aa354: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x2aa354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa358: 0xe4c00078  swc1        $f0, 0x78($a2)
    ctx->pc = 0x2aa358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
    // 0x2aa35c: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x2aa35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa360: 0xe4c1007c  swc1        $f1, 0x7C($a2)
    ctx->pc = 0x2aa360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
    // 0x2aa364: 0x90a20054  lbu         $v0, 0x54($a1)
    ctx->pc = 0x2aa364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2aa368: 0xa0c20089  sb          $v0, 0x89($a2)
    ctx->pc = 0x2aa368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa36c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2aa36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2aa370: 0xa0c30028  sb          $v1, 0x28($a2)
    ctx->pc = 0x2aa370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa374: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x2aa374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2aa378: 0xa0c20029  sb          $v0, 0x29($a2)
    ctx->pc = 0x2aa378u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa37c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2aa37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2aa380: 0xa0c3002a  sb          $v1, 0x2A($a2)
    ctx->pc = 0x2aa380u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa384: 0x90a20055  lbu         $v0, 0x55($a1)
    ctx->pc = 0x2aa384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 85)));
    // 0x2aa388: 0xa0c2008a  sb          $v0, 0x8A($a2)
    ctx->pc = 0x2aa388u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa38c: 0x90a30056  lbu         $v1, 0x56($a1)
    ctx->pc = 0x2aa38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x2aa390: 0xa0c3008b  sb          $v1, 0x8B($a2)
    ctx->pc = 0x2aa390u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa394: 0x90a20058  lbu         $v0, 0x58($a1)
    ctx->pc = 0x2aa394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2aa398: 0xa0c2008d  sb          $v0, 0x8D($a2)
    ctx->pc = 0x2aa398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa39c: 0x94a3005a  lhu         $v1, 0x5A($a1)
    ctx->pc = 0x2aa39cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 90)));
    // 0x2aa3a0: 0xa4c3008e  sh          $v1, 0x8E($a2)
    ctx->pc = 0x2aa3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x2aa3a4: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x2aa3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa3a8: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x2aa3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x2aa3ac: 0x90a20059  lbu         $v0, 0x59($a1)
    ctx->pc = 0x2aa3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 89)));
    // 0x2aa3b0: 0xa0c2002b  sb          $v0, 0x2B($a2)
    ctx->pc = 0x2aa3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa3b4: 0x90a30065  lbu         $v1, 0x65($a1)
    ctx->pc = 0x2aa3b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 101)));
    // 0x2aa3b8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2aa3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2aa3bc: 0xa0c3008c  sb          $v1, 0x8C($a2)
    ctx->pc = 0x2aa3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa3c0: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x2aa3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x2aa3c4: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x2aa3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x2aa3c8: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x2aa3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x2aa3cc: 0xacca0010  sw          $t2, 0x10($a2)
    ctx->pc = 0x2aa3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
    // 0x2aa3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3D0u;
        // 0x2aa3d4: 0xa4c00090  sh          $zero, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA3D8u;
}
