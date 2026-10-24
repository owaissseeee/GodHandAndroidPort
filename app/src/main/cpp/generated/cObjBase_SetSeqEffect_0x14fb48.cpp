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

// Function: cObjBase_SetSeqEffect
// Address: 0x14fb48 - 0x14fd20
void cObjBase_SetSeqEffect_0x14fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_SetSeqEffect_0x14fb48");
#endif

    switch (ctx->pc) {
        case 0x14fbf0u: goto label_14fbf0;
        case 0x14fc48u: goto label_14fc48;
        case 0x14fc88u: goto label_14fc88;
        case 0x14fcb0u: goto label_14fcb0;
        case 0x14fcc4u: goto label_14fcc4;
        case 0x14fce4u: goto label_14fce4;
        default: break;
    }

    ctx->pc = 0x14fb48u;

    // 0x14fb48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14fb4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14fb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fb54: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14fb58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb5c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14fb60: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14fb64: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x14fb64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x14fb68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14fb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14fb6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x14fb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14fb70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14fb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14fb74: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x14fb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x14fb78: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x14fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14fb7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x14fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14fb80: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14fb84: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14fb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14fb88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x14fb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14fb8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14fb90: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14fb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14fb94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14fb98: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14fb9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14fb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14fba0: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x14fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x14fba4: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x14fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x14fba8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x14fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x14fbac: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x14fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x14fbb0: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x14fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fbb4: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x14fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fbb8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14fbbc: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x14fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14fbc0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x14fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14fbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbc8: 0x960203ae  lhu         $v0, 0x3AE($s0)
    ctx->pc = 0x14fbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
    // 0x14fbcc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14fbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14fbd0: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x14fbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fbd4: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x14fbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fbd8: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x14fbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fbdc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x14FBDCu;
    {
        const bool branch_taken_0x14fbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBDCu;
        // 0x14fbe0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbdc) {
            ctx->pc = 0x14FCF8u;
            goto label_14fcf8;
        }
    }
    ctx->pc = 0x14FBE4u;
    // 0x14fbe4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14fbe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14fbe8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14fbec: 0x0  nop
    ctx->pc = 0x14fbecu;
    // NOP
label_14fbf0:
    // 0x14fbf0: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x14fbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14fbf4: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fbf8: 0x90a903b9  lbu         $t1, 0x3B9($a1)
    ctx->pc = 0x14fbf8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 953)));
    // 0x14fbfc: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x14fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x14fc00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FC00u;
    {
        const bool branch_taken_0x14fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC00u;
        // 0x14fc04: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc00) {
            ctx->pc = 0x14FC18u;
            goto label_14fc18;
        }
    }
    ctx->pc = 0x14FC08u;
    // 0x14fc08: 0x92020436  lbu         $v0, 0x436($s0)
    ctx->pc = 0x14fc08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1078)));
    // 0x14fc0c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x14FC0Cu;
    {
        const bool branch_taken_0x14fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fc0c) {
            ctx->pc = 0x14FC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC0Cu;
            // 0x14fc10: 0x960203ae  lhu         $v0, 0x3AE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FC14u;
    // 0x14fc14: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x14fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_14fc18:
    // 0x14fc18: 0x90a703b8  lbu         $a3, 0x3B8($a1)
    ctx->pc = 0x14fc18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 952)));
    // 0x14fc1c: 0x90a403b0  lbu         $a0, 0x3B0($a1)
    ctx->pc = 0x14fc1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 944)));
    // 0x14fc20: 0x31230080  andi        $v1, $t1, 0x80
    ctx->pc = 0x14fc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x14fc24: 0x8c4803b4  lw          $t0, 0x3B4($v0)
    ctx->pc = 0x14fc24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
    // 0x14fc28: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FC28u;
    {
        const bool branch_taken_0x14fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC28u;
        // 0x14fc2c: 0x90a503b1  lbu         $a1, 0x3B1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 945)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc28) {
            ctx->pc = 0x14FC50u;
            goto label_14fc50;
        }
    }
    ctx->pc = 0x14FC30u;
    // 0x14fc30: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x14fc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x14fc34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc38: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x14fc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc3c: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x14fc3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    // 0x14fc40: 0xc0c1880  jal         func_306200
    ctx->pc = 0x14FC40u;
    SET_GPR_U32(ctx, 31, 0x14FC48u);
    ctx->pc = 0x14FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC40u;
    // 0x14fc44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x14FC40u, 0x14FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC48u;
