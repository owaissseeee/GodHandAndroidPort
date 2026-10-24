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

// Function: func_00247B18
// Address: 0x247b18 - 0x247e60
void func_00247B18_0x247b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247B18_0x247b18");
#endif

    switch (ctx->pc) {
        case 0x247b38u: goto label_247b38;
        case 0x247b98u: goto label_247b98;
        case 0x247bc4u: goto label_247bc4;
        case 0x247bd8u: goto label_247bd8;
        case 0x247bf4u: goto label_247bf4;
        case 0x247c40u: goto label_247c40;
        case 0x247c94u: goto label_247c94;
        case 0x247cacu: goto label_247cac;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247ce0u: goto label_247ce0;
        case 0x247d78u: goto label_247d78;
        case 0x247da8u: goto label_247da8;
        case 0x247db4u: goto label_247db4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247df4u: goto label_247df4;
        case 0x247e08u: goto label_247e08;
        case 0x247e34u: goto label_247e34;
        case 0x247e40u: goto label_247e40;
        default: break;
    }

    ctx->pc = 0x247b18u;

    // 0x247b18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x247b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x247b1c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x247b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x247b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b24: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x247b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x247b28: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x247b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x247b2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x247b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x247b30: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x247B30u;
    SET_GPR_U32(ctx, 31, 0x247B38u);
    ctx->pc = 0x247B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B30u;
    // 0x247b34: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x247B30u, 0x247B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B38u;
label_247b38:
    // 0x247b38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b3c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x247b40: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x247b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x247b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b48: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x247b48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x247b4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x247b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247b50: 0x10a40033  beq         $a1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x247B50u;
    {
        const bool branch_taken_0x247b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x247B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B50u;
        // 0x247b54: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b50) {
            ctx->pc = 0x247C20u;
            goto label_247c20;
        }
    }
    ctx->pc = 0x247B58u;
    // 0x247b58: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x247b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x247b5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247B5Cu;
    {
        const bool branch_taken_0x247b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b5c) {
            ctx->pc = 0x247B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247B5Cu;
            // 0x247b60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247B74u;
            goto label_247b74;
        }
    }
    ctx->pc = 0x247B64u;
    // 0x247b64: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B64u;
        // 0x247b68: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B8Cu;
            goto label_247b8c;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x247B6Cu;
    {
        const bool branch_taken_0x247b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B6Cu;
        // 0x247b70: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b6c) {
            ctx->pc = 0x247E48u;
            goto label_247e48;
        }
    }
    ctx->pc = 0x247B74u;
label_247b74:
    // 0x247b74: 0x10a20091  beq         $a1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x247B74u;
    {
        const bool branch_taken_0x247b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x247B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B74u;
        // 0x247b78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b74) {
            ctx->pc = 0x247DBCu;
            goto label_247dbc;
        }
    }
    ctx->pc = 0x247B7Cu;
    // 0x247b7c: 0x10a200a0  beq         $a1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x247B7Cu;
    {
        const bool branch_taken_0x247b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x247B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B7Cu;
        // 0x247b80: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b7c) {
            ctx->pc = 0x247E00u;
            goto label_247e00;
        }
    }
    ctx->pc = 0x247B84u;
    // 0x247b84: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x247B84u;
    {
        const bool branch_taken_0x247b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B84u;
        // 0x247b88: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b84) {
            ctx->pc = 0x247E48u;
            goto label_247e48;
        }
    }
    ctx->pc = 0x247B8Cu;
label_247b8c:
    // 0x247b8c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x247b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b90: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247B90u;
    SET_GPR_U32(ctx, 31, 0x247B98u);
    ctx->pc = 0x247B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B90u;
    // 0x247b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247B90u, 0x247B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B98u;
label_247b98:
    // 0x247b98: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x247b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x247b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ba0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247ba4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247ba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247ba8: 0x8c6538b0  lw          $a1, 0x38B0($v1)
    ctx->pc = 0x247ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14512)));
    // 0x247bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bb0: 0x8c6638b4  lw          $a2, 0x38B4($v1)
    ctx->pc = 0x247bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14516)));
    // 0x247bb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bb8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247bbc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247BBCu;
    SET_GPR_U32(ctx, 31, 0x247BC4u);
    ctx->pc = 0x247BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BBCu;
    // 0x247bc0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247BBCu, 0x247BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BC4u;
label_247bc4:
    // 0x247bc4: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x247bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x247bc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247BC8u;
    {
        const bool branch_taken_0x247bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247bc8) {
            ctx->pc = 0x247BD8u;
            goto label_247bd8;
        }
    }
    ctx->pc = 0x247BD0u;
    // 0x247bd0: 0xc09f9fc  jal         func_27E7F0
    ctx->pc = 0x247BD0u;
    SET_GPR_U32(ctx, 31, 0x247BD8u);
    ctx->pc = 0x247BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BD0u;
    // 0x247bd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7F0u, 0x247BD0u, 0x247BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BD8u;
