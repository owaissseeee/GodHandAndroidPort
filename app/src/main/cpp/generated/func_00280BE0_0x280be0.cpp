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

// Function: func_00280BE0
// Address: 0x280be0 - 0x280db8
void func_00280BE0_0x280be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280BE0_0x280be0");
#endif

    switch (ctx->pc) {
        case 0x280da8u: goto label_280da8;
        default: break;
    }

    ctx->pc = 0x280be0u;

    // 0x280be0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280be8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x280be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x280bec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x280becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x280bf0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x280bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x280bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x280bf8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x280bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x280bfc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x280bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x280c00: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x280c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x280c04: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x280c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x280c08: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x280c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x280c0c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x280c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280c10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x280c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x280c14: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x280c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x280c18: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x280c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280c1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x280c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x280c20: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x280c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280c24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x280c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x280c28: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x280c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x280c2c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x280c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x280c30: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x280c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x280c34: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x280c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x280c38: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x280c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x280c3c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x280c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x280c40: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x280c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x280c44: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x280c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x280c48: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x280c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x280c4c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x280c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x280c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c54: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x280c54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x280c58: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x280c58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x280c5c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x280c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x280c60: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x280c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x280c64: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x280C64u;
    {
        const bool branch_taken_0x280c64 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x280C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C64u;
        // 0x280c68: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c64) {
            ctx->pc = 0x280C70u;
            goto label_280c70;
        }
    }
    ctx->pc = 0x280C6Cu;
    // 0x280c6c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x280c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_280c70:
    // 0x280c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x280c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280c74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280C74u;
    {
        const bool branch_taken_0x280c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C74u;
        // 0x280c78: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c74) {
            ctx->pc = 0x280C8Cu;
            goto label_280c8c;
        }
    }
    ctx->pc = 0x280C7Cu;
    // 0x280c7c: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x280c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x280c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280C84u;
    {
        const bool branch_taken_0x280c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C84u;
        // 0x280c88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c84) {
            ctx->pc = 0x280C90u;
            goto label_280c90;
        }
    }
    ctx->pc = 0x280C8Cu;
label_280c8c:
    // 0x280c8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280c90:
    // 0x280c90: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x280C90u;
    {
        const bool branch_taken_0x280c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C90u;
        // 0x280c94: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c90) {
            ctx->pc = 0x280DACu;
            goto label_280dac;
        }
    }
    ctx->pc = 0x280C98u;
    // 0x280c98: 0x914202b4  lbu         $v0, 0x2B4($t2)
    ctx->pc = 0x280c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 692)));
    // 0x280c9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280C9Cu;
    {
        const bool branch_taken_0x280c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C9Cu;
        // 0x280ca0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c9c) {
            ctx->pc = 0x280CB0u;
            goto label_280cb0;
        }
    }
    ctx->pc = 0x280CA4u;
    // 0x280ca4: 0x8d420278  lw          $v0, 0x278($t2)
    ctx->pc = 0x280ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 632)));
    // 0x280ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280CA8u;
    {
        const bool branch_taken_0x280ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA8u;
        // 0x280cac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ca8) {
            ctx->pc = 0x280CB4u;
            goto label_280cb4;
        }
    }
    ctx->pc = 0x280CB0u;
