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

// Function: func_001EC388
// Address: 0x1ec388 - 0x1ec540
void func_001EC388_0x1ec388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC388_0x1ec388");
#endif

    switch (ctx->pc) {
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec410u: goto label_1ec410;
        default: break;
    }

    ctx->pc = 0x1ec388u;

    // 0x1ec388: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ec388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ec38c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1ec38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC390u;
    {
        const bool branch_taken_0x1ec390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC390u;
        // 0x1ec394: 0x27bdffb0  addiu       $sp, $sp, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec390) {
            ctx->pc = 0x1EC3A0u;
            goto label_1ec3a0;
        }
    }
    ctx->pc = 0x1EC398u;
    // 0x1ec398: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1EC398u;
    {
        const bool branch_taken_0x1ec398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC398u;
        // 0x1ec39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec398) {
            ctx->pc = 0x1EC534u;
            goto label_1ec534;
        }
    }
    ctx->pc = 0x1EC3A0u;
label_1ec3a0:
    // 0x1ec3a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ec3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ec3a4: 0x2484015c  addiu       $a0, $a0, 0x15C
    ctx->pc = 0x1ec3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x1ec3a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ec3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec3ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ec3b0:
    // 0x1ec3b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ec3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ec3b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ec3b8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ec3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ec3bc: 0x0  nop
    ctx->pc = 0x1ec3bcu;
    // NOP
    // 0x1ec3c0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EC3C0u;
    {
        const bool branch_taken_0x1ec3c0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1EC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C0u;
        // 0x1ec3c4: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3c0) {
            ctx->pc = 0x1EC3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3b0;
        }
    }
    ctx->pc = 0x1EC3C8u;
    // 0x1ec3c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ec3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3cc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ec3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ec3d0:
    // 0x1ec3d0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1ec3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec3d4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1EC3D4u;
    {
        const bool branch_taken_0x1ec3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D4u;
        // 0x1ec3d8: 0x60602d  daddu       $t4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3d4) {
            ctx->pc = 0x1EC51Cu;
            goto label_1ec51c;
        }
    }
    ctx->pc = 0x1EC3DCu;
    // 0x1ec3dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec3e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec3e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ec3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec3e8: 0x3a23821  addu        $a3, $sp, $v0
    ctx->pc = 0x1ec3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ec3ec: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x1ec3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec3f0: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec3f4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec3f8: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec3fc: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ec400:
    // 0x1ec400: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ec400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec404: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec408: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec40c: 0x0  nop
    ctx->pc = 0x1ec40cu;
    // NOP
label_1ec410:
    // 0x1ec410: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1ec410u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ec414: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ec418: 0x0  nop
    ctx->pc = 0x1ec418u;
    // NOP
    // 0x1ec41c: 0x0  nop
    ctx->pc = 0x1ec41cu;
    // NOP
    // 0x1ec420: 0x148dfffb  bne         $a0, $t5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EC420u;
    {
        const bool branch_taken_0x1ec420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x1EC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC420u;
        // 0x1ec424: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec420) {
            ctx->pc = 0x1EC410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC428u;
    // 0x1ec428: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ec428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ec42c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec430: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC430u;
    {
        const bool branch_taken_0x1ec430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec430) {
            ctx->pc = 0x1EC434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC430u;
            // 0x1ec434: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC460u;
            goto label_1ec460;
        }
    }
    ctx->pc = 0x1EC438u;
    // 0x1ec438: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ec43c: 0x51620012  beql        $t3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC43Cu;
    {
        const bool branch_taken_0x1ec43c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ec43c) {
            ctx->pc = 0x1EC440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC43Cu;
            // 0x1ec440: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC488u;
            goto label_1ec488;
        }
    }
    ctx->pc = 0x1EC444u;
    // 0x1ec444: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec448: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec44c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ec44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec450: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec454: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ec454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec458: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC458u;
    {
        const bool branch_taken_0x1ec458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC458u;
        // 0x1ec45c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec458) {
            ctx->pc = 0x1EC484u;
            goto label_1ec484;
        }
    }
    ctx->pc = 0x1EC460u;
label_1ec460:
    // 0x1ec460: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ec460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ec464: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1ec464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ec468: 0xe503000c  swc1        $f3, 0xC($t0)
    ctx->pc = 0x1ec468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1ec46c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ec46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec470: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ec470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec474: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1ec474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec478: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec47c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec480: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1ec480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ec484:
    // 0x1ec484: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_1ec488:
    // 0x1ec488: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec48c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec490: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC490u;
    {
        const bool branch_taken_0x1ec490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec490) {
            ctx->pc = 0x1EC494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC490u;
            // 0x1ec494: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC4C0u;
            goto label_1ec4c0;
        }
    }
    ctx->pc = 0x1EC498u;
    // 0x1ec498: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ec49c: 0x11430012  beq         $t2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC49Cu;
    {
        const bool branch_taken_0x1ec49c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC49Cu;
        // 0x1ec4a0: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec49c) {
            ctx->pc = 0x1EC4E8u;
            goto label_1ec4e8;
        }
    }
    ctx->pc = 0x1EC4A4u;
    // 0x1ec4a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec4a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec4ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ec4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec4b0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ec4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec4b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ec4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec4b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC4B8u;
    {
        const bool branch_taken_0x1ec4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4B8u;
        // 0x1ec4bc: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4b8) {
            ctx->pc = 0x1EC4E4u;
            goto label_1ec4e4;
        }
    }
    ctx->pc = 0x1EC4C0u;
label_1ec4c0:
    // 0x1ec4c0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ec4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ec4c4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1ec4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ec4c8: 0xe503000c  swc1        $f3, 0xC($t0)
    ctx->pc = 0x1ec4c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1ec4cc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ec4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec4d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ec4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec4d4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1ec4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec4d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec4dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ec4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec4e0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ec4e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ec4e4:
    // 0x1ec4e4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1ec4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec4e8:
    // 0x1ec4e8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1ec4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec4ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ec4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec4f0: 0x0  nop
    ctx->pc = 0x1ec4f0u;
    // NOP
    // 0x1ec4f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC4F4u;
    {
        const bool branch_taken_0x1ec4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4F4u;
        // 0x1ec4f8: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4f4) {
            ctx->pc = 0x1EC50Cu;
            goto label_1ec50c;
        }
    }
    ctx->pc = 0x1EC4FCu;
    // 0x1ec4fc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1ec4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ec500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec504: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1ec504u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1ec508: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ec508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1ec50c:
    // 0x1ec50c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1ec50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec510: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1ec510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec514: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1EC514u;
    {
        const bool branch_taken_0x1ec514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec514) {
            ctx->pc = 0x1EC400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec400;
        }
    }
    ctx->pc = 0x1EC51Cu;
label_1ec51c:
    // 0x1ec51c: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1ec51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec520: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1ec520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec524: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1EC524u;
    {
        const bool branch_taken_0x1ec524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC524u;
        // 0x1ec528: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec524) {
            ctx->pc = 0x1EC3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec3d0;
        }
    }
    ctx->pc = 0x1EC52Cu;
    // 0x1ec52c: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1ec52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1ec530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec534:
    // 0x1ec534: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC534u;
        // 0x1ec538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC53Cu;
    // 0x1ec53c: 0x0  nop
    ctx->pc = 0x1ec53cu;
    // NOP
    ctx->pc = 0x1ec540u;
}
