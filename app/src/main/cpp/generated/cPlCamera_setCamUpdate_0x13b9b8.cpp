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

// Function: cPlCamera_setCamUpdate
// Address: 0x13b9b8 - 0x13bbd8
void cPlCamera_setCamUpdate_0x13b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_setCamUpdate_0x13b9b8");
#endif

    switch (ctx->pc) {
        case 0x13ba60u: goto label_13ba60;
        case 0x13ba9cu: goto label_13ba9c;
        case 0x13bb08u: goto label_13bb08;
        case 0x13bb18u: goto label_13bb18;
        case 0x13bb58u: goto label_13bb58;
        default: break;
    }

    ctx->pc = 0x13b9b8u;

    // 0x13b9b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13b9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13b9bc: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x13b9c0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x13b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x13b9c4: 0x8cc2aff0  lw          $v0, -0x5010($a2)
    ctx->pc = 0x13b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x13b9c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9cc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x13b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x13b9d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13b9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13b9d4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x13B9D4u;
    {
        const bool branch_taken_0x13b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9D4u;
        // 0x13b9d8: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9d4) {
            ctx->pc = 0x13BBBCu;
            goto label_13bbbc;
        }
    }
    ctx->pc = 0x13B9DCu;
    // 0x13b9dc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13B9DCu;
    {
        const bool branch_taken_0x13b9dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9DCu;
        // 0x13b9e0: 0xae20051c  sw          $zero, 0x51C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9dc) {
            ctx->pc = 0x13BA48u;
            goto label_13ba48;
        }
    }
    ctx->pc = 0x13B9E4u;
    // 0x13b9e4: 0x8cc4aff0  lw          $a0, -0x5010($a2)
    ctx->pc = 0x13b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
    // 0x13b9e8: 0x26230210  addiu       $v1, $s1, 0x210
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x13b9ec: 0x24820210  addiu       $v0, $a0, 0x210
    ctx->pc = 0x13b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x13b9f0: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B9F0u;
    {
        const bool branch_taken_0x13b9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b9f0) {
            ctx->pc = 0x13B9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B9F0u;
            // 0x13b9f4: 0x26230200  addiu       $v1, $s1, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BA18u;
            goto label_13ba18;
        }
    }
    ctx->pc = 0x13B9F8u;
    // 0x13b9f8: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x13b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b9fc: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x13b9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x13ba00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13ba04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13ba08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x13ba10: 0x8cc4aff0  lw          $a0, -0x5010($a2)
    ctx->pc = 0x13ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
    // 0x13ba14: 0x26230200  addiu       $v1, $s1, 0x200
    ctx->pc = 0x13ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_13ba18:
    // 0x13ba18: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x13ba1c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BA1Cu;
    {
        const bool branch_taken_0x13ba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ba1c) {
            ctx->pc = 0x13BA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BA1Cu;
            // 0x13ba20: 0x8cc2aff0  lw          $v0, -0x5010($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BA40u;
            goto label_13ba40;
        }
    }
    ctx->pc = 0x13BA24u;
    // 0x13ba24: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x13ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba28: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x13ba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x13ba2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba30: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13ba30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13ba34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba38: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13ba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x13ba3c: 0x8cc2aff0  lw          $v0, -0x5010($a2)
    ctx->pc = 0x13ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
label_13ba40:
    // 0x13ba40: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x13BA40u;
    {
        const bool branch_taken_0x13ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA40u;
        // 0x13ba44: 0xc4400250  lwc1        $f0, 0x250($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba40) {
            ctx->pc = 0x13BBB4u;
            goto label_13bbb4;
        }
    }
    ctx->pc = 0x13BA48u;
label_13ba48:
    // 0x13ba48: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x13ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13ba4c: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x13ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13ba50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba58: 0xc051dca  jal         func_147728
    ctx->pc = 0x13BA58u;
    SET_GPR_U32(ctx, 31, 0x13BA60u);
    ctx->pc = 0x13BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA58u;
    // 0x13ba5c: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13BA58u, 0x13BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA60u;
label_13ba60:
    // 0x13ba60: 0x8e2303f0  lw          $v1, 0x3F0($s1)
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13ba64: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x13ba64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13ba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13ba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba70: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ba74: 0x26260400  addiu       $a2, $s1, 0x400
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x13ba78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba7c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13ba80: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ba84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x13ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13ba8c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13ba90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba94: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13BA94u;
    SET_GPR_U32(ctx, 31, 0x13BA9Cu);
    ctx->pc = 0x13BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA94u;
    // 0x13ba98: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13BA94u, 0x13BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA9Cu;
