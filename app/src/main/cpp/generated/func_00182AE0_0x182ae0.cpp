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

// Function: func_00182AE0
// Address: 0x182ae0 - 0x182fd8
void func_00182AE0_0x182ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182AE0_0x182ae0");
#endif

    switch (ctx->pc) {
        case 0x182b28u: goto label_182b28;
        case 0x182b50u: goto label_182b50;
        case 0x182bacu: goto label_182bac;
        case 0x182bb8u: goto label_182bb8;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c3cu: goto label_182c3c;
        case 0x182c58u: goto label_182c58;
        case 0x182c78u: goto label_182c78;
        case 0x182d1cu: goto label_182d1c;
        case 0x182d38u: goto label_182d38;
        case 0x182da4u: goto label_182da4;
        case 0x182dc4u: goto label_182dc4;
        case 0x182ee0u: goto label_182ee0;
        case 0x182ef0u: goto label_182ef0;
        case 0x182efcu: goto label_182efc;
        case 0x182f30u: goto label_182f30;
        case 0x182f84u: goto label_182f84;
        case 0x182f90u: goto label_182f90;
        default: break;
    }

    ctx->pc = 0x182ae0u;

    // 0x182ae0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x182ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x182ae4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x182ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x182ae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182aec: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x182aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x182af0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x182af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x182af4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x182af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x182af8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182afc: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x182afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x182b00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x182b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b04: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x182b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x182b08: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x182b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x182b0c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x182b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x182b10: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x182b10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x182b14: 0x263e0b10  addiu       $fp, $s1, 0xB10
    ctx->pc = 0x182b14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
    // 0x182b18: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x182b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x182b1c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182b20: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x182B20u;
    SET_GPR_U32(ctx, 31, 0x182B28u);
    ctx->pc = 0x182B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B20u;
    // 0x182b24: 0xe7b50138  swc1        $f21, 0x138($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x182B20u, 0x182B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B28u;
label_182b28:
    // 0x182b28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182b2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x182b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x182b30: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x182b34: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x182b38: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x182b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x182b3c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x182b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182b40: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x182b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x182b44: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x182b44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182b48: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x182b48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x182b4c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_182b50:
    // 0x182b50: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x182b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x182b54: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x182b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182b58: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x182b5c: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x182b60: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x182b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x182b64: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x182b64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182b68: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x182b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x182b6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182B6Cu;
    {
        const bool branch_taken_0x182b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B6Cu;
        // 0x182b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b6c) {
            ctx->pc = 0x182B7Cu;
            goto label_182b7c;
        }
    }
    ctx->pc = 0x182B74u;
    // 0x182b74: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x182b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x182b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182b7c:
    // 0x182b7c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x182b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x182b80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182B80u;
    {
        const bool branch_taken_0x182b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B80u;
        // 0x182b84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b80) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B88u;
    // 0x182b88: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x182b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x182b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182B90u;
    {
        const bool branch_taken_0x182b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b90) {
            ctx->pc = 0x182B9Cu;
            goto label_182b9c;
        }
    }
    ctx->pc = 0x182B98u;
label_182b98:
    // 0x182b98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x182b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182b9c:
    // 0x182b9c: 0x26260b10  addiu       $a2, $s1, 0xB10
    ctx->pc = 0x182b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
    // 0x182ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ba4: 0xc05404e  jal         func_150138
    ctx->pc = 0x182BA4u;
    SET_GPR_U32(ctx, 31, 0x182BACu);
    ctx->pc = 0x182BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BA4u;
    // 0x182ba8: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x182BA4u, 0x182BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BACu;
label_182bac:
    // 0x182bac: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x182bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x182bb0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x182BB0u;
    SET_GPR_U32(ctx, 31, 0x182BB8u);
    ctx->pc = 0x182BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BB0u;
    // 0x182bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x182BB0u, 0x182BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BB8u;
label_182bb8:
    // 0x182bb8: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x182bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182bbc: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x182bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182bc0: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x182bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182bc4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x182bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x182bc8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x182bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x182bcc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x182bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x182bd0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x182bd4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x182bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x182bd8: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x182BD8u;
    {
        const bool branch_taken_0x182bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x182BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BD8u;
        // 0x182bdc: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bd8) {
            ctx->pc = 0x182BF8u;
            goto label_182bf8;
        }
    }
    ctx->pc = 0x182BE0u;
    // 0x182be0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x182be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182be4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x182be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x182be8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x182be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182bec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x182becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182bf0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x182bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182bf4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x182bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_182bf8:
    // 0x182bf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x182bfc: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x182bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x182c00: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x182C00u;
    {
        const bool branch_taken_0x182c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C00u;
        // 0x182c04: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c00) {
            ctx->pc = 0x182B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182b50;
        }
    }
    ctx->pc = 0x182C08u;
    // 0x182c08: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x182c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x182c0c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x182c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x182c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x182c14: 0xc0ab564  jal         func_2AD590
    ctx->pc = 0x182C14u;
    SET_GPR_U32(ctx, 31, 0x182C1Cu);
    ctx->pc = 0x182C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C14u;
    // 0x182c18: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD590u, 0x182C14u, 0x182C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C1Cu;
