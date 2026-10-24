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

// Function: cOmWeapon_SetBreak
// Address: 0x1d0818 - 0x1d0ad0
void cOmWeapon_SetBreak_0x1d0818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_SetBreak_0x1d0818");
#endif

    switch (ctx->pc) {
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09dcu: goto label_1d09dc;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a5cu: goto label_1d0a5c;
        case 0x1d0a68u: goto label_1d0a68;
        case 0x1d0a74u: goto label_1d0a74;
        case 0x1d0a80u: goto label_1d0a80;
        case 0x1d0a8cu: goto label_1d0a8c;
        case 0x1d0a98u: goto label_1d0a98;
        default: break;
    }

    ctx->pc = 0x1d0818u;

    // 0x1d0818: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d081c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d0820: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d0820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d0824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d082c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0830: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1d0830u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d0834: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1d0834u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1d0838: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d0838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d083c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1d0840: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0840u;
    {
        const bool branch_taken_0x1d0840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0840u;
        // 0x1d0844: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0840) {
            ctx->pc = 0x1D086Cu;
            goto label_1d086c;
        }
    }
    ctx->pc = 0x1D0848u;
    // 0x1d0848: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d084c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D084Cu;
    {
        const bool branch_taken_0x1d084c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d084c) {
            ctx->pc = 0x1D0850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D084Cu;
            // 0x1d0850: 0x8e230250  lw          $v1, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0870u;
            goto label_1d0870;
        }
    }
    ctx->pc = 0x1D0854u;
    // 0x1d0854: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0858: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x1d0858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x1d085c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0860: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d0860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d0864: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0868: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d0868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d086c:
    // 0x1d086c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1d0870:
    // 0x1d0870: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d087c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d0880: 0x3c013dba  lui         $at, 0x3DBA
    ctx->pc = 0x1d0880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15802 << 16));
    // 0x1d0884: 0x34215e36  ori         $at, $at, 0x5E36
    ctx->pc = 0x1d0884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24118);
    // 0x1d0888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d088c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0890: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1d0890u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1d0894: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x1d0894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x1d0898: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1d0898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1d089c: 0xe6210630  swc1        $f1, 0x630($s1)
    ctx->pc = 0x1d089cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    // 0x1d08a0: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x1d08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x1d08a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D08A4u;
    {
        const bool branch_taken_0x1d08a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08A4u;
        // 0x1d08a8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08a4) {
            ctx->pc = 0x1D08B8u;
            goto label_1d08b8;
        }
    }
    ctx->pc = 0x1D08ACu;
    // 0x1d08ac: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1d08acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1d08b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D08B0u;
    {
        const bool branch_taken_0x1d08b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08B0u;
        // 0x1d08b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b0) {
            ctx->pc = 0x1D08BCu;
            goto label_1d08bc;
        }
    }
    ctx->pc = 0x1D08B8u;
label_1d08b8:
    // 0x1d08b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d08b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d08bc:
    // 0x1d08bc: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1D08BCu;
    {
        const bool branch_taken_0x1d08bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08BCu;
        // 0x1d08c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08bc) {
            ctx->pc = 0x1D0AACu;
            goto label_1d0aac;
        }
    }
    ctx->pc = 0x1D08C4u;
    // 0x1d08c4: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1d08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1d08c8: 0xac510148  sw          $s1, 0x148($v0)
    ctx->pc = 0x1d08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 17));
    // 0x1d08cc: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1d08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1d08d0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1D08D0u;
    SET_GPR_U32(ctx, 31, 0x1D08D8u);
    ctx->pc = 0x1D08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08D0u;
    // 0x1d08d4: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1D08D0u, 0x1D08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08D8u;
label_1d08d8:
    // 0x1d08d8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d08dc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1d08dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d08e0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1d08e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d08e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1d08e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d08ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d08ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08f0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1d08f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d08f4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1D08F4u;
    SET_GPR_U32(ctx, 31, 0x1D08FCu);
    ctx->pc = 0x1D08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08F4u;
    // 0x1d08f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1D08F4u, 0x1D08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08FCu;
