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

// Function: func_001A8B38
// Address: 0x1a8b38 - 0x1a91f0
void func_001A8B38_0x1a8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8B38_0x1a8b38");
#endif

    switch (ctx->pc) {
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c0cu: goto label_1a8c0c;
        case 0x1a8c90u: goto label_1a8c90;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8f38u: goto label_1a8f38;
        case 0x1a8f60u: goto label_1a8f60;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a8u: goto label_1a91a8;
        default: break;
    }

    ctx->pc = 0x1a8b38u;

    // 0x1a8b38: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a8b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a8b3c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1a8b40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b44: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1a8b48: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1a8b4c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a8b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1a8b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a8b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b54: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1a8b58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b5c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1a8b60: 0x26950e40  addiu       $s5, $s4, 0xE40
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 3648));
    // 0x1a8b64: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1a8b68: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x1a8b68u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x1a8b6c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1a8b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1a8b70: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a8b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1a8b74: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a8b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a8b78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a8b7c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x1A8B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B84u);
    ctx->pc = 0x1A8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B7Cu;
    // 0x1a8b80: 0xe7b50128  swc1        $f21, 0x128($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x1A8B7Cu, 0x1A8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B84u;
label_1a8b84:
    // 0x1a8b84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8b88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a8b8c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a8b90: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a8b94: 0x24577948  addiu       $s7, $v0, 0x7948
    ctx->pc = 0x1a8b94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 31048));
label_1a8b98:
    // 0x1a8b98: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1a8b9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a8ba0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a8ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a8ba4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a8ba8: 0x16230028  bne         $s1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A8BA8u;
    {
        const bool branch_taken_0x1a8ba8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA8u;
        // 0x1a8bac: 0x269e0e40  addiu       $fp, $s4, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 3648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba8) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8BB0u;
    // 0x1a8bb0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1a8bb4: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1a8bb8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1a8bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bc0: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a8bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a8bc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8BC4u;
    {
        const bool branch_taken_0x1a8bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC4u;
        // 0x1a8bc8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bc4) {
            ctx->pc = 0x1A8BD4u;
            goto label_1a8bd4;
        }
    }
    ctx->pc = 0x1A8BCCu;
    // 0x1a8bcc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a8bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8bd4:
    // 0x1a8bd4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a8bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a8bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8BD8u;
    {
        const bool branch_taken_0x1a8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BD8u;
        // 0x1a8bdc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bd8) {
            ctx->pc = 0x1A8BF0u;
            goto label_1a8bf0;
        }
    }
    ctx->pc = 0x1A8BE0u;
    // 0x1a8be0: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1a8be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8BE8u;
    {
        const bool branch_taken_0x1a8be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BE8u;
        // 0x1a8bec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8be8) {
            ctx->pc = 0x1A8BF4u;
            goto label_1a8bf4;
        }
    }
    ctx->pc = 0x1A8BF0u;
label_1a8bf0:
    // 0x1a8bf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8bf4:
    // 0x1a8bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bf8: 0xc05404e  jal         func_150138
    ctx->pc = 0x1A8BF8u;
    SET_GPR_U32(ctx, 31, 0x1A8C00u);
    ctx->pc = 0x1A8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BF8u;
    // 0x1a8bfc: 0x269e0e40  addiu       $fp, $s4, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x1A8BF8u, 0x1A8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C00u;
label_1a8c00:
    // 0x1a8c00: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x1a8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x1a8c04: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A8C04u;
    SET_GPR_U32(ctx, 31, 0x1A8C0Cu);
    ctx->pc = 0x1A8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C04u;
    // 0x1a8c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A8C04u, 0x1A8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C0Cu;