label_182c1c:
    // 0x182c1c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x182c20: 0x9062db30  lbu         $v0, -0x24D0($v1)
    ctx->pc = 0x182c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3BDB30u));
    // 0x182c24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182C24u;
    {
        const bool branch_taken_0x182c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C24u;
        // 0x182c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c24) {
            ctx->pc = 0x182C3Cu;
            goto label_182c3c;
        }
    }
    ctx->pc = 0x182C2Cu;
    // 0x182c2c: 0xa060db30  sb          $zero, -0x24D0($v1)
    ctx->pc = 0x182c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957872), (uint8_t)GPR_U32(ctx, 0));
    // 0x182c30: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x182c34: 0xc060bfe  jal         func_182FF8
    ctx->pc = 0x182C34u;
    SET_GPR_U32(ctx, 31, 0x182C3Cu);
    ctx->pc = 0x182C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C34u;
    // 0x182c38: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF8u, 0x182C34u, 0x182C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C3Cu;
label_182c3c:
    // 0x182c3c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x182c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x182c40: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182c44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x182c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c48: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c4c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x182c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c50: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x182c54: 0x0  nop
    ctx->pc = 0x182c54u;
    // NOP
label_182c58:
    // 0x182c58: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x182c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182c5c: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x182c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x182c60: 0xafa60074  sw          $a2, 0x74($sp)
    ctx->pc = 0x182c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    // 0x182c64: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x182c68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x182c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c70: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x182c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x182c74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_182c78:
    // 0x182c78: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x182c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182c7c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x182c80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c84: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x182C84u;
    {
        const bool branch_taken_0x182c84 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x182C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C84u;
        // 0x182c88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c84) {
            ctx->pc = 0x182C90u;
            goto label_182c90;
        }
    }
    ctx->pc = 0x182C8Cu;
    // 0x182c8c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x182c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_182c90:
    // 0x182c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x182c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182c94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182C94u;
    {
        const bool branch_taken_0x182c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C94u;
        // 0x182c98: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c94) {
            ctx->pc = 0x182CACu;
            goto label_182cac;
        }
    }
    ctx->pc = 0x182C9Cu;
    // 0x182c9c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x182ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182CA4u;
    {
        const bool branch_taken_0x182ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CA4u;
        // 0x182ca8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ca4) {
            ctx->pc = 0x182CB0u;
            goto label_182cb0;
        }
    }
    ctx->pc = 0x182CACu;
label_182cac:
    // 0x182cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x182cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182cb0:
    // 0x182cb0: 0x8e220b10  lw          $v0, 0xB10($s1)
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2832)));
    // 0x182cb4: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x182cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x182cb8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182cbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182cc0: 0x2423018  mult        $a2, $s2, $v0
    ctx->pc = 0x182cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x182cc4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x182cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x182cc8: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x182cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x182ccc: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x182cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x182cd0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x182cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182cd4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x182cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x182cd8: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x182cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x182cdc: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x182cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x182ce0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x182ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x182ce4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x182ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x182ce8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x182ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x182cec: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x182cecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182cf0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x182cf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182cf4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x182cf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x182cf8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x182cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182cfc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x182cfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x182d00: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x182d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182d04: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x182d08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x182d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182d10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x182d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x182d14: 0xc056864  jal         func_15A190
    ctx->pc = 0x182D14u;
    SET_GPR_U32(ctx, 31, 0x182D1Cu);
    ctx->pc = 0x182D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D14u;
    // 0x182d18: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x182D14u, 0x182D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D1Cu;
label_182d1c:
    // 0x182d1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x182d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x182d20: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x182d20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x182d24: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x182d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x182d28: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x182d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x182d2c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x182d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x182d30: 0xc04078a  jal         func_101E28
    ctx->pc = 0x182D30u;
    SET_GPR_U32(ctx, 31, 0x182D38u);
    ctx->pc = 0x182D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D30u;
    // 0x182d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x182D30u, 0x182D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D38u;
