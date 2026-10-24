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

// Function: func_0017BAF0
// Address: 0x17baf0 - 0x17c008
void func_0017BAF0_0x17baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017BAF0_0x17baf0");
#endif

    switch (ctx->pc) {
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb50u: goto label_17bb50;
        case 0x17bbb8u: goto label_17bbb8;
        case 0x17bbc4u: goto label_17bbc4;
        case 0x17bc28u: goto label_17bc28;
        case 0x17bc44u: goto label_17bc44;
        case 0x17bc60u: goto label_17bc60;
        case 0x17bc98u: goto label_17bc98;
        case 0x17bd50u: goto label_17bd50;
        case 0x17bd78u: goto label_17bd78;
        case 0x17bde4u: goto label_17bde4;
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bfb4u: goto label_17bfb4;
        case 0x17bfc0u: goto label_17bfc0;
        default: break;
    }

    ctx->pc = 0x17baf0u;

    // 0x17baf0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x17baf4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x17baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x17baf8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17baf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bafc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x17bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x17bb00: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x17bb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x17bb04: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x17bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x17bb08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17bb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb0c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x17bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x17bb10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17bb10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb14: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x17bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x17bb18: 0x26950d80  addiu       $s5, $s4, 0xD80
    ctx->pc = 0x17bb18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 3456));
    // 0x17bb1c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x17bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x17bb20: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x17bb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x17bb24: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x17bb24u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x17bb28: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x17bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x17bb2c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17bb30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17bb34: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x17BB34u;
    SET_GPR_U32(ctx, 31, 0x17BB3Cu);
    ctx->pc = 0x17BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB34u;
    // 0x17bb38: 0xe7b50128  swc1        $f21, 0x128($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x17BB34u, 0x17BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB3Cu;
label_17bb3c:
    // 0x17bb3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17bb40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17bb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17bb44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17bb48: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x17bb48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17bb4c: 0x24561ad0  addiu       $s6, $v0, 0x1AD0
    ctx->pc = 0x17bb4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
label_17bb50:
    // 0x17bb50: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x17bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x17bb54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17bb58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17bb58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17bb5c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x17bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17bb60: 0x16230028  bne         $s1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17BB60u;
    {
        const bool branch_taken_0x17bb60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x17BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB60u;
        // 0x17bb64: 0x269e0d80  addiu       $fp, $s4, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 3456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb60) {
            ctx->pc = 0x17BC04u;
            goto label_17bc04;
        }
    }
    ctx->pc = 0x17BB68u;
    // 0x17bb68: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x17bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x17bb6c: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x17bb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x17bb70: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x17bb70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb78: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x17bb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17bb7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BB7Cu;
    {
        const bool branch_taken_0x17bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB7Cu;
        // 0x17bb80: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb7c) {
            ctx->pc = 0x17BB8Cu;
            goto label_17bb8c;
        }
    }
    ctx->pc = 0x17BB84u;
    // 0x17bb84: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17bb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17bb88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bb8c:
    // 0x17bb8c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17bb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17bb90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BB90u;
    {
        const bool branch_taken_0x17bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB90u;
        // 0x17bb94: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb90) {
            ctx->pc = 0x17BBA8u;
            goto label_17bba8;
        }
    }
    ctx->pc = 0x17BB98u;
    // 0x17bb98: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x17bb9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17BBA0u;
    {
        const bool branch_taken_0x17bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBA0u;
        // 0x17bba4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bba0) {
            ctx->pc = 0x17BBACu;
            goto label_17bbac;
        }
    }
    ctx->pc = 0x17BBA8u;
label_17bba8:
    // 0x17bba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17bba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bbac:
    // 0x17bbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbb0: 0xc05404e  jal         func_150138
    ctx->pc = 0x17BBB0u;
    SET_GPR_U32(ctx, 31, 0x17BBB8u);
    ctx->pc = 0x17BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBB0u;
    // 0x17bbb4: 0x269e0d80  addiu       $fp, $s4, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x17BBB0u, 0x17BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBB8u;