label_1a8c0c:
    // 0x1a8c0c: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x1a8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8c10: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1a8c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c14: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1a8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c18: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a8c1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a8c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a8c20: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a8c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a8c24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a8c28: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a8c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a8c2c: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8C2Cu;
    {
        const bool branch_taken_0x1a8c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C2Cu;
        // 0x1a8c30: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c2c) {
            ctx->pc = 0x1A8C4Cu;
            goto label_1a8c4c;
        }
    }
    ctx->pc = 0x1A8C34u;
    // 0x1a8c34: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a8c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a8c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a8c3c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a8c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a8c44: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a8c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a8c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a8c4c:
    // 0x1a8c4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a8c50: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a8c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8c54: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1A8C54u;
    {
        const bool branch_taken_0x1a8c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C54u;
        // 0x1a8c58: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c54) {
            ctx->pc = 0x1A8B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8b98;
        }
    }
    ctx->pc = 0x1A8C5Cu;
    // 0x1a8c5c: 0x8ec34c58  lw          $v1, 0x4C58($s6)
    ctx->pc = 0x1a8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19544)));
    // 0x1a8c60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a8c64: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a8c68: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a8c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8c6c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1A8C6Cu;
    {
        const bool branch_taken_0x1a8c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c6c) {
            ctx->pc = 0x1A8DFCu;
            goto label_1a8dfc;
        }
    }
    ctx->pc = 0x1A8C74u;
    // 0x1a8c74: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1a8c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1a8c78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a8c7c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1a8c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a8c80: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x1a8c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c84: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a8c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a8c88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8c8c: 0x0  nop
    ctx->pc = 0x1a8c8cu;
    // NOP
label_1a8c90:
    // 0x1a8c90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c94: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x1a8c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x1a8c98: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1a8c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a8c9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C9Cu;
    {
        const bool branch_taken_0x1a8c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C9Cu;
        // 0x1a8ca0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c9c) {
            ctx->pc = 0x1A8CACu;
            goto label_1a8cac;
        }
    }
    ctx->pc = 0x1A8CA4u;
    // 0x1a8ca4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1a8ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1a8ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a8ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8cac:
    // 0x1a8cac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a8cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a8cb0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A8CB0u;
    {
        const bool branch_taken_0x1a8cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8cb0) {
            ctx->pc = 0x1A8CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8CB0u;
            // 0x1a8cb4: 0x8cc300f0  lw          $v1, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8CDCu;
            goto label_1a8cdc;
        }
    }
    ctx->pc = 0x1A8CB8u;
    // 0x1a8cb8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1a8cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1a8cbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8CBCu;
    {
        const bool branch_taken_0x1a8cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CBCu;
        // 0x1a8cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cbc) {
            ctx->pc = 0x1A8CCCu;
            goto label_1a8ccc;
        }
    }
    ctx->pc = 0x1A8CC4u;
    // 0x1a8cc4: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x1a8cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ccc:
    // 0x1a8ccc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a8cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a8cd0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A8CD0u;
    {
        const bool branch_taken_0x1a8cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD0u;
        // 0x1a8cd4: 0x28620300  slti        $v0, $v1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cd0) {
            ctx->pc = 0x1A8D54u;
            goto label_1a8d54;
        }
    }
    ctx->pc = 0x1A8CD8u;
    // 0x1a8cd8: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_1a8cdc:
    // 0x1a8cdc: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x1a8ce0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1a8ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8ce4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1a8ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8ce8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1a8ce8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8cec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a8cecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a8cf0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8cf4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1a8cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8cf8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8cfc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8d00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a8d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8d08: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a8d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a8d0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a8d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8d10: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1a8d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8d14: 0x0  nop
    ctx->pc = 0x1a8d14u;
    // NOP
    // 0x1a8d18: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1A8D18u;
    {
        const bool branch_taken_0x1a8d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D18u;
        // 0x1a8d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d18) {
            ctx->pc = 0x1A8DE4u;
            goto label_1a8de4;
        }
    }
    ctx->pc = 0x1A8D20u;
    // 0x1a8d20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8d24: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1a8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1a8d28: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a8d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a8d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a8d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a8d30: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a8d34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a8d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a8d38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a8d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a8d3c: 0xc0ab71c  jal         func_2ADC70
    ctx->pc = 0x1A8D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D44u);
    ctx->pc = 0x1A8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D3Cu;
    // 0x1a8d40: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADC70u, 0x1A8D3Cu, 0x1A8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D44u;
