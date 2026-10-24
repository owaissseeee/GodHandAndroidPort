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

// Function: func_0017E2F8
// Address: 0x17e2f8 - 0x17e4c8
void func_0017E2F8_0x17e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E2F8_0x17e2f8");
#endif

    switch (ctx->pc) {
        case 0x17e3acu: goto label_17e3ac;
        case 0x17e3d0u: goto label_17e3d0;
        case 0x17e424u: goto label_17e424;
        case 0x17e434u: goto label_17e434;
        case 0x17e460u: goto label_17e460;
        default: break;
    }

    ctx->pc = 0x17e2f8u;

    // 0x17e2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e2fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e308: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e30c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17e30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e314: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17e314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17e318: 0x10720032  beq         $v1, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x17E318u;
    {
        const bool branch_taken_0x17e318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x17E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E318u;
        // 0x17e31c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e318) {
            ctx->pc = 0x17E3E4u;
            goto label_17e3e4;
        }
    }
    ctx->pc = 0x17E320u;
    // 0x17e320: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E320u;
    {
        const bool branch_taken_0x17e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e320) {
            ctx->pc = 0x17E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E320u;
            // 0x17e324: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E338u;
            goto label_17e338;
        }
    }
    ctx->pc = 0x17E328u;
    // 0x17e328: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E328u;
    {
        const bool branch_taken_0x17e328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E328u;
        // 0x17e32c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e328) {
            ctx->pc = 0x17E350u;
            goto label_17e350;
        }
    }
    ctx->pc = 0x17E330u;
    // 0x17e330: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17E330u;
    {
        const bool branch_taken_0x17e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E330u;
        // 0x17e334: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e330) {
            ctx->pc = 0x17E4B4u;
            goto label_17e4b4;
        }
    }
    ctx->pc = 0x17E338u;
label_17e338:
    // 0x17e338: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x17E338u;
    {
        const bool branch_taken_0x17e338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E338u;
        // 0x17e33c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e338) {
            ctx->pc = 0x17E42Cu;
            goto label_17e42c;
        }
    }
    ctx->pc = 0x17E340u;
    // 0x17e340: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x17E340u;
    {
        const bool branch_taken_0x17e340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E340u;
        // 0x17e344: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e340) {
            ctx->pc = 0x17E484u;
            goto label_17e484;
        }
    }
    ctx->pc = 0x17E348u;
    // 0x17e348: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17E348u;
    {
        const bool branch_taken_0x17e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E348u;
        // 0x17e34c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e348) {
            ctx->pc = 0x17E4B4u;
            goto label_17e4b4;
        }
    }
    ctx->pc = 0x17E350u;
label_17e350:
    // 0x17e350: 0x92220601  lbu         $v0, 0x601($s1)
    ctx->pc = 0x17e350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1537)));
    // 0x17e354: 0x10520055  beq         $v0, $s2, . + 4 + (0x55 << 2)
    ctx->pc = 0x17E354u;
    {
        const bool branch_taken_0x17e354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E354u;
        // 0x17e358: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e354) {
            ctx->pc = 0x17E4ACu;
            goto label_17e4ac;
        }
    }
    ctx->pc = 0x17E35Cu;
    // 0x17e35c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17e360: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x17e360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x17e364: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17e364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17e368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17e374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e37c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x17e37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17e380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e384: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17e388: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17e388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17e38c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17e38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e390: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17e394: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x17e394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17e398: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17e398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e39c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17e39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17e3a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3a4: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17E3A4u;
    SET_GPR_U32(ctx, 31, 0x17E3ACu);
    ctx->pc = 0x17E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3A4u;
    // 0x17e3a8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17E3A4u, 0x17E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3ACu;
label_17e3ac:
    // 0x17e3ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17e3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17e3b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17e3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17e3bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x17e3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e3c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e3c4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17e3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17e3c8: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17E3C8u;
    SET_GPR_U32(ctx, 31, 0x17E3D0u);
    ctx->pc = 0x17E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3C8u;
    // 0x17e3cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17E3C8u, 0x17E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3D0u;
