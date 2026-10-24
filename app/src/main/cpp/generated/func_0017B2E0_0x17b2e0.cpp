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

// Function: func_0017B2E0
// Address: 0x17b2e0 - 0x17b548
void func_0017B2E0_0x17b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B2E0_0x17b2e0");
#endif

    switch (ctx->pc) {
        case 0x17b3d0u: goto label_17b3d0;
        case 0x17b3ecu: goto label_17b3ec;
        case 0x17b414u: goto label_17b414;
        case 0x17b430u: goto label_17b430;
        case 0x17b484u: goto label_17b484;
        case 0x17b494u: goto label_17b494;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4d4u: goto label_17b4d4;
        default: break;
    }

    ctx->pc = 0x17b2e0u;

    // 0x17b2e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17b2e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17b2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b2ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17b2f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17b2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b2fc: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x17b2fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17b300: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x17b300u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17b304: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x17b304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17b308: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17b308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17b30c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17b30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17b310: 0x1072004c  beq         $v1, $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x17B310u;
    {
        const bool branch_taken_0x17b310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x17B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B310u;
        // 0x17b314: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b310) {
            ctx->pc = 0x17B444u;
            goto label_17b444;
        }
    }
    ctx->pc = 0x17B318u;
    // 0x17b318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B318u;
    {
        const bool branch_taken_0x17b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b318) {
            ctx->pc = 0x17B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B318u;
            // 0x17b31c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B330u;
            goto label_17b330;
        }
    }
    ctx->pc = 0x17B320u;
    // 0x17b320: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B320u;
    {
        const bool branch_taken_0x17b320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B320u;
        // 0x17b324: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b320) {
            ctx->pc = 0x17B348u;
            goto label_17b348;
        }
    }
    ctx->pc = 0x17B328u;
    // 0x17b328: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x17B328u;
    {
        const bool branch_taken_0x17b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B328u;
        // 0x17b32c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b328) {
            ctx->pc = 0x17B528u;
            goto label_17b528;
        }
    }
    ctx->pc = 0x17B330u;
label_17b330:
    // 0x17b330: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x17B330u;
    {
        const bool branch_taken_0x17b330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B330u;
        // 0x17b334: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b330) {
            ctx->pc = 0x17B48Cu;
            goto label_17b48c;
        }
    }
    ctx->pc = 0x17B338u;
    // 0x17b338: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x17B338u;
    {
        const bool branch_taken_0x17b338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B338u;
        // 0x17b33c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b338) {
            ctx->pc = 0x17B4F8u;
            goto label_17b4f8;
        }
    }
    ctx->pc = 0x17B340u;
    // 0x17b340: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x17B340u;
    {
        const bool branch_taken_0x17b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b340) {
            ctx->pc = 0x17B528u;
            goto label_17b528;
        }
    }
    ctx->pc = 0x17B348u;
label_17b348:
    // 0x17b348: 0x92220601  lbu         $v0, 0x601($s1)
    ctx->pc = 0x17b348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1537)));
    // 0x17b34c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B34Cu;
    {
        const bool branch_taken_0x17b34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b34c) {
            ctx->pc = 0x17B350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B34Cu;
            // 0x17b350: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B368u;
            goto label_17b368;
        }
    }
    ctx->pc = 0x17B354u;
    // 0x17b354: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b358: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17b358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b35c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17b35cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b360: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x17B360u;
    {
        const bool branch_taken_0x17b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B360u;
        // 0x17b364: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b360) {
            ctx->pc = 0x17B520u;
            goto label_17b520;
        }
    }
    ctx->pc = 0x17B368u;
label_17b368:
    // 0x17b368: 0x26300610  addiu       $s0, $s1, 0x610
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x17b36c: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
    // 0x17b370: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b378: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17b378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b37c: 0xc7b60004  lwc1        $f22, 0x4($sp)
    ctx->pc = 0x17b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17b380: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17b380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17b388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b38c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b38cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b390: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17b394: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17b394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17b398: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x17b398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17b39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17b3a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3a8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17b3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17b3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17b3b4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x17b3b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17b3b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17b3bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17b3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17b3c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17b3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17b3c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17b3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17b3c8: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17B3C8u;
    SET_GPR_U32(ctx, 31, 0x17B3D0u);
    ctx->pc = 0x17B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B3C8u;
    // 0x17b3cc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17B3C8u, 0x17B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3D0u;
label_17b3d0:
    // 0x17b3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17b3d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x17b3d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b3dc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b3e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17b3e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17b3e4: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17B3E4u;
    SET_GPR_U32(ctx, 31, 0x17B3ECu);
    ctx->pc = 0x17B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B3E4u;
    // 0x17b3e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17B3E4u, 0x17B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3ECu;
label_17b3ec:
    // 0x17b3ec: 0x26300770  addiu       $s0, $s1, 0x770
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x17b3f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x17b3f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17b3f4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x17b3f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x17b3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b400: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b404: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b408: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17b408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b40c: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17B40Cu;
    SET_GPR_U32(ctx, 31, 0x17B414u);
    ctx->pc = 0x17B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B40Cu;
    // 0x17b410: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17B40Cu, 0x17B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B414u;