label_14fc48:
    // 0x14fc48: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14FC48u;
    {
        const bool branch_taken_0x14fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC48u;
        // 0x14fc4c: 0x960203ae  lhu         $v0, 0x3AE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc48) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FC50u;
label_14fc50:
    // 0x14fc50: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x14fc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x14fc54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14fc5c: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14FC5Cu;
    {
        const bool branch_taken_0x14fc5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC5Cu;
        // 0x14fc60: 0x202300b  movn        $a2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc5c) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FC64u;
    // 0x14fc64: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x14fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x14fc68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FC68u;
    {
        const bool branch_taken_0x14fc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc68) {
            ctx->pc = 0x14FC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC68u;
            // 0x14fc6c: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC90u;
            goto label_14fc90;
        }
    }
    ctx->pc = 0x14FC70u;
    // 0x14fc70: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x14fc70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14fc74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fc7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14fc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14fc80: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x14FC80u;
    SET_GPR_U32(ctx, 31, 0x14FC88u);
    ctx->pc = 0x14FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC80u;
    // 0x14fc84: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x14FC80u, 0x14FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC88u;
label_14fc88:
    // 0x14fc88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14FC88u;
    {
        const bool branch_taken_0x14fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC88u;
        // 0x14fc8c: 0x960203ae  lhu         $v0, 0x3AE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc88) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FC90u;
label_14fc90:
    // 0x14fc90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14fc94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FC94u;
    {
        const bool branch_taken_0x14fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC94u;
        // 0x14fc98: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc94) {
            ctx->pc = 0x14FCB8u;
            goto label_14fcb8;
        }
    }
    ctx->pc = 0x14FC9Cu;
    // 0x14fc9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14fc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fca0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x14fca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fca4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x14fca8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x14FCA8u;
    SET_GPR_U32(ctx, 31, 0x14FCB0u);
    ctx->pc = 0x14FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCA8u;
    // 0x14fcac: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x14FCA8u, 0x14FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB0u;
label_14fcb0:
    // 0x14fcb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14FCB0u;
    {
        const bool branch_taken_0x14fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCB0u;
        // 0x14fcb4: 0x960203ae  lhu         $v0, 0x3AE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcb0) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FCB8u;
label_14fcb8:
    // 0x14fcb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14fcb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcbc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x14FCBCu;
    SET_GPR_U32(ctx, 31, 0x14FCC4u);
    ctx->pc = 0x14FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCBCu;
    // 0x14fcc0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x14FCBCu, 0x14FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCC4u;
label_14fcc4:
    // 0x14fcc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14FCC4u;
    {
        const bool branch_taken_0x14fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCC4u;
        // 0x14fcc8: 0x960203ae  lhu         $v0, 0x3AE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcc4) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FCCCu;
label_14fccc:
    // 0x14fccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fcd0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x14fcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14fcd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14fcd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14fcd8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x14fcd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x14fcdc: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x14FCDCu;
    SET_GPR_U32(ctx, 31, 0x14FCE4u);
    ctx->pc = 0x14FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCDCu;
    // 0x14fce0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x14FCDCu, 0x14FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCE4u;
label_14fce4:
    // 0x14fce4: 0x960203ae  lhu         $v0, 0x3AE($s0)
    ctx->pc = 0x14fce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 942)));
label_14fce8:
    // 0x14fce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14fce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14fcec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14fcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14fcf0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x14FCF0u;
    {
        const bool branch_taken_0x14fcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF0u;
        // 0x14fcf4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcf0) {
            ctx->pc = 0x14FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fbf0;
        }
    }
    ctx->pc = 0x14FCF8u;
label_14fcf8:
    // 0x14fcf8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14fcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14fcfc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14fcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14fd00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14fd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fd04: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x14fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x14FD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD08u;
        // 0x14fd0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FD10u;
    // 0x14fd10: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x14fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fd14: 0x0  nop
    ctx->pc = 0x14fd14u;
    // NOP
    // 0x14fd18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14fd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14fd1c: 0x0  nop
    ctx->pc = 0x14fd1cu;
    // NOP
    ctx->pc = 0x14fd20u;
}