label_17e3d0:
    // 0x17e3d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e3d4: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x17e3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x17e3d8: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x17e3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e3dc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e3e0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17e3e4:
    // 0x17e3e4: 0x86220602  lh          $v0, 0x602($s1)
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
    // 0x17e3e8: 0x443002e  bgezl       $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17E3E8u;
    {
        const bool branch_taken_0x17e3e8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17e3e8) {
            ctx->pc = 0x17E3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3E8u;
            // 0x17e3ec: 0x96220602  lhu         $v0, 0x602($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E4A4u;
            goto label_17e4a4;
        }
    }
    ctx->pc = 0x17E3F0u;
    // 0x17e3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e3f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17e3f8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e3fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17e400: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e400u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e408: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x17e408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e40c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x17e40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x17e410: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e414: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17e414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e418: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e41c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x17E41Cu;
    SET_GPR_U32(ctx, 31, 0x17E424u);
    ctx->pc = 0x17E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E41Cu;
    // 0x17e420: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x17E41Cu, 0x17E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E424u;
label_17e424:
    // 0x17e424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17E424u;
    {
        const bool branch_taken_0x17e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E424u;
        // 0x17e428: 0x96220602  lhu         $v0, 0x602($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e424) {
            ctx->pc = 0x17E4A4u;
            goto label_17e4a4;
        }
    }
    ctx->pc = 0x17E42Cu;
label_17e42c:
    // 0x17e42c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17E42Cu;
    SET_GPR_U32(ctx, 31, 0x17E434u);
    ctx->pc = 0x17E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E42Cu;
    // 0x17e430: 0x26240610  addiu       $a0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17E42Cu, 0x17E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E434u;
label_17e434:
    // 0x17e434: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17E434u;
    {
        const bool branch_taken_0x17e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E434u;
        // 0x17e438: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e434) {
            ctx->pc = 0x17E4B0u;
            goto label_17e4b0;
        }
    }
    ctx->pc = 0x17E43Cu;
    // 0x17e43c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17e440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e444: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17e448: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17e448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17e44c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17e44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e450: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e458: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x17E458u;
    SET_GPR_U32(ctx, 31, 0x17E460u);
    ctx->pc = 0x17E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E458u;
    // 0x17e45c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x17E458u, 0x17E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E460u;
label_17e460:
    // 0x17e460: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x17e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17e464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e468: 0xa2320601  sb          $s2, 0x601($s1)
    ctx->pc = 0x17e468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1537), (uint8_t)GPR_U32(ctx, 18));
    // 0x17e46c: 0xa6230602  sh          $v1, 0x602($s1)
    ctx->pc = 0x17e46cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e470: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x17e470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e474: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e478: 0xa2200600  sb          $zero, 0x600($s1)
    ctx->pc = 0x17e478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e47c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17E47Cu;
    {
        const bool branch_taken_0x17e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E47Cu;
        // 0x17e480: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e47c) {
            ctx->pc = 0x17E4ACu;
            goto label_17e4ac;
        }
    }
    ctx->pc = 0x17E484u;
label_17e484:
    // 0x17e484: 0x86220602  lh          $v0, 0x602($s1)
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
    // 0x17e488: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E488u;
            // 0x17e48c: 0x96220602  lhu         $v0, 0x602($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E4A4u;
            goto label_17e4a4;
        }
    }
    ctx->pc = 0x17E490u;
    // 0x17e490: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17e490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e494: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17e494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e498: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17e498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e49c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17e49cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e4a0: 0x96220602  lhu         $v0, 0x602($s1)
    ctx->pc = 0x17e4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1538)));
label_17e4a4:
    // 0x17e4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e4a8: 0xa6220602  sh          $v0, 0x602($s1)
    ctx->pc = 0x17e4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1538), (uint16_t)GPR_U32(ctx, 2));
label_17e4ac:
    // 0x17e4ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17e4b0:
    // 0x17e4b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e4b4:
    // 0x17e4b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4BCu;
        // 0x17e4c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E4C4u;
    // 0x17e4c4: 0x0  nop
    ctx->pc = 0x17e4c4u;
    // NOP
    ctx->pc = 0x17e4c8u;
}