label_17b414:
    // 0x17b414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17b414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b41c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17b41cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x17b420: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b424: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b428: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17B428u;
    SET_GPR_U32(ctx, 31, 0x17B430u);
    ctx->pc = 0x17B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B428u;
    // 0x17b42c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17B428u, 0x17B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B430u;
label_17b430:
    // 0x17b430: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17b434: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x17b434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x17b438: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x17b438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
    // 0x17b43c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b440: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17b444:
    // 0x17b444: 0x86220604  lh          $v0, 0x604($s1)
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x17b448: 0x4430033  bgezl       $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x17B448u;
    {
        const bool branch_taken_0x17b448 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17b448) {
            ctx->pc = 0x17B44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B448u;
            // 0x17b44c: 0x96220604  lhu         $v0, 0x604($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B518u;
            goto label_17b518;
        }
    }
    ctx->pc = 0x17B450u;
    // 0x17b450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b454: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17b458: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b45c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17b460: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b468: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x17b468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b46c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x17b470: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b474: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17b474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b47c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x17B47Cu;
    SET_GPR_U32(ctx, 31, 0x17B484u);
    ctx->pc = 0x17B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B47Cu;
    // 0x17b480: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x17B47Cu, 0x17B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B484u;
label_17b484:
    // 0x17b484: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17B484u;
    {
        const bool branch_taken_0x17b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B484u;
        // 0x17b488: 0x96220604  lhu         $v0, 0x604($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b484) {
            ctx->pc = 0x17B518u;
            goto label_17b518;
        }
    }
    ctx->pc = 0x17B48Cu;
label_17b48c:
    // 0x17b48c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17B48Cu;
    SET_GPR_U32(ctx, 31, 0x17B494u);
    ctx->pc = 0x17B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B48Cu;
    // 0x17b490: 0x26240610  addiu       $a0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17B48Cu, 0x17B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B494u;
label_17b494:
    // 0x17b494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b498: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17B498u;
    SET_GPR_U32(ctx, 31, 0x17B4A0u);
    ctx->pc = 0x17B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B498u;
    // 0x17b49c: 0x26240770  addiu       $a0, $s1, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17B498u, 0x17B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4A0u;
label_17b4a0:
    // 0x17b4a0: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x17B4A0u;
    {
        const bool branch_taken_0x17b4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4A0u;
        // 0x17b4a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4a0) {
            ctx->pc = 0x17B524u;
            goto label_17b524;
        }
    }
    ctx->pc = 0x17B4A8u;
    // 0x17b4a8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x17B4A8u;
    {
        const bool branch_taken_0x17b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b4a8) {
            ctx->pc = 0x17B4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B4A8u;
            // 0x17b4ac: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B528u;
            goto label_17b528;
        }
    }
    ctx->pc = 0x17B4B0u;
    // 0x17b4b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17b4b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b4b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17b4bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17b4c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17b4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b4c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17b4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b4c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b4c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4cc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x17B4CCu;
    SET_GPR_U32(ctx, 31, 0x17B4D4u);
    ctx->pc = 0x17B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4CCu;
    // 0x17b4d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x17B4CCu, 0x17B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4D4u;
label_17b4d4:
    // 0x17b4d4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x17b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17b4d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b4dc: 0xa6230604  sh          $v1, 0x604($s1)
    ctx->pc = 0x17b4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x17b4e0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x17b4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b4e4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b4e8: 0xa2200601  sb          $zero, 0x601($s1)
    ctx->pc = 0x17b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1537), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b4ec: 0xa2200600  sb          $zero, 0x600($s1)
    ctx->pc = 0x17b4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b4f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17B4F0u;
    {
        const bool branch_taken_0x17b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4F0u;
        // 0x17b4f4: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4f0) {
            ctx->pc = 0x17B520u;
            goto label_17b520;
        }
    }
    ctx->pc = 0x17B4F8u;
label_17b4f8:
    // 0x17b4f8: 0x86220604  lh          $v0, 0x604($s1)
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x17b4fc: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B4FCu;
    {
        const bool branch_taken_0x17b4fc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17b4fc) {
            ctx->pc = 0x17B500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B4FCu;
            // 0x17b500: 0x96220604  lhu         $v0, 0x604($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B518u;
            goto label_17b518;
        }
    }
    ctx->pc = 0x17B504u;
    // 0x17b504: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17b504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b508: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17b508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b50c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b510: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b514: 0x96220604  lhu         $v0, 0x604($s1)
    ctx->pc = 0x17b514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
label_17b518:
    // 0x17b518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b51c: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x17b51cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
label_17b520:
    // 0x17b520: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17b520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b524:
    // 0x17b524: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17b524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b528:
    // 0x17b528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b530: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x17b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17b534: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x17b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17b538: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x17b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17b53c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17b540: 0x3e00008  jr          $ra
    ctx->pc = 0x17B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B540u;
        // 0x17b544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B548u;
}