label_247bd8:
    // 0x247bd8: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x247bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247be0: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x247be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247be8: 0x24a5cad0  addiu       $a1, $a1, -0x3530
    ctx->pc = 0x247be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
    // 0x247bec: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x247BECu;
    SET_GPR_U32(ctx, 31, 0x247BF4u);
    ctx->pc = 0x247BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BECu;
    // 0x247bf0: 0xe6201768  swc1        $f0, 0x1768($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5992), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x247BECu, 0x247BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BF4u;
label_247bf4:
    // 0x247bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bf8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x247BF8u;
    {
        const bool branch_taken_0x247bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247bf8) {
            ctx->pc = 0x247BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247BF8u;
            // 0x247bfc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247C18u;
            goto label_247c18;
        }
    }
    ctx->pc = 0x247C00u;
    // 0x247c00: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x247c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x247c04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x247c08: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x247c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x247c0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x247c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247c10: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x247c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x247c14: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x247c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_247c18:
    // 0x247c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247c1c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x247c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_247c20:
    // 0x247c20: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x247c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x247c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247c28: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x247c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x247c2c: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x247c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x247c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c38: 0xc04e38e  jal         func_138E38
    ctx->pc = 0x247C38u;
    SET_GPR_U32(ctx, 31, 0x247C40u);
    ctx->pc = 0x247C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C38u;
    // 0x247c3c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E38u, 0x247C38u, 0x247C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C40u;
label_247c40:
    // 0x247c40: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x247c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x247c44: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x247c48: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x247c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x247c4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x247c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247c50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247C50u;
    {
        const bool branch_taken_0x247c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C50u;
        // 0x247c54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c50) {
            ctx->pc = 0x247C64u;
            goto label_247c64;
        }
    }
    ctx->pc = 0x247C58u;
    // 0x247c58: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x247c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x247c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247C5Cu;
    {
        const bool branch_taken_0x247c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C5Cu;
        // 0x247c60: 0x8c460090  lw          $a2, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c5c) {
            ctx->pc = 0x247C68u;
            goto label_247c68;
        }
    }
    ctx->pc = 0x247C64u;
label_247c64:
    // 0x247c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c68:
    // 0x247c68: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x247c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x247c6c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x247c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x247c70: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x247c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247c74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247C74u;
    {
        const bool branch_taken_0x247c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C74u;
        // 0x247c78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c74) {
            ctx->pc = 0x247C88u;
            goto label_247c88;
        }
    }
    ctx->pc = 0x247C7Cu;
    // 0x247c7c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x247c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x247c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247C80u;
    {
        const bool branch_taken_0x247c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C80u;
        // 0x247c84: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c80) {
            ctx->pc = 0x247C8Cu;
            goto label_247c8c;
        }
    }
    ctx->pc = 0x247C88u;
label_247c88:
    // 0x247c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c8c:
    // 0x247c8c: 0xc04e6da  jal         func_139B68
    ctx->pc = 0x247C8Cu;
    SET_GPR_U32(ctx, 31, 0x247C94u);
    ctx->pc = 0x247C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C8Cu;
    // 0x247c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B68u, 0x247C8Cu, 0x247C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C94u;
label_247c94:
    // 0x247c94: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x247c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x247c98: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x247c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x247c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x247ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247ca4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247CA4u;
    SET_GPR_U32(ctx, 31, 0x247CACu);
    ctx->pc = 0x247CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CA4u;
    // 0x247ca8: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247CA4u, 0x247CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CACu;
label_247cac:
    // 0x247cac: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x247CACu;
    {
        const bool branch_taken_0x247cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CACu;
        // 0x247cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cac) {
            ctx->pc = 0x247D94u;
            goto label_247d94;
        }
    }
    ctx->pc = 0x247CB4u;
    // 0x247cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247cb8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x247CB8u;
    SET_GPR_U32(ctx, 31, 0x247CC0u);
    ctx->pc = 0x247CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CB8u;
    // 0x247cbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x247CB8u, 0x247CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x247cc4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247CC4u;
    {
        const bool branch_taken_0x247cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247cc4) {
            ctx->pc = 0x247CE0u;
            goto label_247ce0;
        }
    }
    ctx->pc = 0x247CCCu;
    // 0x247ccc: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x247CCCu;
    SET_GPR_U32(ctx, 31, 0x247CD4u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x247CCCu, 0x247CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CD4u;
label_247cd4:
    // 0x247cd4: 0xae200744  sw          $zero, 0x744($s1)
    ctx->pc = 0x247cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1860), GPR_U32(ctx, 0));
    // 0x247cd8: 0xc09d76a  jal         func_275DA8
    ctx->pc = 0x247CD8u;
    SET_GPR_U32(ctx, 31, 0x247CE0u);
    ctx->pc = 0x247CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CD8u;
    // 0x247cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275DA8u, 0x247CD8u, 0x247CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CE0u;