label_1a8d44:
    // 0x1a8d44: 0xc0ab872  jal         func_2AE1C8
    ctx->pc = 0x1A8D44u;
    SET_GPR_U32(ctx, 31, 0x1A8D4Cu);
    ctx->pc = 0x1A8D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D44u;
    // 0x1a8d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C8u, 0x1A8D44u, 0x1A8D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D4Cu;
label_1a8d4c:
    // 0x1a8d4c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A8D4Cu;
    {
        const bool branch_taken_0x1a8d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D4Cu;
        // 0x1a8d50: 0x8ec34c58  lw          $v1, 0x4C58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d4c) {
            ctx->pc = 0x1A8DE8u;
            goto label_1a8de8;
        }
    }
    ctx->pc = 0x1A8D54u;
label_1a8d54:
    // 0x1a8d54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8D54u;
    {
        const bool branch_taken_0x1a8d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D54u;
        // 0x1a8d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d54) {
            ctx->pc = 0x1A8D64u;
            goto label_1a8d64;
        }
    }
    ctx->pc = 0x1A8D5Cu;
    // 0x1a8d5c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x1a8d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d64:
    // 0x1a8d64: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a8d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a8d68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A8D68u;
    {
        const bool branch_taken_0x1a8d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D68u;
        // 0x1a8d6c: 0x38620357  xori        $v0, $v1, 0x357 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)855);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d68) {
            ctx->pc = 0x1A8DE4u;
            goto label_1a8de4;
        }
    }
    ctx->pc = 0x1A8D70u;
    // 0x1a8d70: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A8D70u;
    {
        const bool branch_taken_0x1a8d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D70u;
        // 0x1a8d74: 0x8ec34c58  lw          $v1, 0x4C58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d70) {
            ctx->pc = 0x1A8DE8u;
            goto label_1a8de8;
        }
    }
    ctx->pc = 0x1A8D78u;
    // 0x1a8d78: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x1a8d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1a8d7c: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x1a8d80: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8d84: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1a8d84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8d88: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1a8d88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8d8c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a8d8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a8d90: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a8d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8d94: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1a8d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8d98: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8d9c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8da0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8da4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a8da4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8da8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a8da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a8dac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a8dacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8db0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1a8db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8db4: 0x0  nop
    ctx->pc = 0x1a8db4u;
    // NOP
    // 0x1a8db8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A8DB8u;
    {
        const bool branch_taken_0x1a8db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DB8u;
        // 0x1a8dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8db8) {
            ctx->pc = 0x1A8DE4u;
            goto label_1a8de4;
        }
    }
    ctx->pc = 0x1A8DC0u;
    // 0x1a8dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8dc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a8dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a8dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8dcc: 0xc44c026c  lwc1        $f12, 0x26C($v0)
    ctx->pc = 0x1a8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8dd0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a8dd4: 0xc0ab7d4  jal         func_2ADF50
    ctx->pc = 0x1A8DD4u;
    SET_GPR_U32(ctx, 31, 0x1A8DDCu);
    ctx->pc = 0x1A8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DD4u;
    // 0x1a8dd8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADF50u, 0x1A8DD4u, 0x1A8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DDCu;
label_1a8ddc:
    // 0x1a8ddc: 0xc0ab872  jal         func_2AE1C8
    ctx->pc = 0x1A8DDCu;
    SET_GPR_U32(ctx, 31, 0x1A8DE4u);
    ctx->pc = 0x1A8DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DDCu;
    // 0x1a8de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C8u, 0x1A8DDCu, 0x1A8DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DE4u;