label_17bbb8:
    // 0x17bbb8: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x17bbbc: 0xc054074  jal         func_1501D0
    ctx->pc = 0x17BBBCu;
    SET_GPR_U32(ctx, 31, 0x17BBC4u);
    ctx->pc = 0x17BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BBBCu;
    // 0x17bbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x17BBBCu, 0x17BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBC4u;
label_17bbc4:
    // 0x17bbc4: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x17bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17bbc8: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x17bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bbcc: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x17bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bbd0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x17bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17bbd4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17bbd8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x17bbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17bbdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17bbe0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x17bbe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17bbe4: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BBE4u;
    {
        const bool branch_taken_0x17bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBE4u;
        // 0x17bbe8: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbe4) {
            ctx->pc = 0x17BC04u;
            goto label_17bc04;
        }
    }
    ctx->pc = 0x17BBECu;
    // 0x17bbec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x17bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bbf0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17bbf4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bbf8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17bbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17bbfc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x17bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bc00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17bc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17bc04:
    // 0x17bc04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17bc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17bc08: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17bc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17bc0c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x17BC0Cu;
    {
        const bool branch_taken_0x17bc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC0Cu;
        // 0x17bc10: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc0c) {
            ctx->pc = 0x17BB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bb50;
        }
    }
    ctx->pc = 0x17BC14u;
    // 0x17bc14: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x17bc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x17bc18: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x17bc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x17bc1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17bc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bc20: 0xc0ab564  jal         func_2AD590
    ctx->pc = 0x17BC20u;
    SET_GPR_U32(ctx, 31, 0x17BC28u);
    ctx->pc = 0x17BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC20u;
    // 0x17bc24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD590u, 0x17BC20u, 0x17BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC28u;
label_17bc28:
    // 0x17bc28: 0x92e2da50  lbu         $v0, -0x25B0($s7)
    ctx->pc = 0x17bc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294957648)));
    // 0x17bc2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BC2Cu;
    {
        const bool branch_taken_0x17bc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC2Cu;
        // 0x17bc30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc2c) {
            ctx->pc = 0x17BC44u;
            goto label_17bc44;
        }
    }
    ctx->pc = 0x17BC34u;
    // 0x17bc34: 0xa2e0da50  sb          $zero, -0x25B0($s7)
    ctx->pc = 0x17bc34u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294957648), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bc38: 0x26860100  addiu       $a2, $s4, 0x100
    ctx->pc = 0x17bc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x17bc3c: 0xc05f00a  jal         func_17C028
    ctx->pc = 0x17BC3Cu;
    SET_GPR_U32(ctx, 31, 0x17BC44u);
    ctx->pc = 0x17BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC3Cu;
    // 0x17bc40: 0x8e8500f0  lw          $a1, 0xF0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C028u, 0x17BC3Cu, 0x17BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC44u;
label_17bc44:
    // 0x17bc44: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x17bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17bc48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x17bc4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17bc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17bc50: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x17bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x17bc54: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17bc54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc58: 0x1717c2  srl         $v0, $s7, 31
    ctx->pc = 0x17bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
    // 0x17bc5c: 0x0  nop
    ctx->pc = 0x17bc5cu;
    // NOP
label_17bc60:
    // 0x17bc60: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17bc64: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17bc68: 0x24a51ad0  addiu       $a1, $a1, 0x1AD0
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6864));
    // 0x17bc6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17bc6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17bc70: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x17bc74: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17bc78: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x17bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x17bc7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17bc80: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x17bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x17bc84: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x17bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17bc88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc8c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x17bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x17bc90: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17bc94: 0x0  nop
    ctx->pc = 0x17bc94u;
    // NOP
