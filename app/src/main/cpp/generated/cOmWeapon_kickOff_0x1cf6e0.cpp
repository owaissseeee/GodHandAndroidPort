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

// Function: cOmWeapon_kickOff
// Address: 0x1cf6e0 - 0x1cf8b0
void cOmWeapon_kickOff_0x1cf6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_kickOff_0x1cf6e0");
#endif

    switch (ctx->pc) {
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf884u: goto label_1cf884;
        default: break;
    }

    ctx->pc = 0x1cf6e0u;

    // 0x1cf6e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cf6e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cf6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1cf6e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cf6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1cf6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1cf6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1cf6f4: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1cf6f8: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CF6F8u;
    {
        const bool branch_taken_0x1cf6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6f8) {
            ctx->pc = 0x1CF6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF6F8u;
            // 0x1cf6fc: 0x8e230250  lw          $v1, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7C8u;
            goto label_1cf7c8;
        }
    }
    ctx->pc = 0x1CF700u;
    // 0x1cf700: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1cf700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cf704: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1cf704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cf708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF708u;
    {
        const bool branch_taken_0x1cf708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF708u;
        // 0x1cf70c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf708) {
            ctx->pc = 0x1CF71Cu;
            goto label_1cf71c;
        }
    }
    ctx->pc = 0x1CF710u;
    // 0x1cf710: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cf710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cf714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF714u;
    {
        const bool branch_taken_0x1cf714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF714u;
        // 0x1cf718: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf714) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF71Cu;
label_1cf71c:
    // 0x1cf71c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf720:
    // 0x1cf720: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1cf720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1cf724: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x1cf728: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf72c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF72Cu;
    {
        const bool branch_taken_0x1cf72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf72c) {
            ctx->pc = 0x1CF730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF72Cu;
            // 0x1cf730: 0x8e220600  lw          $v0, 0x600($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF750u;
            goto label_1cf750;
        }
    }
    ctx->pc = 0x1CF734u;
    // 0x1cf734: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf738: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x1cf738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x1cf73c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf740: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf744: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf748: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf74c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1cf750:
    // 0x1cf750: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf754: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF754u;
    {
        const bool branch_taken_0x1cf754 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf754) {
            ctx->pc = 0x1CF774u;
            goto label_1cf774;
        }
    }
    ctx->pc = 0x1CF75Cu;
    // 0x1cf75c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf760: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cf764: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf768: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cf768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cf76c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf770: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cf774:
    // 0x1cf774: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF774u;
            // 0x1cf778: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF780u;
            goto label_1cf780;
        }
    }
    ctx->pc = 0x1CF77Cu;
    // 0x1cf77c: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1cf77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1cf780:
    // 0x1cf780: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cf780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf784: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF784u;
    {
        const bool branch_taken_0x1cf784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1CF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF784u;
        // 0x1cf788: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf784) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF78Cu;
    // 0x1cf78c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf790: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1cf790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf794: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1cf794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf798: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x1cf798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x1cf79c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1cf79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf7a0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1cf7a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1cf7a4:
    // 0x1cf7a4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cf7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cf7a8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF7A8u;
    {
        const bool branch_taken_0x1cf7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1CF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A8u;
        // 0x1cf7ac: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7a8) {
            ctx->pc = 0x1CF7C4u;
            goto label_1cf7c4;
        }
    }
    ctx->pc = 0x1CF7B0u;
    // 0x1cf7b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cf7b4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1cf7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf7b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cf7bc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf7c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cf7c4:
    // 0x1cf7c4: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1cf7c8:
    // 0x1cf7c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf7d4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cf7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cf7d8: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1cf7dc: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cf7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf7e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cf7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf7e8: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x1cf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x1cf7ec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1cf7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cf7f0: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x1cf7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x1cf7f4: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1cf7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1cf7f8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CF7F8u;
    SET_GPR_U32(ctx, 31, 0x1CF800u);
    ctx->pc = 0x1CF7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7F8u;
    // 0x1cf7fc: 0xe6210630  swc1        $f1, 0x630($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CF7F8u, 0x1CF800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF800u;
label_1cf800:
    // 0x1cf800: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x1cf800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf804: 0xc051e62  jal         func_147988
    ctx->pc = 0x1CF804u;
    SET_GPR_U32(ctx, 31, 0x1CF80Cu);
    ctx->pc = 0x1CF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF804u;
    // 0x1cf808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1CF804u, 0x1CF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF80Cu;
label_1cf80c:
    // 0x1cf80c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cf810: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf818: 0x26240640  addiu       $a0, $s1, 0x640
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cf81c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1cf81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1cf820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf824: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cf824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cf828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf82c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1cf830: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cf838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf83c: 0xe6210640  swc1        $f1, 0x640($s1)
    ctx->pc = 0x1cf83cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
    // 0x1cf840: 0xe6220644  swc1        $f2, 0x644($s1)
    ctx->pc = 0x1cf840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
    // 0x1cf844: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CF844u;
    SET_GPR_U32(ctx, 31, 0x1CF84Cu);
    ctx->pc = 0x1CF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF844u;
    // 0x1cf848: 0xe6200648  swc1        $f0, 0x648($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CF844u, 0x1CF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF84Cu;
label_1cf84c:
    // 0x1cf84c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1cf84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cf850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF850u;
    {
        const bool branch_taken_0x1cf850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF850u;
        // 0x1cf854: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf850) {
            ctx->pc = 0x1CF864u;
            goto label_1cf864;
        }
    }
    ctx->pc = 0x1CF858u;
    // 0x1cf858: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cf858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cf85c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF85Cu;
    {
        const bool branch_taken_0x1cf85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF85Cu;
        // 0x1cf860: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf85c) {
            ctx->pc = 0x1CF868u;
            goto label_1cf868;
        }
    }
    ctx->pc = 0x1CF864u;
label_1cf864:
    // 0x1cf864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf868:
    // 0x1cf868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF868u;
    {
        const bool branch_taken_0x1cf868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF868u;
        // 0x1cf86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf868) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF870u;
    // 0x1cf870: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cf870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cf874: 0xac510148  sw          $s1, 0x148($v0)
    ctx->pc = 0x1cf874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 17));
    // 0x1cf878: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cf878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cf87c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CF87Cu;
    SET_GPR_U32(ctx, 31, 0x1CF884u);
    ctx->pc = 0x1CF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF87Cu;
    // 0x1cf880: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CF87Cu, 0x1CF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF884u;
label_1cf884:
    // 0x1cf884: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cf888: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1cf888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf88c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1cf88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf890: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1cf890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf894: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1cf894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cf898:
    // 0x1cf898: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1cf898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cf89c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1cf89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cf8a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cf8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cf8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8A4u;
        // 0x1cf8a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF8ACu;
    // 0x1cf8ac: 0x0  nop
    ctx->pc = 0x1cf8acu;
    // NOP
    ctx->pc = 0x1cf8b0u;
}