label_1a8de4:
    // 0x1a8de4: 0x8ec34c58  lw          $v1, 0x4C58($s6)
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19544)));
label_1a8de8:
    // 0x1a8de8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8dec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a8df0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a8df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8df4: 0x5440ffa6  bnel        $v0, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1A8DF4u;
    {
        const bool branch_taken_0x1a8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8df4) {
            ctx->pc = 0x1A8DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8DF4u;
            // 0x1a8df8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c90;
        }
    }
    ctx->pc = 0x1A8DFCu;
label_1a8dfc:
    // 0x1a8dfc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1a8dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x1a8e00: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1a8e04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a8e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a8e08: 0xc0ab564  jal         func_2AD590
    ctx->pc = 0x1A8E08u;
    SET_GPR_U32(ctx, 31, 0x1A8E10u);
    ctx->pc = 0x1A8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E08u;
    // 0x1a8e0c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD590u, 0x1A8E08u, 0x1A8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1a8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1a8e14: 0x9062dc00  lbu         $v0, -0x2400($v1)
    ctx->pc = 0x1a8e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3BDC00u));
    // 0x1a8e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8E18u;
    {
        const bool branch_taken_0x1a8e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E18u;
        // 0x1a8e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e18) {
            ctx->pc = 0x1A8E30u;
            goto label_1a8e30;
        }
    }
    ctx->pc = 0x1A8E20u;
    // 0x1a8e20: 0xa060dc00  sb          $zero, -0x2400($v1)
    ctx->pc = 0x1a8e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958080), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8e24: 0x26860100  addiu       $a2, $s4, 0x100
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x1a8e28: 0xc06a484  jal         func_1A9210
    ctx->pc = 0x1A8E28u;
    SET_GPR_U32(ctx, 31, 0x1A8E30u);
    ctx->pc = 0x1A8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E28u;
    // 0x1a8e2c: 0x8e8500f0  lw          $a1, 0xF0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9210u, 0x1A8E28u, 0x1A8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E30u;
label_1a8e30:
    // 0x1a8e30: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a8e34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a8e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a8e38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a8e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a8e3c: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1a8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x1a8e40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e44: 0x1717c2  srl         $v0, $s7, 31
    ctx->pc = 0x1a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
label_1a8e48:
    // 0x1a8e48: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a8e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a8e4c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1a8e50: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x1a8e54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a8e58: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x1a8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1a8e5c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1a8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a8e60: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1a8e64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a8e68: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x1a8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x1a8e6c: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1a8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1a8e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e74: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1a8e78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8e7c: 0x0  nop
    ctx->pc = 0x1a8e7cu;
    // NOP
label_1a8e80:
    // 0x1a8e80: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1A8E80u;
    {
        const bool branch_taken_0x1a8e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E80u;
        // 0x1a8e84: 0x24d00001  addiu       $s0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e80) {
            ctx->pc = 0x1A9104u;
            goto label_1a9104;
        }
    }
    ctx->pc = 0x1A8E88u;
    // 0x1a8e88: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1a8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a8e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1a8e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8e94: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x1a8e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1a8e98: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a8e9c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8E9Cu;
    {
        const bool branch_taken_0x1a8e9c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E9Cu;
        // 0x1a8ea0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e9c) {
            ctx->pc = 0x1A8EACu;
            goto label_1a8eac;
        }
    }
    ctx->pc = 0x1A8EA4u;
    // 0x1a8ea4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a8ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8eac:
    // 0x1a8eac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a8eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a8eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8EB0u;
    {
        const bool branch_taken_0x1a8eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EB0u;
        // 0x1a8eb4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8eb0) {
            ctx->pc = 0x1A8EC8u;
            goto label_1a8ec8;
        }
    }
    ctx->pc = 0x1A8EB8u;
    // 0x1a8eb8: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x1a8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1a8ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8EC0u;
    {
        const bool branch_taken_0x1a8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EC0u;
        // 0x1a8ec4: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ec0) {
            ctx->pc = 0x1A8ECCu;
            goto label_1a8ecc;
        }
    }
    ctx->pc = 0x1A8EC8u;