label_13ba9c:
    // 0x13ba9c: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x13ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x13baa0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BAA0u;
    {
        const bool branch_taken_0x13baa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x13BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAA0u;
        // 0x13baa4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baa0) {
            ctx->pc = 0x13BABCu;
            goto label_13babc;
        }
    }
    ctx->pc = 0x13BAA8u;
    // 0x13baa8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x13baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13baac: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x13baacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x13bab0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13bab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13bab4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x13bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bab8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13bab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13babc:
    // 0x13babc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x13babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13bac0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x13bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13bac4: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x13bac8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x13bac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bacc: 0xc6240410  lwc1        $f4, 0x410($s1)
    ctx->pc = 0x13baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13bad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bad4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x13bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bad8: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x13bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13badc: 0xc6220414  lwc1        $f2, 0x414($s1)
    ctx->pc = 0x13badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bae0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x13bae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x13bae4: 0xc4430108  lwc1        $f3, 0x108($v0)
    ctx->pc = 0x13bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13bae8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13bae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13baec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13baf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13baf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13baf4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x13baf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x13baf8: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x13baf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x13bafc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x13bafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x13bb00: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x13BB00u;
    SET_GPR_U32(ctx, 31, 0x13BB08u);
    ctx->pc = 0x13BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB00u;
    // 0x13bb04: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x13BB00u, 0x13BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB08u;
label_13bb08:
    // 0x13bb08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13bb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb10: 0xc051dca  jal         func_147728
    ctx->pc = 0x13BB10u;
    SET_GPR_U32(ctx, 31, 0x13BB18u);
    ctx->pc = 0x13BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB10u;
    // 0x13bb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13BB10u, 0x13BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB18u;
label_13bb18:
    // 0x13bb18: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x13bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bb1c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13bb20: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x13bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13bb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13bb28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13bb2c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x13bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bb30: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x13bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bb34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb38: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x13bb38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13bb3c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x13bb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13bb40: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x13bb40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13bb44: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x13bb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13bb48: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x13bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x13bb4c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x13bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x13bb50: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13BB50u;
    SET_GPR_U32(ctx, 31, 0x13BB58u);
    ctx->pc = 0x13BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB50u;
    // 0x13bb54: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13BB50u, 0x13BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB58u;
label_13bb58:
    // 0x13bb58: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x13bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x13bb5c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BB5Cu;
    {
        const bool branch_taken_0x13bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x13BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB5Cu;
        // 0x13bb60: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb5c) {
            ctx->pc = 0x13BB78u;
            goto label_13bb78;
        }
    }
    ctx->pc = 0x13BB64u;
    // 0x13bb64: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x13bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bb68: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x13bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x13bb6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13bb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13bb70: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x13bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bb74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13bb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13bb78:
    // 0x13bb78: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x13bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bb7c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x13bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x13bb80: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x13bb80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13bb84: 0x262303d0  addiu       $v1, $s1, 0x3D0
    ctx->pc = 0x13bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x13bb88: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x13bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x13bb8c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BB8Cu;
    {
        const bool branch_taken_0x13bb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB8Cu;
        // 0x13bb90: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb8c) {
            ctx->pc = 0x13BBACu;
            goto label_13bbac;
        }
    }
    ctx->pc = 0x13BB94u;
    // 0x13bb94: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x13bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bb98: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x13bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bb9c: 0xe62003d0  swc1        $f0, 0x3D0($s1)
    ctx->pc = 0x13bb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 976), bits); }
    // 0x13bba0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13bba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13bba4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x13bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bba8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13bbac:
    // 0x13bbac: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x13bbb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13bbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13bbb4:
    // 0x13bbb4: 0x0  nop
    ctx->pc = 0x13bbb4u;
    // NOP
    // 0x13bbb8: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x13bbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
label_13bbbc:
    // 0x13bbbc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x13bbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13bbc0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x13bbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bbc4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13bbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13bbc8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x13bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x13BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBCCu;
        // 0x13bbd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BBD4u;
    // 0x13bbd4: 0x0  nop
    ctx->pc = 0x13bbd4u;
    // NOP
    ctx->pc = 0x13bbd8u;
}