label_1d08fc:
    // 0x1d08fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d08fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0900: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d0900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d0904: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1D0904u;
    SET_GPR_U32(ctx, 31, 0x1D090Cu);
    ctx->pc = 0x1D0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0904u;
    // 0x1d0908: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1D0904u, 0x1D090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D090Cu;
label_1d090c:
    // 0x1d090c: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x1d090cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1d0910: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1d0914: 0x2c83005a  sltiu       $v1, $a0, 0x5A
    ctx->pc = 0x1d0914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
    // 0x1d0918: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0918u;
    {
        const bool branch_taken_0x1d0918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0918u;
        // 0x1d091c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0918) {
            ctx->pc = 0x1D0938u;
            goto label_1d0938;
        }
    }
    ctx->pc = 0x1D0920u;
    // 0x1d0920: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0924: 0x2442a930  addiu       $v0, $v0, -0x56D0
    ctx->pc = 0x1d0924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945072));
    // 0x1d0928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d0928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d092c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0930: 0x800008  jr          $a0
    ctx->pc = 0x1D0930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1D0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0930u;
        // 0x1d0934: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0938u: goto label_1d0938;
            case 0x1D094Cu: goto label_1d094c;
            case 0x1D0960u: goto label_1d0960;
            case 0x1D0990u: goto label_1d0990;
            case 0x1D09B8u: goto label_1d09b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0938u;
label_1d0938:
    // 0x1d0938: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d0938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d093c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0940: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d0940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d0944: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0944u;
    {
        const bool branch_taken_0x1d0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0944u;
        // 0x1d0948: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0944) {
            ctx->pc = 0x1D0970u;
            goto label_1d0970;
        }
    }
    ctx->pc = 0x1D094Cu;
label_1d094c:
    // 0x1d094c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d0950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0954: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d0954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d0958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0958u;
    {
        const bool branch_taken_0x1d0958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0958u;
        // 0x1d095c: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0958) {
            ctx->pc = 0x1D0970u;
            goto label_1d0970;
        }
    }
    ctx->pc = 0x1D0960u;
label_1d0960:
    // 0x1d0960: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d0960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d0964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0968: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d0968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d096c: 0x2406011d  addiu       $a2, $zero, 0x11D
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_1d0970:
    // 0x1d0970: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d0970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d0978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d097c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d097cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0980: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D0980u;
    SET_GPR_U32(ctx, 31, 0x1D0988u);
    ctx->pc = 0x1D0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0980u;
    // 0x1d0984: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D0980u, 0x1D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0988u;
label_1d0988:
    // 0x1d0988: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D0988u;
    {
        const bool branch_taken_0x1d0988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0988) {
            ctx->pc = 0x1D09DCu;
            goto label_1d09dc;
        }
    }
    ctx->pc = 0x1D0990u;
label_1d0990:
    // 0x1d0990: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1d0990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1d0994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d0994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0998: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1d0998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1d099c: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x1d099cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1d09a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d09a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d09a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d09a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d09acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09b0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D09B0u;
    SET_GPR_U32(ctx, 31, 0x1D09B8u);
    ctx->pc = 0x1D09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09B0u;
    // 0x1d09b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D09B0u, 0x1D09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09B8u;
label_1d09b8:
    // 0x1d09b8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1d09bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d09bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09c0: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x1d09c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x1d09c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d09c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d09c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d09ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d09d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09d4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D09D4u;
    SET_GPR_U32(ctx, 31, 0x1D09DCu);
    ctx->pc = 0x1D09D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09D4u;
    // 0x1d09d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D09D4u, 0x1D09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09DCu;
label_1d09dc:
    // 0x1d09dc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1d09dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1d09e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d09e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1d09e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d09e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d09e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d09e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1d09ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1d09f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d09f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1d09f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d09f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d09f8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1d09f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1d09fc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1d09fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1d0a00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d0a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d0a04: 0x0  nop
    ctx->pc = 0x1d0a04u;
    // NOP