label_1a8ec8:
    // 0x1a8ec8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ecc:
    // 0x1a8ecc: 0x8e820e40  lw          $v0, 0xE40($s4)
    ctx->pc = 0x1a8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3648)));
    // 0x1a8ed0: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x1a8ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8ed4: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x1a8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1a8ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8edc: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x1a8edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a8ee0: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x1a8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1a8ee4: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x1a8ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a8ee8: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1a8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1a8eec: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1a8eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a8ef0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1a8ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a8ef4: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1a8ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a8ef8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a8efc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a8efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a8f00: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8f04: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a8f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8f08: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1a8f08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8f0c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a8f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a8f10: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8f14: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a8f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a8f18: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1a8f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8f1c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a8f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8f20: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x1a8f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8f2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a8f30: 0xc056864  jal         func_15A190
    ctx->pc = 0x1A8F30u;
    SET_GPR_U32(ctx, 31, 0x1A8F38u);
    ctx->pc = 0x1A8F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F30u;
    // 0x1a8f34: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x1A8F30u, 0x1A8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F38u;
label_1a8f38:
    // 0x1a8f38: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a8f3c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1a8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1a8f40: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x1a8f40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a8f44: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x1a8f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8f48: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1a8f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1a8f4c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1a8f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a8f50: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a8f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1a8f54: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1a8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8f58: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1A8F58u;
    SET_GPR_U32(ctx, 31, 0x1A8F60u);
    ctx->pc = 0x1A8F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F58u;
    // 0x1a8f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1A8F58u, 0x1A8F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F60u;
label_1a8f60:
    // 0x1a8f60: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a8f60u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1a8f64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a8f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8f68: 0x0  nop
    ctx->pc = 0x1a8f68u;
    // NOP
    // 0x1a8f6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a8f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8f70: 0x0  nop
    ctx->pc = 0x1a8f70u;
    // NOP
    // 0x1a8f74: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A8F74u;
    {
        const bool branch_taken_0x1a8f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F74u;
        // 0x1a8f78: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f74) {
            ctx->pc = 0x1A8FB0u;
            goto label_1a8fb0;
        }
    }
    ctx->pc = 0x1A8F7Cu;
    // 0x1a8f7c: 0x0  nop
    ctx->pc = 0x1a8f7cu;
    // NOP
    // 0x1a8f80: 0x0  nop
    ctx->pc = 0x1a8f80u;
    // NOP
    // 0x1a8f84: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x1a8f84u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x1a8f88: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1a8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a8f8c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8f90: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1a8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8f94: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1a8f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1a8f98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a8f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a8f9c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1a8f9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a8fa0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1a8fa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a8fa4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1a8fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a8fa8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1a8fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a8fac: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x1a8facu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a8fb0:
    // 0x1a8fb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a8fb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a8fb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8fb8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a8fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8fbc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a8fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fc4: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x1A8FC4u;
    SET_GPR_U32(ctx, 31, 0x1A8FCCu);
    ctx->pc = 0x1A8FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FC4u;
    // 0x1a8fc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x1A8FC4u, 0x1A8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FCCu;
