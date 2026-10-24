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

// Function: cOmWeapon_dropToGround
// Address: 0x1cf8b0 - 0x1cfa20
void cOmWeapon_dropToGround_0x1cf8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_dropToGround_0x1cf8b0");
#endif

    switch (ctx->pc) {
        case 0x1cf9fcu: goto label_1cf9fc;
        default: break;
    }

    ctx->pc = 0x1cf8b0u;

    // 0x1cf8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf8b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cf8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cf8b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8c0: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf8c4: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CF8C4u;
    {
        const bool branch_taken_0x1cf8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8c4) {
            ctx->pc = 0x1CF8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8C4u;
            // 0x1cf8c8: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF994u;
            goto label_1cf994;
        }
    }
    ctx->pc = 0x1CF8CCu;
    // 0x1cf8cc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1cf8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cf8d0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1cf8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cf8d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF8D4u;
    {
        const bool branch_taken_0x1cf8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8D4u;
        // 0x1cf8d8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8d4) {
            ctx->pc = 0x1CF8E8u;
            goto label_1cf8e8;
        }
    }
    ctx->pc = 0x1CF8DCu;
    // 0x1cf8dc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cf8e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF8E0u;
    {
        const bool branch_taken_0x1cf8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8E0u;
        // 0x1cf8e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8e0) {
            ctx->pc = 0x1CF8ECu;
            goto label_1cf8ec;
        }
    }
    ctx->pc = 0x1CF8E8u;
label_1cf8e8:
    // 0x1cf8e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8ec:
    // 0x1cf8ec: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf8f0: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cf8f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf8f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF8F8u;
    {
        const bool branch_taken_0x1cf8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf8f8) {
            ctx->pc = 0x1CF8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8F8u;
            // 0x1cf8fc: 0x8e020600  lw          $v0, 0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF91Cu;
            goto label_1cf91c;
        }
    }
    ctx->pc = 0x1CF900u;
    // 0x1cf900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf904: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cf904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cf908: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf90c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf910: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf914: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf918: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1cf91c:
    // 0x1cf91c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf920: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF920u;
    {
        const bool branch_taken_0x1cf920 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf920) {
            ctx->pc = 0x1CF940u;
            goto label_1cf940;
        }
    }
    ctx->pc = 0x1CF928u;
    // 0x1cf928: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf92c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cf930: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf934: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cf934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cf938: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf93c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cf940:
    // 0x1cf940: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF940u;
            // 0x1cf944: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF94Cu;
            goto label_1cf94c;
        }
    }
    ctx->pc = 0x1CF948u;
    // 0x1cf948: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1cf94c:
    // 0x1cf94c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cf94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf950: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF950u;
    {
        const bool branch_taken_0x1cf950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1CF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF950u;
        // 0x1cf954: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf950) {
            ctx->pc = 0x1CF970u;
            goto label_1cf970;
        }
    }
    ctx->pc = 0x1CF958u;
    // 0x1cf958: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf95c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1cf95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf960: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1cf960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf964: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cf964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cf968: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1cf968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf96c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1cf96cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1cf970:
    // 0x1cf970: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cf970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cf974: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF974u;
    {
        const bool branch_taken_0x1cf974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1CF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF974u;
        // 0x1cf978: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf974) {
            ctx->pc = 0x1CF990u;
            goto label_1cf990;
        }
    }
    ctx->pc = 0x1CF97Cu;
    // 0x1cf97c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cf980: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1cf980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf984: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cf988: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf98c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cf990:
    // 0x1cf990: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cf994:
    // 0x1cf994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf9a0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cf9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cf9a4: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1cf9a8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cf9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cf9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf9b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cf9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf9b4: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cf9b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cf9b8: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cf9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cf9bc: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cf9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cf9c0: 0xe6010630  swc1        $f1, 0x630($s0)
    ctx->pc = 0x1cf9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1cf9c4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cf9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cf9c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF9C8u;
    {
        const bool branch_taken_0x1cf9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9C8u;
        // 0x1cf9cc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9c8) {
            ctx->pc = 0x1CF9DCu;
            goto label_1cf9dc;
        }
    }
    ctx->pc = 0x1CF9D0u;
    // 0x1cf9d0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cf9d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF9D4u;
    {
        const bool branch_taken_0x1cf9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9D4u;
        // 0x1cf9d8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9d4) {
            ctx->pc = 0x1CF9E0u;
            goto label_1cf9e0;
        }
    }
    ctx->pc = 0x1CF9DCu;
label_1cf9dc:
    // 0x1cf9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9e0:
    // 0x1cf9e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF9E0u;
    {
        const bool branch_taken_0x1cf9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9E0u;
        // 0x1cf9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9e0) {
            ctx->pc = 0x1CFA10u;
            goto label_1cfa10;
        }
    }
    ctx->pc = 0x1CF9E8u;
    // 0x1cf9e8: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cf9ec: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1cf9f0: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cf9f4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CF9F4u;
    SET_GPR_U32(ctx, 31, 0x1CF9FCu);
    ctx->pc = 0x1CF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9F4u;
    // 0x1cf9f8: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CF9F4u, 0x1CF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9FCu;
label_1cf9fc:
    // 0x1cf9fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfa00: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cfa00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfa04: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cfa04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfa08: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cfa08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfa0c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1cfa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1cfa10:
    // 0x1cfa10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cfa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfa14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfa18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA18u;
        // 0x1cfa1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA20u;
}