label_182d38:
    // 0x182d38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x182d38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x182d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182d40: 0x0  nop
    ctx->pc = 0x182d40u;
    // NOP
    // 0x182d44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d48: 0x0  nop
    ctx->pc = 0x182d48u;
    // NOP
    // 0x182d4c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x182D4Cu;
    {
        const bool branch_taken_0x182d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D4Cu;
        // 0x182d50: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d4c) {
            ctx->pc = 0x182D88u;
            goto label_182d88;
        }
    }
    ctx->pc = 0x182D54u;
    // 0x182d54: 0x0  nop
    ctx->pc = 0x182d54u;
    // NOP
    // 0x182d58: 0x0  nop
    ctx->pc = 0x182d58u;
    // NOP
    // 0x182d5c: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x182d5cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x182d60: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x182d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x182d64: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x182d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182d68: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x182d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d6c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x182d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x182d70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x182d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x182d74: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x182d74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x182d78: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x182d78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x182d7c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x182d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x182d80: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x182d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182d84: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x182d84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_182d88:
    // 0x182d88: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x182d8c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x182d8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182d90: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x182d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182d94: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x182d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d9c: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x182D9Cu;
    SET_GPR_U32(ctx, 31, 0x182DA4u);
    ctx->pc = 0x182DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D9Cu;
    // 0x182da0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x182D9Cu, 0x182DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DA4u;
label_182da4:
    // 0x182da4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x182da8: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x182dac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x182dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x182db0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x182db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x182db4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x182db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182db8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x182db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dbc: 0xc056810  jal         func_15A040
    ctx->pc = 0x182DBCu;
    SET_GPR_U32(ctx, 31, 0x182DC4u);
    ctx->pc = 0x182DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182DBCu;
    // 0x182dc0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A040u, 0x182DBCu, 0x182DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DC4u;
label_182dc4:
    // 0x182dc4: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x182dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x182dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dcc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x182dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182dd0: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x182dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x182dd4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x182dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182dd8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x182dd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x182ddc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x182ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182de0: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x182de0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x182de4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x182de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x182de8: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x182de8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x182dec: 0xc7a90030  lwc1        $f9, 0x30($sp)
    ctx->pc = 0x182decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x182df0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x182df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x182df4: 0xc7aa0034  lwc1        $f10, 0x34($sp)
    ctx->pc = 0x182df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x182df8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x182df8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x182dfc: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x182dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182e00: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x182e00u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x182e04: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x182e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x182e08: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x182e08u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x182e0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x182e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x182e10: 0x0  nop
    ctx->pc = 0x182e10u;
    // NOP
    // 0x182e14: 0x0  nop
    ctx->pc = 0x182e14u;
    // NOP
    // 0x182e18: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x182e18u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x182e1c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x182e1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x182e20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x182e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x182e24: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x182e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x182e28: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x182e28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x182e2c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x182e2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182e30: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x182e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x182e34: 0x460469c2  mul.s       $f7, $f13, $f4
    ctx->pc = 0x182e34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x182e38: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x182e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x182e3c: 0x46044bc2  mul.s       $f15, $f9, $f4
    ctx->pc = 0x182e3cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x182e40: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x182e40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182e44: 0x46045382  mul.s       $f14, $f10, $f4
    ctx->pc = 0x182e44u;
    ctx->f[14] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x182e48: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x182e48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x182e4c: 0xc6ab0008  lwc1        $f11, 0x8($s5)
    ctx->pc = 0x182e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x182e50: 0xc6a60004  lwc1        $f6, 0x4($s5)
    ctx->pc = 0x182e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x182e54: 0x460b4882  mul.s       $f2, $f9, $f11
    ctx->pc = 0x182e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x182e58: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x182e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e5c: 0x46066a02  mul.s       $f8, $f13, $f6
    ctx->pc = 0x182e5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x182e60: 0x460b50c2  mul.s       $f3, $f10, $f11
    ctx->pc = 0x182e60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x182e64: 0x46006142  mul.s       $f5, $f12, $f0
    ctx->pc = 0x182e64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x182e68: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x182e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x182e6c: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x182e6cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x182e70: 0x46065082  mul.s       $f2, $f10, $f6
    ctx->pc = 0x182e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x182e74: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x182e74u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x182e78: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x182e78u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x182e7c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x182e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x182e80: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x182e80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x182e84: 0x460e0841  sub.s       $f1, $f1, $f14
    ctx->pc = 0x182e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x182e88: 0x460f2941  sub.s       $f5, $f5, $f15
    ctx->pc = 0x182e88u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[15]);
    // 0x182e8c: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x182e8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x182e90: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x182e90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x182e94: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x182e94u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x182e98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182e9c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x182e9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x182ea0: 0x460b6b42  mul.s       $f13, $f13, $f11
    ctx->pc = 0x182ea0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x182ea4: 0x460b6302  mul.s       $f12, $f12, $f11
    ctx->pc = 0x182ea4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
    // 0x182ea8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x182ea8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x182eac: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x182eacu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x182eb0: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x182eb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x182eb4: 0x460d2941  sub.s       $f5, $f5, $f13
    ctx->pc = 0x182eb4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x182eb8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x182eb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x182ebc: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x182ebcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x182ec0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x182ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182ec4: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x182ec4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x182ec8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x182ec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x182ecc: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x182eccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x182ed0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x182ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x182ed4: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x182ed4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x182ed8: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x182ED8u;
    SET_GPR_U32(ctx, 31, 0x182EE0u);
    ctx->pc = 0x182EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182ED8u;
    // 0x182edc: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x182ED8u, 0x182EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EE0u;