label_1a8fcc:
    // 0x1a8fcc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fd4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1a8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a8fd8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1a8fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8fdc: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x1a8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a8fe0: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x1a8fe0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a8fe4: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1a8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8fe8: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x1a8fe8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a8fec: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1a8fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a8ff0: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x1a8ff0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a8ff4: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1a8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8ff8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1a8ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1a8ffc: 0xc7aa003c  lwc1        $f10, 0x3C($sp)
    ctx->pc = 0x1a8ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a9000: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a9000u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1a9004: 0xc7ab0030  lwc1        $f11, 0x30($sp)
    ctx->pc = 0x1a9004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a9008: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1a9008u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1a900c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1a900cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1a9010: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1a9010u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1a9014: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1a9014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1a9018: 0x0  nop
    ctx->pc = 0x1a9018u;
    // NOP
    // 0x1a901c: 0x0  nop
    ctx->pc = 0x1a901cu;
    // NOP
    // 0x1a9020: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1a9020u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1a9024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a9024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9028: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a9028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a902c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1a902cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a9030: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1a9030u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a9034: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a9034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a9038: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1a9038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a903c: 0x460b0bc2  mul.s       $f15, $f1, $f11
    ctx->pc = 0x1a903cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x1a9040: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1a9040u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a9044: 0x460d0b82  mul.s       $f14, $f1, $f13
    ctx->pc = 0x1a9044u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1a9048: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x1a9048u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a904c: 0x460c0a42  mul.s       $f9, $f1, $f12
    ctx->pc = 0x1a904cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a9050: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x1a9050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x1a9054: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1a9054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9058: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x1a9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a905c: 0x460d00c2  mul.s       $f3, $f0, $f13
    ctx->pc = 0x1a905cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a9060: 0xc648000c  lwc1        $f8, 0xC($s2)
    ctx->pc = 0x1a9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a9064: 0x460c3102  mul.s       $f4, $f6, $f12
    ctx->pc = 0x1a9064u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x1a9068: 0x460b0142  mul.s       $f5, $f0, $f11
    ctx->pc = 0x1a9068u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x1a906c: 0x460a41c2  mul.s       $f7, $f8, $f10
    ctx->pc = 0x1a906cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x1a9070: 0x460b3082  mul.s       $f2, $f6, $f11
    ctx->pc = 0x1a9070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x1a9074: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1a9074u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1a9078: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x1a9078u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1a907c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1a907cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1a9080: 0x460a3282  mul.s       $f10, $f6, $f10
    ctx->pc = 0x1a9080u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x1a9084: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x1a9084u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x1a9088: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x1a9088u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x1a908c: 0x460f39c1  sub.s       $f7, $f7, $f15
    ctx->pc = 0x1a908cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x1a9090: 0x460b42c2  mul.s       $f11, $f8, $f11
    ctx->pc = 0x1a9090u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x1a9094: 0x460c4302  mul.s       $f12, $f8, $f12
    ctx->pc = 0x1a9094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x1a9098: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1a9098u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1a909c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a909cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a90a0: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x1a90a0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x1a90a4: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x1a90a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1a90a8: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x1a90a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x1a90ac: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x1a90acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x1a90b0: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x1a90b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x1a90b4: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x1a90b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x1a90b8: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1a90b8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x1a90bc: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x1a90bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x1a90c0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1a90c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a90c4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a90c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a90c8: 0xe7a90038  swc1        $f9, 0x38($sp)
    ctx->pc = 0x1a90c8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a90cc: 0xe7a7003c  swc1        $f7, 0x3C($sp)
    ctx->pc = 0x1a90ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a90d0: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1a90d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a90d4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1a90d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a90d8: 0xe7a90048  swc1        $f9, 0x48($sp)
    ctx->pc = 0x1a90d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a90dc: 0xe7a7004c  swc1        $f7, 0x4C($sp)
    ctx->pc = 0x1a90dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1a90e0: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x1A90E0u;
    SET_GPR_U32(ctx, 31, 0x1A90E8u);
    ctx->pc = 0x1A90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90E0u;
    // 0x1a90e4: 0x8e6500d0  lw          $a1, 0xD0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x1A90E0u, 0x1A90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90E8u;
label_1a90e8:
    // 0x1a90e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a90e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a90ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90f0: 0xc051eec  jal         func_147BB0
    ctx->pc = 0x1A90F0u;
    SET_GPR_U32(ctx, 31, 0x1A90F8u);
    ctx->pc = 0x1A90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90F0u;
    // 0x1a90f4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BB0u, 0x1A90F0u, 0x1A90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90F8u;