label_1d0a08:
    // 0x1d0a08: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1d0a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1d0a0c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0a10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d0a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a18: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A18u;
    {
        const bool branch_taken_0x1d0a18 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1D0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A18u;
        // 0x1d0a1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a18) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D0A20u;
    // 0x1d0a20: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1d0a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d0a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a28:
    // 0x1d0a28: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1d0a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d0a2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0A2Cu;
    {
        const bool branch_taken_0x1d0a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A2Cu;
        // 0x1d0a30: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a2c) {
            ctx->pc = 0x1D0A44u;
            goto label_1d0a44;
        }
    }
    ctx->pc = 0x1D0A34u;
    // 0x1d0a34: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1d0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1d0a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0A3Cu;
    {
        const bool branch_taken_0x1d0a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A3Cu;
        // 0x1d0a40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a3c) {
            ctx->pc = 0x1D0A48u;
            goto label_1d0a48;
        }
    }
    ctx->pc = 0x1D0A44u;
label_1d0a44:
    // 0x1d0a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a48:
    // 0x1d0a48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D0A48u;
    {
        const bool branch_taken_0x1d0a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A48u;
        // 0x1d0a4c: 0x58140  sll         $s0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a48) {
            ctx->pc = 0x1D0AACu;
            goto label_1d0aac;
        }
    }
    ctx->pc = 0x1D0A50u;
    // 0x1d0a50: 0x261006b0  addiu       $s0, $s0, 0x6B0
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    // 0x1d0a54: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1D0A54u;
    SET_GPR_U32(ctx, 31, 0x1D0A5Cu);
    ctx->pc = 0x1D0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A54u;
    // 0x1d0a58: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1D0A54u, 0x1D0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A5Cu;
label_1d0a5c:
    // 0x1d0a5c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d0a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d0a60: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1D0A60u;
    SET_GPR_U32(ctx, 31, 0x1D0A68u);
    ctx->pc = 0x1D0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A60u;
    // 0x1d0a64: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1D0A60u, 0x1D0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A68u;
label_1d0a68:
    // 0x1d0a68: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1d0a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1d0a6c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1D0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0A74u);
    ctx->pc = 0x1D0A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A6Cu;
    // 0x1d0a70: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1D0A6Cu, 0x1D0A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A74u;
label_1d0a74:
    // 0x1d0a74: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d0a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d0a78: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1D0A78u;
    SET_GPR_U32(ctx, 31, 0x1D0A80u);
    ctx->pc = 0x1D0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A78u;
    // 0x1d0a7c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1D0A78u, 0x1D0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A80u;
label_1d0a80:
    // 0x1d0a80: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d0a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d0a84: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1D0A84u;
    SET_GPR_U32(ctx, 31, 0x1D0A8Cu);
    ctx->pc = 0x1D0A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A84u;
    // 0x1d0a88: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1D0A84u, 0x1D0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A8Cu;
label_1d0a8c:
    // 0x1d0a8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d0a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d0a90: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1D0A90u;
    SET_GPR_U32(ctx, 31, 0x1D0A98u);
    ctx->pc = 0x1D0A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A90u;
    // 0x1d0a94: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1D0A90u, 0x1D0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A98u;
label_1d0a98:
    // 0x1d0a98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d0a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d0a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d0a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0aa0: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1d0aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d0aa4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D0AA4u;
    {
        const bool branch_taken_0x1d0aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AA4u;
        // 0x1d0aa8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0aa4) {
            ctx->pc = 0x1D0A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0a08;
        }
    }
    ctx->pc = 0x1D0AACu;
label_1d0aac:
    // 0x1d0aac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d0aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0ab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0abc: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1d0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d0ac0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1d0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d0ac4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d0ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AC8u;
        // 0x1d0acc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0AD0u;
}