label_17bc98:
    // 0x17bc98: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x17BC98u;
    {
        const bool branch_taken_0x17bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC98u;
        // 0x17bc9c: 0x24d00001  addiu       $s0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc98) {
            ctx->pc = 0x17BF1Cu;
            goto label_17bf1c;
        }
    }
    ctx->pc = 0x17BCA0u;
    // 0x17bca0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x17bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x17bca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bca8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x17bca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bcac: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x17bcacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x17bcb0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17bcb4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCB4u;
    {
        const bool branch_taken_0x17bcb4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCB4u;
        // 0x17bcb8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcb4) {
            ctx->pc = 0x17BCC4u;
            goto label_17bcc4;
        }
    }
    ctx->pc = 0x17BCBCu;
    // 0x17bcbc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17bcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17bcc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bcc4:
    // 0x17bcc4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17bcc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BCC8u;
    {
        const bool branch_taken_0x17bcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCC8u;
        // 0x17bccc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcc8) {
            ctx->pc = 0x17BCE0u;
            goto label_17bce0;
        }
    }
    ctx->pc = 0x17BCD0u;
    // 0x17bcd0: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x17bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x17bcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bcd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17BCD8u;
    {
        const bool branch_taken_0x17bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCD8u;
        // 0x17bcdc: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcd8) {
            ctx->pc = 0x17BCE4u;
            goto label_17bce4;
        }
    }
    ctx->pc = 0x17BCE0u;
label_17bce0:
    // 0x17bce0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17bce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bce4:
    // 0x17bce4: 0x8e820d80  lw          $v0, 0xD80($s4)
    ctx->pc = 0x17bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3456)));
    // 0x17bce8: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x17bce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17bcec: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x17bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x17bcf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bcf4: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x17bcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17bcf8: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x17bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x17bcfc: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x17bcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17bd00: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x17bd04: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x17bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17bd08: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x17bd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17bd0c: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x17bd0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17bd10: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17bd14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17bd18: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x17bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17bd1c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17bd1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bd20: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17bd20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bd24: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17bd24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17bd28: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17bd2c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x17bd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bd30: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x17bd30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17bd34: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17bd38: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x17bd3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17bd44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17bd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17bd48: 0xc056864  jal         func_15A190
    ctx->pc = 0x17BD48u;
    SET_GPR_U32(ctx, 31, 0x17BD50u);
    ctx->pc = 0x17BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD48u;
    // 0x17bd4c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x17BD48u, 0x17BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD50u;
label_17bd50:
    // 0x17bd50: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x17bd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bd54: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x17bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x17bd58: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x17bd58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x17bd5c: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x17bd5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bd60: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x17bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x17bd64: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x17bd64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bd68: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x17bd68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x17bd6c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x17bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17bd70: 0xc04078a  jal         func_101E28
    ctx->pc = 0x17BD70u;
    SET_GPR_U32(ctx, 31, 0x17BD78u);
    ctx->pc = 0x17BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD70u;
    // 0x17bd74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x17BD70u, 0x17BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD78u;
label_17bd78:
    // 0x17bd78: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17bd78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x17bd7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17bd7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bd80: 0x0  nop
    ctx->pc = 0x17bd80u;
    // NOP
    // 0x17bd84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17bd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bd88: 0x0  nop
    ctx->pc = 0x17bd88u;
    // NOP
    // 0x17bd8c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x17BD8Cu;
    {
        const bool branch_taken_0x17bd8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD8Cu;
        // 0x17bd90: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd8c) {
            ctx->pc = 0x17BDC8u;
            goto label_17bdc8;
        }
    }
    ctx->pc = 0x17BD94u;
    // 0x17bd94: 0x0  nop
    ctx->pc = 0x17bd94u;
    // NOP
    // 0x17bd98: 0x0  nop
    ctx->pc = 0x17bd98u;
    // NOP
    // 0x17bd9c: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x17bd9cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x17bda0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x17bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17bda4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bda8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x17bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17bdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x17bdb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17bdb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17bdb4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x17bdb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x17bdb8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x17bdb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x17bdbc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x17bdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17bdc0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x17bdc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17bdc4: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x17bdc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_17bdc8:
    // 0x17bdc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17bdcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17bdccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bdd0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x17bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17bdd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17bdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bddc: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x17BDDCu;
    SET_GPR_U32(ctx, 31, 0x17BDE4u);
    ctx->pc = 0x17BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDDCu;
    // 0x17bde0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x17BDDCu, 0x17BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE4u;