label_1a90f8:
    // 0x1a90f8: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x1a90fc: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A90FCu;
    SET_GPR_U32(ctx, 31, 0x1A9104u);
    ctx->pc = 0x1A9100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90FCu;
    // 0x1a9100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A90FCu, 0x1A9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9104u;
label_1a9104:
    // 0x1a9104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a9104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9108: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1a9108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a910c: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x1A910Cu;
    {
        const bool branch_taken_0x1a910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A910Cu;
        // 0x1a9110: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a910c) {
            ctx->pc = 0x1A8E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e80;
        }
    }
    ctx->pc = 0x1A9114u;
    // 0x1a9114: 0x8fb7007c  lw          $s7, 0x7C($sp)
    ctx->pc = 0x1a9114u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9118: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x1a9118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a911c: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x1A911Cu;
    {
        const bool branch_taken_0x1a911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A911Cu;
        // 0x1a9120: 0x1717c2  srl         $v0, $s7, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a911c) {
            ctx->pc = 0x1A8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e48;
        }
    }
    ctx->pc = 0x1A9124u;
    // 0x1a9124: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a9124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a9128: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a912c: 0x24527948  addiu       $s2, $v0, 0x7948
    ctx->pc = 0x1a912cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31048));
    // 0x1a9130: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1a9134: 0x0  nop
    ctx->pc = 0x1a9134u;
    // NOP
label_1a9138:
    // 0x1a9138: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a913c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9140: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a9144: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9148: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9148u;
    {
        const bool branch_taken_0x1a9148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9148u;
        // 0x1a914c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9148) {
            ctx->pc = 0x1A91A8u;
            goto label_1a91a8;
        }
    }
    ctx->pc = 0x1A9150u;
    // 0x1a9150: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1a9150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9154: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9158: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x1a9158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1a915c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9160: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9164: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x1a9164u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9168: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1a9168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a916c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A916Cu;
    {
        const bool branch_taken_0x1a916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A916Cu;
        // 0x1a9170: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a916c) {
            ctx->pc = 0x1A9178u;
            goto label_1a9178;
        }
    }
    ctx->pc = 0x1A9174u;
    // 0x1a9174: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a9174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9178:
    // 0x1a9178: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a9178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a917c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A917Cu;
    {
        const bool branch_taken_0x1a917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a917c) {
            ctx->pc = 0x1A9180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A917Cu;
            // 0x1a9180: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9194u;
            goto label_1a9194;
        }
    }
    ctx->pc = 0x1A9184u;
    // 0x1a9184: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x1a9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1a9188: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a918c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9190: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1a9194:
    // 0x1a9194: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x1A9194u;
    SET_GPR_U32(ctx, 31, 0x1A919Cu);
    ctx->pc = 0x1A9198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9194u;
    // 0x1a9198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x1A9194u, 0x1A919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A919Cu;
label_1a919c:
    // 0x1a919c: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x1a91a0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A91A0u;
    SET_GPR_U32(ctx, 31, 0x1A91A8u);
    ctx->pc = 0x1A91A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91A0u;
    // 0x1a91a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A91A0u, 0x1A91A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91A8u;
label_1a91a8:
    // 0x1a91a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a91a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a91ac: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a91acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a91b0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1A91B0u;
    {
        const bool branch_taken_0x1a91b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91b0) {
            ctx->pc = 0x1A91B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A91B0u;
            // 0x1a91b4: 0x1117c2  srl         $v0, $s1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9138;
        }
    }
    ctx->pc = 0x1A91B8u;
    // 0x1a91b8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a91b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a91bc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a91bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a91c0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a91c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a91c4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a91c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a91c8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a91c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a91cc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a91ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a91d0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a91d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a91d4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a91d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a91d8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a91d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a91dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a91dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a91e0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1a91e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a91e4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1a91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a91e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A91E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91E8u;
        // 0x1a91ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A91E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A91F0u;
}