label_280cb0:
    // 0x280cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280cb4:
    // 0x280cb4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x280CB4u;
    {
        const bool branch_taken_0x280cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CB4u;
        // 0x280cb8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cb4) {
            ctx->pc = 0x280DACu;
            goto label_280dac;
        }
    }
    ctx->pc = 0x280CBCu;
    // 0x280cbc: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x280cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x280cc0: 0xac440148  sw          $a0, 0x148($v0)
    ctx->pc = 0x280cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 4));
    // 0x280cc4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x280cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x280cc8: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x280cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x280ccc: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x280CCCu;
    {
        const bool branch_taken_0x280ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x280CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CCCu;
        // 0x280cd0: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ccc) {
            ctx->pc = 0x280CECu;
            goto label_280cec;
        }
    }
    ctx->pc = 0x280CD4u;
    // 0x280cd4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x280cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280cd8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x280cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x280cdc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x280cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280ce0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x280ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x280ce4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x280ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ce8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x280ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_280cec:
    // 0x280cec: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x280cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x280cf0: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280CF0u;
    {
        const bool branch_taken_0x280cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x280cf0) {
            ctx->pc = 0x280CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280CF0u;
            // 0x280cf4: 0xad461584  sw          $a2, 0x1584($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 5508), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D14u;
            goto label_280d14;
        }
    }
    ctx->pc = 0x280CF8u;
    // 0x280cf8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x280cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280cfc: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x280cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x280d00: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x280d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280d04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x280d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x280d08: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x280d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x280d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x280d10: 0xad461584  sw          $a2, 0x1584($t2)
    ctx->pc = 0x280d10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 5508), GPR_U32(ctx, 6));
label_280d14:
    // 0x280d14: 0x25421590  addiu       $v0, $t2, 0x1590
    ctx->pc = 0x280d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 5520));
    // 0x280d18: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D18u;
    {
        const bool branch_taken_0x280d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x280D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D18u;
        // 0x280d1c: 0xad451580  sw          $a1, 0x1580($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 5504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d18) {
            ctx->pc = 0x280D38u;
            goto label_280d38;
        }
    }
    ctx->pc = 0x280D20u;
    // 0x280d20: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x280d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d24: 0xe5401590  swc1        $f0, 0x1590($t2)
    ctx->pc = 0x280d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 5520), bits); }
    // 0x280d28: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x280d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280d2c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x280d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x280d30: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x280d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x280d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_280d38:
    // 0x280d38: 0x254215a0  addiu       $v0, $t2, 0x15A0
    ctx->pc = 0x280d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 5536));
    // 0x280d3c: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D3Cu;
    {
        const bool branch_taken_0x280d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x280D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D3Cu;
        // 0x280d40: 0x25430110  addiu       $v1, $t2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d3c) {
            ctx->pc = 0x280D5Cu;
            goto label_280d5c;
        }
    }
    ctx->pc = 0x280D44u;
    // 0x280d44: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x280d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d48: 0xe54015a0  swc1        $f0, 0x15A0($t2)
    ctx->pc = 0x280d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 5536), bits); }
    // 0x280d4c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x280d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280d50: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x280d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x280d54: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x280d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x280d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_280d5c:
    // 0x280d5c: 0x24a20110  addiu       $v0, $a1, 0x110
    ctx->pc = 0x280d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x280d60: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280D60u;
    {
        const bool branch_taken_0x280d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280d60) {
            ctx->pc = 0x280D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280D60u;
            // 0x280d64: 0xc5400114  lwc1        $f0, 0x114($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D84u;
            goto label_280d84;
        }
    }
    ctx->pc = 0x280D68u;
    // 0x280d68: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x280d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d6c: 0xe5400110  swc1        $f0, 0x110($t2)
    ctx->pc = 0x280d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 272), bits); }
    // 0x280d70: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x280d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280d74: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x280d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x280d78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x280d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d7c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x280d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x280d80: 0xc5400114  lwc1        $f0, 0x114($t2)
    ctx->pc = 0x280d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280d84:
    // 0x280d84: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x280d88: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x280d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d8c: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x280d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x280d90: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x280d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x280d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280d98: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x280d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280da0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x280DA0u;
    SET_GPR_U32(ctx, 31, 0x280DA8u);
    ctx->pc = 0x280DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280DA0u;
    // 0x280da4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x280DA0u, 0x280DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DA8u;
label_280da8:
    // 0x280da8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x280da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_280dac:
    // 0x280dac: 0x3e00008  jr          $ra
    ctx->pc = 0x280DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DACu;
        // 0x280db0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280DB4u;
    // 0x280db4: 0x0  nop
    ctx->pc = 0x280db4u;
    // NOP
    ctx->pc = 0x280db8u;
}