label_17bde4:
    // 0x17bde4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdec: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x17bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17bdf0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x17bdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x17bdf4: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x17bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17bdf8: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x17bdf8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x17bdfc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x17bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17be00: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x17be00u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x17be04: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x17be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17be08: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x17be08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x17be0c: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x17be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17be10: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x17be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x17be14: 0xc7aa003c  lwc1        $f10, 0x3C($sp)
    ctx->pc = 0x17be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x17be18: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17be18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17be1c: 0xc7ab0030  lwc1        $f11, 0x30($sp)
    ctx->pc = 0x17be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x17be20: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x17be20u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x17be24: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x17be24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x17be28: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x17be28u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x17be2c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x17be2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x17be30: 0x0  nop
    ctx->pc = 0x17be30u;
    // NOP
    // 0x17be34: 0x0  nop
    ctx->pc = 0x17be34u;
    // NOP
    // 0x17be38: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x17be38u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x17be3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17be3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17be40: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17be40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17be44: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x17be44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x17be48: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x17be48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x17be4c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x17be4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17be50: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x17be50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17be54: 0x460b0bc2  mul.s       $f15, $f1, $f11
    ctx->pc = 0x17be54u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x17be58: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x17be58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17be5c: 0x460d0b82  mul.s       $f14, $f1, $f13
    ctx->pc = 0x17be5cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x17be60: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x17be60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17be64: 0x460c0a42  mul.s       $f9, $f1, $f12
    ctx->pc = 0x17be64u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x17be68: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x17be68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x17be6c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x17be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be70: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x17be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x17be74: 0x460d00c2  mul.s       $f3, $f0, $f13
    ctx->pc = 0x17be74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x17be78: 0xc648000c  lwc1        $f8, 0xC($s2)
    ctx->pc = 0x17be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x17be7c: 0x460c3102  mul.s       $f4, $f6, $f12
    ctx->pc = 0x17be7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x17be80: 0x460b0142  mul.s       $f5, $f0, $f11
    ctx->pc = 0x17be80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x17be84: 0x460a41c2  mul.s       $f7, $f8, $f10
    ctx->pc = 0x17be84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x17be88: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x17be88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x17be8c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x17be8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x17be90: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x17be90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x17be94: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x17be94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x17be98: 0x460a3282  mul.s       $f10, $f6, $f10
    ctx->pc = 0x17be98u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x17be9c: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x17be9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x17bea0: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x17bea0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x17bea4: 0x460f39c1  sub.s       $f7, $f7, $f15
    ctx->pc = 0x17bea4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x17bea8: 0x460b42c2  mul.s       $f11, $f8, $f11
    ctx->pc = 0x17bea8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x17beac: 0x460c4302  mul.s       $f12, $f8, $f12
    ctx->pc = 0x17beacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x17beb0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x17beb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x17beb4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17beb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17beb8: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x17beb8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x17bebc: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x17bebcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x17bec0: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x17bec0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x17bec4: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x17bec4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x17bec8: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x17bec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x17becc: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x17beccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x17bed0: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x17bed0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x17bed4: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x17bed4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x17bed8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x17bed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17bedc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x17bedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17bee0: 0xe7a90038  swc1        $f9, 0x38($sp)
    ctx->pc = 0x17bee0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17bee4: 0xe7a7003c  swc1        $f7, 0x3C($sp)
    ctx->pc = 0x17bee4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17bee8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x17bee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17beec: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x17beecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17bef0: 0xe7a90048  swc1        $f9, 0x48($sp)
    ctx->pc = 0x17bef0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17bef4: 0xe7a7004c  swc1        $f7, 0x4C($sp)
    ctx->pc = 0x17bef4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17bef8: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x17BEF8u;
    SET_GPR_U32(ctx, 31, 0x17BF00u);
    ctx->pc = 0x17BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BEF8u;
    // 0x17befc: 0x8e6500d0  lw          $a1, 0xD0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x17BEF8u, 0x17BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF00u;
label_17bf00:
    // 0x17bf00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17bf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf08: 0xc051eec  jal         func_147BB0
    ctx->pc = 0x17BF08u;
    SET_GPR_U32(ctx, 31, 0x17BF10u);
    ctx->pc = 0x17BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF08u;
    // 0x17bf0c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BB0u, 0x17BF08u, 0x17BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF10u;