label_182ee0:
    // 0x182ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee8: 0xc051eec  jal         func_147BB0
    ctx->pc = 0x182EE8u;
    SET_GPR_U32(ctx, 31, 0x182EF0u);
    ctx->pc = 0x182EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EE8u;
    // 0x182eec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BB0u, 0x182EE8u, 0x182EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EF0u;
label_182ef0:
    // 0x182ef0: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x182ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x182ef4: 0xc054074  jal         func_1501D0
    ctx->pc = 0x182EF4u;
    SET_GPR_U32(ctx, 31, 0x182EFCu);
    ctx->pc = 0x182EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EF4u;
    // 0x182ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x182EF4u, 0x182EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EFCu;
label_182efc:
    // 0x182efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f00: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x182f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x182f04: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x182F04u;
    {
        const bool branch_taken_0x182f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F04u;
        // 0x182f08: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f04) {
            ctx->pc = 0x182C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182c78;
        }
    }
    ctx->pc = 0x182F0Cu;
    // 0x182f0c: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x182f10: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x182f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x182f14: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x182F14u;
    {
        const bool branch_taken_0x182f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F14u;
        // 0x182f18: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f14) {
            ctx->pc = 0x182C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182c58;
        }
    }
    ctx->pc = 0x182F1Cu;
    // 0x182f1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x182f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x182f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f24: 0x24532a10  addiu       $s3, $v0, 0x2A10
    ctx->pc = 0x182f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x182f28: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x182f2c: 0x0  nop
    ctx->pc = 0x182f2cu;
    // NOP
label_182f30:
    // 0x182f30: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x182f30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x182f34: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x182f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182f38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x182f3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x182f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x182f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182f48: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182f4c: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x182f4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x182f50: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x182f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x182f54: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182F54u;
    {
        const bool branch_taken_0x182f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F54u;
        // 0x182f58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f54) {
            ctx->pc = 0x182F60u;
            goto label_182f60;
        }
    }
    ctx->pc = 0x182F5Cu;
    // 0x182f5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x182f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182f60:
    // 0x182f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x182f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182f64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182F64u;
    {
        const bool branch_taken_0x182f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f64) {
            ctx->pc = 0x182F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182F64u;
            // 0x182f68: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182F7Cu;
            goto label_182f7c;
        }
    }
    ctx->pc = 0x182F6Cu;
    // 0x182f6c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x182f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x182f70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x182f74: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182f78: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_182f7c:
    // 0x182f7c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x182F7Cu;
    SET_GPR_U32(ctx, 31, 0x182F84u);
    ctx->pc = 0x182F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F7Cu;
    // 0x182f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x182F7Cu, 0x182F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F84u;
label_182f84:
    // 0x182f84: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x182f88: 0xc054074  jal         func_1501D0
    ctx->pc = 0x182F88u;
    SET_GPR_U32(ctx, 31, 0x182F90u);
    ctx->pc = 0x182F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F88u;
    // 0x182f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x182F88u, 0x182F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F90u;
label_182f90:
    // 0x182f90: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x182f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x182f94: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x182F94u;
    {
        const bool branch_taken_0x182f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182f94) {
            ctx->pc = 0x182F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182F94u;
            // 0x182f98: 0x2531021  addu        $v0, $s2, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182f30;
        }
    }
    ctx->pc = 0x182F9Cu;
    // 0x182f9c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x182f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x182fa0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x182fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x182fa4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x182fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x182fa8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x182fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x182fac: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x182facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x182fb0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x182fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x182fb4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x182fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x182fb8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x182fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182fbc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x182fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182fc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x182fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x182fc4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x182fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182fc8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x182fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x182FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FCCu;
        // 0x182fd0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FD4u;
    // 0x182fd4: 0x0  nop
    ctx->pc = 0x182fd4u;
    // NOP
    ctx->pc = 0x182fd8u;
}