label_247ce0:
    // 0x247ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ce8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x247ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247cec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x247cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x247cf0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x247cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x247cf4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x247cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x247cf8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x247cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x247cfc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x247cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247d00: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x247d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247d04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x247d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x247d08: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x247d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x247d0c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x247d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x247d10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x247d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247d14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x247d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x247d18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x247d1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x247d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x247d20: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x247d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x247d24: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x247d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x247d28: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x247d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x247d2c: 0xa0e3004c  sb          $v1, 0x4C($a3)
    ctx->pc = 0x247d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x247d30: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x247d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x247d34: 0xa3a0005e  sb          $zero, 0x5E($sp)
    ctx->pc = 0x247d34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x247d38: 0xa0e4004f  sb          $a0, 0x4F($a3)
    ctx->pc = 0x247d38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x247d3c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x247d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x247d40: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x247d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247d44: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x247d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d48: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x247d48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x247d4c: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x247d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x247d50: 0xa7a00080  sh          $zero, 0x80($sp)
    ctx->pc = 0x247d50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x247d54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x247d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x247d58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x247d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x247d5c: 0xa7a00082  sh          $zero, 0x82($sp)
    ctx->pc = 0x247d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x247d60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d64: 0xa3a00084  sb          $zero, 0x84($sp)
    ctx->pc = 0x247d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x247d68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x247d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247d6c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x247d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x247d70: 0xc0c194a  jal         func_306528
    ctx->pc = 0x247D70u;
    SET_GPR_U32(ctx, 31, 0x247D78u);
    ctx->pc = 0x247D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D70u;
    // 0x247d74: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x247D70u, 0x247D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D78u;
label_247d78:
    // 0x247d78: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x247d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x247d7c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x247d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x247d80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x247d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247d84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x247d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247d88: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x247d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x247d8c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x247d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    // 0x247d90: 0xa224186c  sb          $a0, 0x186C($s1)
    ctx->pc = 0x247d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6252), (uint8_t)GPR_U32(ctx, 4));
label_247d94:
    // 0x247d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247d98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247da0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247DA0u;
    SET_GPR_U32(ctx, 31, 0x247DA8u);
    ctx->pc = 0x247DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DA0u;
    // 0x247da4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247DA0u, 0x247DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DA8u;
label_247da8:
    // 0x247da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247DACu;
    SET_GPR_U32(ctx, 31, 0x247DB4u);
    ctx->pc = 0x247DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DACu;
    // 0x247db0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247DACu, 0x247DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DB4u;
label_247db4:
    // 0x247db4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x247DB4u;
    {
        const bool branch_taken_0x247db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DB4u;
        // 0x247db8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247db4) {
            ctx->pc = 0x247E44u;
            goto label_247e44;
        }
    }
    ctx->pc = 0x247DBCu;
label_247dbc:
    // 0x247dbc: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x247dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x247dc0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247DC0u;
    SET_GPR_U32(ctx, 31, 0x247DC8u);
    ctx->pc = 0x247DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DC0u;
    // 0x247dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247DC0u, 0x247DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DC8u;
label_247dc8:
    // 0x247dc8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x247dcc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247dd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dd8: 0x8c653778  lw          $a1, 0x3778($v1)
    ctx->pc = 0x247dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14200)));
    // 0x247ddc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x247ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247de0: 0x8c66377c  lw          $a2, 0x377C($v1)
    ctx->pc = 0x247de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14204)));
    // 0x247de4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247de8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247dec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247DECu;
    SET_GPR_U32(ctx, 31, 0x247DF4u);
    ctx->pc = 0x247DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DECu;
    // 0x247df0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247DECu, 0x247DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DF4u;
label_247df4:
    // 0x247df4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x247df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x247df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247dfc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x247dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_247e00:
    // 0x247e00: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247E00u;
    SET_GPR_U32(ctx, 31, 0x247E08u);
    ctx->pc = 0x247E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E00u;
    // 0x247e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247E00u, 0x247E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E08u;
label_247e08:
    // 0x247e08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247E08u;
    {
        const bool branch_taken_0x247e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E08u;
        // 0x247e0c: 0x2402009c  addiu       $v0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e08) {
            ctx->pc = 0x247E20u;
            goto label_247e20;
        }
    }
    ctx->pc = 0x247E10u;
    // 0x247e10: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x247e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x247e14: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x247e14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x247e18: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x247e18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x247e1c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x247e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_247e20:
    // 0x247e20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247e24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e2c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247E2Cu;
    SET_GPR_U32(ctx, 31, 0x247E34u);
    ctx->pc = 0x247E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E2Cu;
    // 0x247e30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247E2Cu, 0x247E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E34u;
label_247e34:
    // 0x247e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e38: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247E38u;
    SET_GPR_U32(ctx, 31, 0x247E40u);
    ctx->pc = 0x247E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E38u;
    // 0x247e3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247E38u, 0x247E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E40u;
label_247e40:
    // 0x247e40: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x247e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_247e44:
    // 0x247e44: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x247e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_247e48:
    // 0x247e48: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x247e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x247e4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x247e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x247e50: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x247e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247e54: 0x3e00008  jr          $ra
    ctx->pc = 0x247E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E54u;
        // 0x247e58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E5Cu;
    // 0x247e5c: 0x0  nop
    ctx->pc = 0x247e5cu;
    // NOP
    ctx->pc = 0x247e60u;
}