label_17bf10:
    // 0x17bf10: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x17bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x17bf14: 0xc054074  jal         func_1501D0
    ctx->pc = 0x17BF14u;
    SET_GPR_U32(ctx, 31, 0x17BF1Cu);
    ctx->pc = 0x17BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF14u;
    // 0x17bf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x17BF14u, 0x17BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF1Cu;
label_17bf1c:
    // 0x17bf1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17bf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf20: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x17bf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17bf24: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x17BF24u;
    {
        const bool branch_taken_0x17bf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF24u;
        // 0x17bf28: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf24) {
            ctx->pc = 0x17BC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bc98;
        }
    }
    ctx->pc = 0x17BF2Cu;
    // 0x17bf2c: 0x8fb7007c  lw          $s7, 0x7C($sp)
    ctx->pc = 0x17bf2cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x17bf30: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x17bf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17bf34: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x17BF34u;
    {
        const bool branch_taken_0x17bf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF34u;
        // 0x17bf38: 0x1717c2  srl         $v0, $s7, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf34) {
            ctx->pc = 0x17BC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bc60;
        }
    }
    ctx->pc = 0x17BF3Cu;
    // 0x17bf3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17bf40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17bf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf44: 0x24521ad0  addiu       $s2, $v0, 0x1AD0
    ctx->pc = 0x17bf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x17bf48: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x17bf4c: 0x0  nop
    ctx->pc = 0x17bf4cu;
    // NOP
label_17bf50:
    // 0x17bf50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17bf54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17bf58: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17bf5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17bf60: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17BF60u;
    {
        const bool branch_taken_0x17bf60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF60u;
        // 0x17bf64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf60) {
            ctx->pc = 0x17BFC0u;
            goto label_17bfc0;
        }
    }
    ctx->pc = 0x17BF68u;
    // 0x17bf68: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x17bf68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bf6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17bf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf70: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x17bf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x17bf74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17bf78: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17bf7c: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x17bf7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17bf80: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x17bf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17bf84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BF84u;
    {
        const bool branch_taken_0x17bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF84u;
        // 0x17bf88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf84) {
            ctx->pc = 0x17BF90u;
            goto label_17bf90;
        }
    }
    ctx->pc = 0x17BF8Cu;
    // 0x17bf8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17bf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bf90:
    // 0x17bf90: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17bf94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BF94u;
    {
        const bool branch_taken_0x17bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bf94) {
            ctx->pc = 0x17BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BF94u;
            // 0x17bf98: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BFACu;
            goto label_17bfac;
        }
    }
    ctx->pc = 0x17BF9Cu;
    // 0x17bf9c: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x17bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x17bfa0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17bfa4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bfa8: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x17bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_17bfac:
    // 0x17bfac: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x17BFACu;
    SET_GPR_U32(ctx, 31, 0x17BFB4u);
    ctx->pc = 0x17BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFACu;
    // 0x17bfb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x17BFACu, 0x17BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFB4u;
label_17bfb4:
    // 0x17bfb4: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x17bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x17bfb8: 0xc054074  jal         func_1501D0
    ctx->pc = 0x17BFB8u;
    SET_GPR_U32(ctx, 31, 0x17BFC0u);
    ctx->pc = 0x17BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFB8u;
    // 0x17bfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x17BFB8u, 0x17BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFC0u;
label_17bfc0:
    // 0x17bfc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17bfc4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17bfc8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x17BFC8u;
    {
        const bool branch_taken_0x17bfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfc8) {
            ctx->pc = 0x17BFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BFC8u;
            // 0x17bfcc: 0x1117c2  srl         $v0, $s1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf50;
        }
    }
    ctx->pc = 0x17BFD0u;
    // 0x17bfd0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x17bfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17bfd4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x17bfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17bfd8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x17bfd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17bfdc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x17bfdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17bfe0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x17bfe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17bfe4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x17bfe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17bfe8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x17bfe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17bfec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x17bfecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17bff0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17bff0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bff4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17bff8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x17bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17bffc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x17bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c000: 0x3e00008  jr          $ra
    ctx->pc = 0x17C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C000u;
        // 0x17c004: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C008u;
}
